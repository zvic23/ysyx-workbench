import "DPI-C" function void ebreak (int r);
//import "DPI-C" function void update_csr(longint mtvec_npc, longint mcause_npc, longint mepc_npc, longint mstatus_npc);
import "DPI-C" function void ftrace_check(longint pc, longint dnpc,int dest_register,int src_register,longint imm);
import "DPI-C" function void EXU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);
import "DPI-C" function void branch_predict(int r);


module ysyx_22050612_EXU(
input clk,
input rst,
input       valid_ID_EX,
output      ready_ID_EX,
input [63:0]pc_ID_EX,
input [31:0]inst_ID_EX,
/*
input [ 5:0]shamt,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
*/
input [23:0]opcode_in,
input [14:0]opcode_type_ID_EX,
input [ 2:0]opcode_funct3_ID_EX,
input [ 4:0]rd_ID_EX,
input [ 4:0]rs1_ID_EX,
input [ 4:0]rs2_ID_EX,
input [63:0]src_A,
input [63:0]src_B,
input [63:0]imm_in,





output reg [63:0]dnpc,
output pc_update,

output       valid_EX_MEM  ,
input        ready_EX_MEM  ,
output [63:0]pc_EX_MEM  ,
output [31:0]inst_EX_MEM,
output [23:0]opcode_EX_MEM,
output [14:0]opcode_type_EX_MEM,
output [ 4:0]rd_EX_MEM,
output [63:0]ALUoutput_EX_MEM,
output [63:0]src_B_EX_MEM,


output [63:0]wdata_mtvec,
output [63:0]wdata_mepc,
output [63:0]wdata_mcause,
output [63:0]wdata_mstatus,
output wen_mtvec,
output wen_mepc,
output wen_mcause,
output wen_mstatus,

input [63:0] gpr[31:0],    //only for ebreak control



output reg EX_reg_valid,
output reg [31:0]EX_reg_inst,

//input MEM_reg_valid,
//input [31:0]MEM_reg_inst,
input mem_writing_gpr,
input [4:0]mem_rd,
input [63:0]MEM_reg_aluoutput,

//input WB_reg_valid,
//input [31:0]WB_reg_inst,
input wbu_writing_gpr,
input [4:0]wbu_rd,
input [63:0]WB_reg_wdata,


input branch_flush

);




//*************************  pipeline ********************************
//reg       EX_reg_valid         ;
reg [63:0]EX_reg_pc            ;
//reg [31:0]EX_reg_inst          ;
reg [23:0]EX_reg_opcode        ;
reg [14:0]EX_reg_opcode_type     ;
reg [ 2:0]EX_reg_opcode_funct3     ;
reg [ 4:0]EX_reg_rd;
reg [ 4:0]EX_reg_rs1;
reg [ 4:0]EX_reg_rs2;
reg [63:0]EX_reg_src_a;
reg [63:0]EX_reg_src_b;
reg [63:0]EX_reg_imm;
//reg [ 7:0]EX_reg_alu_mode      ;
//reg [ 4:0]EX_reg_rd            ;
//reg [63:0]EX_reg_src2          ;

