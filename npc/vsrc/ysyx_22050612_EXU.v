import "DPI-C" function void ebreak (int r);
//import "DPI-C" function void ftrace_check(longint pc, longint dnpc,int dest_register,int src_register,longint imm);
import "DPI-C" function void EXU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);
import "DPI-C" function void branch_predict(int r);


module ysyx_22050612_EXU(
input clk,
input rst,
input       valid_ID_EX,
output      ready_ID_EX,
input [63:0]pc_ID_EX,
input [31:0]inst_ID_EX,

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
output [14:0]opcode_type_EX_MEM,
output [ 2:0]opcode_funct3_EX_MEM,
output [ 4:0]rd_EX_MEM,
output [ 4:0]rs2_EX_MEM,
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


output ex_loading,
output [4:0]ex_rd,


input mem_writing_gpr,
input [4:0]mem_rd,
input [63:0]MEM_reg_aluoutput,


input wbu_writing_gpr,
input [4:0]wbu_rd,
input [63:0]WB_reg_wdata,


input branch_flush

);




//*************************  pipeline ********************************
reg       EX_reg_valid         ;
reg [63:0]EX_reg_pc            ;
reg [31:0]EX_reg_inst          ;
reg [14:0]EX_reg_opcode_type     ;
reg [ 2:0]EX_reg_opcode_funct3     ;
reg [ 4:0]EX_reg_rd;
reg [ 4:0]EX_reg_rs1;
reg [ 4:0]EX_reg_rs2;
reg [63:0]EX_reg_src_a;
reg [63:0]EX_reg_src_b;
reg [63:0]EX_reg_imm;

always @(posedge clk) begin
	if(rst || branch_flush) begin
		EX_reg_valid          <=  1'b0;
		EX_reg_pc             <= 64'b0;
		EX_reg_inst           <= 32'b0;
		EX_reg_opcode_type         <= 15'b0;
		EX_reg_opcode_funct3         <= 3'b0;
		EX_reg_src_a          <= 64'b0;
		EX_reg_src_b          <= 64'b0;
		EX_reg_imm            <= 64'b0;
		EX_reg_rd             <=  5'b0;
		EX_reg_rs1            <=  5'b0;
		EX_reg_rs2            <=  5'b0;
	end
	else if(!ready_ID_EX)begin
		EX_reg_valid          <= EX_reg_valid ;
		EX_reg_pc             <= EX_reg_pc    ;
		EX_reg_inst           <= EX_reg_inst  ;
		EX_reg_opcode_type         <= EX_reg_opcode_type;
		EX_reg_opcode_funct3         <= EX_reg_opcode_funct3;
		EX_reg_src_a          <= EX_reg_src_a ;
		EX_reg_src_b          <= EX_reg_src_b ;
		EX_reg_imm            <= EX_reg_imm   ;
		EX_reg_rd             <= EX_reg_rd           ;
		EX_reg_rs1            <= EX_reg_rs1;
		EX_reg_rs2            <= EX_reg_rs2;
	end
	else begin
		EX_reg_valid          <= valid_ID_EX;
		EX_reg_pc             <= pc_ID_EX;
		EX_reg_inst           <= inst_ID_EX;
		EX_reg_opcode_type         <= opcode_type_ID_EX;
		EX_reg_opcode_funct3         <= opcode_funct3_ID_EX;
		EX_reg_src_a          <= src_A;
		EX_reg_src_b          <= src_B;
		EX_reg_imm            <= imm_in;
		EX_reg_rd             <= rd_ID_EX           ;
		EX_reg_rs1            <= rs1_ID_EX;
		EX_reg_rs2            <= rs2_ID_EX;
	end
end

wire [63:0]pc;
wire [14:0]opcode_type;
wire [ 2:0]opcode_funct3;
wire [63:0]src1;
wire [63:0]src2;
wire [63:0]imm;
assign pc   = EX_reg_valid ? EX_reg_pc   : 64'b0;
assign opcode_type = EX_reg_valid ? EX_reg_opcode_type : 15'b0;
assign opcode_funct3 = EX_reg_valid ?  EX_reg_opcode_funct3: 3'b0;
assign imm  = EX_reg_valid ? EX_reg_imm  : 64'b0;



assign src1 = EX_reg_valid ? ((mem_writing_gpr&&rs1_ex_rd_mem_match) ? MEM_reg_aluoutput : 
	                     ((wbu_writing_gpr&&rs1_ex_rd_wb_match)  ? WB_reg_wdata : 
			                                               EX_reg_src_a )) : 64'b0;

