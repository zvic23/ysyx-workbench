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


`define regwrite_inst_count 36
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 1) gpr_write_enable (wen, opcode, {
    20'h4000 , 1'b1,
    20'h5000 , 1'b1,
    20'h7000 , 1'b1,
    20'h8000 , 1'b1,
    20'h12000, 1'b1,
    20'h13000, 1'b1,
    20'h14000, 1'b1,
    20'h15000, 1'b1,
    20'h16000, 1'b1,
    20'h17000, 1'b1,
    20'h18000, 1'b1,
    20'h19000, 1'b1,
    20'h1b000, 1'b1,
    20'h1d000, 1'b1,
    20'h22000, 1'b1,
    20'h24000, 1'b1,
    20'h25000, 1'b1,
    20'h26000, 1'b1,
    20'h28000, 1'b1,
    20'h100  , 1'b1,
    20'h200  , 1'b1,
    20'h300  , 1'b1,
    20'h400  , 1'b1,
    20'h800  , 1'b1,
    20'hc00  , 1'b1,
    20'd4    , 1'b1,
    20'd12   , 1'b1,
    20'd13   , 1'b1,
    20'd14   , 1'b1,
    20'd15   , 1'b1,
    20'd19   , 1'b1,
    20'd21   , 1'b1,
    20'd22   , 1'b1,
    20'd24   , 1'b1,
    20'd42   , 1'b1,
    20'd47   , 1'b1
  });
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 64) gpr_write_data (wdata_reg, opcode, {
    20'h4000 , result_alu0,
    20'h5000 , result_alu0,
    20'h7000 , result_alu0,
    20'h8000 , result_alu0,
    20'h12000, result_alu0,
    20'h13000, result_alu0,
    20'h14000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h15000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h16000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h17000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h18000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h19000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h1b000, (result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]})),
    20'h1d000, result_mul0,
    20'h22000, result_divu0,
    20'h24000, result_remu0,
    20'h25000, (result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]})),
    20'h26000, (result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]})),
    20'h28000, (result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]})),
    20'h100  , imm_U,
    20'h200  , result_alu0,
    20'h300  , pc + 64'd4,
    20'h400  , result_alu0,
    20'h800  , result_alu0,
    20'hc00  , result_alu0,
    20'd4    , pc + 64'd4,
    20'd12   , rdata_fix,
    20'd13   , rdata_fix,
    20'd14   , rdata_fix,
    20'd15   , rdata_fix,
    20'd19   , result_alu0,
    20'd21   , result_alu0,
    20'd22   , result_alu0,
    20'd24   , result_alu0,
    20'd42   , rdata_fix,
    20'd47   , (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}))
  });



//pc
wire [63:0] snpc;
assign snpc = pc + 64'd4;
ysyx_22050612_MuxKeyWithDefault #(8, 20, 64) cpu_pc (dnpc, opcode, snpc, {
    20'h300 , result_alu0,
    20'd4   , {result_alu0[63:1],1'b0},
    20'd5   , (result_alu0==64'b0)?(imm_B+pc):snpc,
    20'd6   , (result_alu0!=64'b0)?(imm_B+pc):snpc,
    20'd7   , (result_alu0[63]==1)?(imm_B+pc):snpc,
    20'd8   , (result_alu0[63]==0)?(imm_B+pc):snpc,
    20'd9   , (result_alu0[63]==1)?(imm_B+pc):snpc,
    20'd10  , (result_alu0[63]==0)?(imm_B+pc):snpc
  });


//alu
wire [7:0] mode;
wire [63:0]operator_a;
wire [63:0]operator_b;
wire [63:0]result_alu0;

`define alu_inst_count 39

ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator0 (operator_a, opcode, {
    20'h4000 , src1,
    20'h5000 , src1,
    20'h7000 , src1,
    20'h8000 , src1,
    20'h12000, src1,
    20'h13000, src1,
    20'h14000, {{32{1'b0}},src1[31:0]},
    20'h15000, {{32{1'b0}},src1[31:0]},
    20'h16000, {{32{1'b0}},src1[31:0]},
    20'h17000, src1,
    20'h18000, src1,
    20'h19000, src1,
    20'h1b000, {{32{1'h00000000}},{32{1'b0}}},
    20'h200  , pc,
    20'h300  , pc,
    20'h400  , src1,
    20'h800  , src1,
    20'hc00  , src1,
    20'd4    , src1,
    20'd5    , src1,
    20'd6    , src1,
    20'd7    , src1,
    20'd8    , src1,
    20'd9    , src1,
    20'd10   , src1,
    20'd12   , src1,
    20'd13   , src1,
    20'd14   , src1,
    20'd15   , src1,
    20'd16   , src1,
    20'd17   , src1,
    20'd18   , src1,
    20'd19   , src1,
    20'd21   , src1,
    20'd22   , src1,
    20'd24   , src1,
    20'd42   , src1,
    20'd43   , src1,
    20'd47   , src1
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator1 (operator_b, opcode, {
    20'h4000 , src2 ,
    20'h5000 , src2 ,
    20'h7000 , src2 ,
    20'h8000 , src2 ,
    20'h12000, src2 ,
    20'h13000, src2 ,
    20'h14000, {{59{1'b0}},shamt[4:0]},
    20'h15000, {{59{1'b0}},shamt[4:0]},
    20'h16000, {{59{1'b0}},shamt[4:0]},
    20'h17000, src2 ,
    20'h18000, src2 ,
    20'h19000, {{59{1'b0}},src2[4:0]},
    20'h1b000, {{59{1'b0}},src2[4:0]},
    20'h200  , imm_U,
    20'h300  , imm_J,
    20'h400  , {{58{1'b0}},shamt},
    20'h800  , {{58{1'b0}},shamt},
    20'hc00  , {{58{1'b0}},shamt},
    20'd4    , imm_I,
    20'd5    , src2 ,
    20'd6    , src2 ,
    20'd7    , src2 ,
    20'd8    , src2 ,
    20'd9    , src2 ,
    20'd10   , src2 ,
    20'd12   , imm_I,
    20'd13   , imm_I,
    20'd14   , imm_I,
    20'd15   , imm_I,
    20'd16   , imm_S,
    20'd17   , imm_S,
    20'd18   , imm_S,
    20'd19   , imm_I,
    20'd21   , imm_I,
    20'd22   , imm_I,
    20'd24   , imm_I,
    20'd42   , imm_I,
    20'd43   , imm_S,
    20'd47   , imm_I
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 8) alumode (mode, opcode, {
    20'h4000 , 8'd0 , 
    20'h5000 , 8'd1 , 
    20'h7000 , 8'd2 , 
    20'h8000 , 8'd3 , 
    20'h12000, 8'd6 , 
    20'h13000, 8'd4 , 
    20'h14000, 8'd8 , 
    20'h15000, 8'd9 , 
    20'h16000, 8'd10, 
    20'h17000, 8'd0 , 
    20'h18000, 8'd1 , 
    20'h19000, 8'd8 , 
    20'h1b000, 8'd10, 
    20'h200  , 8'd0 , 
    20'h300  , 8'd0 , 
    20'h400  , 8'd8 ,
    20'h800  , 8'd9 ,
    20'hc00  , 8'd10,
    20'd4    , 8'd0 , 
    20'd5    , 8'd1 , 
    20'd6    , 8'd1 , 
    20'd7    , 8'd1 , 
    20'd8    , 8'd1 , 
    20'd9    , 8'd1 , 
    20'd10   , 8'd1 , 
    20'd12   , 8'd0 ,
    20'd13   , 8'd0 ,
    20'd14   , 8'd0 ,
    20'd15   , 8'd0 ,
    20'd16   , 8'd0 ,
    20'd17   , 8'd0 ,
    20'd18   , 8'd0 ,
    20'd19   , 8'd0 ,
    20'd21   , 8'd3 ,
    20'd22   , 8'd7 ,
    20'd24   , 8'd4 ,
    20'd42   , 8'd0 ,
    20'd43   , 8'd0 ,
    20'd47   , 8'd0
  });