always @(posedge clk) begin
	if(rst || branch_flush) begin
		EX_reg_valid          <=  1'b0;
		EX_reg_pc             <= 64'b0;
		EX_reg_inst           <= 32'b0;
		EX_reg_opcode         <= 24'b0;
		EX_reg_opcode_type         <= 15'b0;
		EX_reg_opcode_funct3         <= 3'b0;
		EX_reg_src_a          <= 64'b0;
		EX_reg_src_b          <= 64'b0;
		EX_reg_imm            <= 64'b0;
	//	EX_reg_alu_mode       <=  8'b0;
		EX_reg_rd             <=  5'b0;
		EX_reg_rs1            <=  5'b0;
		EX_reg_rs2            <=  5'b0;
	//	EX_reg_src2           <= 64'b0;
	end
	else if(!ready_ID_EX)begin
		EX_reg_valid          <= EX_reg_valid ;
		EX_reg_pc             <= EX_reg_pc    ;
		EX_reg_inst           <= EX_reg_inst  ;
		EX_reg_opcode         <= EX_reg_opcode;
		EX_reg_opcode_type         <= EX_reg_opcode_type;
		EX_reg_opcode_funct3         <= EX_reg_opcode_funct3;
		EX_reg_src_a          <= EX_reg_src_a ;
		EX_reg_src_b          <= EX_reg_src_b ;
		EX_reg_imm            <= EX_reg_imm   ;
	//	EX_reg_alu_mode       <= ALU_mode     ;
		EX_reg_rd             <= EX_reg_rd           ;
		EX_reg_rs1            <= EX_reg_rs1;
		EX_reg_rs2            <= EX_reg_rs2;
	//	EX_reg_src2           <= src2_in      ;
	end
	else begin
		EX_reg_valid          <= valid_ID_EX;
		EX_reg_pc             <= pc_ID_EX;
		EX_reg_inst           <= inst_ID_EX;
		EX_reg_opcode         <= opcode_in;
		EX_reg_opcode_type         <= opcode_type_ID_EX;
		EX_reg_opcode_funct3         <= opcode_funct3_ID_EX;
		EX_reg_src_a          <= src_A;
		EX_reg_src_b          <= src_B;
		EX_reg_imm            <= imm_in;
	//	EX_reg_alu_mode       <= ALU_mode      ;
		EX_reg_rd             <= rd_ID_EX           ;
		EX_reg_rs1            <= rs1_ID_EX;
		EX_reg_rs2            <= rs2_ID_EX;
	//	EX_reg_src2           <= src2_in       ;
	end
end

wire [63:0]pc;
wire [31:0]inst;
wire [23:0]opcode;
wire [14:0]opcode_type;
wire [ 2:0]opcode_funct3;
wire [63:0]src1;
wire [63:0]src2;
wire [63:0]imm;
assign pc   = EX_reg_valid ? EX_reg_pc   : 64'b0;
assign inst = EX_reg_valid ? EX_reg_inst : 32'b0;
assign opcode = EX_reg_valid ? EX_reg_opcode : 24'b0;
assign opcode_type = EX_reg_valid ? EX_reg_opcode_type : 15'b0;
assign opcode_funct3 = EX_reg_valid ?  EX_reg_opcode_funct3: 3'b0;
assign imm  = EX_reg_valid ? EX_reg_imm  : 64'b0;



assign src1 = EX_reg_valid ? ((mem_writing_gpr&&rs1_EX_MEM_match) ? MEM_reg_aluoutput : ((wbu_writing_gpr&&rs1_EX_WB_match) ? WB_reg_wdata : EX_reg_src_a )) : 64'b0;
assign src2 = EX_reg_valid ? ((mem_writing_gpr&&exu_using_rs2&&rs2_EX_MEM_match) ? MEM_reg_aluoutput : ((wbu_writing_gpr&&exu_using_rs2&&rs2_EX_WB_match) ? WB_reg_wdata : EX_reg_src_b )) : 64'b0;


wire EX_block;
assign EX_block = (mul_valid && !mul_out_valid) || (div_valid && !div_out_valid);
//assign EX_block = 1'b0;
assign ready_ID_EX = EX_block ? 1'b0 : ready_EX_MEM;


