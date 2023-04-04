import "DPI-C" function void ebreak (int r);
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void ftrace_check(longint pc, longint dnpc,int dest_register,int src_register,longint imm);
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_EXU(
input clk,
input rst,
input [63:0]imm_I,
input [63:0]imm_U,
input [63:0]imm_J,
input [63:0]imm_B,
input [63:0]imm_S,
input [ 5:0]shamt,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
input [23:0]opcode,

input [63:0]pc,


//output [63:0]dnpc
output reg [63:0]dnpc

);

wire [63:0]src1;
wire [63:0]src2;
//wire [63:0]wdata_reg;
//wire wen;
reg [63:0]wdata_reg;
reg wen;
wire wen_fix;
wire [63:0] gpr[31:0];
assign src1=gpr[rs1];
assign src2=gpr[rs2];

//general register
ysyx_22050612_RegisterFile #(5,64) cpu_gpr_group (clk, wdata_reg, rd, wen_fix, gpr);
assign wen_fix = (rd == 5'b0)? 1'b0 : wen;




reg [63:0]wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus;
reg [63:0]mtvec,mepc,mcause,mstatus;
reg wen_mtvec,wen_mepc,wen_mcause,wen_mstatus;
reg [63:0]src_csr;

//control and status register
ysyx_22050612_Reg #(64,64'h0) mtvec_csr           (clk, rst, wdata_mtvec  , mtvec  , wen_mtvec  );
ysyx_22050612_Reg #(64,64'h0) mepc_csr            (clk, rst, wdata_mepc   , mepc   , wen_mepc   );
ysyx_22050612_Reg #(64,64'h0) mcause_csr          (clk, rst, wdata_mcause , mcause , wen_mcause );
ysyx_22050612_Reg #(64,64'ha00001800) mstatus_csr (clk, rst, wdata_mstatus, mstatus, wen_mstatus);


always @(*) begin
//mtvec control
  	case (opcode)
    24'd49   : wen_mtvec=(imm_I[11:0]==12'h305)? 1'b1:1'b0;
    default:   wen_mtvec=1'b0;
        endcase

	case (opcode)
    24'd49   : wdata_mtvec=src1;
    default:   wdata_mtvec=64'b0;
        endcase
//mepc control
  	case (opcode)
    24'd49     : wen_mepc=(imm_I[11:0]==12'h341)? 1'b1:1'b0;
    24'd50     : wen_mepc=(imm_I[11:0]==12'h341)? 1'b1:1'b0;
    24'h200000 : wen_mepc=1'b1;
    default:   wen_mepc=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mepc=src1;
    24'd50     : wdata_mepc=result_alu0;
    24'h200000 : wdata_mepc=pc;
    default:   wdata_mepc=64'b0;
        endcase
//mcause control
  	case (opcode)
    24'd49     : wen_mcause=(imm_I[11:0]==12'h342)? 1'b1:1'b0;
    24'd50     : wen_mcause=(imm_I[11:0]==12'h342)? 1'b1:1'b0;
    24'h200000 : wen_mcause=1'b1;
    default:   wen_mcause=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mcause=src1;
    24'd50     : wdata_mcause=result_alu0;
    24'h200000 : wdata_mcause=64'hb;
    default:   wdata_mcause=64'b0;
        endcase
//mstatus control
  	case (opcode)
    24'd49     : wen_mstatus=(imm_I[11:0]==12'h300)? 1'b1:1'b0;
    24'd50     : wen_mstatus=(imm_I[11:0]==12'h300)? 1'b1:1'b0;
    default:   wen_mstatus=1'b0;
        endcase

	case (opcode)
    24'd49     : wdata_mstatus=src1;
    24'd50     : wdata_mstatus=result_alu0;
    default:   wdata_mstatus=64'b0;
        endcase
//src_csr
  	case (imm_I[11:0])
    12'h305: src_csr=mtvec;
    12'h341: src_csr=mepc;
    12'h342: src_csr=mcause;
    12'h300: src_csr=mstatus;
    default:   src_csr=64'b0;

        endcase
