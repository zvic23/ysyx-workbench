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


wire exu_block;

//always @(posedge clk) begin
//  $display("%x",inst);
//end
ysyx_22050612_IFU ifu (clk, rst, dnpc, pc, pc_update, inst ,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc,   exu_block);
ysyx_22050612_IDU idu (clk,inst, imm_I,imm_U,imm_J,imm_B,imm_S,shamt, rd, rs1, rs2, opcode);
ysyx_22050612_EXU exu (clk,rst,imm_I,imm_U,imm_J,imm_B,imm_S,shamt,rd,rs1,rs2,opcode,pc,pc_update,dnpc,   arvalid_lsu,araddr_lsu,arready_lsu,rvalid_lsu,rdata_lsu,rresp_lsu,rready_lsu,awvalid_lsu,awaddr_lsu,awready_lsu,wvalid_lsu,wdata_lsu,wstrb_lsu,wready_lsu,bresp_lsu,bvalid_lsu,bready_lsu,   exu_block);


wire arvalid_pc      ;  
wire [31:0]araddr_pc ;  
wire arready_pc      ;  
wire rvalid_pc       ;   
wire [63:0]rdata_pc  ; 
wire [1:0]rresp_pc   ;
wire rready_pc       ;

always @(posedge clk  ) if(araddr_lsu==32'ha0000060)$display("rrrrrdata:%x",rdata_lsu);

wire awvalid_pc      ;  
wire [31:0]awaddr_pc ; 
wire awready_pc      ; 
wire wvalid_pc       ;    
wire [63:0]wdata_pc  ;  
wire [7:0]wstrb_pc  ;  
wire wready_pc       ;      
wire [1:0]bresp_pc   ; 
wire bvalid_pc       ;   
wire bready_pc       ;   


wire arvalid_lsu      ;  
wire [31:0]araddr_lsu ;  
wire arready_lsu      ;  
wire rvalid_lsu       ;   
wire [63:0]rdata_lsu  ; 
wire [1:0]rresp_lsu   ;
wire rready_lsu       ;
wire awvalid_lsu      ;  
wire [31:0]awaddr_lsu ; 
wire awready_lsu      ; 
wire wvalid_lsu       ;    
wire [63:0]wdata_lsu  ;  
wire [7:0]wstrb_lsu  ;  
wire wready_lsu       ;      
wire [1:0]bresp_lsu   ; 
wire bvalid_lsu       ;   
wire bready_lsu       ;   


wire arvalid      ;  
wire [31:0]araddr ;  
wire arready      ;  
wire rvalid       ;   
wire [63:0]rdata  ; 
wire [1:0]rresp   ;
wire rready       ;
wire awvalid      ;  
wire [31:0]awaddr ; 
wire awready      ; 
wire wvalid       ;    
wire [63:0]wdata  ;  
wire [7:0]wstrb   ;  
wire wready       ;      
wire [1:0]bresp   ; 
wire bvalid       ;   
wire bready       ;  



//ysyx_22050612_SRAM sram_pc (clk,rst,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc, 1'b0, 32'b0,  , 1'b0, 64'b0, 8'b0, , , , 1'b0);
//ysyx_22050612_SRAM sram_pc (clk,rst,arvalid_pc,araddr_pc,arready_pc,rvalid_pc,rdata_pc,rresp_pc,rready_pc,awvalid_pc,awaddr_pc,awready_pc,wvalid_pc,wdata_pc,wstrb_pc,wready_pc,bresp_pc,bvalid_pc,bready_pc);

//ysyx_22050612_SRAM sram (clk,rst,arvalid_lsu,araddr_lsu,arready_lsu,rvalid_lsu,rdata_lsu,rresp_lsu,rready_lsu,awvalid_lsu,awaddr_lsu,awready_lsu,wvalid_lsu,wdata_lsu,wstrb_lsu,wready_lsu,bresp_lsu,bvalid_lsu,bready_lsu);
ysyx_22050612_SRAM sram (clk,rst,arvalid,araddr,arready,rvalid,rdata,rresp,rready,awvalid,awaddr,awready,wvalid,wdata,wstrb,wready,bresp,bvalid,bready);
ysyx_22050612_Arbiter arbiter (clk,rst,
	arvalid_pc,arvalid_lsu,arvalid,
	araddr_pc,araddr_lsu,araddr,
	arready_pc,arready_lsu,arready,
	rvalid_pc,rvalid_lsu,rvalid,
	rdata_pc,rdata_lsu,rdata,
	rresp_pc,rresp_lsu,rresp,
	rready_pc,rready_lsu,rready,
	awvalid_pc,awvalid_lsu,awvalid,
	awaddr_pc,awaddr_lsu,awaddr,
	awready_pc,awready_lsu,awready,
	wvalid_pc,wvalid_lsu,wvalid,
	wdata_pc,wdata_lsu,wdata,
	wstrb_pc,wstrb_lsu,wstrb,
	wready_pc,wready_lsu,wready,
	bresp_pc,bresp_lsu,bresp,
	bvalid_pc,bvalid_lsu,bvalid,
	bready_pc,bready_lsu,bready);
//	1'b0,awvalid_lsu,awvalid,
//	32'b0,awaddr_lsu,awaddr,
//	1'b0,awready_lsu,awready,
//	1'b0,wvalid_lsu,wvalid,
//	64'b0,wdata_lsu,wdata,
//	8'b0,wstrb_lsu,wstrb,
//	1'b0,wready_lsu,wready,
//	2'b0,bresp_lsu,bresp,
//	1'b0,bvalid_lsu,bvalid,
//	1'b0,bready_lsu,bready);
endmodule
