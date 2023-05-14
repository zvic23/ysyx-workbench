import "DPI-C" function void pmem_read_pc(
  input longint raddr, output longint rdata);


module ysyx_22050612_SRAM(
   input clk,
   input rst,
   
   input reg arvalid,
   input [31:0]araddr,
   output arready,

   output reg rvalid,
   output [63:0]rdata,
   output reg rresp,
   input rready

);

//always @(posedge clk) begin
//	if(rst == 1'b1)begin
//		arvalid = 1'b0;
//	end
//	else if(arvalid == 1'b1 && arready == 1'b1)begin
//		arvalid = 1'b0;
//	end
//end

assign arready = 1'b1;

always @(posedge clk) begin
	//$display("sram:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rst == 1'b1)begin
		rvalid = 1'b0;
		rresp = 1'b0;
	end
	else if(arready == 1'b1 && arvalid == 1'b1)begin
		rvalid = 1'b1;
  		pmem_read_pc({{32{1'b0}},araddr}, rdata);	
		//$display("get inst!!  %x  %x\n",araddr,rdata);
		rresp = 1'b1;
	end
	else if(rvalid == 1'b1 && rready == 1'b1)begin
		rvalid = 1'b0;
		rresp = 1'b0;
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
