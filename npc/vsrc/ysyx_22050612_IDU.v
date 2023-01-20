module ysyx_22050612_IDU(
input [31:0]inst,




output [63:0]imm_I,
output [ 4:0]rd,
output [ 4:0]rs1,
output [ 4:0]rs2,
output [ 9:0]opcode


);

assign rd = inst[11: 7];
assign rs1= inst[19:15];
assign rs2= inst[24:20];

assign imm_I= (inst[31]==1'b1)?{{52{1'b1}},inst[31:20]}:{{52{1'b0}},inst[31:20]};

ysyx_22050612_MuxKey #(1, 7, 10) a3 (opcode, inst[6:0], {
    7'b0010011, 10'b1
  });





endmodule
