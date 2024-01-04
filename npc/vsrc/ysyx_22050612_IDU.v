import "DPI-C" function void IDU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);

module ysyx_22050612_IDU(
input clk,
input rst,
input [63:0]gpr[31:0],
input       valid_IF_ID,
output      ready_IF_ID,
input [63:0]pc_IF_ID  ,
input [31:0]inst_IF_ID,
input [63:0]mtvec,
input [63:0]mepc,
input [63:0]mcause,
input [63:0]mstatus,


output [ 4:0]opcode_rd,
output [ 4:0]opcode_rs1,
output [ 4:0]opcode_rs2,
output [63:0]src_A,
output [63:0]src_B,
output [63:0]  imm,


output [14:0]opcode_type,
output [2:0]opcode_funct3,
output     valid_ID_EX,
input      ready_ID_EX,
output [63:0]pc_ID_EX,
output [31:0]inst_ID_EX,

input ex_loading,
input [4:0]ex_rd,



input branch_flush
);


assign ready_IF_ID = ~idu_fifo_alm_full;
//It is the alm-full set ready_if_id, so that it can reserve some space for
//the inst comes from icache. Because icache can't hold on inst if fifo is
//full.

assign valid_ID_EX = (ID_block==1'b0) ? ID_reg_valid :  1'b0;
assign pc_ID_EX    = (ID_block==1'b0) ? ID_reg_pc    : 64'b0;
assign inst_ID_EX  = (ID_block==1'b0) ? ID_reg_inst  : 32'b0;



//*************************   FIFO    ********************************
wire id_ready;
assign id_ready = ID_block ? 1'b0 : ready_ID_EX;

wire idu_fifo_wen;
assign idu_fifo_wen = (idu_fifo_empty && id_ready) ? 1'b0 : valid_IF_ID;  
//If fifo emtpy and idu ready, the inst go straight in idu instead of fifo.

wire idu_fifo_ren;
assign idu_fifo_ren = id_ready;

wire idu_fifo_rst;
assign idu_fifo_rst = rst || branch_flush;

wire idu_fifo_alm_full;
wire idu_fifo_full;
wire idu_fifo_alm_empty;
wire idu_fifo_empty;
wire [31:0]idu_fifo_rdata_inst;
wire [63:0]idu_fifo_rdata_pc;

ysyx_22050612_FIFO #(32,16,12,2) idu_inst_fifo (clk, idu_fifo_rst, idu_fifo_wen, inst_IF_ID, idu_fifo_alm_full, idu_fifo_full, idu_fifo_ren, idu_fifo_rdata_inst, idu_fifo_alm_empty, idu_fifo_empty);
ysyx_22050612_FIFO #(64,16,12,2) idu_pc_fifo (clk, idu_fifo_rst, idu_fifo_wen, pc_IF_ID, idu_fifo_alm_full, idu_fifo_full, idu_fifo_ren, idu_fifo_rdata_pc, idu_fifo_alm_empty, idu_fifo_empty);




//*************************  pipeline ********************************
reg       ID_reg_valid;
reg [63:0]ID_reg_pc   ;
reg [31:0]ID_reg_inst ;

always @(posedge clk) begin
	if(rst || branch_flush) begin
		ID_reg_valid <= 1'b0;
		ID_reg_pc    <= 64'b0;
		ID_reg_inst  <= 32'b0;
	end
	else if(!id_ready)begin
		ID_reg_valid <= ID_reg_valid;
		ID_reg_pc    <= ID_reg_pc;
		ID_reg_inst  <= ID_reg_inst ;
	end
	else if(idu_fifo_empty)begin
		ID_reg_valid <= valid_IF_ID;
		ID_reg_pc    <= pc_IF_ID;
		ID_reg_inst  <= inst_IF_ID;
	end
	else begin
		ID_reg_valid <= 1'b1;
		ID_reg_pc    <= idu_fifo_rdata_pc;
		ID_reg_inst  <= idu_fifo_rdata_inst;
	end
end


wire [31:0]inst;
assign inst = ID_reg_valid ? ID_reg_inst : 32'b0;

always @(negedge clk) begin
	//$display("ID   pc:%x   inst:%x   valid:%x",ID_reg_pc,ID_reg_inst,ID_reg_valid);
	IDU_state_trace(ID_reg_pc, {32'b0,ID_reg_inst}, {63'b0,ID_reg_valid}, 64'b0,64'b0,64'b0 );

end


//*************************    load interlock    ********************************

wire rs1_id_rd_ex_match;
wire rs2_id_rd_ex_match;
wire idu_using_rs2;
assign idu_using_rs2 = opcode_jal || opcode_jalr || opcode_branch || opcode_cpt_r || opcode_cpt_rw;  
//include jal, jalr, branch, cpt_r(w).

assign rs1_id_rd_ex_match = ex_rd == opcode_rs1;
assign rs2_id_rd_ex_match = ex_rd == opcode_rs2;

wire ID_block;
assign ID_block = ID_reg_valid && ex_loading && (rs1_id_rd_ex_match ||(rs2_id_rd_ex_match && idu_using_rs2));

//********************************************************************


reg [63:0] src_csr;
always @(*) begin
    case (inst[31:20])
    12'h305: src_csr=mtvec;
    12'h341: src_csr=mepc;
    12'h342: src_csr=mcause;
    12'h300: src_csr=mstatus;
    default: src_csr=64'b0;
    endcase

end

 

assign src_A = gpr[opcode_rs1];
assign src_B = opcode_csr   ? src_csr : 
	      (opcode_ecall ? mtvec   : 
	      (opcode_mret  ? mepc    : gpr[opcode_rs2]));

/*
  always @(inst) begin
	  case ({inst[14:12],inst[6:0]})
    10'b000_1100111:  opcode[6:0]= 7'd4   ;    //jalr
    10'b000_1100011:  opcode[6:0]= 7'd5   ;    //beq
    10'b001_1100011:  opcode[6:0]= 7'd6   ;    //bne
    10'b100_1100011:  opcode[6:0]= 7'd7   ;    //blt
    10'b101_1100011:  opcode[6:0]= 7'd8   ;    //bge
    10'b110_1100011:  opcode[6:0]= 7'd9   ;    //bltu
    10'b111_1100011:  opcode[6:0]= 7'd10  ;    //bgeu
    10'b000_0000011:  opcode[6:0]= 7'd11  ;    //lb
    10'b001_0000011:  opcode[6:0]= 7'd12  ;    //lh
    10'b010_0000011:  opcode[6:0]= 7'd13  ;    //lw
    10'b100_0000011:  opcode[6:0]= 7'd14  ;    //lbu
    10'b101_0000011:  opcode[6:0]= 7'd15  ;    //lhu
    10'b000_0100011:  opcode[6:0]= 7'd16  ;    //sb   
    10'b001_0100011:  opcode[6:0]= 7'd17  ;    //sh
    10'b010_0100011:  opcode[6:0]= 7'd18  ;    //sw
    10'b000_0010011:  opcode[6:0]= 7'd19  ;    //addi
    10'b010_0010011:  opcode[6:0]= 7'd20  ;    //slti
    10'b011_0010011:  opcode[6:0]= 7'd21  ;    //sltiu
    10'b100_0010011:  opcode[6:0]= 7'd22  ;    //xori
    10'b110_0010011:  opcode[6:0]= 7'd23  ;    //ori
    10'b111_0010011:  opcode[6:0]= 7'd24  ;    //andi
    10'b110_0000011:  opcode[6:0]= 7'd41  ;    //lwu
    10'b011_0000011:  opcode[6:0]= 7'd42  ;    //ld
    10'b011_0100011:  opcode[6:0]= 7'd43  ;    //sd
    10'b000_0011011:  opcode[6:0]= 7'd47  ;    //addiw
    10'b001_1110011:  opcode[6:0]= 7'd49  ;    //csrrw
    10'b010_1110011:  opcode[6:0]= 7'd50  ;    //csrrs
    default:  opcode[6:0]=7'b0;
	  endcase

	  case (inst)
    32'b1110011:   opcode[23:20]=4'd2;        //ecall
    32'b00110000001000000000000001110011:   opcode[23:20]=4'd5;        //mret
    default:  opcode[23:20]=4'b0;
	  endcase

	  case (inst[6:0])
    7'b0110111: opcode[9:8]= 2'd1;        //lui
    7'b0010111: opcode[9:8]= 2'd2;        //auipc
    7'b1101111: opcode[9:8]= 2'd3;        //jal
    default:  opcode[9:8]=2'b0;
	  endcase


	  case ({inst[31:25],inst[14:12],inst[6:0]})
    17'b0000000_000_0110011: opcode[19:12]=8'h4  ;    //add
    17'b0100000_000_0110011: opcode[19:12]=8'h5  ;    //sub
    17'b0000000_001_0110011: opcode[19:12]=8'h6  ;    //sll
    17'b0000000_010_0110011: opcode[19:12]=8'h7  ;    //slt
    17'b0000000_011_0110011: opcode[19:12]=8'h8  ;    //sltu
    17'b0000000_100_0110011: opcode[19:12]=8'h9  ;    //xor
    17'b0000000_101_0110011: opcode[19:12]=8'h10 ;    //srl
    17'b0000000_110_0110011: opcode[19:12]=8'h12 ;    //or
    17'b0000000_111_0110011: opcode[19:12]=8'h13 ;    //and
    17'b0000000_001_0011011: opcode[19:12]=8'h14 ;    //slliw
    17'b0000000_101_0011011: opcode[19:12]=8'h15 ;    //srliw
    17'b0100000_101_0011011: opcode[19:12]=8'h16 ;    //sraiw
    17'b0000000_000_0111011: opcode[19:12]=8'h17 ;    //addw
    17'b0100000_000_0111011: opcode[19:12]=8'h18 ;    //subw
    17'b0000000_001_0111011: opcode[19:12]=8'h19 ;    //sllw
    17'b0000000_101_0111011: opcode[19:12]=8'h1a ;    //srlw
    17'b0100000_101_0111011: opcode[19:12]=8'h1b ;    //sraw
    17'b0000001_000_0110011: opcode[19:12]=8'h1d ;    //mul
    17'b0000001_100_0110011: opcode[19:12]=8'h21 ;    //div
    17'b0000001_101_0110011: opcode[19:12]=8'h22 ;    //divu
    17'b0000001_111_0110011: opcode[19:12]=8'h24 ;    //remu
    17'b0000001_000_0111011: opcode[19:12]=8'h25 ;    //mulw
    17'b0000001_100_0111011: opcode[19:12]=8'h26 ;    //divw
    17'b0000001_101_0111011: opcode[19:12]=8'h27 ;    //divuw
    17'b0000001_110_0111011: opcode[19:12]=8'h28 ;    //remw
    17'b0000001_111_0111011: opcode[19:12]=8'h29 ;    //remuw
    default:  opcode[19:12]=8'b0;
	  endcase


	  case ({inst[31:26],inst[14:12],inst[6:0]})
    16'b000000_001_0010011: opcode[11:10]=2'h1;       //slli
    16'b000000_101_0010011: opcode[11:10]=2'h2;       //srli
    16'b010000_101_0010011: opcode[11:10]=2'h3;       //srai
    default  opcode[11:10]=2'b0;
	  endcase


  end



assign opcode[7]=(inst==32'h00100073)? 1'b1:1'b0;   //ebreak
//always @(posedge clk) begin
//	if(inst==32'h00100073) ebreak(1);
//end
*/
//01257891011
wire opcode_wen;
wire [63:0]opcode_imm   ;
//wire [2:0]opcode_funct3 ;
wire opcode_lui    ;
wire opcode_auipc  ;
wire opcode_load   ;
wire opcode_store  ;
wire opcode_branch ;
wire opcode_jal    ;
wire opcode_jalr   ;
wire opcode_cpt_r  ;
wire opcode_cpt_i  ;
wire opcode_cpt_iw ;
wire opcode_cpt_rw ;
wire opcode_csr    ;
wire opcode_ebreak ;
wire opcode_ecall  ;
wire opcode_mret   ;


assign opcode_wen = opcode_lui||opcode_auipc||opcode_load||opcode_jal||opcode_jalr||opcode_cpt_r||opcode_cpt_i||opcode_cpt_iw||opcode_cpt_rw||opcode_csr;
assign imm = opcode_imm;
assign opcode_imm[0]     = opcode_store ? inst[7] : ((opcode_branch||opcode_auipc||opcode_lui||opcode_jal) ? 1'b0 : inst[20]);
assign opcode_imm[4:1]   = (opcode_store||opcode_branch) ? inst[11:8] : ((opcode_auipc||opcode_lui) ? 4'b0 : inst[24:21]);
assign opcode_imm[10:5]  = (opcode_auipc||opcode_lui) ? 6'b0 : inst[30:25];
assign opcode_imm[11]    = opcode_branch ? inst[7] : ((opcode_auipc||opcode_lui) ? 1'b0 : (opcode_jal ? inst[20] : inst[31]));
assign opcode_imm[12]    = opcode_branch ? inst[31] : ((opcode_auipc||opcode_lui||opcode_jal) ? inst[12] : inst[31]);
assign opcode_imm[19:13] = (opcode_auipc||opcode_lui||opcode_jal) ? inst[19:13] : {7{inst[31]}};
assign opcode_imm[20]    = (opcode_auipc||opcode_lui) ? inst[20] : inst[31];
assign opcode_imm[31:21] = (opcode_auipc||opcode_lui) ? inst[31:21] : {11{inst[31]}};
assign opcode_imm[63:32] = {32{inst[31]}};

assign opcode_rs1    = inst[19:15];
assign opcode_rs2    = inst[24:20];
assign opcode_rd     = inst[11: 7];
assign opcode_funct3 = inst[14:12];

assign opcode_lui    = inst[6:0] == 7'b0110111;
assign opcode_auipc  = inst[6:0] == 7'b0010111;
assign opcode_load   = inst[6:0] == 7'b0000011;
assign opcode_store  = inst[6:0] == 7'b0100011;
assign opcode_branch = inst[6:0] == 7'b1100011;
assign opcode_jal    = inst[6:0] == 7'b1101111;
assign opcode_jalr   = inst[6:0] == 7'b1100111;
assign opcode_cpt_r  = inst[6:0] == 7'b0110011;
assign opcode_cpt_i  = inst[6:0] == 7'b0010011;
assign opcode_cpt_iw = inst[6:0] == 7'b0011011;
assign opcode_cpt_rw = inst[6:0] == 7'b0111011;
assign opcode_csr    = inst[6:0] == 7'b1110011 && inst[14:12] != 3'b0;


assign opcode_ebreak = inst == 32'h00100073;
assign opcode_ecall  = inst == 32'b1110011;
assign opcode_mret   = inst == 32'b00110000001000000000000001110011;


assign opcode_type = {
opcode_mret   ,
opcode_ecall  ,
opcode_ebreak ,
opcode_csr    ,
opcode_cpt_rw ,         //10
opcode_cpt_iw ,
opcode_cpt_r  ,
opcode_cpt_i  ,
opcode_store  ,
opcode_load   ,         //5
opcode_branch ,
opcode_jalr   ,
opcode_jal    ,
opcode_auipc  ,
opcode_lui    
};








endmodule
