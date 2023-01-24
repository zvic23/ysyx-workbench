module ysyx_22050612_EXU(
input clk,
input [63:0]imm_I,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input opcode,

input [63:0]pc,

//input Mr_val,
//output Mr_addr,
output [63:0]dnpc

);
wire [63:0] snpc;
assign snpc = pc + 64'd4;
assign dnpc = snpc;

wire [63:0]src1;
wire [63:0]src2;

wire [63:0]wdata;
wire wen;
wire [63:0] gpr_gp[31:0];
assign src1=gpr_gp[rs1];
assign src2=gpr_gp[rs2];

ysyx_22050612_RegisterFile #(5,64) gpr (clk, wdata, rd, wen, gpr_gp);

wire [63:0]sum0;

ysyx_22050612_Adder #(64) add0 (imm_I,src1,sum0);

assign wen = (opcode)? 1'b1:1'b0;
assign wdata = (opcode)? sum0:64'b0;
//ysyx_22050612_MuxKey #(1, 1, 1) i0 (wen, opcode, {
//    1'b1, 1'b1
//  });
//ysyx_22050612_MuxKey #(1, 1, 64) i1 (wdata, opcode, {
//    1'b1, sum0
//  });

//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",sum0,wdata,wen,opcode);
//    $display("%d,%d,%d",sum0,src1,imm_I);
//  end

endmodule