assign src2 = EX_reg_valid ? ((mem_writing_gpr&&exu_using_rs2&&rs2_ex_rd_mem_match) ? MEM_reg_aluoutput : 
	                     ((wbu_writing_gpr&&exu_using_rs2&&rs2_ex_rd_wb_match)  ? WB_reg_wdata : 
			                                                              EX_reg_src_b )) : 64'b0;


wire EX_block;
assign EX_block = (mul_valid && !mul_out_valid) || (div_valid && !div_out_valid);
//assign EX_block = 1'b0;
assign ready_ID_EX = EX_block ? 1'b0 : ready_EX_MEM;


//load interlock
wire rs1_ex_rd_mem_match;
wire rs2_ex_rd_mem_match;
wire rs1_ex_rd_wb_match;
wire rs2_ex_rd_wb_match;
assign rs1_ex_rd_mem_match = ( mem_rd == EX_reg_rs1)&&(EX_reg_rs1!=5'b0);
assign rs2_ex_rd_mem_match = ( mem_rd == EX_reg_rs2)&&(EX_reg_rs2!=5'b0);
assign rs1_ex_rd_wb_match  = ( wbu_rd == EX_reg_rs1)&&(EX_reg_rs1!=5'b0);
assign rs2_ex_rd_wb_match  = ( wbu_rd == EX_reg_rs2)&&(EX_reg_rs2!=5'b0);


wire exu_using_rs2;
assign exu_using_rs2 = opcode_type[4] || opcode_type[6] || opcode_type[8] || opcode_type[10];
                      


//output
assign valid_EX_MEM = (EX_block==1'b0) ? EX_reg_valid :  1'b0;
assign pc_EX_MEM    = (EX_block==1'b0) ? EX_reg_pc    : 64'b0;
assign inst_EX_MEM  = (EX_block==1'b0) ? EX_reg_inst  : 32'b0;

assign ex_loading = opcode_type[5];
assign ex_rd      = EX_reg_valid ? EX_reg_rd : 5'b0;
//used by idu for testing load interload

assign opcode_type_EX_MEM = EX_reg_opcode_type;
assign opcode_funct3_EX_MEM = EX_reg_opcode_funct3;
assign rd_EX_MEM = EX_reg_rd;
assign src_B_EX_MEM = src2;
assign rs2_EX_MEM = EX_reg_rs2;



always @(negedge clk) begin
	EXU_state_trace(EX_reg_pc, {32'b0,EX_reg_inst}, {63'b0,EX_reg_valid}, src1,src2,{60'b0,EX_block,mul_valid,mul_ready,mul_out_valid} );
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x %x   dnpc:%x  opcode:%d\n",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , WB_reg_wdata,  EX_inst_hit, WB_inst_hit, rs1_ex_rd_wb_match , rs2_ex_rd_wb_match,dnpc,opcode);
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , MEM_reg_aluoutput,  EX_inst_hit, MEM_inst_hit, rs1_ex_rd_mem_match );
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x",EX_reg_pc,EX_reg_inst,EX_reg_valid,EX_reg_src_a,EX_reg_src_b,EX_reg_imm);
end
//********************************************************************


assign wen_mtvec     = opcode_funct3==3'b1&&opcode_type[11]&&imm[11:0]==12'h305;
assign wdata_mtvec   = opcode_funct3==3'b1&&opcode_type[11] ? src1 : 64'b0;
assign wen_mepc      = (opcode_type[11]&&imm[11:0]==12'h341) || opcode_type[13];
assign wdata_mepc    = (opcode_funct3==3'b1&&opcode_type[11]) ? src1 : ((opcode_funct3==3'b10&&opcode_type[11]) ? alu_result : EX_reg_pc );
assign wen_mcause    = (opcode_type[11]&&imm[11:0]==12'h342) || opcode_type[13];
assign wdata_mcause  = (opcode_funct3==3'b1&&opcode_type[11]) ? src1 : ((opcode_funct3==3'b10&&opcode_type[11]) ? alu_result : 64'hb );
assign wen_mstatus   = (opcode_type[11]&&imm[11:0]==12'h300);
assign wdata_mstatus = (opcode_funct3==3'b1&&opcode_type[11]) ? src1 : alu_result;
/*
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
    24'd50     : wdata_mepc=alu_result;
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
    24'd50     : wdata_mcause=alu_result;
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
    24'd50     : wdata_mstatus=alu_result;
    default:   wdata_mstatus=64'b0;
        endcase
end
*/


/*
//dnpc
always @(*) begin
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
end
    */


wire src1_lessthan_src2;
assign src1_lessthan_src2 = (~src1[63] & src2[63]) | (alu_result[63] & (src1[63]==src2[63]));

wire branch_condition;
assign branch_condition = (opcode_funct3==3'h0) ? ((alu_result==64'b0&&imm[12]==1'b0) || (alu_result!=64'b0&&imm[12]==1'b1)) :
	                 ((opcode_funct3==3'h1) ? ((alu_result!=64'b0&&imm[12]==1'b0) || (alu_result==64'b0&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h4) ? ((alu_result[63]==1'b1&&imm[12]==1'b0) || (alu_result[63]==1'b0&&imm[12]==1'b1)) :
			 ((opcode_funct3==3'h5) ? ((alu_result[63]==1'b0&&imm[12]==1'b0) || (alu_result[63]==1'b1&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h6) ? ((src1_lessthan_src2&&imm[12]==1'b0) || (~src1_lessthan_src2&&imm[12]==1'b1)) :
                         ((opcode_funct3==3'h7) ? ((~src1_lessthan_src2&&imm[12]==1'b0) || (src1_lessthan_src2&&imm[12]==1'b1)) : 1'b0 )))));


assign pc_update = (EX_reg_valid&&ready_EX_MEM) ? ((EX_reg_opcode_type[3]||EX_reg_opcode_type[13]||EX_reg_opcode_type[14]) ? 1'b1 : 
	                                          ((EX_reg_opcode_type[4]&&branch_condition)                               ? 1'b1 : 1'b0)) : 1'b0;

assign dnpc      = (EX_reg_opcode_type[13]||EX_reg_opcode_type[14]) ? EX_reg_src_b : 
	           ((EX_reg_opcode_type[3]||(EX_reg_opcode_type[4]&&~imm[12])) ? address_add_result : snpc );

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
wire [63:0]result_cpt;
assign result_cpt = multipling ? result_lo : (dividing ? (opcode_funct3[1] ? remainder : quotient) : alu_result);
assign ALUoutput_EX_MEM = word_right_shift  ? (result_cpt[63]?({{32{1'b1}},result_cpt[63:32]}):({{32{1'b0}},result_cpt[63:32]})) :              //32bit data right shift
	                 ((opcode_type[9]||opcode_type[10]) ?  (result_cpt[31]?({{32{1'b1}},result_cpt[31:0]}):({{32{1'b0}},result_cpt[31:0]})) //32bit data compute      
			  : result_cpt); 
/*
always@(*) begin
	case (opcode)
    24'h14000: ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));
    //24'h14000: ALUoutput_EX_MEM=(alu_result[63]?({{32{1'b1}},alu_result[63:32]}):({{32{1'b0}},alu_result[63:32]}));
    //24'h15000: ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));
    24'h15000: ALUoutput_EX_MEM=(alu_result[63]?({{32{1'b1}},alu_result[63:32]}):({{32{1'b0}},alu_result[63:32]}));
    24'h16000: ALUoutput_EX_MEM=(alu_result[63]?({{32{1'b1}},alu_result[63:32]}):({{32{1'b0}},alu_result[63:32]}));
    24'h17000: ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));
    24'h18000: ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));
    24'h19000: ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));
    24'h1a000: ALUoutput_EX_MEM=(alu_result[63]?({{32{1'b1}},alu_result[63:32]}):({{32{1'b0}},alu_result[63:32]}));
    24'h1b000: ALUoutput_EX_MEM=(alu_result[63]?({{32{1'b1}},alu_result[63:32]}):({{32{1'b0}},alu_result[63:32]}));
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

    //24'h300  : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;
    //24'd4    : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;
    24'h300  : ALUoutput_EX_MEM=alu_result;
    24'd4    : ALUoutput_EX_MEM=alu_result;
    24'd47   : ALUoutput_EX_MEM=(alu_result[31]?({{32{1'b1}},alu_result[31:0]}):({{32{1'b0}},alu_result[31:0]}));

    default  : ALUoutput_EX_MEM=alu_result;
	endcase

end
*/



//*************************    alu    *********************************
wire [5:0]shamt;
assign shamt = imm[5:0];   
//Those insts which have not imm can use imm to indicate shamt because idu offer 'imm_I' in imm for such insts.

assign alu_operator_a = opcode_type[0] ? 64'b0 :                                              //lui
	           ((opcode_type[1]||opcode_type[2]||opcode_type[3]) ? EX_reg_pc :        //auipc   jal   jalr
	           (word_right_shift ? {src1[31:0],32'b0} : src1 ) );                     //word right shift : default

assign alu_operator_b = (opcode_type[2]||opcode_type[3]) ? 64'h4 :                            //jal  jalr
	           ((opcode_type[8]&&(opcode_funct3==3'b1||opcode_funct3==3'b101)) ? {{58{1'b0}},src2[5:0]} :
 	           ((opcode_type[10]&&(opcode_funct3==3'b1||opcode_funct3==3'b101)) ? {{59{1'b0}},src2[4:0]} : 
	 	   ((opcode_type[7]&&(opcode_funct3==3'b1||opcode_funct3==3'b101)) ? {{58{1'b0}},shamt} :    
	 	   ((opcode_type[9]&&(opcode_funct3==3'b1||opcode_funct3==3'b101)) ? {{59{1'b0}},shamt[4:0]} :   //shift 
	           ((opcode_type[0]||opcode_type[1]||opcode_type[5]||opcode_type[6]||opcode_type[7]||opcode_type[9]) ? imm : src2 )))));
	           //imm:    lui  auipc  load   store  cpt_i  cpt_iw


wire alu_add;
wire alu_sub;
wire alu_slt;
wire alu_sltu;
wire alu_and;
wire alu_or;
wire alu_xor;
wire alu_sll;
wire alu_srl;
wire alu_sra;
wire [9:0]alu_mode;
assign alu_mode = {alu_sra,alu_srl,alu_sll,alu_xor,alu_or,alu_and,alu_sltu,alu_slt,alu_sub,alu_add};
assign alu_add  = ~(alu_sub||alu_slt||alu_sltu||alu_and||alu_or||alu_xor||alu_sll||alu_srl||alu_sra);
assign alu_sub  = opcode_type[4] || ((opcode_type[8]||opcode_type[10])&&opcode_funct3==3'b0&&imm[10]);
assign alu_slt  = (opcode_type[7]||opcode_type[8])&&opcode_funct3==3'b010;
assign alu_sltu = (opcode_type[7]||opcode_type[8])&&opcode_funct3==3'b011;
assign alu_and  = (opcode_type[7]||opcode_type[8])&&opcode_funct3==3'b111;
assign alu_or   = (opcode_type[7]||opcode_type[8])&&opcode_funct3==3'b110;
assign alu_xor  = (opcode_type[7]||opcode_type[8])&&opcode_funct3==3'b100;
assign alu_sll  = (opcode_type[7]||opcode_type[8]||opcode_type[9]||opcode_type[10])&&opcode_funct3==3'b001;
assign alu_srl  = (opcode_type[7]||opcode_type[8]||opcode_type[9]||opcode_type[10])&&opcode_funct3==3'b101&&~imm[10];
assign alu_sra  = (opcode_type[7]||opcode_type[8]||opcode_type[9]||opcode_type[10])&&opcode_funct3==3'b101&&imm[10];

wire word_right_shift = opcode_funct3==3'b101&&~imm[5]&&(opcode_type[9]||opcode_type[10]);


always@(*) begin
//alu
/*
    case (opcode)
    //24'h14000: alu_operator_a={{32{1'b0}},src1[31:0]};
    //24'h14000: alu_operator_a={src1[31:0],{32{1'b0}}};
    //24'h15000: alu_operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: alu_operator_a={src1[31:0],{32{1'b0}}};
    24'h16000: alu_operator_a={src1[31:0],{32{1'b0}}};
    24'h1a000: alu_operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: alu_operator_a={src1[31:0],{32{1'b0}}};
    24'h100  : alu_operator_a=64'b0;
    24'h200  : alu_operator_a=EX_reg_pc;
    24'h300  : alu_operator_a=EX_reg_pc;          //branch  to do
    24'h4    : alu_operator_a=EX_reg_pc;          

    //branching inst : calculate the address
    //24'd5    : alu_operator_a=EX_reg_pc; 
    //24'd6    : alu_operator_a=EX_reg_pc; 
    //24'd7    : alu_operator_a=EX_reg_pc; 
    //24'd8    : alu_operator_a=EX_reg_pc; 
    //24'd9    : alu_operator_a=EX_reg_pc; 
    //24'd10   : alu_operator_a=EX_reg_pc; 

    default  : alu_operator_a=src1;
    endcase
*/
/*
    case (opcode)
    24'h6000 : alu_operator_b={{58{1'b0}},src2[5:0]};
    24'h10000: alu_operator_b={{58{1'b0}},src2[5:0]};
    24'h14000: alu_operator_b={{59{1'b0}},shamt[4:0]};
    24'h15000: alu_operator_b={{59{1'b0}},shamt[4:0]};
    24'h16000: alu_operator_b={{59{1'b0}},shamt[4:0]};
    24'h19000: alu_operator_b={{59{1'b0}},src2[4:0]};
    24'h1a000: alu_operator_b={{59{1'b0}},src2[4:0]};
    24'h1b000: alu_operator_b={{59{1'b0}},src2[4:0]};
    24'h100  : alu_operator_b=imm;
    24'h200  : alu_operator_b=imm;
    24'h300  : alu_operator_b=64'd4;
    24'h4    : alu_operator_b=64'd4;
    //24'h300  : alu_operator_b=imm;
    24'h400  : alu_operator_b={{58{1'b0}},shamt};
    24'h800  : alu_operator_b={{58{1'b0}},shamt};
    24'hc00  : alu_operator_b={{58{1'b0}},shamt};


    24'd11   : alu_operator_b=imm;
    24'd12   : alu_operator_b=imm;
    24'd13   : alu_operator_b=imm;
    24'd14   : alu_operator_b=imm;
    24'd15   : alu_operator_b=imm;
    24'd16   : alu_operator_b=imm;
    24'd17   : alu_operator_b=imm;
    24'd18   : alu_operator_b=imm;
    24'd19   : alu_operator_b=imm;
    24'd20   : alu_operator_b=imm;
    24'd21   : alu_operator_b=imm;
    24'd22   : alu_operator_b=imm;
    24'd23   : alu_operator_b=imm;
    24'd24   : alu_operator_b=imm;
    24'd41   : alu_operator_b=imm;
    24'd42   : alu_operator_b=imm;
    24'd43   : alu_operator_b=imm;
    24'd47   : alu_operator_b=imm;
//    24'd50   : alu_operator_b=src_csr;
    24'd50   : alu_operator_b=src2;
    default  : alu_operator_b=src2;
    endcase
*/
/*
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
    */
end

//alu
wire [63:0]alu_operator_a;
wire [63:0]alu_operator_b;
wire [63:0]alu_result;

ysyx_22050612_ALU alu0 (alu_mode,alu_operator_a,alu_operator_b,alu_result);



//multipulicatin and division
/*
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
*/

wire mul_flush;
assign mul_flush = 1'b0;
wire mul_ready;
wire mul_out_valid;
wire [63:0]result_hi;
wire [63:0]result_lo;

wire mul_valid;
assign mul_valid = multipling && ready_EX_MEM  ;
wire mulw;
assign mulw = opcode_type[10];
wire [1:0]mul_signed;
assign mul_signed = 2'b00;

wire multipling;
assign multipling = (opcode_type[8]||opcode_type[10])&&imm[5]&&~opcode_funct3[2];
wire [63:0]multiplicand;
wire [63:0]multiplier;
assign multiplicand = multipling ? src1 : 64'b0;
assign multiplier   = multipling ? src2 : 64'b0;

ysyx_22050612_multiplier boothmul ((clk), rst, mul_valid, mul_flush, mulw, mul_signed, multiplicand, multiplier, mul_ready, mul_out_valid, result_hi, result_lo);      
//the clk has been "&&" with "multipling" opcode to close the clock gating(gate), it can speed up the simulating.





wire div_flush;
assign div_flush = 1'b0;
wire div_ready;
wire div_out_valid;
wire [63:0]quotient;
wire [63:0]remainder;

wire div_valid;
assign div_valid = dividing && ready_EX_MEM  ;
wire divw;
assign divw = opcode_type[10];
wire div_signed;
assign div_signed = ~opcode_funct3[0];

wire dividing;
assign dividing = (opcode_type[8]||opcode_type[10]);
wire [63:0]dividend;
wire [63:0]divisor ;
assign dividend  = dividing ? src1 : 64'b0;
assign divisor   = dividing ? src2 : 64'b0;

ysyx_22050612_divider boothdiv ((clk), rst, div_valid, div_flush, divw, div_signed, dividend, divisor, div_ready, div_out_valid, quotient, remainder);     
//the clk has been "&&" with "dividing" opcode to close the clock gating(gate), it can speed up the sidivating.




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