//load interlock
wire rs1_EX_MEM_match;
wire rs2_EX_MEM_match;
wire rs1_EX_WB_match;
wire rs2_EX_WB_match;
assign rs1_EX_MEM_match = ( mem_rd == EX_reg_rs1)&&(EX_reg_rs1!=5'b0);
assign rs2_EX_MEM_match = ( mem_rd == EX_reg_rs2)&&(EX_reg_rs2!=5'b0);
assign rs1_EX_WB_match  = ( wbu_rd == EX_reg_rs1)&&(EX_reg_rs1!=5'b0);
assign rs2_EX_WB_match  = ( wbu_rd == EX_reg_rs2)&&(EX_reg_rs2!=5'b0);

wire [3:0]MEM_inst_hit;
wire [3:0]WB_inst_hit;
wire exu_using_rs2;
assign exu_using_rs2 = opcode_type[4] || opcode_type[6] || opcode_type[8] || opcode_type[10];
                      


//output
assign valid_EX_MEM = (EX_block==1'b0) ? EX_reg_valid :  1'b0;
assign pc_EX_MEM    = (EX_block==1'b0) ? EX_reg_pc    : 64'b0;
assign inst_EX_MEM  = (EX_block==1'b0) ? EX_reg_inst  : 32'b0;


assign opcode_EX_MEM = EX_reg_opcode;
assign opcode_type_EX_MEM = EX_reg_opcode_type;
assign rd_EX_MEM = EX_reg_rd;
assign src_B_EX_MEM = src2;



always @(negedge clk) begin
	EXU_state_trace(EX_reg_pc, {32'b0,EX_reg_inst}, {63'b0,EX_reg_valid}, src1,src2,{{63{1'b0}},wbu_writing_gpr} );
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x %x   dnpc:%x  opcode:%d\n",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , WB_reg_wdata,  EX_inst_hit, WB_inst_hit, rs1_EX_WB_match , rs2_EX_WB_match,dnpc,opcode);
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , MEM_reg_aluoutput,  EX_inst_hit, MEM_inst_hit, rs1_EX_MEM_match );
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x",EX_reg_pc,EX_reg_inst,EX_reg_valid,EX_reg_src_a,EX_reg_src_b,EX_reg_imm);
end
//********************************************************************




always @(*) begin
//mtvec control
  	case (opcode)
    24'd49   : wen_mtvec=(EX_reg_inst[31:20]==12'h305)? 1'b1:1'b0;
    default:   wen_mtvec=1'b0;
        endcase

	case (opcode)
    24'd49   : wdata_mtvec=src1;
    default:   wdata_mtvec=64'b0;
        endcase
//mepc control
  	case (opcode)
    24'd49     : wen_mepc=(EX_reg_inst[31:20]==12'h341)? 1'b1:1'b0;
    24'd50     : wen_mepc=(EX_reg_inst[31:20]==12'h341)? 1'b1:1'b0;
    24'h200000 : wen_mepc=1'b1;
    default:   wen_mepc=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mepc=src1;
    24'd50     : wdata_mepc=result_alu0;
    24'h200000 : wdata_mepc=EX_reg_pc;
    default:   wdata_mepc=64'b0;
        endcase
//mcause control
  	case (opcode)
    24'd49     : wen_mcause=(EX_reg_inst[31:20]==12'h342)? 1'b1:1'b0;
    24'd50     : wen_mcause=(EX_reg_inst[31:20]==12'h342)? 1'b1:1'b0;
    24'h200000 : wen_mcause=1'b1;
    default:   wen_mcause=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mcause=src1;
    24'd50     : wdata_mcause=result_alu0;
    24'h200000 : wdata_mcause=64'hb;
    default:   wdata_mcause=64'b0;
        endcase
//mstatus control
  	case (opcode)
    24'd49     : wen_mstatus=(EX_reg_inst[31:20]==12'h300)? 1'b1:1'b0;
    24'd50     : wen_mstatus=(EX_reg_inst[31:20]==12'h300)? 1'b1:1'b0;
    default:   wen_mstatus=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mstatus=src1;
    24'd50     : wdata_mstatus=result_alu0;
    default:   wdata_mstatus=64'b0;
        endcase
end



//dnpc
always @(*) begin
/*
    case (opcode)
    24'd4   : dnpc=address_add_result           ;
    24'd5   : dnpc=(src1==src2&&EX_reg_inst[31]==0)?address_add_result:snpc;
    24'd6   : dnpc=(src1!=src2&&EX_reg_inst[31]==0)?address_add_result:snpc;
    24'd7   : dnpc=($signed(src1) <$signed(src2)&&EX_reg_inst[31]==0)?address_add_result:snpc;
    24'd8   : dnpc=($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==0)?address_add_result:snpc;
    24'd9   : dnpc=(src1 <src2&&EX_reg_inst[31]==0)?address_add_result:snpc         ;
    24'd10  : dnpc=(src1>=src2&&EX_reg_inst[31]==0)?address_add_result:snpc        ;        //(address_add_result[63]==0)?(imm_B+EX_reg_pc):snpc
    24'h200000: dnpc=EX_reg_src_b                             ;        
    24'h500000: dnpc=EX_reg_src_b                             ;        
    default: dnpc=snpc;
    endcase
    */
/*
    case (opcode)
    24'd4    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? 1'b1 : 1'b0;
    24'd5    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( ((src1==src2&&EX_reg_inst[31]==0)||(src1!=src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd6    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( ((src1!=src2&&EX_reg_inst[31]==0)||(src1==src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd7    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( (($signed(src1) <$signed(src2)&&EX_reg_inst[31]==0)||($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd8    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( (($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==0)||($signed(src1) <$signed(src2)&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd9    : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( ((src1 <src2&&EX_reg_inst[31]==0)||(src1>=src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd10   : pc_update= (EX_reg_valid&&ready_EX_MEM) ? ( ((src1>=src2&&EX_reg_inst[31]==0)||(src1 <src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'h200000: pc_update=(EX_reg_valid&&ready_EX_MEM) ? 1'b1 : 1'b0;   
    24'h500000: pc_update=(EX_reg_valid&&ready_EX_MEM) ? 1'b1 : 1'b0;             
    default: pc_update=1'b0;
    endcase
    */
end

wire branch_condition;
assign branch_condition = (opcode_funct3==3'h0) ? ((result_alu0==64'b0&&imm[12]==1'b0) || (result_alu0!=64'b0&&imm[12]==1'b1)) :
	                 ((opcode_funct3==3'h1) ? ((result_alu0!=64'b0&&imm[12]==1'b0) || (result_alu0==64'b0&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h4) ? ((result_alu0[63]==1'b1&&imm[12]==1'b0) || (result_alu0[63]==1'b0&&imm[12]==1'b1)) :
			 ((opcode_funct3==3'h5) ? ((result_alu0[63]==1'b0&&imm[12]==1'b0) || (result_alu0[63]==1'b1&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h6) ? ((((~src1[63] & src2[63]) | (result_alu0[63] & (src1[63]==src2[63])))&&imm[12]==1'b0) || (~((~src1[63] & src2[63]) | (result_alu0[63] & (src1[63]==src2[63])))&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h7) ? ((~((~src1[63] & src2[63]) | (result_alu0[63] & (src1[63]==src2[63])))&&imm[12]==1'b0) || (((~src1[63] & src2[63]) | (result_alu0[63] & (src1[63]==src2[63])))&&imm[12]==1'b1)) : 1'b0 )))));

assign pc_update = (EX_reg_valid&&ready_EX_MEM) ? ((EX_reg_opcode_type[3]||EX_reg_opcode_type[13]||EX_reg_opcode_type[14]) ? 1'b1 : ((EX_reg_opcode_type[4]&&branch_condition) ? 1'b1 : 1'b0)) : 1'b0;
assign dnpc      = (EX_reg_opcode_type[13]||EX_reg_opcode_type[14]) ? EX_reg_src_b : ((EX_reg_opcode_type[3]||(EX_reg_opcode_type[4]&&~imm[12])) ? address_add_result : snpc );

//dnpc
wire [63:0] snpc;
assign snpc = EX_reg_pc + 64'd4;

wire [63:0]address_add_src1;
wire [63:0]address_add_src2;
wire [63:0]address_add_result;
assign address_add_result = address_add_src1 + address_add_src2;
assign address_add_src1 = EX_reg_opcode_type[4] ? EX_reg_pc : src1;  //branch: pc     jalr:src1
assign address_add_src2 = imm;




//aluoutput
always@(*) begin
	case (opcode)
    24'h14000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    //24'h15000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h15000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h16000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h17000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h18000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h19000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h1a000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1b000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1d000: ALUoutput_EX_MEM=result_lo;
    //24'h1d000: ALUoutput_EX_MEM=result_mul0;
    24'h21000: ALUoutput_EX_MEM=quotient;
    //24'h21000: ALUoutput_EX_MEM=result_div0;
    24'h22000: ALUoutput_EX_MEM=quotient;
    //24'h22000: ALUoutput_EX_MEM=result_divu0;
    24'h24000: ALUoutput_EX_MEM=remainder;
    //24'h24000: ALUoutput_EX_MEM=result_remu0;
    24'h25000: ALUoutput_EX_MEM=(result_lo[31]?({{32{1'b1}},result_lo[31:0]}):({{32{1'b0}},result_lo[31:0]}));
    //24'h25000: ALUoutput_EX_MEM=(result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]}));
    24'h26000: ALUoutput_EX_MEM=(quotient[31]?({{32{1'b1}},quotient[31:0]}):({{32{1'b0}},quotient[31:0]}));
    //24'h26000: ALUoutput_EX_MEM=(result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]}));
    24'h27000: ALUoutput_EX_MEM=(quotient[31]?({{32{1'b1}},quotient[31:0]}):({{32{1'b0}},quotient[31:0]}));
    //24'h27000: ALUoutput_EX_MEM=(result_divuw0[31]?({{32{1'b1}},result_divuw0[31:0]}):({{32{1'b0}},result_divuw0[31:0]}));
    24'h28000: ALUoutput_EX_MEM=(remainder[31]?({{32{1'b1}},remainder[31:0]}):({{32{1'b0}},remainder[31:0]}));
    //24'h28000: ALUoutput_EX_MEM=(result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]}));
    24'h29000: ALUoutput_EX_MEM=(remainder[31]?({{32{1'b1}},remainder[31:0]}):({{32{1'b0}},remainder[31:0]}));
    //24'h29000: ALUoutput_EX_MEM=(result_remuw0[31]?({{32{1'b1}},result_remuw0[31:0]}):({{32{1'b0}},result_remuw0[31:0]}));

    24'h300  : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;

    24'd4    : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;
    24'd47   : ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));

    default  : ALUoutput_EX_MEM=result_alu0;
	endcase

end




//alu
wire [5:0]shamt;
assign shamt = imm[5:0];
//assign shamt = inst[25:20];

always@(*) begin
//alu
    case (opcode)
    24'h14000: operator_a={{32{1'b0}},src1[31:0]};
    //24'h15000: operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: operator_a={src1[31:0],{32{1'b0}}};
    24'h16000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1a000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: operator_a={src1[31:0],{32{1'b0}}};
    24'h100  : operator_a=64'b0;
    24'h200  : operator_a=EX_reg_pc;
    24'h300  : operator_a=EX_reg_pc;          //branch  to do

    //branching inst : calculate the address
    //24'd5    : operator_a=EX_reg_pc; 
    //24'd6    : operator_a=EX_reg_pc; 
    //24'd7    : operator_a=EX_reg_pc; 
    //24'd8    : operator_a=EX_reg_pc; 
    //24'd9    : operator_a=EX_reg_pc; 
    //24'd10   : operator_a=EX_reg_pc; 

    default  : operator_a=src1;
    endcase

    case (opcode)
    24'h6000 : operator_b={{58{1'b0}},src2[5:0]};
    24'h10000: operator_b={{58{1'b0}},src2[5:0]};
    24'h14000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h15000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h16000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h19000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1a000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1b000: operator_b={{59{1'b0}},src2[4:0]};
    24'h100  : operator_b=imm;
    24'h200  : operator_b=imm;
    24'h300  : operator_b=imm;
    24'h400  : operator_b={{58{1'b0}},shamt};
    24'h800  : operator_b={{58{1'b0}},shamt};
    24'hc00  : operator_b={{58{1'b0}},shamt};

    24'd4    : operator_b=imm;
    //branching inst : calculate the address
    //24'd5    : operator_b=imm; 
    //24'd6    : operator_b=imm; 
    //24'd7    : operator_b=imm; 
    //24'd8    : operator_b=imm; 
    //24'd9    : operator_b=imm; 
    //24'd10   : operator_b=imm; 

    24'd11   : operator_b=imm;
    24'd12   : operator_b=imm;
    24'd13   : operator_b=imm;
    24'd14   : operator_b=imm;
    24'd15   : operator_b=imm;
    24'd16   : operator_b=imm;
    24'd17   : operator_b=imm;
    24'd18   : operator_b=imm;
    24'd19   : operator_b=imm;
    24'd20   : operator_b=imm;
    24'd21   : operator_b=imm;
    24'd22   : operator_b=imm;
    24'd23   : operator_b=imm;
    24'd24   : operator_b=imm;
    24'd41   : operator_b=imm;
    24'd42   : operator_b=imm;
    24'd43   : operator_b=imm;
    24'd47   : operator_b=imm;
