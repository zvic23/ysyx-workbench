import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);


module ysyx_22050612_npc(
input clk,
input rst,

output [63:0]pc,

output [63:0]wb_pc

);


wire flush;
wire mul_ready;
wire [63:0]result_hi;
wire [63:0]result_lo;

wire mul_valid;
assign mul_valid = 1'b1;
wire mulw;
assign mulw = 1'b0;
wire [1:0]mul_signed;
assign mul_signed = 2'b11;
reg [63:0]mulcand;
reg [63:0]muler;

ysyx_22050612_multiplier boothmul (clk, rst, mul_valid, flush, mulw, mul_signed, mulcand, muler, mul_ready, mul_valid, result_hi, result_lo);


always @(posedge clk)begin
	if(rst) begin
		mulcand <= 64'b0;
		muler   <= 64'b1;
	end
	else begin
		mulcand[31:0]  <= $random;
		muler  [31:0]  <= $random;
		mulcand[63:32] <= $random;
		muler  [63:32] <= $random;
		//mulcand <= mulcand + 64'b1;
		//muler   <= muler   + 64'b1;
	end
end

wire [127:0]result_r;
//assign result_r = mulcand * muler;
assign result_r = $signed(mulcand) * $signed(muler);
always @(negedge clk)begin
	if(result_r != {result_hi,result_lo}) begin
		$display("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	end
	$display("mulcand:%h  mulier:%h      %d %d",mulcand,muler,mulcand[63],muler[63]);
	$display("mulresult:%h%h     %d",result_hi,result_lo,result_hi[63]);
	$display("mulresu  :%h       %d",result_r, result_r[127]);
end





assign wb_pc=WB_reg_pc;   //used by cpp file for difftest
assign pc = pc_ifu;       //used by cpp file for itrace


/*
wire [63:0]imm_I;
wire [63:0]imm_U;
wire [63:0]imm_J;
wire [63:0]imm_B;
wire [63:0]imm_S;
wire [ 5:0]shamt;
wire [ 4:0]rs1;
wire [ 4:0]rs2;
*/


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
wire [63:0]src_csr;

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
wire pc_update;       //these two come from exu

wire branch_flush;    //if branch predict failed, clean IFU, ICACHE, IDU and EXU. it = pc_update now.

ysyx_22050612_IDU idu (clk, rst, gpr, valid_IF_ID, ready_IF_ID, pc_IF_ID, inst_IF_ID, mtvec, mepc, mcause, mstatus, /*imm_I,imm_U,imm_J,imm_B,imm_S,shamt, rd, rs1, rs2,*/ src_A,src_B, imm, opcode_ID_EX, valid_ID_EX, ready_ID_EX, pc_ID_EX, inst_ID_EX , EX_reg_valid,EX_reg_inst  , branch_flush);

wire       valid_ID_EX  ;
wire       ready_ID_EX  ;
wire [63:0]pc_ID_EX  ;
wire [31:0]inst_ID_EX;
wire [63:0]src_A;
wire [63:0]src_B;
wire [63:0]imm;
wire [23:0]opcode_ID_EX;
//wire [ 7:0]ALU_mode      ;
//wire [ 4:0]rd            ;


wire       EX_reg_valid;
wire [31:0]EX_reg_inst ;


ysyx_22050612_EXU exu (clk,rst, valid_ID_EX, ready_ID_EX, pc_ID_EX, inst_ID_EX,/*imm_I,imm_U,imm_J,imm_B,imm_S,shamt,rd,rs1,rs2,*/opcode_ID_EX,src_A,src_B,/*ALU_mode, src2, rd,*/ imm, dnpc,pc_update, valid_EX_MEM, ready_EX_MEM, pc_EX_MEM, inst_EX_MEM, opcode_EX_MEM, ALUoutput_EX_MEM , src_B_EX_MEM,/*reg_wr_wen, reg_wr_ID, reg_wr_value, */wdata_mtvec,wdata_mepc,wdata_mcause,wdata_mstatus,wen_mtvec,wen_mepc,wen_mcause,wen_mstatus,gpr , EX_reg_valid,EX_reg_inst,  MEM_reg_valid, MEM_reg_inst, MEM_reg_aluoutput, WB_reg_valid, WB_reg_inst, WB_reg_wdata  , branch_flush );

wire       valid_EX_MEM  ;
wire       ready_EX_MEM  ;
wire [63:0]pc_EX_MEM  ;
wire [31:0]inst_EX_MEM;
wire [23:0]opcode_EX_MEM;
wire [63:0]src_B_EX_MEM  ;
wire [63:0]ALUoutput_EX_MEM  ;

wire       MEM_reg_valid;
wire [31:0]MEM_reg_inst ;
wire [63:0]MEM_reg_aluoutput ;

ysyx_22050612_MEM mem (clk,rst, valid_EX_MEM, ready_EX_MEM, pc_EX_MEM, inst_EX_MEM,opcode_EX_MEM, ALUoutput_EX_MEM, src_B_EX_MEM, valid_MEM_WB, ready_MEM_WB, pc_MEM_WB, inst_MEM_WB, reg_wr_wen, reg_wr_ID, reg_wr_value,  MEM_reg_valid, MEM_reg_inst, MEM_reg_aluoutput , WB_reg_valid, WB_reg_inst, WB_reg_wdata,   raddr,waddr,
araddr_mem, arlen_mem, arsize_mem, arburst_mem, arvalid_mem, arready_mem, rdata_mem, rresp_mem, rlast_mem, rvalid_mem, rready_mem, awaddr_mem, awlen_mem, awsize_mem, awburst_mem, awvalid_mem, awready_mem,    wdata_mem, wstrb_mem, wlast_mem, wvalid_mem, wready_mem,   bresp_mem, bvalid_mem, bready_mem);


wire       valid_MEM_WB  ;
wire       ready_MEM_WB  ;
wire [63:0]pc_MEM_WB  ;
wire [31:0]inst_MEM_WB;
wire       reg_wr_wen   ;
wire [ 4:0]reg_wr_ID    ;
wire [63:0]reg_wr_value ;

wire       WB_reg_valid;
wire [31:0]WB_reg_inst ;
wire [63:0]WB_reg_wdata ;

wire [63:0]WB_reg_pc ;
wire [63:0]raddr;
wire [63:0]waddr;

ysyx_22050612_WBU wbu (clk,rst, valid_MEM_WB, ready_MEM_WB, pc_MEM_WB, inst_MEM_WB, reg_wr_wen, reg_wr_ID, reg_wr_value, gpr , WB_reg_valid, WB_reg_inst, WB_reg_wdata, WB_reg_pc,  raddr,waddr   ,  ready_EX_MEM);





//************************  pipeline  ******************************
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
32'b0,awaddr_mem,awaddr,8'b0,awlen_mem,awlen,3'b0,awsize_mem,awsize,2'b0,awburst_mem,awburst,1'b0,awvalid_mem,awvalid,awready,,awready_mem,
64'b0,wdata_mem,wdata,8'b0,wstrb_mem,wstrb,1'b0,wlast_mem,wlast,1'b0,wvalid_mem,wvalid,wready,,wready_mem,
bresp,,bresp_mem,bvalid,,bvalid_mem,1'b0,bready_mem,bready);
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

//************************  pipeline  ******************************

always @(negedge clk) begin
	//$display("busy %x",gpr_busy);
end

//*****************************************************************






/*
//*******************  axi  *******************************
wire arvalid_pc      ;  
wire [31:0]araddr_pc ;  
wire arready_pc      ;  
wire rvalid_pc       ;   
wire [63:0]rdata_pc  ; 
wire [1:0]rresp_pc   ;
wire rready_pc       ;

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

//************************************************************
*/



initial set_gpr_ptr(gpr);                   //to update the gpr in cpp file

endmodule