end
always @(*) begin
//gpr control
	case (opcode)
    24'h4000 : wen=1'b1;
    24'h5000 : wen=1'b1;
    24'h6000 : wen=1'b1;
    24'h7000 : wen=1'b1;
    24'h8000 : wen=1'b1;
    24'h9000 : wen=1'b1;
    24'h12000: wen=1'b1;
    24'h13000: wen=1'b1;
    24'h14000: wen=1'b1;
    24'h15000: wen=1'b1;
    24'h16000: wen=1'b1;
    24'h17000: wen=1'b1;
    24'h18000: wen=1'b1;
    24'h19000: wen=1'b1;
    24'h1a000: wen=1'b1;
    24'h1b000: wen=1'b1;
    24'h1d000: wen=1'b1;
    24'h22000: wen=1'b1;
    24'h24000: wen=1'b1;
    24'h25000: wen=1'b1;
    24'h26000: wen=1'b1;
    24'h27000: wen=1'b1;
    24'h28000: wen=1'b1;
    24'h29000: wen=1'b1;
    24'h100  : wen=1'b1;
    24'h200  : wen=1'b1;
    24'h300  : wen=1'b1;
    24'h400  : wen=1'b1;
    24'h800  : wen=1'b1;
    24'hc00  : wen=1'b1;
    24'd4    : wen=1'b1;
    24'd11   : wen=1'b1;
    24'd12   : wen=1'b1;
    24'd13   : wen=1'b1;
    24'd14   : wen=1'b1;
    24'd15   : wen=1'b1;
    24'd19   : wen=1'b1;
    24'd20   : wen=1'b1;
    24'd21   : wen=1'b1;
    24'd22   : wen=1'b1;
    24'd23   : wen=1'b1;
    24'd24   : wen=1'b1;
    24'd41   : wen=1'b1;
    24'd42   : wen=1'b1;
    24'd47   : wen=1'b1;
    24'd49   : wen=1'b1;
    24'd50   : wen=1'b1;
    default:  wen=1'b0;
        endcase


	case (opcode)
    24'h4000 : wdata_reg=result_alu0;
    24'h5000 : wdata_reg=result_alu0;
    24'h6000 : wdata_reg=result_alu0;
    24'h7000 : wdata_reg=result_alu0;
    24'h8000 : wdata_reg=result_alu0;
    24'h9000 : wdata_reg=result_alu0;
    24'h12000: wdata_reg=result_alu0;
    24'h13000: wdata_reg=result_alu0;
    24'h14000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h15000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h16000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h17000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h18000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h19000: wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'h1a000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1b000: wdata_reg=(result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]}));
    24'h1d000: wdata_reg=result_mul0;
    24'h22000: wdata_reg=result_divu0;
    24'h24000: wdata_reg=result_remu0;
    24'h25000: wdata_reg=(result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]}));
    24'h26000: wdata_reg=(result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]}));
    24'h27000: wdata_reg=(result_divuw0[31]?({{32{1'b1}},result_divuw0[31:0]}):({{32{1'b0}},result_divuw0[31:0]}));
    24'h28000: wdata_reg=(result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]}));
    24'h28000: wdata_reg=(result_remuw0[31]?({{32{1'b1}},result_remuw0[31:0]}):({{32{1'b0}},result_remuw0[31:0]}));
    24'h100  : wdata_reg=imm_U;
    24'h200  : wdata_reg=result_alu0;
    24'h300  : wdata_reg=pc + 64'd4;
    24'h400  : wdata_reg=result_alu0;
    24'h800  : wdata_reg=result_alu0;
    24'hc00  : wdata_reg=result_alu0;
    24'd4    : wdata_reg=pc + 64'd4;
    24'd11   : wdata_reg=rdata_fix;
    24'd12   : wdata_reg=rdata_fix;
    24'd13   : wdata_reg=rdata_fix;
    24'd14   : wdata_reg=rdata_fix;
    24'd15   : wdata_reg=rdata_fix;
    24'd19   : wdata_reg=result_alu0;
    24'd20   : wdata_reg=result_alu0;
    24'd21   : wdata_reg=result_alu0;
    24'd22   : wdata_reg=result_alu0;
    24'd23   : wdata_reg=result_alu0;
    24'd24   : wdata_reg=result_alu0;
    24'd41   : wdata_reg=rdata_fix;
    24'd42   : wdata_reg=rdata_fix;
    24'd47   : wdata_reg=(result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}));
    24'd49   : wdata_reg=src_csr;
    24'd50   : wdata_reg=src_csr;
    default : wdata_reg=64'b0;
	endcase

//alu
    case (opcode)
    24'h4000 : operator_a=src1;
    24'h5000 : operator_a=src1;
    24'h6000 : operator_a=src1;
    24'h7000 : operator_a=src1;
    24'h8000 : operator_a=src1;
    24'h9000 : operator_a=src1;
    24'h12000: operator_a=src1;
    24'h13000: operator_a=src1;
    24'h14000: operator_a={{32{1'b0}},src1[31:0]};
    24'h15000: operator_a={{32{1'b0}},src1[31:0]};
    24'h16000: operator_a={src1[31:0],{32{1'b0}}};
    24'h17000: operator_a=src1;
    24'h18000: operator_a=src1;
    24'h19000: operator_a=src1;
    24'h1a000: operator_a={src1[31:0],{32{1'b0}}};
    24'h1b000: operator_a={src1[31:0],{32{1'b0}}};
    24'h200  : operator_a=pc;
    24'h300  : operator_a=pc;
    24'h400  : operator_a=src1;
    24'h800  : operator_a=src1;
    24'hc00  : operator_a=src1;
    24'd4    : operator_a=src1;
    24'd5    : operator_a=src1;
    24'd6    : operator_a=src1;
    24'd7    : operator_a=src1;
    24'd8    : operator_a=src1;
    24'd9    : operator_a=src1;
    24'd10   : operator_a=src1;
    24'd11   : operator_a=src1;
    24'd12   : operator_a=src1;
    24'd13   : operator_a=src1;
    24'd14   : operator_a=src1;
    24'd15   : operator_a=src1;
    24'd16   : operator_a=src1;
    24'd17   : operator_a=src1;
    24'd18   : operator_a=src1;
    24'd19   : operator_a=src1;
    24'd20   : operator_a=src1;
    24'd21   : operator_a=src1;
    24'd22   : operator_a=src1;
    24'd23   : operator_a=src1;
    24'd24   : operator_a=src1;
    24'd41   : operator_a=src1;
    24'd42   : operator_a=src1;
    24'd43   : operator_a=src1;
    24'd47   : operator_a=src1;
    24'd50   : operator_a=src1;
    default : operator_a=64'b0;
    endcase

    case (opcode)
    24'h4000 : operator_b=src2 ;
    24'h5000 : operator_b=src2 ;
    24'h6000 : operator_b={{58{1'b0}},src2[5:0]};
    24'h7000 : operator_b=src2 ;
    24'h8000 : operator_b=src2 ;
    24'h9000 : operator_b=src2 ;
    24'h12000: operator_b=src2 ;
    24'h13000: operator_b=src2 ;
    24'h14000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h15000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h16000: operator_b={{59{1'b0}},shamt[4:0]};
    24'h17000: operator_b=src2 ;
    24'h18000: operator_b=src2 ;
    24'h19000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1a000: operator_b={{59{1'b0}},src2[4:0]};
    24'h1b000: operator_b={{59{1'b0}},src2[4:0]};
    24'h200  : operator_b=imm_U;
    24'h300  : operator_b=imm_J;
    24'h400  : operator_b={{58{1'b0}},shamt};
    24'h800  : operator_b={{58{1'b0}},shamt};
    24'hc00  : operator_b={{58{1'b0}},shamt};
    24'd4    : operator_b=imm_I;
    24'd5    : operator_b=src2 ;
    24'd6    : operator_b=src2 ;
    24'd7    : operator_b=src2 ;
    24'd8    : operator_b=src2 ;
    24'd9    : operator_b=src2 ;
    24'd10   : operator_b=src2 ;
    24'd11   : operator_b=imm_I;
    24'd12   : operator_b=imm_I;
    24'd13   : operator_b=imm_I;
    24'd14   : operator_b=imm_I;
    24'd15   : operator_b=imm_I;
    24'd16   : operator_b=imm_S;
    24'd17   : operator_b=imm_S;
    24'd18   : operator_b=imm_S;
    24'd19   : operator_b=imm_I;
    24'd20   : operator_b=imm_I;
    24'd21   : operator_b=imm_I;
    24'd22   : operator_b=imm_I;
    24'd23   : operator_b=imm_I;
    24'd24   : operator_b=imm_I;
    24'd41   : operator_b=imm_I;
    24'd42   : operator_b=imm_I;
    24'd43   : operator_b=imm_S;
    24'd47   : operator_b=imm_I;
    24'd50   : operator_b=src_csr;
    default : operator_b=64'b0;
    endcase


    case(opcode)
    24'h4000 : mode=8'd0 ; 
    24'h5000 : mode=8'd1 ; 
    24'h6000 : mode=8'd8 ; 
    24'h7000 : mode=8'd2 ; 
    24'h8000 : mode=8'd3 ; 
    24'h9000 : mode=8'd7 ; 
    24'h12000: mode=8'd6 ; 
    24'h13000: mode=8'd4 ; 
    24'h14000: mode=8'd8 ; 
    24'h15000: mode=8'd9 ; 
    24'h16000: mode=8'd10; 
    24'h17000: mode=8'd0 ; 
    24'h18000: mode=8'd1 ; 
    24'h19000: mode=8'd8 ; 
    24'h1a000: mode=8'd9 ; 
    24'h1b000: mode=8'd10; 
    24'h200  : mode=8'd0 ; 
    24'h300  : mode=8'd0 ; 
    24'h400  : mode=8'd8 ;
    24'h800  : mode=8'd9 ;
    24'hc00  : mode=8'd10;
    24'd4    : mode=8'd0 ; 
    24'd5    : mode=8'd1 ; 
    24'd6    : mode=8'd1 ; 
    24'd7    : mode=8'd1 ; 
    24'd8    : mode=8'd1 ; 
    24'd9    : mode=8'd1 ; 
    24'd10   : mode=8'd1 ; 
    24'd11   : mode=8'd0 ;
    24'd12   : mode=8'd0 ;
    24'd13   : mode=8'd0 ;
    24'd14   : mode=8'd0 ;
    24'd15   : mode=8'd0 ;
    24'd16   : mode=8'd0 ;
    24'd17   : mode=8'd0 ;
    24'd18   : mode=8'd0 ;
    24'd19   : mode=8'd0 ;
    24'd20   : mode=8'd2 ;
    24'd21   : mode=8'd3 ;
    24'd22   : mode=8'd7 ;
    24'd23   : mode=8'd6 ;
    24'd24   : mode=8'd4 ;
    24'd41   : mode=8'd0 ;
    24'd42   : mode=8'd0 ;
    24'd43   : mode=8'd0 ;
    24'd47   : mode=8'd0 ;
    24'd50   : mode=8'd6 ;
    default : mode=8'b0;
    endcase