//    24'd50   : operator_b=src_csr;
    24'd50   : operator_b=src2;
    default  : operator_b=src2;
    endcase


    case(opcode)
    24'h5000 : mode=8'd1 ; 
    24'h6000 : mode=8'd8 ; 
    24'h7000 : mode=8'd2 ; 
    24'h8000 : mode=8'd3 ; 
    24'h9000 : mode=8'd7 ; 
    24'h10000: mode=8'd9 ; 
    24'h12000: mode=8'd6 ; 
    24'h13000: mode=8'd4 ; 
    24'h14000: mode=8'd8 ; 
    24'h15000: mode=8'd9 ; 
    24'h16000: mode=8'd10; 
    24'h18000: mode=8'd1 ; 
    24'h19000: mode=8'd8 ; 
    24'h1a000: mode=8'd9 ; 
    24'h1b000: mode=8'd10; 
    24'h400  : mode=8'd8 ;
    24'h800  : mode=8'd9 ;
    24'hc00  : mode=8'd10;

//    24'd5    : mode=8'd1 ;    //the mode for calculate the branch condition
//    24'd6    : mode=8'd1 ; 
//    24'd7    : mode=8'd1 ; 
//    24'd8    : mode=8'd1 ; 
//    24'd9    : mode=8'd1 ; 
//    24'd10   : mode=8'd1 ; 
    24'd5    : mode=8'd1 ; 
    24'd6    : mode=8'd1 ; 
    24'd7    : mode=8'd1 ; 
    24'd8    : mode=8'd1 ; 
    24'd9    : mode=8'd1 ; 
    24'd10   : mode=8'd1 ; 

    24'd20   : mode=8'd2 ;
    24'd21   : mode=8'd3 ;
    24'd22   : mode=8'd7 ;
    24'd23   : mode=8'd6 ;
    24'd24   : mode=8'd4 ;
    24'd50   : mode=8'd6 ;
    default  : mode=8'd0 ;
    endcase
