import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_SRAM(
   input clk,
   input rst,
   
   input reg arvalid,
   input [31:0]araddr,
   output arready,

   output reg rvalid,
   output [63:0]rdata,
   output reg [1:0]rresp,
   input rready,

   input awvalid,
   input [31:0]awaddr,
   output awready,

   input wvalid,
   input [63:0]wdata,
   input [ 7:0]wstrb,
   output wready,

   output [1:0]bresp,
   output bvalid,
   input bready


);



//************** write *******************
assign awready = 1'b1;
assign wready  = 1'b1;

//reg delay_write;

always @(posedge clk) begin
	//$display("sram:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rst == 1'b1)begin
		bvalid <= 1'b0;
		bresp <= 2'b0;
	//	delay_write <= 1'b0;
	end
//	else if(awready == 1'b1 && awvalid == 1'b1 && wready == 1'b1 && wvalid == 1'b1)begin
//		delay_write <= 1'b1;
//	end
//	else if(delay_write == 1'b1)begin
	else if(awready == 1'b1 && awvalid == 1'b1 && wready == 1'b1 && wvalid == 1'b1)begin
	//	delay_write <= 1'b0;
		pmem_write({{32{1'b0}},awaddr}, wdata, wstrb);
		//$display("write!!  %x  %x\n",awaddr,wdata);
		//$display("2\n");
		bresp <= 2'b00;
		bvalid <= 1'b1;
	end
	else if(bvalid == 1'b1 && bready == 1'b1)begin
		bvalid <= 1'b0;
		//$display("write  respon!! \n");
		//bresp <= 1'b1;
		//$display("4\n");
	end
end


//************** read  *******************
assign arready = 1'b1;

//reg delay_read;

always @(posedge clk) begin
	//$display("sram:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rst == 1'b1)begin
		rvalid <= 1'b0;
		rresp <= 2'b0;
	//	delay_read <=1'b0;
	end
//	else if(arready == 1'b1 && arvalid == 1'b1)begin
//		delay_read <=1'b1;
//	end
//	else if(delay_read ==1'b1)begin
	else if(arready == 1'b1 && arvalid == 1'b1)begin
	//	delay_read <=1'b0;
		rvalid <= 1'b1;
  		pmem_read({{32{1'b0}},araddr}, rdata);	
  		//pmem_read_pc({{32{1'b0}},araddr}, rdata);	
		//$display("get inst!!  %x  %x\n",araddr,rdata);
		//$display("2\n");
		rresp <= 2'b0;
	end
	else if(rvalid == 1'b1 && rready == 1'b1)begin
		rvalid <= 1'b0;
		rresp <= 2'b0;
		//$display("4\n");
	end
end



















//always @(*) begin
//  pmem_read_pc({{32{1'b0}},araddr}, rdata);
//end











/*
wire [63:0]add_sub_result;
wire [63:0]and_result;
wire [63:0]or_result;
wire [63:0]xor_result;
wire [63:0]slt_result;
wire [63:0]sltu_result;
wire [63:0]sll_result;
wire [63:0]srl_result;
wire [63:0]sra_result;

wire [63:0]C;
assign C= (mode==8'd1)?(~B+64'b1):B;
assign add_sub_result = A + C;
assign slt_result = ($signed(A) < $signed(B))? 64'b1:64'b0;
assign sltu_result = (A < B)? 64'b1:64'b0;
assign sll_result = (A <<  B);
assign srl_result = (A >>  B);
assign sra_result = ($signed(A) >>> B);
assign and_result = (A & B);
assign or_result = (A | B);
assign xor_result = (A ^ B);


ysyx_22050612_MuxKey #(10, 8, 64) alu_result_select (Z , mode,{
	8'd0 , add_sub_result,
	8'd1 , add_sub_result,
	8'd2 , slt_result,
	8'd3 , sltu_result,
	8'd4 , and_result,
	8'd6 , or_result,
	8'd7 , xor_result,
	8'd8 , sll_result,
	8'd9 , srl_result,
	8'd10, sra_result
      });
*/

//reg [63:0]C;
//
//always @(mode or A or B)begin
//	Z = 0;
//	if(mode == 8'b1)begin
//		Z = A + B;
//	end
//	else if(mode == 8'd2 || mode == 8'd9)begin
//		C = ~B + 64'b1;
//		Z = A + C;
//	end
//	else if(mode == 8'd3)begin
//		Z = ~A;
//	end
//	else if(mode == 8'd4)begin
//		Z = A & B;
//	end
//	else if(mode == 8'd5)begin
//		Z = A | B;
//	end
//	else if(mode == 8'd6)begin
//		Z = A ^ B;
//	end
//	else if(mode == 8'd7)begin
//		Z = A << B;
//	end
//	else if(mode == 8'd8)begin
//		Z = A >> B;
//	end
//end
endmodule