//dnpc
    case (opcode)
    24'h300 : dnpc=result_alu0;
    24'd4   : dnpc={result_alu0[63:1],1'b0};
    24'd5   : dnpc=(result_alu0==64'b0)?(imm_B+pc):snpc;
    24'd6   : dnpc=(result_alu0!=64'b0)?(imm_B+pc):snpc;
    24'd7   : dnpc=(result_alu0[63]==1)?(imm_B+pc):snpc;
    24'd8   : dnpc=(result_alu0[63]==0)?(imm_B+pc):snpc;
    24'd9   : dnpc=(result_alu0[63]==1)?(imm_B+pc):snpc;
    24'd10  : dnpc=(src1>=src2)?(imm_B+pc):snpc        ;        //(result_alu0[63]==0)?(imm_B+pc):snpc
    24'h200000: dnpc=mtvec                             ;        
    default: dnpc=snpc;
    endcase

end





















/*
`define regwrite_inst_count 45
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 1) gpr_write_enable (wen, opcode, {
    20'h4000 , 1'b1,
    20'h5000 , 1'b1,
    20'h6000 , 1'b1,
    20'h7000 , 1'b1,
    20'h8000 , 1'b1,
    20'h9000 , 1'b1,
    20'h12000, 1'b1,
    20'h13000, 1'b1,
    20'h14000, 1'b1,
    20'h15000, 1'b1,
    20'h16000, 1'b1,
    20'h17000, 1'b1,
    20'h18000, 1'b1,
    20'h19000, 1'b1,
    20'h1a000, 1'b1,
    20'h1b000, 1'b1,
    20'h1d000, 1'b1,
    20'h22000, 1'b1,
    20'h24000, 1'b1,
    20'h25000, 1'b1,
    20'h26000, 1'b1,
    20'h27000, 1'b1,
    20'h28000, 1'b1,
    20'h29000, 1'b1,
    20'h100  , 1'b1,
    20'h200  , 1'b1,
    20'h300  , 1'b1,
    20'h400  , 1'b1,
    20'h800  , 1'b1,
    20'hc00  , 1'b1,
    20'd4    , 1'b1,
    20'd11   , 1'b1,
    20'd12   , 1'b1,
    20'd13   , 1'b1,
    20'd14   , 1'b1,
    20'd15   , 1'b1,
    20'd19   , 1'b1,
    20'd20   , 1'b1,
    20'd21   , 1'b1,
    20'd22   , 1'b1,
    20'd23   , 1'b1,
    20'd24   , 1'b1,
    20'd41   , 1'b1,
    20'd42   , 1'b1,
    20'd47   , 1'b1
  });
ysyx_22050612_MuxKey #(`regwrite_inst_count, 20, 64) gpr_write_data (wdata_reg, opcode, {
    20'h4000 , result_alu0,
    20'h5000 , result_alu0,
    20'h6000 , result_alu0,
    20'h7000 , result_alu0,
    20'h8000 , result_alu0,
    20'h9000 , result_alu0,
    20'h12000, result_alu0,
    20'h13000, result_alu0,
    20'h14000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h15000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h16000, (result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]})),
    20'h17000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h18000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h19000, (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]})),
    20'h1a000, (result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]})),
    20'h1b000, (result_alu0[63]?({{32{1'b1}},result_alu0[63:32]}):({{32{1'b0}},result_alu0[63:32]})),
    20'h1d000, result_mul0,
    20'h22000, result_divu0,
    20'h24000, result_remu0,
    20'h25000, (result_mulw0[31]?({{32{1'b1}},result_mulw0[31:0]}):({{32{1'b0}},result_mulw0[31:0]})),
    20'h26000, (result_divw0[31]?({{32{1'b1}},result_divw0[31:0]}):({{32{1'b0}},result_divw0[31:0]})),
    20'h27000, (result_divuw0[31]?({{32{1'b1}},result_divuw0[31:0]}):({{32{1'b0}},result_divuw0[31:0]})),
    20'h28000, (result_remw0[31]?({{32{1'b1}},result_remw0[31:0]}):({{32{1'b0}},result_remw0[31:0]})),
    20'h28000, (result_remuw0[31]?({{32{1'b1}},result_remuw0[31:0]}):({{32{1'b0}},result_remuw0[31:0]})),
    20'h100  , imm_U,
    20'h200  , result_alu0,
    20'h300  , pc + 64'd4,
    20'h400  , result_alu0,
    20'h800  , result_alu0,
    20'hc00  , result_alu0,
    20'd4    , pc + 64'd4,
    20'd11   , rdata_fix,
    20'd12   , rdata_fix,
    20'd13   , rdata_fix,
    20'd14   , rdata_fix,
    20'd15   , rdata_fix,
    20'd19   , result_alu0,
    20'd20   , result_alu0,
    20'd21   , result_alu0,
    20'd22   , result_alu0,
    20'd23   , result_alu0,
    20'd24   , result_alu0,
    20'd41   , rdata_fix,
    20'd42   , rdata_fix,
    20'd47   , (result_alu0[31]?({{32{1'b1}},result_alu0[31:0]}):({{32{1'b0}},result_alu0[31:0]}))
  });
*/