end

//alu
reg [7:0] mode;
reg [63:0]operator_a;
reg [63:0]operator_b;
wire [63:0]result_alu0;

ysyx_22050612_ALU alu0 (mode,operator_a,operator_b,result_alu0);



//multipulicatin and division
wire[63:0] result_mul0;
assign result_mul0 = src1[63:0] * src2[63:0];

wire[63:0] result_div0;
assign result_div0 = src1[63:0] / src2[63:0];

wire[63:0] result_divu0;
assign result_divu0 = src1[63:0] / src2[63:0];

wire[63:0] result_remu0;
assign result_remu0 = src1[63:0] % src2[63:0];

wire[63:0] result_mulw0;
assign result_mulw0 = src1[31:0] * src2[31:0];

wire[31:0] result_divw0;
assign result_divw0 = $signed(src1[31:0]) / $signed(src2[31:0]);

wire[31:0] result_remw0;
assign result_remw0 = $signed(src1[31:0]) % $signed(src2[31:0]);

wire[31:0] result_divuw0;
assign result_divuw0 = src1[31:0] / src2[31:0];

wire[31:0] result_remuw0;
assign result_remuw0 = src1[31:0] % src2[31:0];


wire mul_flush;
assign mul_flush = 1'b0;
wire mul_ready;
wire mul_out_valid;
wire [63:0]result_hi;
wire [63:0]result_lo;

