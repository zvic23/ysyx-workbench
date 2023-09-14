
import "DPI-C" function void read_inst(int npc_inst);
import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

module ysyx_22050612_IFU (
   input clk,
   input rst, 
   input [63:0]dnpc,
   output reg valid_IF_ID,
   input ready_IF_ID,
   output reg [63:0]pc_prev,
   //output [63:0]pc,
   input pc_update,
   output [31:0]inst,

   output branch_flush

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



/*
reg  [63:0]pc_next;
reg  pc_en;
//assign pc_next = pc_update ? dnpc : pc+64'd4;
always @(*) begin
	if((branching!=4'b0) && pc_update)begin
		pc_next = dnpc;
		pc_en   = 1'b1;
	end
	else if(branching!=4'b0) begin
		pc_next = pc;
		pc_en   = 1'b0;
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
*/
wire [63:0]pc;
reg  [63:0]pc_next;
reg  pc_en;
//assign pc_next = pc_update ? dnpc : pc+64'd4;
always @(*) begin
	if(ready_IF_ID == 1'b0)begin
		pc_next = pc;
		pc_en   = 1'b0;
	end
	else if(pc_update)begin
		pc_next = dnpc;
		pc_en   = 1'b1;
	end
	else if(inst_is_branch==4'd1 && minus_target_addr)begin
		pc_next = pc+imm_B;
		pc_en   = 1'b1;
	end
	else if(inst_is_branch==4'd2 )begin
		pc_next = pc+imm_J;
		pc_en   = 1'b1;
	end
	else begin
		pc_next = pc + 64'd4;
		pc_en   = 1'b1;
	end
end

reg [3:0]inst_is_branch;
always @(*) begin
	if(inst[6:0] == 7'b1101111)begin
		inst_is_branch = 4'd2;                                 //jal
	end
//	else if(inst == 32'b1110011)begin
//		//inst_is_branch = 4'd1;                                 //ecall
//	end
//	else if(inst == 32'b00110000001000000000000001110011)begin
//		//inst_is_branch = 4'd1;                                 //mret
//	end
	else begin
        	case ({inst[14:12],inst[6:0]})
        //	      10'b000_1100111: inst_is_branch = 4'd2;          //jalr
        	      10'b000_1100011: inst_is_branch = 4'd1;          //beq
        	      10'b001_1100011: inst_is_branch = 4'd1;          //bne
        	      10'b100_1100011: inst_is_branch = 4'd1;          //blt
        	      10'b101_1100011: inst_is_branch = 4'd1;          //bge
        	      10'b110_1100011: inst_is_branch = 4'd1;          //bltu
        	      10'b111_1100011: inst_is_branch = 4'd1;          //bgeu
        	      default:         inst_is_branch = 4'd0; 
        	endcase
	end
end

wire minus_target_addr;
assign minus_target_addr = inst[31];
wire [63:0]imm_B;
assign imm_B = (inst[31]==1'b1)?{{51{1'b1}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}:{{51{1'b0}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
wire [63:0]imm_J;
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};

assign valid_IF_ID = cache_ready;
//assign valid_IF_ID = 1'b1;
assign branch_flush = pc_update;
assign pc_read =  pc;

ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, pc_next, pc, pc_en);

//************************  pipeline  ******************************
always @(negedge clk) begin
	$display("IF   pc:%x   inst:%x   valid:%d   pc_next:%x   dnpc:%x",pc,inst,valid_IF_ID,pc_next,dnpc);
end
//*****************************************************************

wire [63:0]pc_read;
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

wire cache_valid;
wire cache_ready;
assign cache_valid = 1'b1;

ysyx_22050612_ICACHE icache (clk, rst, pc_read, pc_prev, cache_valid, branch_flush, inst, cache_ready);

//reg [63:0]pc_prev;
always @(posedge clk) begin
	if(rst) begin
		pc_prev <= 64'b0;
	end
	else if(branch_flush) begin
		pc_prev <= 64'b0;
	end
	else begin
		pc_prev <= pc;
	end
end



always @(*) begin
  read_inst(inst);
end


//Reg #(1,1'b0) pc0  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc1  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//
//Reg #(1,1'b0) pc2  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc3  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc4  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc5  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc6  (clk, rst, ~pc[ ], pc[ ], 1'b1);
endmodule
