import "DPI-C" function void ebreak (int r);
//import "DPI-C" function void npc_loadstore(int getinst, longint base, longint imm_I, longint imm_S);
import "DPI-C" function void update_csr(longint mtvec_npc, longint mcause_npc, longint mepc_npc, longint mstatus_npc);
//import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void ftrace_check(longint pc, longint dnpc,int dest_register,int src_register,longint imm);
//import "DPI-C" function void pmem_read(
//  input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(
//  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_EXU(
input clk,
input rst,
input       valid_ID_EX,
output      ready_ID_EX,
input [63:0]pc_ID_EX,
input [31:0]inst_ID_EX,
/*
input [63:0]imm_I,
input [63:0]imm_U,
input [63:0]imm_J,
input [63:0]imm_B,
input [63:0]imm_S,
input [ 5:0]shamt,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
*/
input [23:0]opcode_in,
//input [23:0]opcode,
input [63:0]src_A,
input [63:0]src_B,
input [63:0]imm_in,
//input [ 7:0]ALU_mode,
//input [63:0]src2_in,
//input [ 4:0]rd,


//input [63:0]pc,


//output [63:0]dnpc,
output reg [63:0]dnpc,
output pc_update,

output       valid_EX_MEM  ,
input        ready_EX_MEM  ,
output [63:0]pc_EX_MEM  ,
output [31:0]inst_EX_MEM,
output [23:0]opcode_EX_MEM,

output [63:0]ALUoutput_EX_MEM,
output [63:0]src_B_EX_MEM,
//output       reg_wr_wen   ,
//output [ 4:0]reg_wr_ID    ,
//output [63:0]reg_wr_value ,

output [63:0]wdata_mtvec,
output [63:0]wdata_mepc,
output [63:0]wdata_mcause,
output [63:0]wdata_mstatus,
output wen_mtvec,
output wen_mepc,
output wen_mcause,
output wen_mstatus,

input [63:0] gpr[31:0],



output reg EX_reg_valid,
output reg [31:0]EX_reg_inst,

input MEM_reg_valid,
input [31:0]MEM_reg_inst,
input [63:0]MEM_reg_aluoutput,

input WB_reg_valid,
input [31:0]WB_reg_inst,
input [63:0]WB_reg_wdata,


input branch_flush


/*
output reg arvalid,
output [31:0]araddr,
input arready,

input reg rvalid,
input [63:0]rrdata,
input reg [1:0]rresp,
output rready,

output awvalid,
output [31:0]awaddr,
input awready,

output wvalid,
output [63:0]wwdata,
output [7:0]wstrb,
input wready,

input [1:0]bresp,
input bvalid,
output bready,



output exu_block
*/



);




//*************************  pipeline ********************************
//reg       EX_reg_valid         ;
reg [63:0]EX_reg_pc            ;
//reg [31:0]EX_reg_inst          ;
reg [23:0]EX_reg_opcode        ;
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
		EX_reg_src_a          <= 64'b0;
		EX_reg_src_b          <= 64'b0;
		EX_reg_imm            <= 64'b0;
	//	EX_reg_alu_mode       <=  8'b0;
	//	EX_reg_rd             <=  5'b0;
	//	EX_reg_src2           <= 64'b0;
	end
	else if(!ready_ID_EX)begin
		EX_reg_valid          <= EX_reg_valid ;
		EX_reg_pc             <= EX_reg_pc    ;
		EX_reg_inst           <= EX_reg_inst  ;
		EX_reg_opcode         <= EX_reg_opcode;
		EX_reg_src_a          <= EX_reg_src_a ;
		EX_reg_src_b          <= EX_reg_src_b ;
		EX_reg_imm            <= EX_reg_imm   ;
	//	EX_reg_alu_mode       <= ALU_mode     ;
	//	EX_reg_rd             <= rd           ;
	//	EX_reg_src2           <= src2_in      ;
	end
	else begin
		EX_reg_valid          <= valid_ID_EX;
		EX_reg_pc             <= pc_ID_EX;
		EX_reg_inst           <= inst_ID_EX;
		EX_reg_opcode         <= opcode_in;
		EX_reg_src_a          <= src_A;
		EX_reg_src_b          <= src_B;
		EX_reg_imm            <= imm_in;
	//	EX_reg_alu_mode       <= ALU_mode      ;
	//	EX_reg_rd             <= rd            ;
	//	EX_reg_src2           <= src2_in       ;
	end
end

wire [63:0]pc;
wire [31:0]inst;
wire [23:0]opcode;
reg [63:0]src1;
reg [63:0]src2;
wire [63:0]imm;
assign pc   = EX_reg_valid ? EX_reg_pc   : 64'b0;
assign inst = EX_reg_valid ? EX_reg_inst : 32'b0;
assign opcode = EX_reg_valid ? EX_reg_opcode : 24'b0;
//assign src1 = EX_reg_valid ? EX_reg_src_a: 64'b0;
//assign src2 = EX_reg_valid ? EX_reg_src_b: 64'b0;
//assign src1 = EX_reg_valid ? ( (EX_inst_hit&&MEM_inst_hit)?EX_reg_src_a ) : 64'b0;
//assign src2 = EX_reg_valid ? ( (EX_inst_hit&&MEM_inst_hit)?EX_reg_src_b ) : 64'b0;
assign imm  = EX_reg_valid ? EX_reg_imm  : 64'b0;

