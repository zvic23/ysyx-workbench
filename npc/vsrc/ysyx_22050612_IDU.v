import "DPI-C" function void ebreak ();

module ysyx_22050612_IDU(
input clk,
input [31:0]inst,

output [63:0]imm_I,
output [63:0]imm_U,
output [63:0]imm_J,
output [ 4:0]rd,
output [ 4:0]rs1,
output [ 4:0]rs2,
output [9:0]opcode
);

assign rd = inst[11: 7];
assign rs1= inst[19:15];
assign rs2= inst[24:20];

assign imm_I = (inst[31]==1'b1)?{{52{1'b1}},inst[31:20]}:{{52{1'b0}},inst[31:20]};
assign imm_U = (inst[31]==1'b1)?{{32{1'b1}},inst[31:12],{12{1'b0}}}:{{32{1'b0}},inst[31:12],{12{1'b0}}};
assign imm_J = (inst[31]==1'b1)?{{43{1'b1}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}:{{43{1'b0}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};


ysyx_22050612_MuxKey #(4, 7, 10) decode0 (opcode, inst[6:0], {
    7'b011_0111, 10'd1,        //lui
    7'b001_0111, 10'd2,        //auipc
    7'b110_1111, 10'd3,        //jal
    7'b001_0011, 10'd19        //addi
  });
ysyx_22050612_MuxKey #(1, 10, 10) decode1 (opcode, {inst[14:12],inst[6:0]}, {
    10'b000_011_0111, 10'd4        //jalr
  });

always @(posedge clk) begin
	if(inst==32'h00100073) ebreak();
end

//  always @(posedge clk) begin
//    $display("%x,%d,%d",inst,opcode,rd);
//  end


endmodule