wire mul_valid;
assign mul_valid = ((opcode_type[8]||opcode_type[10])&&imm[5]&&~opcode_funct3[2])&&ready_EX_MEM  ;
wire mulw;
assign mulw = opcode_type[10];
wire [1:0]mul_signed;
assign mul_signed = 2'b00;

wire muling;
assign muling = (opcode_type[8]||opcode_type[10])&&imm[5]&&~opcode_funct3[2];
wire [63:0]mulcand;
wire [63:0]muler;
assign mulcand = muling ? src1 : 64'b0;
assign muler   = muling ? src2 : 64'b0;

ysyx_22050612_multiplier boothmul ((clk&&((opcode_type[8]||opcode_type[10])&&imm[5]&&~opcode_funct3[2])), rst, mul_valid, mul_flush, mulw, mul_signed, mulcand, muler, mul_ready, mul_out_valid, result_hi, result_lo);      //the clk has been "&&" with "mul mulw" opcode to close the clock gating(gate), it can speed up the simulating.



wire [8:0]stimes;


wire div_flush;
assign div_flush = 1'b0;
wire div_ready;
wire div_out_valid;
wire [63:0]quotient;
wire [63:0]remainder;

wire div_valid;
assign div_valid = ((opcode_type[8]||opcode_type[10])&&imm[5]&&opcode_funct3[2])&&ready_EX_MEM  ;
wire divw;
assign divw = opcode_type[10];
wire div_signed;
assign div_signed = ~opcode_funct3[0];

