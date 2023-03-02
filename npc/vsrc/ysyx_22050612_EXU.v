import "DPI-C" function void ebreak (int r);
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void ftrace_check(input int pc_up,int pc_lo,int dnpc_up,int dnpc_lo,int dest_register,int src_register,int imm_up,int imm_lo);



module ysyx_22050612_EXU(
input clk,
input [63:0]imm_I,
input [63:0]imm_U,
input [63:0]imm_J,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input [9:0]opcode,

input [63:0]pc,

//input Mr_val,
//output Mr_addr,
output [63:0]dnpc

);

wire [63:0]src1;
wire [63:0]src2;

wire [63:0]wdata;
wire wen;
wire [63:0] gpr[31:0];
assign src1=gpr[rs1];
assign src2=gpr[rs2];

//general register
ysyx_22050612_RegisterFile #(5,64) cpu_gpr_group (clk, wdata, rd, wen, gpr);

//assign wen = (opcode)? 1'b1:1'b0;
//assign wdata = (opcode)? sum0:64'b0;
ysyx_22050612_MuxKey #(5, 10, 1) gpr_write_enable (wen, opcode, {
    10'h100 , 1'b1,
    10'h200 , 1'b1,
    10'h300 , 1'b1,
    10'd4   , 1'b1,
    10'd19  , 1'b1
  });
ysyx_22050612_MuxKey #(5, 10, 64) gpr_write_data (wdata, opcode, {
    10'h100 , imm_U,
    10'h200 , sum_add0,
    10'h300 , pc + 64'd4,
    10'd4   , pc + 64'd4,
    10'd19  , sum_add0
  });

//pc
wire [63:0] snpc;
assign snpc = pc + 64'd4;
ysyx_22050612_MuxKeyWithDefault #(2, 10, 64) cpu_pc (dnpc, opcode, snpc, {
    10'h300 , sum_add0,
    10'd4   , {sum_add0[63:1],1'b0}
  });


//adder
wire [63:0]addend_a;
wire [63:0]addend_b;
wire [63:0]sum_add0;
ysyx_22050612_MuxKey #(4, 10, 64) addend0 (addend_a, opcode, {
    10'h200 , imm_U,
    10'h300 , imm_J,
    10'd4   , imm_I,
    10'd19  , imm_I
  });
ysyx_22050612_MuxKey #(4, 10, 64) addend1 (addend_b, opcode, {
    10'h200 , pc,
    10'h300 , pc,
    10'd4   , src1,
    10'd19  , src1
  });
ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);



initial set_gpr_ptr(gpr);  

always @(posedge clk) begin
	if (opcode[9:8]==2'd3)  ftrace_check(pc[63:32],pc[31:0],dnpc[63:32],dnpc[31:0], 1, 0,0,1);
	else if (opcode[6:0]==7'd4) ftrace_check(pc[63:32],pc[31:0],dnpc[63:32],dnpc[31:0], {{27{1'b0}},rd}, {{27{1'b0}},rs1}, imm_I[63:32],imm_I[31:0]);


	if (opcode[7]==1'b1 && gpr[10]==64'b0) ebreak(0);
	else if (opcode[7]==1'b1 && gpr[10]!=64'b0) ebreak(1);
end

//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",sum0,wdata,wen,opcode);
//    $display("%d,%d,%d",sum0,src1,imm_I);
//  end

endmodule
