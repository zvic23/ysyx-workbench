module ysyx_22050612_PART_PRODUCT(
	input [2:0]y_in,
	input [131:0]x,
	output [131:0]p,
	output c
);

///y+1,y,y-1///
wire y_add,y,y_sub;
assign y_add = y_in[2];
assign y     = y_in[1];
assign y_sub = y_in[0];
wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;


assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
assign sel_double_negative =  y_add & ~y & ~y_sub;
assign sel_double_positive = ~y_add &  y &  y_sub;

wire [131:0]x_sub;
assign x_sub = x<<1;

assign p = ~(~({132{sel_negative}} & -x) & ~({132{sel_double_negative}} & -x_sub) & ~({132{sel_positive}} & x ) & ~({132{sel_double_positive}} &  x_sub));
assign c = (sel_negative || sel_double_negative);
endmodule
