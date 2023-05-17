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
wire pc_update;

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
ysyx_22050612_IFU ifu (clk, rst, dnpc, pc, pc_update, inst ,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc);
ysyx_22050612_IDU idu (clk,inst, imm_I,imm_U,imm_J,imm_B,imm_S,shamt, rd, rs1, rs2, opcode);
ysyx_22050612_EXU exu (clk,rst,imm_I,imm_U,imm_J,imm_B,imm_S,shamt,rd,rs1,rs2,opcode,pc,pc_update,dnpc);


wire arvalid_pc      ;  
wire [31:0]araddr_pc ;  
wire arready_pc      ;  
wire rvalid_pc       ;   
wire [63:0]rdata_pc  ; 
wire rresp_pc        ;
wire rready_pc       ;
/*
wire awvalid_pc      ;  
wire [31:0]awaddr_pc ; 
wire awready_pc      ; 
wire wvalid_pc       ;    
wire [63:0]wdata_pc  ;  
wire [[7:0]wstrb_pc  ;  
wire wready_pc       ;      
wire [1:0]bresp_pc   ; 
wire bvalid_pc       ;   
wire bready_pc       ;   
*/

ysyx_22050612_SRAM sram_pc (clk,rst,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc, 1'b0, 32'b0,  , 1'b0, 64'b0, 8'b0, , , , 1'b0);
//ysyx_22050612_SRAM sram_pc (clk,rst,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc,awvalid_pc,awaddr_pc,awready_pc,wvalid_pc,wdata_pc,wstrb_pc,wready_pc,bresp_pc,bvalid_pc,bready_pc);
endmodule
