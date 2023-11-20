module ysyx_22050612_multiplier(
	input clk,
	input rst,
	input mul_valid,
	input flush,
	input mulw,
	input [1:0]mul_signed,
	input [63:0]multiplicand,
	input [63:0]multiplier,
	input mul_ready,
	output out_valid,
	output [63:0]result_hi,
	output [63:0]result_lo
)