wire diving;
assign diving = (opcode_type[8]||opcode_type[10])&&imm[5]&&opcode_funct3[2];
wire [63:0]dividend;
wire [63:0]divisor ;
assign dividend  = diving ? src1 : 64'b0;
assign divisor   = diving ? src2 : 64'b0;

ysyx_22050612_divider boothdiv ((clk), rst, div_valid, div_flush, divw, div_signed, dividend, divisor, div_ready, div_out_valid, quotient, remainder,stimes);      //the clk has been "&&" with "div divw" opcode to close the clock gating(gate), it can speed up the sidivating.




always @(negedge clk) begin
	if(ready_ID_EX && opcode_type[4]) begin
		if(pc_update) branch_predict(0);
		else branch_predict(1);
	end
end


always @(posedge clk) begin
//	if (opcode[9:8]==2'd3) ftrace_check(pc[63:0],dnpc[63:0], 1, 0, 1);
//	else if (opcode[6:0]==7'd4) ftrace_check(pc[63:0],dnpc[63:0], {{27{1'b0}},rd}, {{27{1'b0}},rs1}, imm_I[63:0]);


	if (opcode_type[12] && gpr[10]==64'b0) ebreak(0);
	else if (opcode_type[12] && gpr[10]!=64'b0) ebreak(1);
end

endmodule