//pc
wire [63:0] snpc;
assign snpc = pc + 64'd4;
/*
ysyx_22050612_MuxKeyWithDefault #(8, 20, 64) cpu_pc (dnpc, opcode, snpc, {
    20'h300 , result_alu0,
    20'd4   , {result_alu0[63:1],1'b0},
    20'd5   , (result_alu0==64'b0)?(imm_B+pc):snpc,
    20'd6   , (result_alu0!=64'b0)?(imm_B+pc):snpc,
    20'd7   , (result_alu0[63]==1)?(imm_B+pc):snpc,
    20'd8   , (result_alu0[63]==0)?(imm_B+pc):snpc,
    20'd9   , (result_alu0[63]==1)?(imm_B+pc):snpc,
    20'd10  , (src1>=src2)?(imm_B+pc):snpc  //(result_alu0[63]==0)?(imm_B+pc):snpc
  });
*/

//alu
//wire [7:0] mode;
//wire [63:0]operator_a;
//wire [63:0]operator_b;
reg [7:0] mode;
reg [63:0]operator_a;
reg [63:0]operator_b;
wire [63:0]result_alu0;
/*
`define alu_inst_count 46

ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator0 (operator_a, opcode, {
    20'h4000 , src1,
    20'h5000 , src1,
    20'h6000 , src1,
    20'h7000 , src1,
    20'h8000 , src1,
    20'h9000 , src1,
    20'h12000, src1,
    20'h13000, src1,
    20'h14000, {{32{1'b0}},src1[31:0]},
    20'h15000, {{32{1'b0}},src1[31:0]},
    20'h16000, {src1[31:0],{32{1'b0}}},
    20'h17000, src1,
    20'h18000, src1,
    20'h19000, src1,
    20'h1a000, {src1[31:0],{32{1'b0}}},
    20'h1b000, {src1[31:0],{32{1'b0}}},
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
    20'd11   , src1,
    20'd12   , src1,
    20'd13   , src1,
    20'd14   , src1,
    20'd15   , src1,
    20'd16   , src1,
    20'd17   , src1,
    20'd18   , src1,
    20'd19   , src1,
    20'd20   , src1,
    20'd21   , src1,
    20'd22   , src1,
    20'd23   , src1,
    20'd24   , src1,
    20'd41   , src1,
    20'd42   , src1,
    20'd43   , src1,
    20'd47   , src1
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 64) operator1 (operator_b, opcode, {
    20'h4000 , src2 ,
    20'h5000 , src2 ,
    20'h6000 , {{58{1'b0}},src2[5:0]},
    20'h7000 , src2 ,
    20'h8000 , src2 ,
    20'h9000 , src2 ,
    20'h12000, src2 ,
    20'h13000, src2 ,
    20'h14000, {{59{1'b0}},shamt[4:0]},
    20'h15000, {{59{1'b0}},shamt[4:0]},
    20'h16000, {{59{1'b0}},shamt[4:0]},
    20'h17000, src2 ,
    20'h18000, src2 ,
    20'h19000, {{59{1'b0}},src2[4:0]},
    20'h1a000, {{59{1'b0}},src2[4:0]},
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
    20'd11   , imm_I,
    20'd12   , imm_I,
    20'd13   , imm_I,
    20'd14   , imm_I,
    20'd15   , imm_I,
    20'd16   , imm_S,
    20'd17   , imm_S,
    20'd18   , imm_S,
    20'd19   , imm_I,
    20'd20   , imm_I,
    20'd21   , imm_I,
    20'd22   , imm_I,
    20'd23   , imm_I,
    20'd24   , imm_I,
    20'd41   , imm_I,
    20'd42   , imm_I,
    20'd43   , imm_S,
    20'd47   , imm_I
  });
ysyx_22050612_MuxKey #(`alu_inst_count, 20, 8) alumode (mode, opcode, {
    20'h4000 , 8'd0 , 
    20'h5000 , 8'd1 , 
    20'h6000 , 8'd8 , 
    20'h7000 , 8'd2 , 
    20'h8000 , 8'd3 , 
    20'h9000 , 8'd7 , 
    20'h12000, 8'd6 , 
    20'h13000, 8'd4 , 
    20'h14000, 8'd8 , 
    20'h15000, 8'd9 , 
    20'h16000, 8'd10, 
    20'h17000, 8'd0 , 
    20'h18000, 8'd1 , 
    20'h19000, 8'd8 , 
    20'h1a000, 8'd9 , 
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
    20'd11   , 8'd0 ,
    20'd12   , 8'd0 ,
    20'd13   , 8'd0 ,
    20'd14   , 8'd0 ,
    20'd15   , 8'd0 ,
    20'd16   , 8'd0 ,
    20'd17   , 8'd0 ,
    20'd18   , 8'd0 ,
    20'd19   , 8'd0 ,
    20'd20   , 8'd2 ,
    20'd21   , 8'd3 ,
    20'd22   , 8'd7 ,
    20'd23   , 8'd6 ,
    20'd24   , 8'd4 ,
    20'd41   , 8'd0 ,
    20'd42   , 8'd0 ,
    20'd43   , 8'd0 ,
    20'd47   , 8'd0
  });
*/

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

