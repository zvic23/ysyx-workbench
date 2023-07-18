
import "DPI-C" function void read_inst(int npc_inst);
import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

module ysyx_22050612_IFU (
   input clk,
   input rst, 
   input [63:0]dnpc,
   output [63:0]pc,
   input pc_update,
   //output reg [31:0]inst, 
   output [31:0]inst 

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




ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, dnpc, pc, pc_update);
//ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, dnpc, pc, 1'b1);



//Reg #(1,1'b0) pc0  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc1  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//
//Reg #(1,1'b0) pc2  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc3  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc4  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc5  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc6  (clk, rst, ~pc[ ], pc[ ], 1'b1);



wire [63:0]inst_mix;
always @(*) begin
  pmem_read_pc(pc, inst_mix);
end
assign inst = pc[2]?inst_mix[63:32] : inst_mix[31:0];

//assign inst = pc[2]?inst_64[63:32] : inst_64[31:0];




always @(*) begin
  read_inst(inst);
end


endmodule
