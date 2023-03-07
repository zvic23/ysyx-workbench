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
input [63:0]imm_S,
input [ 5:0]shamt,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input [19:0]opcode,

input [63:0]pc,

//input Mr_val,
//output Mr_addr,
output [63:0]dnpc

);

wire [63:0]src1;
wire [63:0]src2;

wire [63:0]wdata_reg;
wire wen;
wire wen_fix;
wire [63:0] gpr[31:0];
assign src1=gpr[rs1];
assign src2=gpr[rs2];

//general register
ysyx_22050612_RegisterFile #(5,64) cpu_gpr_group (clk, wdata_reg, rd, wen_fix, gpr);
assign wen_fix = (rd == 5'b0)? 1'b0 : wen;


`define regwrite_inst_count 14
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 1) gpr_write_enable (wen, opcode, {
    20'h11000, 1'b1,
    20'h4000 , 1'b1,
    20'h5000 , 1'b1,
    20'h100  , 1'b1,
    20'h200  , 1'b1,
    20'h300  , 1'b1,
    20'hc00  , 1'b1,
    20'd4    , 1'b1,
    20'd13   , 1'b1,
    20'd14   , 1'b1,
    20'd19   , 1'b1,
    20'd21   , 1'b1,
    20'd42   , 1'b1,
    20'd47   , 1'b1
  });
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 64) gpr_write_data (wdata_reg, opcode, {
    20'h11000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h4000 , result_alu0,
    20'h5000 , result_alu0,
    20'h100  , imm_U,
    20'h200  , result_alu0,
    20'h300  , pc + 64'd4,
    20'hc00  , result_alu0,
    20'd4    , pc + 64'd4,
    20'd13   , rdata_fix,
    20'd14   , rdata_fix,
    20'd19   , result_alu0,
    20'd21   , result_alu0,
    20'd42   , rdata_fix,
    20'd47   , (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}))
  });



//pc
wire [63:0] snpc;
assign snpc = pc + 64'd4;
ysyx_22050612_MuxKeyWithDefault #(3, 20, 64) cpu_pc (dnpc, opcode, snpc, {
    20'h300 , result_alu0,
    20'd4   , {result_alu0[63:1],1'b0},
    20'd6   , (result_alu0!=0)?(imm_B+pc):snpc
  });


//adder
wire [7:0] mode;
wire [63:0]operator_a;
wire [63:0]operator_b;
wire [63:0]result_alu0;

`define alu_inst_count 16

ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator0 (operator_a, opcode, {
    20'h11000, src1,
    20'h4000 , src1,
    20'h5000 , src1,
    20'h200  , pc,
    20'h300  , pc,
    20'hc00  , src1,
    20'd4    , src1,
    20'd6    , src1,
    20'd13   , src1,
    20'd14   , src1,
    20'd17   , src1,
    20'd19   , src1,
    20'd21   , src1,
    20'd42   , src1,
    20'd43   , src1,
    20'd47   , src1
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator1 (operator_b, opcode, {
    20'h11000, src2 ,
    20'h4000 , src2 ,
    20'h5000 , src2 ,
    20'h200  , imm_U,
    20'h300  , imm_J,
    20'hc00  , {{58{1'b0}},shamt},
    20'd4    , imm_I,
    20'd6    , src2 ,
    20'd13   , imm_I,
    20'd14   , imm_I,
    20'd17   , imm_S,
    20'd19   , imm_I,
    20'd21   , imm_I,
    20'd42   , imm_I,
    20'd43   , imm_S,
    20'd47   , imm_I
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 8) alumode (mode, opcode, {
    20'h11000, 8'd0 , 
    20'h4000 , 8'd0 , 
    20'h5000 , 8'd1 , 
    20'h200  , 8'd0 , 
    20'h300  , 8'd0 , 
    20'hc00  , 8'd10,
    20'd4    , 8'd0 , 
    20'd6    , 8'd1 , 
    20'd13   , 8'd0 ,
    20'd14   , 8'd0 ,
    20'd17   , 8'd0 ,
    20'd19   , 8'd0 ,
    20'd21   , 8'd3 ,
    20'd42   , 8'd0 ,
    20'd43   , 8'd0 ,
    20'd47   , 8'd0
  });
//ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);
ysyx_22050612_ALU alu0 (mode,operator_a,operator_b,result_alu0);






wire [63:0] raddr;
wire [63:0] rdata;
wire [63:0] waddr;
wire [63:0] wdata;
wire [ 7:0] wmask;

ysyx_22050612_MuxKey #(3, 20, 64) raddr_select (raddr, opcode, {
    20'd13  , result_alu0,
    20'd14  , result_alu0,
    20'd42  , result_alu0
  });

ysyx_22050612_MuxKey #(2, 20, 64) waddr_select (waddr, opcode, {
    20'd17  , result_alu0,
    20'd43  , result_alu0
  });
ysyx_22050612_MuxKey #(2, 20, 64) wdata_select (wdata, opcode, {
    20'd17  , {{48{1'b0}},src2[15:0]},
    20'd43  , src2
  });
ysyx_22050612_MuxKey #(2, 20, 8 ) wmask_select (wmask, opcode, {
    20'd17  , 8'h3,
    20'd43  , 8'hff
  });

always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
end


wire [63:0] rdata_fix;
ysyx_22050612_MuxKey #(3, 20, 64) rdata_fixing (rdata_fix, opcode, {
    20'd13  , (raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]})),
    20'd14  , {{56{1'b0}},rdata_1byte},
    20'd42  , rdata
  });

wire [7:0] rdata_1byte;
ysyx_22050612_MuxKey #(8, 3, 8) rdata_1byte_fix (rdata_1byte, raddr[2:0], {
    3'd0  , rdata[ 7: 0], 
    3'd1  , rdata[15: 8],
    3'd2  , rdata[23:16],
    3'd3  , rdata[31:24],
    3'd4  , rdata[39:32],
    3'd5  , rdata[47:40],
    3'd6  , rdata[55:48],
    3'd7  , rdata[63:56]
  });









initial set_gpr_ptr(gpr);  

always @(posedge clk) begin
	if (opcode[9:8]==2'd3) ftrace_check(pc[63:0],dnpc[63:0], 1, 0, 1);
	else if (opcode[6:0]==7'd4) ftrace_check(pc[63:0],dnpc[63:0], {{27{1'b0}},rd}, {{27{1'b0}},rs1}, imm_I[63:0]);

	if (opcode[7]==1'b1 && gpr[10]==64'b0) ebreak(0);
	else if (opcode[7]==1'b1 && gpr[10]!=64'b0) ebreak(1);
end

















//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",result_alu0,wdata_reg,wen,opcode);
//    $display("%d,%d,%d",result_alu0,src1,imm_I);
//  end

endmodule
