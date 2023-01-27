`define ysyx_22050612_rgsize 64

import "DPI-C" function int add (input int a, input int b);

module ysyx_22050612_npc(
input clk,
input rst,

input [31:0]inst,
//input Mr_val,


//output Mr_addr,
output [63:0]pc

);


wire [63:0]dnpc;

wire [63:0]imm_I;
wire [ 4:0]rd;
wire [ 4:0]rs1;
wire [ 4:0]rs2;
wire opcode;

//  always @(posedge clk) begin
//    $display("%x",inst);
//  end
ysyx_22050612_IFU ifu (clk, rst, dnpc, pc);
ysyx_22050612_IDU idu (clk,inst, imm_I, rd, rs1, rs2, opcode);
ysyx_22050612_EXU exu (clk,imm_I,rd,rs1,rs2,opcode,pc,dnpc);


initial begin
   $display("%x + %x = %x", 3, 2, add(3,2));
end



endmodule
