//`define use_walloc

module ysyx_22050612_multiplier(
	input clk,
	input rst,
	input mul_valid,
	input flush,
	input mulw,
	input [1:0]mul_signed,
	input [63:0]multiplicand,
	input [63:0]multiplier,
	output mul_ready,
	output out_valid,
	output [63:0]result_hi,
	output [63:0]result_lo
);

`ifdef use_walloc
`else




wire [64:0]multiplicand_amend;
wire [64:0]multiplier_amend;
assign multiplicand_amend = mulw ? ((mul_signed[0]&&multiplicand[63]) ? {multiplicand[63],multiplicand} : {1'b0,multiplicand}) : 
	                           ((mul_signed[0]&&multiplicand[31]) ? {32'b0,multiplicand[31],multiplicand[31:0]} : {33'b0,multiplicand[31:0]});
assign multiplier_amend   = mulw ? ((mul_signed[0]&&multiplier[63]) ? {multiplier[63],multiplier} : {1'b0,multiplier}) : 
	                           ((mul_signed[0]&&multiplier[31]) ? {32'b0,multiplier[31],multiplier[31:0]} : {33'b0,multiplier[31:0]});


reg [129:0] multiplicand_shift;
reg [64:0] multiplier_shift;
reg [8:0]shift_times;
reg mulw_reg;
reg mul_working;
reg [129:0] result;

always @(posedge clk) begin
	if(rst || flush || out_valid) begin
		mul_working <= 1'b0;
		mulw_reg    <= 1'b0;
		multiplicand_shift <= 130'b0;
		multiplier_shift   <= 65'b0;
		result             <= 130'b0;
		shift_times        <= 9'b0;

	end
	else if(mul_valid&&mul_ready) begin
		mul_working <= 1'b1;
		mulw_reg    <= mulw;
		multiplicand_shift <= {65'b0,multiplicand_amend};
		multiplier_shift   <= multiplier_amend;
		result             <= 130'b0;
		shift_times        <= 9'b0;
	end
	else if(mul_working) begin
		multiplicand_shift <= {multiplicand_shift[128:0],1'b0};
		multiplier_shift   <= {1'b0,multiplier_shift[64:1]};
		result             <= multiplier_shift[0] ? (result + multiplicand_shift) : result;
		shift_times        <= shift_times + 1;
	end

end

assign mul_ready = ~mul_working;
assign out_valid = mulw_reg ? (shift_times == 9'd33) : (shift_times == 9'd65);
assign result_hi = result[127:64];
assign result_lo = result[63:0];
/*
always @(negedge clk) begin
	if(mul_working) begin
		$display("1:%h      2:%h     result:%h",multiplicand_shift,multiplier_shift,result);
	end
end
*/
`endif



endmodule