wire[31:0] result_divuw0;
assign result_divuw0 = src1[31:0] / src2[31:0];

wire[31:0] result_remuw0;
assign result_remuw0 = src1[31:0] % src2[31:0];



//memory


always @(*) begin
	case(waddr[2:0])
    3'd0  : wdata_1byte={{56{1'b0}},src2[7:0]}; 
    3'd1  : wdata_1byte={{48{1'b0}},src2[7:0],{ 8{1'b0}}};
    3'd2  : wdata_1byte={{40{1'b0}},src2[7:0],{16{1'b0}}};
    3'd3  : wdata_1byte={{32{1'b0}},src2[7:0],{24{1'b0}}};
    3'd4  : wdata_1byte={{24{1'b0}},src2[7:0],{32{1'b0}}};
    3'd5  : wdata_1byte={{16{1'b0}},src2[7:0],{40{1'b0}}};
    3'd6  : wdata_1byte={{ 8{1'b0}},src2[7:0],{48{1'b0}}};
    3'd7  : wdata_1byte={src2[7:0],{56{1'b0}}};
    default:wdata_1byte=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_1byte=8'h1 ; 
    3'd1  : wmask_1byte=8'h2 ;
    3'd2  : wmask_1byte=8'h4 ;
    3'd3  : wmask_1byte=8'h8 ;
    3'd4  : wmask_1byte=8'h10; 
    3'd5  : wmask_1byte=8'h20; 
    3'd6  : wmask_1byte=8'h40; 
    3'd7  : wmask_1byte=8'h80;
    default:wmask_1byte=8'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wdata_2byte={{48{1'b0}},src2[15:0]}; 
    3'd1  : wdata_2byte={{40{1'b0}},src2[15:0],{ 8{1'b0}}};
    3'd2  : wdata_2byte={{32{1'b0}},src2[15:0],{16{1'b0}}};
    3'd3  : wdata_2byte={{24{1'b0}},src2[15:0],{24{1'b0}}};
    3'd4  : wdata_2byte={{16{1'b0}},src2[15:0],{32{1'b0}}};
    3'd5  : wdata_2byte={{ 8{1'b0}},src2[15:0],{40{1'b0}}};
    3'd6  : wdata_2byte={           src2[15:0],{48{1'b0}}};
    default:wdata_2byte=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_2byte=8'h3 ; 
    3'd1  : wmask_2byte=8'h6 ;
    3'd2  : wmask_2byte=8'hc ;
    3'd3  : wmask_2byte=8'h18;
    3'd4  : wmask_2byte=8'h30; 
    3'd5  : wmask_2byte=8'h60; 
    3'd6  : wmask_2byte=8'hc0;
    default:wmask_2byte=8'b0;
	endcase


	case(raddr[2:0])
    3'd0  : rdata_1byte=rdata[ 7: 0]; 
    3'd1  : rdata_1byte=rdata[15: 8];
    3'd2  : rdata_1byte=rdata[23:16];
    3'd3  : rdata_1byte=rdata[31:24];
    3'd4  : rdata_1byte=rdata[39:32];
    3'd5  : rdata_1byte=rdata[47:40];
    3'd6  : rdata_1byte=rdata[55:48];
    3'd7  : rdata_1byte=rdata[63:56];
    default: rdata_1byte=8'b0;
	endcase

	case(raddr[2:0])
    3'd0  : rdata_2byte=rdata[15: 0]; 
    3'd1  : rdata_2byte=rdata[23: 8];
    3'd2  : rdata_2byte=rdata[31:16];
    3'd3  : rdata_2byte=rdata[39:24];
    3'd4  : rdata_2byte=rdata[47:32];
    3'd5  : rdata_2byte=rdata[55:40];
    3'd6  : rdata_2byte=rdata[63:48];
    default:rdata_2byte=16'b0;
	endcase

	case(opcode)
    24'd16  : wdata=wdata_1byte;
    24'd17  : wdata=wdata_2byte;
    24'd18  : wdata=(waddr[2]?{src2[31:0],{32{1'b0}}}:{{32{1'b0}},src2[31:0]});
    24'd43  : wdata=src2;
    default: wdata=64'b0;
	endcase

	case(opcode)
    24'd16  : wmask=wmask_1byte;
    24'd17  : wmask=wmask_2byte;
    24'd18  : wmask=(waddr[2]? 8'b11110000:8'b00001111);
    24'd43  : wmask=8'hff;
    default: wmask=8'b0;
	endcase

	case(opcode)
    24'd11  : rdata_fix=(rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte});
    24'd12  : rdata_fix=(rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte});
    24'd13  : rdata_fix=(raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]}));
    24'd14  : rdata_fix={{56{1'b0}},rdata_1byte};
    24'd15  : rdata_fix={{48{1'b0}},rdata_2byte};
    24'd41  : rdata_fix={{32{1'b0}},rdata[31:0]};
    24'd42  : rdata_fix=rdata;
    default: rdata_fix=64'b0;
	endcase