always@(*)begin
	if(EX_reg_valid)begin
		if(MEM_reg_valid&&(MEM_inst_hit!=4'b0)&&rs1_EX_MEM_match)begin
			src1 = MEM_reg_aluoutput;
		end
		else if(WB_reg_valid&&(WB_inst_hit!=4'b0)&&rs1_EX_WB_match)begin
			src1 =  WB_reg_wdata;
		end
		else begin
			src1 = EX_reg_src_a;
		end
	end
	else begin
		src1 = 64'b0;
	end
	if(EX_reg_valid)begin
		if(MEM_reg_valid&&(MEM_inst_hit!=4'b0)&&(EX_inst_hit!=4'b0)&&rs2_EX_MEM_match)begin
			src2 =  MEM_reg_aluoutput;
		end
		else if(WB_reg_valid&&(WB_inst_hit!=4'b0)&&(EX_inst_hit!=4'b0)&&rs2_EX_WB_match)begin
			src2 = WB_reg_wdata ;
		end
		else begin
			src2 = EX_reg_src_b;
		end
	end
	else begin
		src2 = 64'b0;
	end
end

wire EX_block;
assign EX_block = 1'b0;
assign ready_ID_EX = EX_block ? 1'b0 : ready_EX_MEM;


//load interlock
wire rs1_EX_MEM_match;
wire rs2_EX_MEM_match;
wire rs1_EX_WB_match;
wire rs2_EX_WB_match;
assign rs1_EX_MEM_match = MEM_reg_inst[11:7] == EX_reg_inst[19:15];
assign rs2_EX_MEM_match = MEM_reg_inst[11:7] == EX_reg_inst[24:20];
assign rs1_EX_WB_match  =  WB_reg_inst[11:7] == EX_reg_inst[19:15];
assign rs2_EX_WB_match  =  WB_reg_inst[11:7] == EX_reg_inst[24:20];

wire [3:0]MEM_inst_hit;
wire [3:0]WB_inst_hit;
wire [3:0]EX_inst_hit;
always@(*) begin
//   ID/EX
	case ({EX_reg_inst[14:12],EX_reg_inst[6:0]})
    	//	10'b000_1100111:  EX_inst_hit[1]= 1'd1   ;    //jalr

    		10'b000_1100011:  EX_inst_hit[1]= 1'd1   ;    //beq
    		10'b001_1100011:  EX_inst_hit[1]= 1'd1   ;    //bne
    		10'b100_1100011:  EX_inst_hit[1]= 1'd1   ;    //blt
    		10'b101_1100011:  EX_inst_hit[1]= 1'd1   ;    //bge
    		10'b110_1100011:  EX_inst_hit[1]= 1'd1   ;    //bltu
    		10'b111_1100011:  EX_inst_hit[1]= 1'd1   ;    //bgeu
	
    10'b000_0100011:  EX_inst_hit[1]= 1'd1   ;     //sb   
    10'b001_0100011:  EX_inst_hit[1]= 1'd1   ;     //sh
    10'b010_0100011:  EX_inst_hit[1]= 1'd1   ;     //sw
    10'b011_0100011:  EX_inst_hit[1]= 1'd1   ;     //sd

	//	10'b001_1110011:  EX_inst_hit[1]= 1'd1   ;    //csrrw
        //	10'b010_1110011:  EX_inst_hit[1]= 1'd1   ;    //csrrs
		default :         EX_inst_hit[1]= 1'd0   ;
	endcase
	case ({EX_reg_inst[31:25],EX_reg_inst[14:12],EX_reg_inst[6:0]})
	        17'b0000000_000_0110011: EX_inst_hit[2]= 1'd1  ; //add
	        17'b0100000_000_0110011: EX_inst_hit[2]= 1'd1  ; //sub
	        17'b0000000_001_0110011: EX_inst_hit[2]= 1'd1  ; //sll
	        17'b0000000_010_0110011: EX_inst_hit[2]= 1'd1  ; //slt
	        17'b0000000_011_0110011: EX_inst_hit[2]= 1'd1  ; //sltu
	        17'b0000000_100_0110011: EX_inst_hit[2]= 1'd1  ; //xor
	        17'b0000000_101_0110011: EX_inst_hit[2]= 1'd1  ; //srl
	        17'b0000000_110_0110011: EX_inst_hit[2]= 1'd1  ; //or
	        17'b0000000_111_0110011: EX_inst_hit[2]= 1'd1  ; //and
	        17'b0000000_000_0111011: EX_inst_hit[2]= 1'd1  ; //addw
	        17'b0100000_000_0111011: EX_inst_hit[2]= 1'd1  ; //subw
	        17'b0000000_001_0111011: EX_inst_hit[2]= 1'd1  ; //sllw
	        17'b0000000_101_0111011: EX_inst_hit[2]= 1'd1  ; //srlw
	        17'b0100000_101_0111011: EX_inst_hit[2]= 1'd1  ; //sraw
	        17'b0000001_000_0110011: EX_inst_hit[2]= 1'd1  ; //mul
	        17'b0000001_100_0110011: EX_inst_hit[2]= 1'd1  ; //div
	        17'b0000001_101_0110011: EX_inst_hit[2]= 1'd1  ; //divu
	        17'b0000001_111_0110011: EX_inst_hit[2]= 1'd1  ; //remu
	        17'b0000001_000_0111011: EX_inst_hit[2]= 1'd1  ; //mulw
	        17'b0000001_100_0111011: EX_inst_hit[2]= 1'd1  ; //divw
	        17'b0000001_101_0111011: EX_inst_hit[2]= 1'd1  ; //divuw
	        17'b0000001_110_0111011: EX_inst_hit[2]= 1'd1  ; //remw
	        17'b0000001_111_0111011: EX_inst_hit[2]= 1'd1  ; //remuw
		default :                EX_inst_hit[2]= 1'd0  ;
	endcase



//   EX/MEM
	case ({MEM_reg_inst[14:12],MEM_reg_inst[6:0]})
    10'b000_1100111:  MEM_inst_hit[0]= 1'b1  ;    //jalr
		10'b000_0010011:  MEM_inst_hit[0]= 1'b1  ;    //addi
		10'b010_0010011:  MEM_inst_hit[0]= 1'b1  ;    //slti
		10'b011_0010011:  MEM_inst_hit[0]= 1'b1  ;    //sltiu
		10'b100_0010011:  MEM_inst_hit[0]= 1'b1  ;    //xori
		10'b110_0010011:  MEM_inst_hit[0]= 1'b1  ;    //ori
		10'b111_0010011:  MEM_inst_hit[0]= 1'b1  ;    //andi
		10'b000_0011011:  MEM_inst_hit[0]= 1'b1  ;    //addiw
		10'b001_1110011:  MEM_inst_hit[0]= 1'b1  ;    //csrrw
		10'b010_1110011:  MEM_inst_hit[0]= 1'b1  ;    //csrrs
		default:          MEM_inst_hit[0]= 1'b0  ;                          
	endcase
	case (MEM_reg_inst[6:0])
		7'b0110111:  MEM_inst_hit[1]= 1'b1  ;    //lui
		7'b0010111:  MEM_inst_hit[1]= 1'b1  ;    //auipc
		    7'b1101111: MEM_inst_hit[1]= 1'b1  ;       //jal             //unlike the book, jal should add in, or "jal xx ret" will get wrong if the address be corrected at jal in IFU
		default:     MEM_inst_hit[1]= 1'b0  ;                               
	endcase
	case ({MEM_reg_inst[31:25],MEM_reg_inst[14:12],MEM_reg_inst[6:0]})
                17'b0000000_000_0110011: MEM_inst_hit[2]=1'b1  ;    //add
                17'b0100000_000_0110011: MEM_inst_hit[2]=1'b1  ;    //sub
                17'b0000000_001_0110011: MEM_inst_hit[2]=1'b1  ;    //sll
                17'b0000000_010_0110011: MEM_inst_hit[2]=1'b1  ;    //slt
                17'b0000000_011_0110011: MEM_inst_hit[2]=1'b1  ;    //sltu
                17'b0000000_100_0110011: MEM_inst_hit[2]=1'b1  ;    //xor
                17'b0000000_101_0110011: MEM_inst_hit[2]=1'b1  ;    //srl
                17'b0000000_110_0110011: MEM_inst_hit[2]=1'b1  ;    //or
                17'b0000000_111_0110011: MEM_inst_hit[2]=1'b1  ;    //and
                17'b0000000_001_0011011: MEM_inst_hit[2]=1'b1  ;    //slliw
                17'b0000000_101_0011011: MEM_inst_hit[2]=1'b1  ;    //srliw
                17'b0100000_101_0011011: MEM_inst_hit[2]=1'b1  ;    //sraiw
                17'b0000000_000_0111011: MEM_inst_hit[2]=1'b1  ;    //addw
                17'b0100000_000_0111011: MEM_inst_hit[2]=1'b1  ;    //subw
                17'b0000000_001_0111011: MEM_inst_hit[2]=1'b1  ;    //sllw
                17'b0000000_101_0111011: MEM_inst_hit[2]=1'b1  ;    //srlw
                17'b0100000_101_0111011: MEM_inst_hit[2]=1'b1  ;    //sraw
                17'b0000001_000_0110011: MEM_inst_hit[2]=1'b1  ;    //mul
                17'b0000001_100_0110011: MEM_inst_hit[2]=1'b1  ;    //div
                17'b0000001_101_0110011: MEM_inst_hit[2]=1'b1  ;    //divu
                17'b0000001_111_0110011: MEM_inst_hit[2]=1'b1  ;    //remu
                17'b0000001_000_0111011: MEM_inst_hit[2]=1'b1  ;    //mulw
                17'b0000001_100_0111011: MEM_inst_hit[2]=1'b1  ;    //divw
                17'b0000001_101_0111011: MEM_inst_hit[2]=1'b1  ;    //divuw
                17'b0000001_110_0111011: MEM_inst_hit[2]=1'b1  ;    //remw
                17'b0000001_111_0111011: MEM_inst_hit[2]=1'b1  ;    //remuw
		default:                 MEM_inst_hit[2]=1'b0  ;                     
	endcase
	case ({MEM_reg_inst[31:26],MEM_reg_inst[14:12],MEM_reg_inst[6:0]})
                 16'b000000_001_0010011: MEM_inst_hit[3]=1'b1  ;       //slli
                 16'b000000_101_0010011: MEM_inst_hit[3]=1'b1  ;       //srli
                 16'b010000_101_0010011: MEM_inst_hit[3]=1'b1  ;       //srai
		default:                 MEM_inst_hit[3]=1'b0  ;                     
	endcase
//  MEM/WB
	case ({WB_reg_inst[14:12],WB_reg_inst[6:0]})
    10'b000_1100111:  WB_inst_hit[0]= 1'b1  ;    //jalr
                10'b000_0000011:  WB_inst_hit[0]= 1'b1  ;     //lb
                10'b001_0000011:  WB_inst_hit[0]= 1'b1  ;     //lh
                10'b010_0000011:  WB_inst_hit[0]= 1'b1  ;     //lw
                10'b100_0000011:  WB_inst_hit[0]= 1'b1  ;     //lbu
                10'b101_0000011:  WB_inst_hit[0]= 1'b1  ;     //lhu
		10'b000_0010011:  WB_inst_hit[0]= 1'b1  ;    //addi
		10'b010_0010011:  WB_inst_hit[0]= 1'b1  ;    //slti
		10'b011_0010011:  WB_inst_hit[0]= 1'b1  ;    //sltiu
		10'b100_0010011:  WB_inst_hit[0]= 1'b1  ;    //xori
		10'b110_0010011:  WB_inst_hit[0]= 1'b1  ;    //ori
		10'b111_0010011:  WB_inst_hit[0]= 1'b1  ;    //andi
		10'b110_0000011:  WB_inst_hit[0]= 1'b1  ;     //lwu
                10'b011_0000011:  WB_inst_hit[0]= 1'b1  ;     //ld
		10'b000_0011011:  WB_inst_hit[0]= 1'b1  ;    //addiw
		10'b001_1110011:  WB_inst_hit[0]= 1'b1  ;    //csrrw
		10'b010_1110011:  WB_inst_hit[0]= 1'b1  ;    //csrrs
		default:          WB_inst_hit[0]= 1'b0  ;                          
	endcase
	case (WB_reg_inst[6:0])
		7'b0110111:  WB_inst_hit[1]= 1'b1  ;    //lui
		7'b0010111:  WB_inst_hit[1]= 1'b1  ;    //auipc
		    7'b1101111: WB_inst_hit[1]= 1'b1  ;       //jal             //unlike the book, jal should add in, or "jal xx ret" will get wrong if the address be corrected at jal in IFU
		default:     WB_inst_hit[1]= 1'b0  ;                               
	endcase
	case ({WB_reg_inst[31:25],WB_reg_inst[14:12],WB_reg_inst[6:0]})
                17'b0000000_000_0110011: WB_inst_hit[2]=1'b1  ;    //add
                17'b0100000_000_0110011: WB_inst_hit[2]=1'b1  ;    //sub
                17'b0000000_001_0110011: WB_inst_hit[2]=1'b1  ;    //sll
                17'b0000000_010_0110011: WB_inst_hit[2]=1'b1  ;    //slt
                17'b0000000_011_0110011: WB_inst_hit[2]=1'b1  ;    //sltu
                17'b0000000_100_0110011: WB_inst_hit[2]=1'b1  ;    //xor
                17'b0000000_101_0110011: WB_inst_hit[2]=1'b1  ;    //srl
                17'b0000000_110_0110011: WB_inst_hit[2]=1'b1  ;    //or
                17'b0000000_111_0110011: WB_inst_hit[2]=1'b1  ;    //and
                17'b0000000_001_0011011: WB_inst_hit[2]=1'b1  ;    //slliw
                17'b0000000_101_0011011: WB_inst_hit[2]=1'b1  ;    //srliw
                17'b0100000_101_0011011: WB_inst_hit[2]=1'b1  ;    //sraiw
                17'b0000000_000_0111011: WB_inst_hit[2]=1'b1  ;    //addw
                17'b0100000_000_0111011: WB_inst_hit[2]=1'b1  ;    //subw
                17'b0000000_001_0111011: WB_inst_hit[2]=1'b1  ;    //sllw
                17'b0000000_101_0111011: WB_inst_hit[2]=1'b1  ;    //srlw
                17'b0100000_101_0111011: WB_inst_hit[2]=1'b1  ;    //sraw
                17'b0000001_000_0110011: WB_inst_hit[2]=1'b1  ;    //mul
                17'b0000001_100_0110011: WB_inst_hit[2]=1'b1  ;    //div
                17'b0000001_101_0110011: WB_inst_hit[2]=1'b1  ;    //divu
                17'b0000001_111_0110011: WB_inst_hit[2]=1'b1  ;    //remu
                17'b0000001_000_0111011: WB_inst_hit[2]=1'b1  ;    //mulw
                17'b0000001_100_0111011: WB_inst_hit[2]=1'b1  ;    //divw
                17'b0000001_101_0111011: WB_inst_hit[2]=1'b1  ;    //divuw
                17'b0000001_110_0111011: WB_inst_hit[2]=1'b1  ;    //remw
                17'b0000001_111_0111011: WB_inst_hit[2]=1'b1  ;    //remuw
		default:                 WB_inst_hit[2]=1'b0  ;                     
	endcase
	case ({WB_reg_inst[31:26],WB_reg_inst[14:12],WB_reg_inst[6:0]})
                 16'b000000_001_0010011: WB_inst_hit[3]=1'b1  ;       //slli
                 16'b000000_101_0010011: WB_inst_hit[3]=1'b1  ;       //srli
                 16'b010000_101_0010011: WB_inst_hit[3]=1'b1  ;       //srai
		default:                 WB_inst_hit[3]=1'b0  ;                     
	endcase
end





//output
assign valid_EX_MEM = (EX_block==1'b0) ? EX_reg_valid :  1'b0;
assign pc_EX_MEM    = (EX_block==1'b0) ? EX_reg_pc    : 64'b0;
assign inst_EX_MEM  = (EX_block==1'b0) ? EX_reg_inst  : 32'b0;


assign opcode_EX_MEM = EX_reg_opcode;
//assign src_B_EX_MEM = EX_reg_src_b;
assign src_B_EX_MEM = src2;



always @(negedge clk) begin
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x %x   dnpc:%x  opcode:%d\n",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , WB_reg_wdata,  EX_inst_hit, WB_inst_hit, rs1_EX_WB_match , rs2_EX_WB_match,dnpc,opcode);
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x , aluoutput:%x  %x %x %x",EX_reg_pc,EX_reg_inst,EX_reg_valid,src1,src2,EX_reg_imm , MEM_reg_aluoutput,  EX_inst_hit, MEM_inst_hit, rs1_EX_MEM_match );
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  imm:%x",EX_reg_pc,EX_reg_inst,EX_reg_valid,EX_reg_src_a,EX_reg_src_b,EX_reg_imm);
end
//********************************************************************




reg [63:0]wdata_reg;
reg wen;



//reg [63:0]wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus;
//reg wen_mtvec,wen_mepc,wen_mcause,wen_mstatus;


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
//src_csr
/*
  	case (EX_reg_inst[31:20])
    12'h305: src_csr=mtvec;
    12'h341: src_csr=mepc;
    12'h342: src_csr=mcause;
    12'h300: src_csr=mstatus;
    default:   src_csr=64'b0;

        endcase
	*/
end





/*
reg [63:0]wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus;
reg [63:0]mtvec,mepc,mcause,mstatus;
reg wen_mtvec,wen_mepc,wen_mcause,wen_mstatus;
reg [63:0]src_csr;

//control and status register
ysyx_22050612_Reg #(64,64'h0) mtvec_csr           (clk, rst, wdata_mtvec  , mtvec  , wen_mtvec  );
ysyx_22050612_Reg #(64,64'h0) mepc_csr            (clk, rst, wdata_mepc   , mepc   , wen_mepc   );
ysyx_22050612_Reg #(64,64'h0) mcause_csr          (clk, rst, wdata_mcause , mcause , wen_mcause );
ysyx_22050612_Reg #(64,64'ha00001800) mstatus_csr (clk, rst, wdata_mstatus, mstatus, wen_mstatus);

always @(*) begin
//mtvec control
  	case (opcode)
    24'd49   : wen_mtvec=(imm_I[11:0]==12'h305)? 1'b1:1'b0;
    default:   wen_mtvec=1'b0;
        endcase

	case (opcode)
    24'd49   : wdata_mtvec=src1;
    default:   wdata_mtvec=64'b0;
        endcase
//mepc control
  	case (opcode)
    24'd49     : wen_mepc=(imm_I[11:0]==12'h341)? 1'b1:1'b0;
    24'd50     : wen_mepc=(imm_I[11:0]==12'h341)? 1'b1:1'b0;
    24'h200000 : wen_mepc=1'b1;
    default:   wen_mepc=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mepc=src1;
    24'd50     : wdata_mepc=result_alu0;
    24'h200000 : wdata_mepc=pc;
    default:   wdata_mepc=64'b0;
        endcase
//mcause control
  	case (opcode)
    24'd49     : wen_mcause=(imm_I[11:0]==12'h342)? 1'b1:1'b0;
    24'd50     : wen_mcause=(imm_I[11:0]==12'h342)? 1'b1:1'b0;
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
    24'd49     : wen_mstatus=(imm_I[11:0]==12'h300)? 1'b1:1'b0;
    24'd50     : wen_mstatus=(imm_I[11:0]==12'h300)? 1'b1:1'b0;
    default:   wen_mstatus=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mstatus=src1;
    24'd50     : wdata_mstatus=result_alu0;
    default:   wdata_mstatus=64'b0;
        endcase
//src_csr
  	case (imm_I[11:0])
    12'h305: src_csr=mtvec;
    12'h341: src_csr=mepc;
    12'h342: src_csr=mcause;
    12'h300: src_csr=mstatus;
    default:   src_csr=64'b0;

        endcase
end
*/



always @(*) begin
////gpr control
//	case (opcode)
//    24'h4000 : wen=1'b1;
//    24'h5000 : wen=1'b1;
//    24'h6000 : wen=1'b1;
//    24'h7000 : wen=1'b1;
//    24'h8000 : wen=1'b1;
//    24'h9000 : wen=1'b1;
//    24'h10000: wen=1'b1;
//    24'h12000: wen=1'b1;
//    24'h13000: wen=1'b1;
//    24'h14000: wen=1'b1;
//    24'h15000: wen=1'b1;
//    24'h16000: wen=1'b1;
//    24'h17000: wen=1'b1;
//    24'h18000: wen=1'b1;
//    24'h19000: wen=1'b1;
//    24'h1a000: wen=1'b1;
//    24'h1b000: wen=1'b1;
//    24'h1d000: wen=1'b1;
//    24'h21000: wen=1'b1;
//    24'h22000: wen=1'b1;
//    24'h24000: wen=1'b1;
//    24'h25000: wen=1'b1;
//    24'h26000: wen=1'b1;
//    24'h27000: wen=1'b1;
//    24'h28000: wen=1'b1;
//    24'h29000: wen=1'b1;
//    24'h100  : wen=1'b1;
//    24'h200  : wen=1'b1;
//    24'h300  : wen=1'b1;
//    24'h400  : wen=1'b1;
//    24'h800  : wen=1'b1;
//    24'hc00  : wen=1'b1;
//    24'd4    : wen=1'b1;
//    24'd11   : wen=1'b1;
//    24'd12   : wen=1'b1;
//    24'd13   : wen=1'b1;
//    24'd14   : wen=1'b1;
//    24'd15   : wen=1'b1;
//    24'd19   : wen=1'b1;
//    24'd20   : wen=1'b1;
//    24'd21   : wen=1'b1;
//    24'd22   : wen=1'b1;
//    24'd23   : wen=1'b1;
//    24'd24   : wen=1'b1;
//    24'd41   : wen=1'b1;
//    24'd42   : wen=1'b1;
//    24'd47   : wen=1'b1;
//    24'd49   : wen=1'b1;
//    24'd50   : wen=1'b1;
//    default:  wen=1'b0;
//        endcase
//
//
//	case (opcode)
//    24'h4000 : wdata_reg=result_alu0;
//    24'h5000 : wdata_reg=result_alu0;
//    24'h6000 : wdata_reg=result_alu0;
//    24'h7000 : wdata_reg=result_alu0;
//    24'h8000 : wdata_reg=result_alu0;
//    24'h9000 : wdata_reg=result_alu0;
//    24'h10000: wdata_reg=result_alu0;
//    24'h12000: wdata_reg=result_alu0;
//    24'h13000: wdata_reg=result_alu0;
//    24'h14000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'h15000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'h16000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
//    24'h17000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'h18000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'h19000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'h1a000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
//    24'h1b000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
//    24'h1d000: wdata_reg=result_mul0;
//    24'h21000: wdata_reg=result_div0;
//    24'h22000: wdata_reg=result_divu0;
//    24'h24000: wdata_reg=result_remu0;
//    24'h25000: wdata_reg=(result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]}));
//    24'h26000: wdata_reg=(result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]}));
//    24'h27000: wdata_reg=(result_divuw0[31]?({{32{1'b1}},result_divuw0[31:0]}):({{32{1'b0}},result_divuw0[31:0]}));
//    24'h28000: wdata_reg=(result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]}));
//    24'h29000: wdata_reg=(result_remuw0[31]?({{32{1'b1}},result_remuw0[31:0]}):({{32{1'b0}},result_remuw0[31:0]}));
//    //24'h100  : wdata_reg=imm_U;
//    24'h100  : wdata_reg=EX_reg_imm;
//    24'h200  : wdata_reg=result_alu0;
//    //24'h300  : wdata_reg=pc + 64'd4;
//    24'h300  : wdata_reg=EX_reg_pc + 64'd4;
//    24'h400  : wdata_reg=result_alu0;
//    24'h800  : wdata_reg=result_alu0;
//    24'hc00  : wdata_reg=result_alu0;
//    //24'd4    : wdata_reg=pc + 64'd4;
//    24'd4    : wdata_reg=EX_reg_pc + 64'd4;
//    24'd11   : wdata_reg=rdata_fix;
//    24'd12   : wdata_reg=rdata_fix;
//    24'd13   : wdata_reg=rdata_fix;
//    24'd14   : wdata_reg=rdata_fix;
//    24'd15   : wdata_reg=rdata_fix;
//    24'd19   : wdata_reg=result_alu0;
//    24'd20   : wdata_reg=result_alu0;
//    24'd21   : wdata_reg=result_alu0;
//    24'd22   : wdata_reg=result_alu0;
//    24'd23   : wdata_reg=result_alu0;
//    24'd24   : wdata_reg=result_alu0;
//    24'd41   : wdata_reg=rdata_fix;
//    24'd42   : wdata_reg=rdata_fix;;
//    24'd47   : wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
////    24'd49   : wdata_reg=src_csr;
////    24'd50   : wdata_reg=src_csr;
//    24'd49   : wdata_reg=EX_reg_src_b;
//    24'd50   : wdata_reg=EX_reg_src_b;
//    default  : wdata_reg=64'b0;
//	endcase

/*
//alu
    case (opcode)
    24'h4000 : operator_a=src1;
    24'h5000 : operator_a=src1;
    24'h6000 : operator_a=src1;
    24'h7000 : operator_a=src1;
    24'h8000 : operator_a=src1;
    24'h9000 : operator_a=src1;
    24'h10000: operator_a=src1;
    24'h12000: operator_a=src1;
    24'h13000: operator_a=src1;
    24'h14000: operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: operator_a={{32{1'b0}},src1[31:0]};
    24'h16000: operator_a={src1[31:0],{32{1'b0}}};
    24'h17000: operator_a=src1;
    24'h18000: operator_a=src1;
    24'h19000: operator_a=src1;
    24'h1a000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: operator_a={src1[31:0],{32{1'b0}}};
    24'h200  : operator_a=pc;
    24'h300  : operator_a=pc;
    24'h400  : operator_a=src1;
    24'h800  : operator_a=src1;
    24'hc00  : operator_a=src1;
    24'd4    : operator_a=src1;
    24'd5    : operator_a=src1;
    24'd6    : operator_a=src1;
    24'd7    : operator_a=src1;
    24'd8    : operator_a=src1;
    24'd9    : operator_a=src1;
    24'd10   : operator_a=src1;
    24'd11   : operator_a=src1;
    24'd12   : operator_a=src1;
    24'd13   : operator_a=src1;
    24'd14   : operator_a=src1;
    24'd15   : operator_a=src1;
    24'd16   : operator_a=src1;
    24'd17   : operator_a=src1;
    24'd18   : operator_a=src1;
    24'd19   : operator_a=src1;
    24'd20   : operator_a=src1;
    24'd21   : operator_a=src1;
    24'd22   : operator_a=src1;
    24'd23   : operator_a=src1;
    24'd24   : operator_a=src1;
    24'd41   : operator_a=src1;
    24'd42   : operator_a=src1;
    24'd43   : operator_a=src1;
    24'd47   : operator_a=src1;
    24'd50   : operator_a=src1;
    default : operator_a=64'b0;
    endcase

    case (opcode)
    24'h4000 : operator_b=src2 ;
    24'h5000 : operator_b=src2 ;
    24'h6000 : operator_b={{58{1'b0}},src2[5:0]};
    24'h7000 : operator_b=src2 ;
    24'h8000 : operator_b=src2 ;
    24'h9000 : operator_b=src2 ;
    24'h10000: operator_b={{58{1'b0}},src2[5:0]};
    24'h12000: operator_b=src2 ;
    24'h13000: operator_b=src2 ;
    24'h14000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h15000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h16000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h17000: operator_b=src2 ;
    24'h18000: operator_b=src2 ;
    24'h19000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1a000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1b000: operator_b={{59{1'b0}},src2[4:0]};
    24'h200  : operator_b=imm_U;
    24'h300  : operator_b=imm_J;
    24'h400  : operator_b={{58{1'b0}},shamt};
    24'h800  : operator_b={{58{1'b0}},shamt};
    24'hc00  : operator_b={{58{1'b0}},shamt};
    24'd4    : operator_b=imm_I;
    24'd5    : operator_b=src2 ;
    24'd6    : operator_b=src2 ;
    24'd7    : operator_b=src2 ;
    24'd8    : operator_b=src2 ;
    24'd9    : operator_b=src2 ;
    24'd10   : operator_b=src2 ;
    24'd11   : operator_b=imm_I;
    24'd12   : operator_b=imm_I;
    24'd13   : operator_b=imm_I;
    24'd14   : operator_b=imm_I;
    24'd15   : operator_b=imm_I;
    24'd16   : operator_b=imm_S;
    24'd17   : operator_b=imm_S;
    24'd18   : operator_b=imm_S;
    24'd19   : operator_b=imm_I;
    24'd20   : operator_b=imm_I;
    24'd21   : operator_b=imm_I;
    24'd22   : operator_b=imm_I;
    24'd23   : operator_b=imm_I;
    24'd24   : operator_b=imm_I;
    24'd41   : operator_b=imm_I;
    24'd42   : operator_b=imm_I;
    24'd43   : operator_b=imm_S;
    24'd47   : operator_b=imm_I;
    24'd50   : operator_b=src_csr;
    default : operator_b=64'b0;
    endcase


    case(opcode)
    24'h4000 : mode=8'd0 ; 
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
    24'h17000: mode=8'd0 ; 
    24'h18000: mode=8'd1 ; 
    24'h19000: mode=8'd8 ; 
    24'h1a000: mode=8'd9 ; 
    24'h1b000: mode=8'd10; 
    24'h200  : mode=8'd0 ; 
    24'h300  : mode=8'd0 ; 
    24'h400  : mode=8'd8 ;
    24'h800  : mode=8'd9 ;
    24'hc00  : mode=8'd10;
    24'd4    : mode=8'd0 ; 
    24'd5    : mode=8'd1 ; 
    24'd6    : mode=8'd1 ; 
    24'd7    : mode=8'd1 ; 
    24'd8    : mode=8'd1 ; 
    24'd9    : mode=8'd1 ; 
    24'd10   : mode=8'd1 ; 
    24'd11   : mode=8'd0 ;
    24'd12   : mode=8'd0 ;
    24'd13   : mode=8'd0 ;
    24'd14   : mode=8'd0 ;
    24'd15   : mode=8'd0 ;
    24'd16   : mode=8'd0 ;
    24'd17   : mode=8'd0 ;
    24'd18   : mode=8'd0 ;
    24'd19   : mode=8'd0 ;
    24'd20   : mode=8'd2 ;
    24'd21   : mode=8'd3 ;
    24'd22   : mode=8'd7 ;
    24'd23   : mode=8'd6 ;
    24'd24   : mode=8'd4 ;
    24'd41   : mode=8'd0 ;
    24'd42   : mode=8'd0 ;
    24'd43   : mode=8'd0 ;
    24'd47   : mode=8'd0 ;
    24'd50   : mode=8'd6 ;
    default : mode=8'b0;
    endcase
*/

//dnpc

//    case (opcode)
//    24'h300 : dnpc=result_alu0                         ;
//    24'd4   : dnpc={result_alu0[63:1],1'b0}            ;
//    24'd5   : dnpc=(result_alu0==64'b0)?(imm_B+pc):snpc;
//    24'd6   : dnpc=(result_alu0!=64'b0)?(imm_B+pc):snpc;
//    24'd7   : dnpc=(result_alu0[63]==1)?(imm_B+pc):snpc;
//    24'd8   : dnpc=(result_alu0[63]==0)?(imm_B+pc):snpc;
//    24'd9   : dnpc=(src1<src2)?(imm_B+pc):snpc         ;
//    24'd10  : dnpc=(src1>=src2)?(imm_B+pc):snpc        ;        //(result_alu0[63]==0)?(imm_B+pc):snpc
//    24'h200000: dnpc=mtvec                             ;        
//    24'h500000: dnpc=mepc                              ;        
//    default: dnpc=snpc;
//    endcase

//    case (opcode)            // this edition is for always predict not jump
//    24'h300 : dnpc=result_alu0                         ;
//    24'd4   : dnpc={result_alu0[63:1],1'b0}            ;
////    24'd5   : dnpc=(result_alu0==64'b0)?(imm_B+EX_reg_pc):snpc;
////    24'd6   : dnpc=(result_alu0!=64'b0)?(imm_B+EX_reg_pc):snpc;
////    24'd7   : dnpc=(result_alu0[63]==1)?(imm_B+EX_reg_pc):snpc;
////    24'd8   : dnpc=(result_alu0[63]==0)?(imm_B+EX_reg_pc):snpc;
//    24'd5   : dnpc=(src1==src2)?result_alu0:snpc;
//    24'd6   : dnpc=(src1!=src2)?result_alu0:snpc;
//    24'd7   : dnpc=($signed(src1) <$signed(src2))?result_alu0:snpc;
//    24'd8   : dnpc=($signed(src1)>=$signed(src2))?result_alu0:snpc;
//    24'd9   : dnpc=(src1 <src2)?result_alu0:snpc         ;
//    24'd10  : dnpc=(src1>=src2)?result_alu0:snpc        ;        //(result_alu0[63]==0)?(imm_B+EX_reg_pc):snpc
//    24'h200000: dnpc=EX_reg_src_b                             ;        
//    24'h500000: dnpc=EX_reg_src_b                             ;        
//    default: dnpc=snpc;
//    endcase

    case (opcode)
    24'h300 : dnpc=result_alu0                         ;
    24'd4   : dnpc=result_alu0           ;
//    24'd5   : dnpc=(result_alu0==64'b0)?(imm_B+EX_reg_pc):snpc;
//    24'd6   : dnpc=(result_alu0!=64'b0)?(imm_B+EX_reg_pc):snpc;
//    24'd7   : dnpc=(result_alu0[63]==1)?(imm_B+EX_reg_pc):snpc;
//    24'd8   : dnpc=(result_alu0[63]==0)?(imm_B+EX_reg_pc):snpc;
    24'd5   : dnpc=(src1==src2&&EX_reg_inst[31]==0)?result_alu0:snpc;
    24'd6   : dnpc=(src1!=src2&&EX_reg_inst[31]==0)?result_alu0:snpc;
    24'd7   : dnpc=($signed(src1) <$signed(src2)&&EX_reg_inst[31]==0)?result_alu0:snpc;
    24'd8   : dnpc=($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==0)?result_alu0:snpc;
    24'd9   : dnpc=(src1 <src2&&EX_reg_inst[31]==0)?result_alu0:snpc         ;
    24'd10  : dnpc=(src1>=src2&&EX_reg_inst[31]==0)?result_alu0:snpc        ;        //(result_alu0[63]==0)?(imm_B+EX_reg_pc):snpc
    24'h200000: dnpc=EX_reg_src_b                             ;        
    24'h500000: dnpc=EX_reg_src_b                             ;        
    default: dnpc=snpc;
    endcase

    case (opcode)
    24'h300  : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
    //24'h300  : pc_update= EX_reg_valid ? (EX_reg_inst[31]==1'b0 ? 1'b1 : 1'b0) : 1'b0;
    24'd4    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
    24'd5    : pc_update= EX_reg_valid ? ( ((src1==src2&&EX_reg_inst[31]==0)||(src1!=src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd6    : pc_update= EX_reg_valid ? ( ((src1!=src2&&EX_reg_inst[31]==0)||(src1==src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd7    : pc_update= EX_reg_valid ? ( (($signed(src1) <$signed(src2)&&EX_reg_inst[31]==0)||($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd8    : pc_update= EX_reg_valid ? ( (($signed(src1)>=$signed(src2)&&EX_reg_inst[31]==0)||($signed(src1) <$signed(src2)&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd9    : pc_update= EX_reg_valid ? ( ((src1 <src2&&EX_reg_inst[31]==0)||(src1>=src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'd10   : pc_update= EX_reg_valid ? ( ((src1>=src2&&EX_reg_inst[31]==0)||(src1 <src2&&EX_reg_inst[31]==1))? 1'b1:1'b0 ) : 1'b0;
    24'h200000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;   
    24'h500000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;             
    default: pc_update=1'b0;
    endcase

//    case (opcode)    // this edition is for always predict not jump
//    24'h300  : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd4    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd5    : pc_update= EX_reg_valid ? ((src1==src2)? 1'b1:1'b0) : 1'b0;
//    24'd6    : pc_update= EX_reg_valid ? ((src1!=src2)? 1'b1:1'b0) : 1'b0;
//    24'd7    : pc_update= EX_reg_valid ? (($signed(src1) <$signed(src2))? 1'b1:1'b0) : 1'b0;
//    24'd8    : pc_update= EX_reg_valid ? (($signed(src1)>=$signed(src2))? 1'b1:1'b0) : 1'b0;
//    24'd9    : pc_update= EX_reg_valid ? ((src1 <src2)? 1'b1:1'b0) : 1'b0;
//    24'd10   : pc_update= EX_reg_valid ? ((src1>=src2)? 1'b1:1'b0) : 1'b0;
//    24'h200000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;   
//    24'h500000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;             
//    default: pc_update=1'b0;
//    endcase

//    case (opcode)
//    24'h300  : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd4    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd5    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd6    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd7    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd8    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd9    : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'd10   : pc_update= EX_reg_valid ? 1'b1 : 1'b0;
//    24'h200000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;   
//    24'h500000: pc_update=EX_reg_valid ? 1'b1 : 1'b0;             
//    default: pc_update=1'b0;
//    endcase
end


//assign pc_update = (opcode != 24'b0 )? 1'b1:1'b0;
//assign pc_update = (opcode != 24'b0 && exu_block == 1'b0)? 1'b1:1'b0;


//pc
wire [63:0] snpc;
assign snpc = EX_reg_pc + 64'd4;
wire [63:0]imm_B;
assign imm_B = (EX_reg_inst[31]==1'b1)?{{51{1'b1}},EX_reg_inst[31],EX_reg_inst[7],EX_reg_inst[30:25],EX_reg_inst[11:8],1'b0}:{{51{1'b0}},EX_reg_inst[31],EX_reg_inst[7],EX_reg_inst[30:25],EX_reg_inst[11:8],1'b0};








//aluoutput
always@(*) begin
	case (opcode)
//    24'd11  : raddr=result_alu0;
//    24'd12  : raddr=result_alu0;
//    24'd13  : raddr=result_alu0;
//    24'd14  : raddr=result_alu0;
//    24'd15  : raddr=result_alu0;
//    24'd41  : raddr=result_alu0;
//    24'd42  : raddr=result_alu0;
//    24'd16  : waddr=result_alu0;
//    24'd17  : waddr=result_alu0;
//    24'd18  : waddr=result_alu0;
//    24'd43  : waddr=result_alu0;
    24'h14000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h15000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h16000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h17000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h18000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h19000: ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h1a000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1b000: ALUoutput_EX_MEM=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1d000: ALUoutput_EX_MEM=result_mul0;
    24'h21000: ALUoutput_EX_MEM=result_div0;
    24'h22000: ALUoutput_EX_MEM=result_divu0;
    24'h24000: ALUoutput_EX_MEM=result_remu0;
    24'h25000: ALUoutput_EX_MEM=(result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]}));
    24'h26000: ALUoutput_EX_MEM=(result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]}));
    24'h27000: ALUoutput_EX_MEM=(result_divuw0[31]?({{32{1'b1}},result_divuw0[31:0]}):({{32{1'b0}},result_divuw0[31:0]}));
    24'h28000: ALUoutput_EX_MEM=(result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]}));
    24'h29000: ALUoutput_EX_MEM=(result_remuw0[31]?({{32{1'b1}},result_remuw0[31:0]}):({{32{1'b0}},result_remuw0[31:0]}));
//    //24'h100  : wdata_reg=imm_U;
//    24'h100  : wdata_reg=EX_reg_imm;
//    //24'h300  : wdata_reg=pc + 64'd4;
//    24'h300  : wdata_reg=EX_reg_pc + 64'd4;
    24'h300  : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;
//    //24'd4    : wdata_reg=pc + 64'd4;
//    24'd4    : wdata_reg=EX_reg_pc + 64'd4;
    24'd4    : ALUoutput_EX_MEM=EX_reg_pc + 64'd4;
    24'd47   : ALUoutput_EX_MEM=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
//    24'd49   : wdata_reg=src_csr;
//    24'd50   : wdata_reg=src_csr;
//    24'd49   : wdata_reg=EX_reg_src_b;
//    24'd50   : wdata_reg=EX_reg_src_b;
    default  : ALUoutput_EX_MEM=result_alu0;
	endcase

end




//alu
wire [5:0]shamt;
assign shamt = inst[25:20];

always@(*) begin
//alu
    case (opcode)
    24'h14000: operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: operator_a={{32{1'b0}},src1[31:0]};
    24'h16000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1a000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: operator_a={src1[31:0],{32{1'b0}}};
    24'h100  : operator_a=64'b0;
    24'h200  : operator_a=EX_reg_pc;
    24'h300  : operator_a=EX_reg_pc;          //branch  to do

    //branching inst : calculate the address
    24'd5    : operator_a=EX_reg_pc; 
    24'd6    : operator_a=EX_reg_pc; 
    24'd7    : operator_a=EX_reg_pc; 
    24'd8    : operator_a=EX_reg_pc; 
    24'd9    : operator_a=EX_reg_pc; 
    24'd10   : operator_a=EX_reg_pc; 

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
    24'd5    : operator_b=imm; 
    24'd6    : operator_b=imm; 
    24'd7    : operator_b=imm; 
    24'd8    : operator_b=imm; 
    24'd9    : operator_b=imm; 
    24'd10   : operator_b=imm; 

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
    24'd5    : mode=8'd0 ; 
    24'd6    : mode=8'd0 ; 
    24'd7    : mode=8'd0 ; 
    24'd8    : mode=8'd0 ; 
    24'd9    : mode=8'd0 ; 
    24'd10   : mode=8'd0 ; 

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

//ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);
ysyx_22050612_ALU alu0 (mode,operator_a,operator_b,result_alu0);
//ysyx_22050612_ALU alu0 (EX_reg_alu_mode,EX_reg_src_a,EX_reg_src_b,result_alu0);


//multipulicatin and division
/*
wire[63:0] result_mul0;
assign result_mul0 = EX_reg_src_a[63:0] * EX_reg_src_b[63:0];

wire[63:0] result_div0;
assign result_div0 = EX_reg_src_a[63:0] / EX_reg_src_b[63:0];

wire[63:0] result_divu0;
assign result_divu0 = EX_reg_src_a[63:0] / EX_reg_src_b[63:0];

wire[63:0] result_remu0;
assign result_remu0 = EX_reg_src_a[63:0] % EX_reg_src_b[63:0];

wire[63:0] result_mulw0;
assign result_mulw0 = EX_reg_src_a[31:0] * EX_reg_src_b[31:0];

wire[31:0] result_divw0;
assign result_divw0 = $signed(EX_reg_src_a[31:0]) / $signed(EX_reg_src_b[31:0]);

wire[31:0] result_remw0;
assign result_remw0 = $signed(EX_reg_src_a[31:0]) % $signed(EX_reg_src_b[31:0]);

wire[31:0] result_divuw0;
assign result_divuw0 = EX_reg_src_a[31:0] / EX_reg_src_b[31:0];

wire[31:0] result_remuw0;
assign result_remuw0 = EX_reg_src_a[31:0] % EX_reg_src_b[31:0];
*/
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











