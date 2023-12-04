module ysyx_22050612_Adder #(WIDTH = 1)(
input [WIDTH-1:0] x,
input [WIDTH-1:0] y,
output [WIDTH-1:0] z
);

assign z = x + y;



endmodule
