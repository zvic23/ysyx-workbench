import "DPI-C" function void ebreak (int r);
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void ftrace_check(longint pc, longint dnpc,int dest_register,int src_register,longint imm);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_EXU(
input clk,
input [63:0]imm_I,
input [63:0]imm_U,
input [63:0]imm_J,
input [63:0]imm_B,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input [15:0]opcode,

input [63:0]pc,

//input Mr_val,
//output Mr_addr,
output [63:0]dnpc

);

wire [63:0]src1;
wire [63:0]src2;

wire [63:0]wdata;
wire wen;
wire wen_fix;
wire [63:0] gpr[31:0];
assign src1=gpr[rs1];
assign src2=gpr[rs2];

//general register
ysyx_22050612_RegisterFile #(5,64) cpu_gpr_group (clk, wdata, rd, wen_fix, gpr);

assign wen_fix = (rd == 5'b0)? 1'b0 : wen;


ysyx_22050612_MuxKey #(9, 16, 1) gpr_write_enable (wen, opcode, {
    16'h5000 , 1'b1,
    16'h100  , 1'b1,
    16'h200  , 1'b1,
    16'h300  , 1'b1,
    16'd4    , 1'b1,
    16'd13   , 1'b1,
    16'd19   , 1'b1,
    16'd21   , 1'b1,
    16'd47   , 1'b1
  });
ysyx_22050612_MuxKey #(9, 16, 64) gpr_write_data (wdata, opcode, {
    16'h5000 , result_alu0,
    16'h100  , imm_U,
    16'h200  , result_alu0,
    16'h300  , pc + 64'd4,
    16'd4    , pc + 64'd4,
    16'd13   , (raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]})),
    16'd19   , result_alu0,
    16'd21   , result_alu0,
    16'd47   , (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}))
  });



//pc
wire [63:0] snpc;
assign snpc = pc + 64'd4;
ysyx_22050612_MuxKeyWithDefault #(3, 16, 64) cpu_pc (dnpc, opcode, snpc, {
    16'h300 , result_alu0,
    16'd4   , {result_alu0[63:1],1'b0},
    16'd6   , (result_alu0!=0)?(imm_B+pc):snpc
  });


//adder
wire [7:0] mode;
wire [63:0]operator_a;
wire [63:0]operator_b;
wire [63:0]result_alu0;

ysyx_22050612_MuxKey #(9, 16, 64) operator0 (operator_a, opcode, {
    16'h5000 , src1,
    16'h200  , pc,
    16'h300  , pc,
    16'd4    , src1,
    16'd6    , src1,
    16'd13   , src1,
    16'd19   , src1,
    16'd21   , src1,
    16'd47   , src1
  });
ysyx_22050612_MuxKey #(9, 16, 64) operator1 (operator_b, opcode, {
    16'h5000 , src2 ,
    16'h200  , imm_U,
    16'h300  , imm_J,
    16'd4    , imm_I,
    16'd6    , src2 ,
    16'd13   , imm_I,
    16'd19   , imm_I,
    16'd21   , imm_I,
    16'd47   , imm_I
  });
ysyx_22050612_MuxKey #(9, 16, 8) alumode (mode, opcode, {
    16'h5000 , 8'd1, 
    16'h200  , 8'd0, 
    16'h300  , 8'd0, 
    16'd4    , 8'd0, 
    16'd6    , 8'd1, 
    16'd13   , 8'd0,
    16'd19   , 8'd0,
    16'd21   , 8'd3,
    16'd47   , 8'd0
  });
//ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);
ysyx_22050612_ALU alu0 (mode,operator_a,operator_b,result_alu0);








ysyx_22050612_MuxKey #(1, 16, 64) raddr_select (raddr, opcode, {
    16'd13  , result_alu0
  });


wire [63:0] raddr;
wire [63:0] rdata;
always @(*) begin
  pmem_read(raddr, rdata);
  //pmem_write(waddr, wdata, wmask);
end






initial set_gpr_ptr(gpr);  

always @(posedge clk) begin
	if (opcode[9:8]==2'd3) ftrace_check(pc[63:0],dnpc[63:0], 1, 0, 1);
	else if (opcode[6:0]==7'd4) ftrace_check(pc[63:0],dnpc[63:0], {{27{1'b0}},rd}, {{27{1'b0}},rs1}, imm_I[63:0]);

	if (opcode[7]==1'b1 && gpr[10]==64'b0) ebreak(0);
	else if (opcode[7]==1'b1 && gpr[10]!=64'b0) ebreak(1);
end

















//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",result_alu0,wdata,wen,opcode);
//    $display("%d,%d,%d",result_alu0,src1,imm_I);
//  end

endmodule
