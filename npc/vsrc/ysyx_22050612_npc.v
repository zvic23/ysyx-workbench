//import "DPI-C" function void ebreak ();

`define ysyx_22050612_rgsize 64

module ysyx_22050612_npc(
input clk,
input rst,

//output [31:0]inst,
output [63:0]pc

);

wire [31:0]inst;
wire [63:0]dnpc;

wire [63:0]imm_I;
wire [63:0]imm_U;
wire [63:0]imm_J;
wire [63:0]imm_B;
wire [ 4:0]rd;
wire [ 4:0]rs1;
wire [ 4:0]rs2;
wire [19:0]opcode;

//always @(posedge clk) begin
//  $display("%x",inst);
//end
ysyx_22050612_IFU ifu (clk, rst, dnpc, pc, inst);
ysyx_22050612_IDU idu (clk,inst, imm_I,imm_U,imm_J,imm_B, rd, rs1, rs2, opcode);
ysyx_22050612_EXU exu (clk,imm_I,imm_U,imm_J,imm_B,rd,rs1,rs2,opcode,pc,dnpc);

endmodule