//ysyx_22050612_Adder #(64) add0 (addend_a,addend_b,sum_add0);
ysyx_22050612_ALU alu0 (mode,operator_a,operator_b,result_alu0);


//multipulicatin and division
wire[63:0] result_mul0;
assign result_mul0 = src1[63:0] * src2[63:0];

wire[63:0] result_divu0;
assign result_divu0 = src1[63:0] / src2[63:0];

wire[63:0] result_remu0;
assign result_remu0 = src1[63:0] % src2[63:0];

wire[63:0] result_mulw0;
assign result_mulw0 = src1[31:0] * src2[31:0];

wire[31:0] result_divw0;
assign result_divw0 = $signed(src1[31:0]) / $signed(src2[31:0]);

wire[31:0] result_remw0;
assign result_remw0 = $signed(src1[31:0]) % $signed(src2[31:0]);




//memory
wire [7:0]wmask_1byte;
wire [63:0]wdata_1byte;
ysyx_22050612_MuxKey #(8, 3, 64 ) wdata_onebyte (wdata_1byte, waddr[2:0], {
    3'd0  , {{56{1'b0}},src2[7:0]}, 
    3'd1  , {{48{1'b0}},src2[7:0],{ 8{1'b0}}},
    3'd2  , {{40{1'b0}},src2[7:0],{16{1'b0}}},
    3'd3  , {{32{1'b0}},src2[7:0],{24{1'b0}}},
    3'd4  , {{24{1'b0}},src2[7:0],{32{1'b0}}},
    3'd5  , {{16{1'b0}},src2[7:0],{40{1'b0}}},
    3'd6  , {{ 8{1'b0}},src2[7:0],{48{1'b0}}},
    3'd7  , {src2[7:0],{56{1'b0}}}
  });
