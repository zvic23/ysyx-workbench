//import "DPI-C" function void ebreak (int r);

module ysyx_22050612_IDU(
input clk,
input [31:0]inst,

output [63:0]imm_I,
output [63:0]imm_U,
output [63:0]imm_J,
output [63:0]imm_B,
output [63:0]imm_S,
output [ 5:0]shamt,
output [ 4:0]rd,
output [ 4:0]rs1,
output [ 4:0]rs2,
output [19:0]opcode
);

assign rd = inst[11: 7];
assign rs1= inst[19:15];
assign rs2= inst[24:20];

assign shamt= inst[25:20];

assign imm_I = (inst[31]==1'b1)?{{52{1'b1}},inst[31:20]}:{{52{1'b0}},inst[31:20]};
assign imm_U = (inst[31]==1'b1)?{{32{1'b1}},inst[31:12],{12{1'b0}}}:{{32{1'b0}},inst[31:12],{12{1'b0}}};
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
assign imm_B = (inst[31]==1'b1)?{{51{1'b1}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}:{{51{1'b0}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
assign imm_S = (inst[31]==1'b1)?{{52{1'b1}},inst[31:25],inst[11:7]}:{{52{1'b0}},inst[31:25],inst[11:7]};



ysyx_22050612_MuxKey #(3, 7, 2) decode1 (opcode[9:8], inst[6:0], {
    7'b0110111, 2'd1,        //lui
    7'b0010111, 2'd2,        //auipc
    7'b1101111, 2'd3         //jal
  });
ysyx_22050612_MuxKey #(7, 17, 8) decode2 (opcode[19:12], {inst[31:25],inst[14:12],inst[6:0]}, {
    17'b0000000_000_0110011, 8'h4,       //add
    17'b0100000_000_0110011, 8'h5,       //sub
    17'b0000000_011_0110011, 8'h8,       //sltu
    17'b0000000_110_0110011, 8'h12,      //or
    17'b0000000_111_0110011, 8'h13,      //and
    17'b0000000_000_0111011, 8'h17,      //addw
    17'b0000000_001_0111011, 8'h19       //sllw
  });
ysyx_22050612_MuxKey #(1, 16, 2) decode3 (opcode[11:10], {inst[31:26],inst[14:12],inst[6:0]}, {
    16'b010000_101_0010011, 2'h3        //srai
  });







assign opcode[7]=(inst==32'h00100073)? 1'b1:1'b0;   //ebreak
//always @(posedge clk) begin
//	if(inst==32'h00100073) ebreak(1);
//end




//  always @(posedge clk) begin
//    $display("%x,%d,%d",inst,opcode,rd);
//  end


endmodule
