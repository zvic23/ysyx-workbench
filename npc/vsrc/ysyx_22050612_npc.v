//import "DPI-C" function void ebreak ();

`define ysyx_22050612_rgsize 64

module ysyx_22050612_npc(
input clk,
input rst,

//output [31:0]inst,
output [63:0]pc

);

wire [31:0]inst;
wire [63:0]dnpc;

wire [63:0]imm_I;
wire [63:0]imm_U;
wire [63:0]imm_J;
wire [63:0]imm_B;
wire [63:0]imm_S;
wire [ 5:0]shamt;
wire [ 4:0]rd;
wire [ 4:0]rs1;
wire [ 4:0]rs2;
wire [23:0]opcode;

//always @(posedge clk) begin
//  $display("%x",inst);
//end
ysyx_22050612_IFU ifu (clk, rst, dnpc, pc, inst ,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc);
ysyx_22050612_IDU idu (clk,inst, imm_I,imm_U,imm_J,imm_B,imm_S,shamt, rd, rs1, rs2, opcode);
ysyx_22050612_EXU exu (clk,rst,imm_I,imm_U,imm_J,imm_B,imm_S,shamt,rd,rs1,rs2,opcode,pc,dnpc);


wire arvalid_pc      ;  
wire [31:0]araddr_pc ;  
wire arready_pc      ;  
wire rvalid_pc       ;   
wire [63:0]rdata_pc  ; 
wire rresp_pc        ;
wire rready_pc       ;

ysyx_22050612_SRAM sram_pc (clk,rst,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc);
endmodule