//
//
////memory
//
//always @(*) begin
//	case(waddr[2:0])
//    3'd0  : wdata_1byte={{56{1'b0}},src2[7:0]}; 
//    3'd1  : wdata_1byte={{48{1'b0}},src2[7:0],{ 8{1'b0}}};
//    3'd2  : wdata_1byte={{40{1'b0}},src2[7:0],{16{1'b0}}};
//    3'd3  : wdata_1byte={{32{1'b0}},src2[7:0],{24{1'b0}}};
//    3'd4  : wdata_1byte={{24{1'b0}},src2[7:0],{32{1'b0}}};
//    3'd5  : wdata_1byte={{16{1'b0}},src2[7:0],{40{1'b0}}};
//    3'd6  : wdata_1byte={{ 8{1'b0}},src2[7:0],{48{1'b0}}};
//    3'd7  : wdata_1byte={src2[7:0],{56{1'b0}}};
//    default:wdata_1byte=64'b0;
//	endcase
//
//	case(waddr[2:0])
//    3'd0  : wmask_1byte=8'h1 ; 
//    3'd1  : wmask_1byte=8'h2 ;
//    3'd2  : wmask_1byte=8'h4 ;
//    3'd3  : wmask_1byte=8'h8 ;
//    3'd4  : wmask_1byte=8'h10; 
//    3'd5  : wmask_1byte=8'h20; 
//    3'd6  : wmask_1byte=8'h40; 
//    3'd7  : wmask_1byte=8'h80;
//    default:wmask_1byte=8'b0;
//	endcase
//
//	case(waddr[2:0])
//    3'd0  : wdata_2byte={{48{1'b0}},src2[15:0]}; 
//    3'd1  : wdata_2byte={{40{1'b0}},src2[15:0],{ 8{1'b0}}};
//    3'd2  : wdata_2byte={{32{1'b0}},src2[15:0],{16{1'b0}}};
//    3'd3  : wdata_2byte={{24{1'b0}},src2[15:0],{24{1'b0}}};
//    3'd4  : wdata_2byte={{16{1'b0}},src2[15:0],{32{1'b0}}};
//    3'd5  : wdata_2byte={{ 8{1'b0}},src2[15:0],{40{1'b0}}};
//    3'd6  : wdata_2byte={           src2[15:0],{48{1'b0}}};
//    default:wdata_2byte=64'b0;
//	endcase
//
//	case(waddr[2:0])
//    3'd0  : wmask_2byte=8'h3 ; 
//    3'd1  : wmask_2byte=8'h6 ;
//    3'd2  : wmask_2byte=8'hc ;
//    3'd3  : wmask_2byte=8'h18;
//    3'd4  : wmask_2byte=8'h30; 
//    3'd5  : wmask_2byte=8'h60; 
//    3'd6  : wmask_2byte=8'hc0;
//    default:wmask_2byte=8'b0;
//	endcase
//
//
//	case(raddr[2:0])
//    3'd0  : rdata_1byte=rdata[ 7: 0]; 
//    3'd1  : rdata_1byte=rdata[15: 8];
//    3'd2  : rdata_1byte=rdata[23:16];
//    3'd3  : rdata_1byte=rdata[31:24];
//    3'd4  : rdata_1byte=rdata[39:32];
//    3'd5  : rdata_1byte=rdata[47:40];
//    3'd6  : rdata_1byte=rdata[55:48];
//    3'd7  : rdata_1byte=rdata[63:56];
//    default: rdata_1byte=8'b0;
//	endcase
//
//	case(raddr[2:0])
//    3'd0  : rdata_2byte=rdata[15: 0]; 
//    3'd1  : rdata_2byte=rdata[23: 8];
//    3'd2  : rdata_2byte=rdata[31:16];
//    3'd3  : rdata_2byte=rdata[39:24];
//    3'd4  : rdata_2byte=rdata[47:32];
//    3'd5  : rdata_2byte=rdata[55:40];
//    3'd6  : rdata_2byte=rdata[63:48];
//    default:rdata_2byte=16'b0;
//	endcase
//
//	case(opcode)
//    24'd16  : wdata=wdata_1byte;
//    24'd17  : wdata=wdata_2byte;
//    24'd18  : wdata=(waddr[2]?{src2[31:0],{32{1'b0}}}:{{32{1'b0}},src2[31:0]});
//    24'd43  : wdata=src2;
//    default: wdata=64'b0;
//	endcase
//
//	case(opcode)
//    24'd16  : wmask=wmask_1byte;
//    24'd17  : wmask=wmask_2byte;
//    24'd18  : wmask=(waddr[2]? 8'b11110000:8'b00001111);
//    24'd43  : wmask=8'hff;
//    default: wmask=8'b0;
//	endcase
//
//	case(opcode)
//    24'd11  : rdata_fix=(rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte});
//    24'd12  : rdata_fix=(rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte});
//    24'd13  : rdata_fix=(raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]}));
//    24'd14  : rdata_fix={{56{1'b0}},rdata_1byte};
//    24'd15  : rdata_fix={{48{1'b0}},rdata_2byte};
//    24'd41  : rdata_fix=raddr[2]?{{32{1'b0}},rdata[63:32]}:{{32{1'b0}},rdata[31:0]};
//    24'd42  : rdata_fix=rdata;
//    default: rdata_fix=64'b0;
//	endcase
//end
//
//always @(*) begin
//	//$display("*  clk=%d",clk);
//	case(opcode)
//    24'd11  : raddr=result_alu0;
//    24'd12  : raddr=result_alu0;
//    24'd13  : raddr=result_alu0;
//    24'd14  : raddr=result_alu0;
//    24'd15  : raddr=result_alu0;
//    24'd41  : raddr=result_alu0;
//    24'd42  : raddr=result_alu0;
//    default: raddr=64'b0;
//	endcase
//
//	case(opcode)
//    24'd16  : waddr=result_alu0;
//    24'd17  : waddr=result_alu0;
//    24'd18  : waddr=result_alu0;
//    24'd43  : waddr=result_alu0;
//    default: waddr=64'b0;
//	endcase
//
//
//
//end
////always @(posedge clk) begin
////	$display("pose  clk=%d",clk);
////end
//
//
///*
//always @(edge clk) begin
//	//$display(" clk=%d    block=%d   waddr=%x   raddr=%x  ls=%d",clk,exu_block,waddr,raddr,exu_block_ls);
//end
////***********************   AXI   *********************
//reg exu_block_ls;
//assign exu_block = (((raddr!=64'b0)||(waddr!=64'b0))? 1'b1:1'b0) & exu_block_ls;
//always @(posedge clk) begin
//	if(rst == 1'b1)begin
//		exu_block_ls <= 1'b1;
//	end
//	else if(rresp == 2'b0 && rvalid == 1'b1)begin
//		//$display("unblock");
//		exu_block_ls <= 1'b0;
//	end
//	else if(bresp == 2'b0 && bvalid == 1'b1)begin
//		exu_block_ls <= 1'b0;
//	end
//	else begin
//		exu_block_ls <= 1'b1;
//	end
//
////	if(rst == 1'b1)begin
////		exu_block_ls = 1'b0;
////	end
////	else if(rresp == 2'b0 && rvalid == 1'b1)begin
////		exu_block_ls = 1'b0;
////	end
////	else if(bresp == 2'b0 && bvalid == 1'b1)begin
////		exu_block_ls = 1'b0;
////	end
////	else if(raddr != 64'b0 || waddr != 64'b0)begin
////		exu_block_ls = 1'b1;
////	end
////	else begin
////		exu_block_ls = 1'b0;
////	end
//end
//
////***********************   read   *********************
//
//assign rready = 1'b1;
//
//always @(posedge clk) begin
//	//$display("ifu:   arvalid = %d  arready = %d  \n",arvalid, arready);   
//	if(rvalid == 1'b1 && rready == 1'b1)begin
//		rdata <= rrdata;
//		//inst_64 = rdata;
//		//$display("inst:%x",inst);
//		//$display("3\n");
//	end
////	else begin
////		rdata <= 64'b0;
////	end
//end
//
//
//always @(posedge clk) begin
//	if(rst == 1'b1)begin
//		arvalid <= 1'b0;
//		araddr <= 32'h0;
//	end
//	else if(rvalid == 1'b0 && raddr != 64'h0 && opcode_lastcycle == 24'b0)begin
//		arvalid <= 1'b1;
//		araddr <= raddr[31:0];
//	end
//	else if(arvalid == 1'b1 && arready == 1'b1) begin
//		arvalid <= 1'b0;
//	end
//end
// 
// 
// 
////***********************   write   *********************
//assign bready = 1'b1;
//reg [23:0]opcode_lastcycle;
//
//always @(posedge clk) begin
//	opcode_lastcycle <= opcode;
//	if(rst == 1'b1)begin
//		awvalid <= 1'b0;
//		awaddr <= 32'h0;
//	end
//	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
//		//$display("1");
//		awvalid <= 1'b1;
//		awaddr <= waddr[31:0];
//	end
//	else if(awvalid == 1'b1 && awready == 1'b1) begin
//		//$display("2");
//		awvalid <= 1'b0;
//	end
//
//end
//
//always @(posedge clk) begin
//	if(rst == 1'b1)begin
//		wvalid <= 1'b0;
//		wwdata <= 64'h0;
//		wstrb <= 8'h0;
//	end
//	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
//		wvalid <= 1'b1;
//		wwdata <= wdata;
//		wstrb <= wmask;
//	end
//	else if(wvalid == 1'b1 && wready == 1'b1) begin
//		wvalid <= 1'b0;
//	end
//end
//
////******************************************
//*/
//
//
////wire [7:0]wmask_1byte;
////wire [63:0]wdata_1byte;
//reg [7:0]wmask_1byte;
//reg [63:0]wdata_1byte;
//
////wire [7:0]wmask_2byte;
////wire [63:0]wdata_2byte;
//reg [7:0]wmask_2byte;
//reg [63:0]wdata_2byte;
//
//
//
//reg [63:0] rdata;
////wire [63:0] raddr;
////wire [63:0] waddr;
////wire [63:0] wdata;
////wire [ 7:0] wmask;
//reg [63:0] raddr;
//reg [63:0] waddr;
//reg [63:0] wdata;
//reg [ 7:0] wmask;
//
//
//
//always @(*) begin
//  pmem_read(raddr, rdata);
//  pmem_write(waddr, wdata, wmask);
//end
//
//
////wire [63:0] rdata_fix;
//reg [63:0] rdata_fix;
//
//
////wire [7:0] rdata_1byte;
//reg [7:0] rdata_1byte;
//
//
////wire [15:0] rdata_2byte;
//reg [15:0] rdata_2byte;
//
//





//initial set_gpr_ptr(gpr);  

always @(posedge clk) begin
//	if (opcode[9:8]==2'd3) ftrace_check(pc[63:0],dnpc[63:0], 1, 0, 1);
//	else if (opcode[6:0]==7'd4) ftrace_check(pc[63:0],dnpc[63:0], {{27{1'b0}},rd}, {{27{1'b0}},rs1}, imm_I[63:0]);

	if (opcode[7]==1'b1 && gpr[10]==64'b0) ebreak(0);
	else if (opcode[7]==1'b1 && gpr[10]!=64'b0) ebreak(1);
end



/*
always @(posedge clk) begin            //support mtrace, to give the csrc a signal that a memory operation is coming
	case(opcode)
    24'd11  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd12  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd13  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd14  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd15  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd16  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd17  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd18  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd41  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd42  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd43  : npc_loadstore(2, src1, imm_I, imm_S);
    default: npc_loadstore(0, 0, 0, 0);
	endcase
end
*/


//always @(mtvec or mepc or mcause or mstatus) begin
//       update_csr(mtvec,mcause,mepc,mstatus);	
//end





//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",result_alu0,wdata_reg,wen,opcode);
//    $display("%d,%d,%d",result_alu0,src1,imm_I);
//  end

endmodule
