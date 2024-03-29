import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void update_csr(longint mtvec_npc, longint mcause_npc, longint mepc_npc, longint mstatus_npc);

module ysyx_22050612_npc(
input clk,
input rst,

output [63:0]pc,

output [63:0]wb_pc

);

assign wb_pc=WB_reg_pc;   //used by cpp file for difftest
assign pc = pc_ifu;       //used by cpp file for itrace




//***************    general register   ********************
wire [63:0] gpr[31:0];
wire [4:0]gpr_rd;
wire [63:0]gpr_wdata;
wire gpr_wen;

assign gpr_wen =  (reg_wr_ID == 5'b0)? 1'b0 : reg_wr_wen ;
assign gpr_rd  =  reg_wr_ID  ;
assign gpr_wdata = reg_wr_value ;

ysyx_22050612_RegisterFile #(5,64) cpu_gpr_group (clk, gpr_wdata, gpr_rd, gpr_wen, gpr);





//***************    control status register   ********************

wire [63:0]wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus;
wire [63:0]mtvec,mepc,mcause,mstatus;
wire wen_mtvec,wen_mepc,wen_mcause,wen_mstatus;

//control and status register
ysyx_22050612_Reg #(64,64'h0)         mtvec_csr   (clk, rst, wdata_mtvec  , mtvec  , wen_mtvec  );
ysyx_22050612_Reg #(64,64'h0)         mepc_csr    (clk, rst, wdata_mepc   , mepc   , wen_mepc   );
ysyx_22050612_Reg #(64,64'h0)         mcause_csr  (clk, rst, wdata_mcause , mcause , wen_mcause );
ysyx_22050612_Reg #(64,64'ha00001800) mstatus_csr (clk, rst, wdata_mstatus, mstatus, wen_mstatus);


//**************        processor       *******************
ysyx_22050612_IFU ifu (clk, rst, valid_IF_ID, ready_IF_ID, pc_IF_ID, pc_ifu, inst_IF_ID, pc_update, dnpc,  branch_flush , waddr,
araddr_ifu, arlen_ifu, arsize_ifu, arburst_ifu, arvalid_ifu, arready_ifu, rdata_ifu, rresp_ifu, rlast_ifu, rvalid_ifu, rready_ifu);
wire [63:0]pc_ifu;      //used by cpp file

wire       valid_IF_ID;
wire       ready_IF_ID;
wire [63:0]pc_IF_ID   ;
wire [31:0]inst_IF_ID ;

wire [63:0]dnpc;
wire pc_update;       //these two come from exu to correct pc for wrong branch predict and jalr

wire branch_flush;    //if branch predict failed, clean IFU, ICACHE, IDU and EXU. it = pc_update now.

ysyx_22050612_IDU idu (clk, rst, gpr, valid_IF_ID, ready_IF_ID, pc_IF_ID, inst_IF_ID, mtvec, mepc, mcause, mstatus, rd_ID_EX, rs1_ID_EX, rs2_ID_EX, src_A,src_B, imm, opcode_type_ID_EX, opcode_funct3_ID_EX, valid_ID_EX, ready_ID_EX, pc_ID_EX, inst_ID_EX , ex_loading, ex_rd, branch_flush);

wire       valid_ID_EX  ;
wire       ready_ID_EX  ;
wire [63:0]pc_ID_EX  ;
wire [31:0]inst_ID_EX;
wire [63:0]src_A;
wire [63:0]src_B;
wire [ 4:0]rd_ID_EX;
wire [ 4:0]rs1_ID_EX;
wire [ 4:0]rs2_ID_EX;
wire [63:0]imm;
wire [14:0]opcode_type_ID_EX;
wire [ 2:0]opcode_funct3_ID_EX;

wire ex_loading;
wire [4:0]ex_rd;

ysyx_22050612_EXU exu (clk,rst, valid_ID_EX, ready_ID_EX, pc_ID_EX, inst_ID_EX, opcode_type_ID_EX,opcode_funct3_ID_EX,rd_ID_EX, rs1_ID_EX, rs2_ID_EX,src_A,src_B, imm, dnpc,pc_update, valid_EX_MEM, ready_EX_MEM, pc_EX_MEM, inst_EX_MEM, opcode_type_EX_MEM,opcode_funct3_EX_MEM, rd_EX_MEM, rs2_EX_MEM, ALUoutput_EX_MEM , src_B_EX_MEM,wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus,wen_mtvec,wen_mepc,wen_mcause,wen_mstatus, gpr, ex_loading, ex_rd,  mem_writing_gpr, mem_rd,MEM_reg_aluoutput, wbu_writing_gpr, wbu_rd, WB_reg_wdata  , branch_flush );

wire       valid_EX_MEM  ;
wire       ready_EX_MEM  ;
wire [63:0]pc_EX_MEM  ;
wire [31:0]inst_EX_MEM;
wire [14:0]opcode_type_EX_MEM;
wire [ 2:0]opcode_funct3_EX_MEM;
wire [ 4:0]rd_EX_MEM;
wire [ 4:0]rs2_EX_MEM;
wire [63:0]src_B_EX_MEM  ;
wire [63:0]ALUoutput_EX_MEM  ;


wire mem_writing_gpr;
wire [4:0]mem_rd;
wire [63:0]MEM_reg_aluoutput ;

ysyx_22050612_MEM mem (clk,rst, valid_EX_MEM, ready_EX_MEM, pc_EX_MEM, inst_EX_MEM, opcode_type_EX_MEM, opcode_funct3_EX_MEM, rd_EX_MEM, rs2_EX_MEM, ALUoutput_EX_MEM, src_B_EX_MEM, valid_MEM_WB, ready_MEM_WB, pc_MEM_WB, inst_MEM_WB,opcode_type_MEM_WB, rd_MEM_WB, reg_wr_wen, reg_wr_ID, reg_wr_value,  mem_writing_gpr, mem_rd, MEM_reg_aluoutput , wbu_writing_gpr, wbu_rd, WB_reg_wdata,   raddr,waddr,
araddr_mem, arlen_mem, arsize_mem, arburst_mem, arvalid_mem, arready_mem, rdata_mem, rresp_mem, rlast_mem, rvalid_mem, rready_mem, awaddr_mem, awlen_mem, awsize_mem, awburst_mem, awvalid_mem, awready_mem,    wdata_mem, wstrb_mem, wlast_mem, wvalid_mem, wready_mem,   bresp_mem, bvalid_mem, bready_mem);


wire       valid_MEM_WB  ;
wire       ready_MEM_WB  ;
wire [63:0]pc_MEM_WB  ;
wire [31:0]inst_MEM_WB;
wire [14:0]opcode_type_MEM_WB;
wire [ 4:0]rd_MEM_WB;
wire       reg_wr_wen   ;
wire [ 4:0]reg_wr_ID    ;
wire [63:0]reg_wr_value ;


wire wbu_writing_gpr;
wire [4:0]wbu_rd;
wire [63:0]WB_reg_wdata ;

wire [63:0]WB_reg_pc ;
wire [63:0]raddr;
wire [63:0]waddr;

ysyx_22050612_WBU wbu (clk,rst, valid_MEM_WB, ready_MEM_WB, pc_MEM_WB, inst_MEM_WB,opcode_type_MEM_WB, rd_MEM_WB, reg_wr_wen, reg_wr_ID, reg_wr_value, gpr,  wbu_writing_gpr, wbu_rd, WB_reg_wdata, WB_reg_pc,  raddr,waddr   ,  ready_EX_MEM);





//************************  AXI-FULL  ******************************
wire [31:0]araddr_ifu;
wire [7:0]arlen_ifu;
wire [2:0]arsize_ifu;
wire [1:0]arburst_ifu;
wire     arvalid_ifu;
wire      arready_ifu;

wire [63:0]rdata_ifu;
wire [1:0]rresp_ifu;
wire rlast_ifu;
wire rvalid_ifu;
wire rready_ifu;


wire [31:0]araddr_mem;
wire [7:0]arlen_mem;
wire [2:0]arsize_mem;
wire [1:0]arburst_mem;
wire     arvalid_mem;
wire      arready_mem;

wire [63:0]rdata_mem;
wire [1:0]rresp_mem;
wire rlast_mem;
wire rvalid_mem;
wire rready_mem;

wire [31:0]awaddr_mem;
wire [7:0]awlen_mem;
wire [2:0]awsize_mem;
wire [1:0]awburst_mem;
wire      awvalid_mem;
wire       awready_mem;
 
wire [63:0]wdata_mem;
wire [ 7:0]wstrb_mem;
wire wlast_mem;
wire wvalid_mem;
wire wready_mem;

wire [1:0]bresp_mem;
wire bvalid_mem;
wire bready_mem;

ysyx_22050612_Arbiter arbiter0 (clk, rst, 
araddr_ifu,araddr_mem,araddr,arlen_ifu,arlen_mem,arlen,arsize_ifu,arsize_mem,arsize,arburst_ifu,arburst_mem,arburst,arvalid_ifu,arvalid_mem,arvalid,arready,arready_ifu,arready_mem,
rdata,rdata_ifu,rdata_mem,rresp,rresp_ifu,rresp_mem,rlast,rlast_ifu,rlast_mem,rvalid,rvalid_ifu,rvalid_mem,rready_ifu,rready_mem,rready,
awaddr_mem,awaddr,awlen_mem,awlen,awsize_mem,awsize,awburst_mem,awburst,awvalid_mem,awvalid,awready,awready_mem,
wdata_mem,wdata,wstrb_mem,wstrb,wlast_mem,wlast,wvalid_mem,wvalid,wready,wready_mem,
bresp,bresp_mem,bvalid,bvalid_mem,bready_mem,bready);
//awaddr_ifu,awaddr_mem,awaddr,awlen_ifu,awlen_mem,awlen,awsize_ifu,awsize_mem,awsize,awburst_ifu,awburst_mem,awburst,awvalid_ifu,awvalid_mem,awvalid,awready,awready_ifu,awready_mem,
//wdata_ifu,wdata_mem,wdata,wstrb_ifu,wstrb_mem,wstrb,wlast_ifu,wlast_mem,wlast,wvalid_ifu,wvalid_mem,wvalid,wready,wready_ifu,wready_mem,
//bresp,bresp_ifu,bresp_mem,bvalid,bvalid_ifu,bvalid_mem,bready_ifu,bready_mem,bready)



wire [31:0]araddr;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]arburst;
wire arvalid;
wire arready;

wire [63:0]rdata;
wire [1:0]rresp;
wire rlast;
wire rvalid;
wire rready;

wire [31:0]awaddr;
wire [7:0]awlen;
wire [2:0]awsize;
wire [1:0]awburst;
wire awvalid;
wire awready;
 
wire [63:0]wdata;
wire [ 7:0]wstrb;
wire wlast;
wire wvalid;
wire wready;

wire [1:0]bresp;
wire bvalid;
wire bready;


ysyx_22050612_SRAM  sram_mem (clk, rst, araddr, arlen, arsize, arburst, arvalid, arready,    rdata, rresp, rlast, rvalid, rready,   
	                                awaddr, awlen, awsize, awburst, awvalid, awready,    wdata, wstrb, wlast, wvalid, wready,   
					bresp, bvalid, bready);



//*****************************************************************


initial set_gpr_ptr(gpr);                   //to update the gpr in cpp file

always @(mtvec or mepc or mcause or mstatus) begin
       update_csr(mtvec,mcause,mepc,mstatus);	
end

endmodule
