module ysyx_22050612_divider(
	input clk,
	input rst,
	input div_valid,
	input flush,
	input divw,
	input div_signed,
	input [63:0]dividend,
	input [63:0]divisor,
	output div_ready,
	output out_valid,
	output [63:0]quotient,
	output [63:0]remainder,

	output reg [8:0]shift_times
);



reg quotient_signed_amend ; 
reg remainder_signed_amend;
reg divw_reg;

always @(posedge clk) begin
	if(rst || flush || out_valid) begin
		quotient_signed_amend  <= 1'b0;
		remainder_signed_amend <= 1'b0;
		divw_reg               <= 1'b0;
	end
	else if(div_valid && div_ready) begin
		if(divw) begin
			quotient_signed_amend  <= div_signed&&(dividend[31]^divisor[31]) ? 1'b1 : 1'b0;
			remainder_signed_amend <= div_signed&&dividend[31] ? 1'b1 : 1'b0;
		end
		else begin
			quotient_signed_amend  <= div_signed&&(dividend[63]^divisor[63]) ? 1'b1 : 1'b0;
			remainder_signed_amend <= div_signed&&dividend[63] ? 1'b1 : 1'b0;
		end
		divw_reg <= divw;
	end
end


/*
//reg [63:0]dividend_reg;
//reg [63:0]divisor_reg;
//reg divw_reg;
//reg div_signed_reg;


always @(posedge clk) begin
	if(rst || flush) begin
		dividend_reg <= 64'b0;
		divisor_reg  <= 64'b0;
		divw_reg     <= 1'b0;
		div_signed_reg <= 1'b0;
	end
	else if(div_valid && div_ready) begin
		dividend_reg <= dividend;
		divisor_reg  <= divisor;
		divw_reg     <= divw;
		div_signed_reg <= div_signed;
	end
	else if(out_valid) begin
		dividend_reg <= 64'b0;
		divisor_reg  <= 64'b0;
		divw_reg     <= 1'b0;
		div_signed_reg <= 1'b0;
	end
end
*/

wire [63:0]dividend_amend;
wire [63:0]divisor_amend;
//assign dividend_amend = (div_signed&&dividend[63]) ? -dividend : dividend;
//assign divisor_amend  = (div_signed&& divisor[63]) ? -divisor  : divisor ;
assign dividend_amend = divw ? ((div_signed&&dividend[31]) ? {-dividend[31:0],32'b0} : {dividend[31:0],32'b0}) : ((div_signed&&dividend[63]) ? -dividend : dividend);
assign divisor_amend  = divw ? ((div_signed&& divisor[31]) ? {32'b0,-divisor[31:0]} : {32'b0,divisor[31:0]}) : ((div_signed&& divisor[63]) ? -divisor  : divisor );

reg [127:0] dividend_s;
reg [63:0]  divisor_s;
//reg [8:0]   shift_times;
reg divider_working;
reg [63:0] s;

always @(posedge clk) begin
	if(rst || flush || out_valid) begin
		dividend_s   <= 128'b0;
		divisor_s    <= 64'b0;
		shift_times  <= 9'b0 ;
		divider_working <= 1'b0;
		s            <= 64'b0;
	end
	else if(div_valid && div_ready) begin
		dividend_s  <= {64'b0,dividend_amend};
		divisor_s   <= divisor_amend;
		shift_times  <= 9'b0 ;
		divider_working <= 1'b1;
		s            <= 64'b0;
	end
	else if(divider_working) begin
		if(part_sub[64]) begin
			dividend_s[127:1] <= dividend_s[126:0];
			s[63:1]     <= s[62:0];
			s[0]        <= 1'b0;
		end
		else begin
			dividend_s[127:64] <= part_sub[63:0];
			dividend_s[63:1] <= dividend_s[62:0];
			s[63:1]     <= s[62:0];
			s[0]        <= 1'b1;
		end
		shift_times <= shift_times + 1;
	end
end


wire [64:0]part_sub;
assign part_sub = dividend_s[127:63] - {1'b0,divisor_s};


assign div_ready = ~divider_working;
assign out_valid = divw_reg ? (shift_times == 9'd32) : (shift_times == 9'd64);
assign quotient  = out_valid ? (quotient_signed_amend ? -s : s) : 64'b0;
assign remainder = out_valid ? (remainder_signed_amend ? -dividend_s[127:64] : dividend_s[127:64]) : 64'b0;



endmodule
