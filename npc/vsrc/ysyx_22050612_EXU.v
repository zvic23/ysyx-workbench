module ysyx_22050612_EXU(
input clk,
input [63:0]imm_I,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input [9:0]opcode,

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
wire [63:0] gpr[31:0];
assign src1=gpr[rs1];
assign src2=gpr[rs2];

//general register
ysyx_22050612_RegisterFile #(5,64) gpr_group (clk, wdata, rd, wen, gpr);

//assign wen = (opcode)? 1'b1:1'b0;
//assign wdata = (opcode)? sum0:64'b0;
ysyx_22050612_MuxKey #(1, 10, 1) decode0 (wen, opcode, {
    10'd19, 1'b1
  });
ysyx_22050612_MuxKey #(1, 10, 64) decode1 (wdata, opcode, {
    10'd19, sum_add0
  });


//adder
wire [63:0]addend_a;
wire [63:0]addend_b;
wire [63:0]sum_add0;
ysyx_22050612_MuxKey #(1, 10, 64) addend0 (addend_a, opcode, {
    10'd19, imm_I
  });
ysyx_22050612_MuxKey #(1, 10, 64) addend1 (addend_b, opcode, {
    10'd19, src1
  });
ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);




//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",sum0,wdata,wen,opcode);
//    $display("%d,%d,%d",sum0,src1,imm_I);
//  end

endmodule
