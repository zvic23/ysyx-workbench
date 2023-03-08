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


ysyx_22050612_MuxKey #(20, 10, 7) decode0 (opcode[6:0], {inst[14:12],inst[6:0]}, {
    10'b000_1100111, 7'd4 ,        //jalr
    10'b000_1100011, 7'd5 ,        //beq
    10'b001_1100011, 7'd6 ,        //bne
    10'b100_1100011, 7'd7 ,        //blt
    10'b101_1100011, 7'd8 ,        //bge
    10'b110_1100011, 7'd9 ,        //bltu
    10'b111_1100011, 7'd10,        //bgeu
    10'b001_0000011, 7'd12,        //lh
    10'b010_0000011, 7'd13,        //lw
    10'b100_0000011, 7'd14,        //lbu
    10'b000_0100011, 7'd16,        //sb   
    10'b001_0100011, 7'd17,        //sh
    10'b010_0100011, 7'd18,        //sw
    10'b000_0010011, 7'd19,        //addi
    10'b011_0010011, 7'd21,        //sltiu
    10'b100_0010011, 7'd22,        //xori
    10'b111_0010011, 7'd24,        //andi
    10'b011_0000011, 7'd42,        //ld
    10'b011_0100011, 7'd43,        //sd
    10'b000_0011011, 7'd47         //addiw
  });
ysyx_22050612_MuxKey #(3, 7, 2) decode1 (opcode[9:8], inst[6:0], {
    7'b0110111, 2'd1,        //lui
    7'b0010111, 2'd2,        //auipc
    7'b1101111, 2'd3         //jal
  });
ysyx_22050612_MuxKey #(13, 17, 8) decode2 (opcode[19:12], {inst[31:25],inst[14:12],inst[6:0]}, {
    17'b0000000_000_0110011, 8'h4,       //add
    17'b0100000_000_0110011, 8'h5,       //sub
    17'b0000000_010_0110011, 8'h7,       //slt
    17'b0000000_011_0110011, 8'h8,       //sltu
    17'b0000000_110_0110011, 8'h12,      //or
    17'b0000000_111_0110011, 8'h13,      //and
    17'b0000000_000_0111011, 8'h17,      //addw
    17'b0000000_001_0111011, 8'h19,      //sllw
    17'b0000001_101_0110011, 8'h22,      //divu
    17'b0000001_111_0110011, 8'h24,      //remu
    17'b0000001_000_0111011, 8'h25,      //mulw
    17'b0000001_100_0111011, 8'h26,      //divw
    17'b0000001_110_0111011, 8'h28       //remw
  });
ysyx_22050612_MuxKey #(3, 16, 2) decode3 (opcode[11:10], {inst[31:26],inst[14:12],inst[6:0]}, {
    16'b000000_001_0010011, 2'h1,       //slli
    16'b000000_101_0010011, 2'h2,       //srli
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