ysyx_22050612_MuxKey #(8, 3, 8 ) wmask_onebyte (wmask_1byte, waddr[2:0], {
    3'd0  , 8'h1 , 
    3'd1  , 8'h2 ,
    3'd2  , 8'h4 ,
    3'd3  , 8'h8 ,
    3'd4  , 8'h10, 
    3'd5  , 8'h20, 
    3'd6  , 8'h40, 
    3'd7  , 8'h80 
  });


wire [7:0]wmask_2byte;
wire [63:0]wdata_2byte;
ysyx_22050612_MuxKey #(7, 3, 64 ) wdata_twobyte (wdata_2byte, waddr[2:0], {
    3'd0  , {{48{1'b0}},src2[15:0]}, 
    3'd1  , {{40{1'b0}},src2[15:0],{ 8{1'b0}}},
    3'd2  , {{32{1'b0}},src2[15:0],{16{1'b0}}},
    3'd3  , {{24{1'b0}},src2[15:0],{24{1'b0}}},
    3'd4  , {{16{1'b0}},src2[15:0],{32{1'b0}}},
    3'd5  , {{ 8{1'b0}},src2[15:0],{40{1'b0}}},
    3'd6  , {           src2[15:0],{48{1'b0}}}
  });                                              //between two 64bits has not been concerned
ysyx_22050612_MuxKey #(7, 3, 8 ) wmask_twobyte (wmask_2byte, waddr[2:0], {
    3'd0  , 8'h3 , 
    3'd1  , 8'h6 ,
    3'd2  , 8'hc ,
    3'd3  , 8'h8 ,
    3'd4  , 8'h11, 
    3'd5  , 8'h30, 
    3'd6  , 8'h60
  });



wire [63:0] raddr;
wire [63:0] rdata;
wire [63:0] waddr;
wire [63:0] wdata;
wire [ 7:0] wmask;

ysyx_22050612_MuxKey #(5, 20, 64) raddr_select (raddr, opcode, {
    20'd12  , result_alu0,
    20'd13  , result_alu0,
    20'd14  , result_alu0,
    20'd15  , result_alu0,
    20'd42  , result_alu0
  });

ysyx_22050612_MuxKey #(4, 20, 64) waddr_select (waddr, opcode, {
    20'd16  , result_alu0,
    20'd17  , result_alu0,
    20'd18  , result_alu0,
    20'd43  , result_alu0
  });
ysyx_22050612_MuxKey #(4, 20, 64) wdata_select (wdata, opcode, {
    20'd16  , wdata_1byte,
    20'd17  , wdata_2byte,
    20'd18  , (waddr[2]?{src2[31:0],{32{1'b0}}}:{{32{1'b0}},src2[31:0]}),
    20'd43  , src2
  });
ysyx_22050612_MuxKey #(4, 20, 8 ) wmask_select (wmask, opcode, {
    20'd16  , wmask_1byte,
    20'd17  , wmask_2byte,
    20'd18  , (waddr[2]? 8'b11110000:8'b00001111),
    20'd43  , 8'hff
  });

always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
end


wire [63:0] rdata_fix;
ysyx_22050612_MuxKey #(5, 20, 64) rdata_fixing (rdata_fix, opcode, {
    20'd12  , (rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte}),
    20'd13  , (raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]})),
    20'd14  , {{56{1'b0}},rdata_1byte},
    20'd15  , {{48{1'b0}},rdata_2byte},
    20'd42  , rdata
  });

wire [7:0] rdata_1byte;
ysyx_22050612_MuxKey #(8, 3, 8) rdata_onebyte (rdata_1byte, raddr[2:0], {
    3'd0  , rdata[ 7: 0], 
    3'd1  , rdata[15: 8],
    3'd2  , rdata[23:16],
    3'd3  , rdata[31:24],
    3'd4  , rdata[39:32],
    3'd5  , rdata[47:40],
    3'd6  , rdata[55:48],
    3'd7  , rdata[63:56]
  });

wire [15:0] rdata_2byte;
ysyx_22050612_MuxKey #(7, 3, 16) rdata_twobyte (rdata_2byte, raddr[2:0], {
    3'd0  , rdata[15: 0], 
    3'd1  , rdata[23: 8],
    3'd2  , rdata[31:16],
    3'd3  , rdata[39:24],
    3'd4  , rdata[47:32],
    3'd5  , rdata[55:40],
    3'd6  , rdata[63:48]
  });   //between two 64bits has not been concerned







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
