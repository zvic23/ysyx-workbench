module ysyx_22050612_ALU (
	input [7:0]mode,
	input [63:0]A,
	input [63:0]B,
	output[63:0]Z
);



wire [63:0]add_sub_result;
wire [63:0]slt_result;
wire [63:0]sra_result;

wire [63:0]C;
assign C= (mode==8'd1)?(~B+64'b1):B;
assign add_sub_result = A + C;
assign slt_result = (A < B)? 64'b1:64'b0;
assign sra_result = (A >>> 4);


ysyx_22050612_MuxKey #(4, 8, 64) alu_result_select (Z , mode,{
	8'd0 , add_sub_result,
	8'd1 , add_sub_result,
	8'd3 , slt_result,
	8'd10, sra_result
      });


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