end

always @(*) begin
	case(opcode)
    24'd11  : raddr=result_alu0;
    24'd12  : raddr=result_alu0;
    24'd13  : raddr=result_alu0;
    24'd14  : raddr=result_alu0;
    24'd15  : raddr=result_alu0;
    24'd41  : raddr=result_alu0;
    24'd42  : raddr=result_alu0;
    default: waddr=64'b0;
	endcase

	case(opcode)
    24'd16  : waddr=result_alu0;
    24'd17  : waddr=result_alu0;
    24'd18  : waddr=result_alu0;
    24'd43  : waddr=result_alu0;
    default: waddr=64'b0;
	endcase



end



//wire [7:0]wmask_1byte;
//wire [63:0]wdata_1byte;
reg [7:0]wmask_1byte;
reg [63:0]wdata_1byte;
/*
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
*/

//wire [7:0]wmask_2byte;
//wire [63:0]wdata_2byte;
reg [7:0]wmask_2byte;
reg [63:0]wdata_2byte;
/*
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
    3'd3  , 8'h18,
    3'd4  , 8'h30, 
    3'd5  , 8'h60, 
    3'd6  , 8'hc0
  });
*/


wire [63:0] rdata;
//wire [63:0] raddr;
//wire [63:0] waddr;
//wire [63:0] wdata;
//wire [ 7:0] wmask;
reg [63:0] raddr;
reg [63:0] waddr;
reg [63:0] wdata;
reg [ 7:0] wmask;

