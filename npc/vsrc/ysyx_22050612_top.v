module ysyx_22050612_npc(
input clk,
input rst,

input [31:0]inst,
input Mr_val,


output Mr_addr,
output [63:0]pc

);

ysyx_22050612_IFU(     );
ysyx_22050612_IDU(     );
ysyx_22050612_EXU(     );






endmodule
