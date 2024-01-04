import "DPI-C" function void IFU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);
//import "DPI-C" function void read_inst(int npc_inst);
import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

module ysyx_22050612_IFU (
   input clk,
   input rst,

   output reg valid_IF_ID,
   input      ready_IF_ID,
   output reg [63:0]pc_prev,
   output [63:0]pc,
   output [31:0]inst,

   input pc_update,
   input [63:0]dnpc,      //refresh pc

   output branch_flush,   //clean the IFU, icache, IDU and EXU if the branch predict fail.

   input [63:0]waddr,     


   //***  axi_full signal from icache ***//
   output [31:0]araddr_icache_axi,
   output [7:0]arlen_icache_axi,
   output [2:0]arsize_icache_axi,
   output [1:0]arburst_icache_axi,
   output     arvalid_icache_axi,
   input      arready_icache_axi,
   
   input [63:0]rdata_icache_axi,
   input [1:0]rrsep_icache_axi,
   input rlast_icache_axi,
   input rvalid_icache_axi,
   output rready_icache_axi

);

assign branch_flush = pc_update;
assign valid_IF_ID = icache_ready;     //if the icache have a inst ready, valid_IF_ID is high to send inst to IDU.


//**********************  pc  *****************************
reg  [63:0]pc_next;
reg  pc_en;

always @(*) begin
	if(pc_update)begin
		pc_next = dnpc;
		pc_en   = 1'b1;
	end
	else if(inst_branch && minus_target_addr)begin
		pc_next = pc_prev+imm_B;
		pc_en   = 1'b1;
	end
	else if(inst_jal)begin
		pc_next = pc_prev+imm_J;
		pc_en   = 1'b1;
	end
	else if(!ready_IF_ID || !way_hit)begin      //pc should hold on if IDU is not ready and icache is not hit to read memory.
		pc_next = pc;
		pc_en   = 1'b0;
	end
	else begin
		pc_next = pc + 64'd4;
		pc_en   = 1'b1;
	end
end

wire inst_jal;
assign inst_jal    = icache_ready ? (inst[6:0] == 7'b1101111) : 1'b0;
wire inst_branch;
assign inst_branch = icache_ready ? (inst[6:0] == 7'b1100011) : 1'b0;
// jalr, ecall and mret are not included  because the target address of these inst
// depend on register. 


wire minus_target_addr;
assign minus_target_addr = inst[31];
wire [63:0]imm_B;
assign imm_B = (inst[31]==1'b1)?{{51{1'b1}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}:{{51{1'b0}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
wire [63:0]imm_J;
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};


ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, pc_next, pc, pc_en);


//************************  pipeline trace  ******************************
always @(negedge clk) begin
	IFU_state_trace(pc, {32'b0,inst}, {63'b0,valid_IF_ID}, {63'b0,ready_IF_ID},64'b0,64'b0 );
	//$display("IF   pc:%x   inst:%x   valid:%d   ready:%d   pc_next:%x   dnpc:%x",pc,inst,valid_IF_ID,ready_IF_ID,pc_next,dnpc);
end


//************************  icache   *******************************
wire icache_valid;
wire icache_ready;
assign icache_valid = ready_IF_ID && (~(inst_jal || (inst_branch &&minus_target_addr))) ;

wire way_hit;
ysyx_22050612_ICACHE icache (clk, rst, pc, pc_prev, icache_valid, branch_flush, ready_IF_ID, inst, icache_ready , way_hit, waddr,
araddr_icache_axi, arlen_icache_axi, arsize_icache_axi, arburst_icache_axi, arvalid_icache_axi, arready_icache_axi, rdata_icache_axi, rrsep_icache_axi, rlast_icache_axi, rvalid_icache_axi, rready_icache_axi);



always @(posedge clk) begin
	if(rst || branch_flush) begin
		pc_prev <= 64'b0;
	end
	else begin
		pc_prev <= pc;
	end
end




/*
//offer the inst in IFU to itrace
always @(*) begin
	if(valid_IF_ID) begin
  		read_inst(inst);
  	end
  	else begin
  		read_inst(32'b0);
  	end
end
*/
endmodule
