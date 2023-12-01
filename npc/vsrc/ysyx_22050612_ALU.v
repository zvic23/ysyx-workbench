module ysyx_22050612_ALU (
	input [9:0]mode,
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
assign B_negetive= (mode==10'h2 || mode==10'h4 || mode==10'h8)? -B :B;
assign add_sub_result = A + B_negetive;
assign slt_result = (add_sub_result[63])? 64'b1:64'b0;
//assign slt_result = ($signed(A) < $signed(B))? 64'b1:64'b0;
assign sltu_result = (  (~A[63] & B[63]) | (add_sub_result[63] & (A[63]==B[63]))  )? 64'b1:64'b0;
//assign sltu_result = (  add_sub_result[63] && add_sub_result!=64'b0 )? 64'b1:64'b0;
//assign sltu_result = (A < B)? 64'b1:64'b0;
assign sll_result = (A <<  B);
assign srl_result = (A >>  B);
assign sra_result = ($signed(A) >>> B);
assign and_result = (A & B);
assign or_result = (A | B);
assign xor_result = (A ^ B);


ysyx_22050612_MuxKey #(10, 12, 64) alu_result_select (Z , {2'b0,mode},{
	12'h1  , add_sub_result,
	12'h2  , add_sub_result,
	12'h4  , slt_result,
	12'h8  , sltu_result,
	12'h10 , and_result,
	12'h20 , or_result,
	12'h40 , xor_result,
	12'h80 , sll_result,
	12'h100, srl_result,
	12'h200, sra_result
      });


endmodule
