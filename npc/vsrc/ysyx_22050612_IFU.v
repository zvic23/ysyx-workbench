import "DPI-C" function void IFU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);
import "DPI-C" function void read_inst(int npc_inst);
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
   input [63:0]dnpc,

   output branch_flush,

   input [63:0]waddr    //暂时加进来保证切换程序时icache能保持一致性，所以每次存指令后就更新icache

/*
   output reg arvalid,
   output reg [31:0]araddr,
   input arready,

   input reg rvalid,
   input [63:0]rdata,
   input [1:0]rresp,
   output rready,

   input exu_block
*/

);

/*
//****************  AXI  ************************
reg [63:0]inst_64;

assign rready = 1'b1;

always @(posedge clk) begin
	//$display("ifu:   arvalid = %d  arready = %d  \n",arvalid, arready);   

	if(rvalid == 1'b1 && rready == 1'b1)begin
		inst <= araddr[2]?rdata[63:32] : rdata[31:0];
		//inst_64 = rdata;
		//$display("inst:%x",inst);
		//$display("3\n");
	end
	else if(arvalid == 1'b1 && arready == 1'b1 ) begin
		inst <= 32'b0;
	end
end



always @(edge clk) begin
	if(rst == 1'b1 && clk == 1'b0)begin
		arvalid <= 1'b1;
		araddr <= 32'h80000000;
	end
	//else if(rvalid == 1'b0 && exu_block == 1'b0 && clk == 1'b0 )begin
	else if(pc_update == 1'b1 && clk == 1'b0 )begin
		arvalid <= 1'b1;
		araddr <= dnpc[31:0];
	//$display("block = %d ",exu_block);
	//$display("1\n");
	//$display("%d   \n",arvalid);
	end
	else if(arvalid == 1'b1 && arready == 1'b1 && clk == 1'b1) begin
		arvalid <= 1'b0;
	end
//	else if(rvalid == 1'b1 && clk == 1'b0) begin
//		arvalid <= 1'b0;
//	end
end
//**************************************
*/



assign branch_flush = pc_update;
assign valid_IF_ID = icache_ready;


//**********************  pc  *****************************
reg  [63:0]pc_next;
reg  pc_en;

always @(*) begin
	if(pc_update)begin
		pc_next = dnpc;
		pc_en   = 1'b1;
	end
	else if(inst_branch && minus_target_addr /*&& valid_IF_ID*/)begin
		pc_next = pc_prev+imm_B;
		pc_en   = 1'b1;
	end
	else if(inst_jal /*&& valid_IF_ID*/)begin
		pc_next = pc_prev+imm_J;
		pc_en   = 1'b1;
	end
	else if(ready_IF_ID == 1'b0)begin
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
/*
wire [63:0]inst_mix;
always @(*) begin
  pmem_read_pc(pc_read, inst_mix);
end
//always @(*) begin
//  pmem_read_pc(pc, inst_mix);
//end
//assign inst = pc[2]?inst_mix[63:32] : inst_mix[31:0];
assign inst = pc_read[2]?inst_mix[63:32] : inst_mix[31:0];
*/

//************************  pipeline  ******************************
always @(negedge clk) begin
	IFU_state_trace(pc, {32'b0,inst}, {63'b0,valid_IF_ID}, {63'b0,ready_IF_ID},64'b0,64'b0 );
	//$display("IF   pc:%x   inst:%x   valid:%d   ready:%d   pc_next:%x   dnpc:%x",pc,inst,valid_IF_ID,ready_IF_ID,pc_next,dnpc);
end
//*****************************************************************




//************************  icache   *******************************
wire [63:0]pc_read;
assign pc_read =  pc;

wire icache_valid;
wire icache_ready;
//assign icache_valid = (~(inst_is_branch == 4'd2 || ((inst_is_branch == 4'd1)&&(minus_target_addr==1'b1))))&&ready_IF_ID;
assign icache_valid = ready_IF_ID ? (~(inst_jal || (inst_branch &&minus_target_addr))) : 1'b0;

ysyx_22050612_ICACHE icache (clk, rst, pc_read, pc_prev, icache_valid, branch_flush, ready_IF_ID, inst, icache_ready , waddr);

always @(posedge clk) begin
	if(rst) begin
		pc_prev <= 64'b0;
	end
	else if(!ready_IF_ID) begin
		pc_prev <= pc_prev;
	end
	else if(branch_flush) begin
		pc_prev <= 64'b0;
	end
	else begin
		pc_prev <= pc;
	end
end






//offer the inst in IFU to itace
always @(*) begin
	if(valid_IF_ID) begin
  		read_inst(inst);
  	end
  	else begin
  		read_inst(32'b0);
  	end
end

endmodule