/*
ysyx_22050612_MuxKey #(7, 20, 64) raddr_select (raddr, opcode, {
    20'd11  , result_alu0,
    20'd12  , result_alu0,
    20'd13  , result_alu0,
    20'd14  , result_alu0,
    20'd15  , result_alu0,
    20'd41  , result_alu0,
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
*/

always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
end


//wire [63:0] rdata_fix;
reg [63:0] rdata_fix;
/*
ysyx_22050612_MuxKey #(7, 20, 64) rdata_fixing (rdata_fix, opcode, {
    20'd11  , (rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte}),
    20'd12  , (rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte}),
    20'd13  , (raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]})),
    20'd14  , {{56{1'b0}},rdata_1byte},
    20'd15  , {{48{1'b0}},rdata_2byte},
    20'd41  , {{32{1'b0}},rdata[31:0]},
    20'd42  , rdata
  });
*/

//wire [7:0] rdata_1byte;
reg [7:0] rdata_1byte;
/*
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
*/

//wire [15:0] rdata_2byte;
reg [15:0] rdata_2byte;
/*
ysyx_22050612_MuxKey #(7, 3, 16) rdata_twobyte (rdata_2byte, raddr[2:0], {
    3'd0  , rdata[15: 0], 
    3'd1  , rdata[23: 8],
    3'd2  , rdata[31:16],
    3'd3  , rdata[39:24],
    3'd4  , rdata[47:32],
    3'd5  , rdata[55:40],
    3'd6  , rdata[63:48]
  });   //between two 64bits has not been concerned
*/







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
