module ysyx_22050612_ALU (
	input [7:0]mode,
	input [63:0]A,
	input [63:0]B,
	output[63:0]Z
);



wire [63:0]add_sub_result;
wire [63:0]and_result;
wire [63:0]or_result;
wire [63:0]xor_result;
wire [63:0]slt_result;
wire [63:0]sltu_result;
wire [63:0]sll_result;
wire [63:0]srl_result;
wire [63:0]sra_result;

wire [63:0]B_negetive;
assign B_negetive= (mode==8'd1 || mode==8'd2 || mode==8'd3)? -B :B;
assign add_sub_result = A + B_negetive;
assign slt_result = (add_sub_result[63])? 64'b1:64'b0;
//assign slt_result = ($signed(A) < $signed(B))? 64'b1:64'b0;
assign sltu_result = (  (~A[63] & B[63]) | (add_sub_result[63] & (A[63]== B[63]))  )? 64'b1:64'b0;
//assign sltu_result = (  add_sub_result[63] && add_sub_result!=64'b0 )? 64'b1:64'b0;
//assign sltu_result = (A < B)? 64'b1:64'b0;
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
