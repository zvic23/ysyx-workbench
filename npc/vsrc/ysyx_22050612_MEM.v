//import "DPI-C" function void npc_loadstore(int getinst, longint raddr, longint waddr);
//import "DPI-C" function void pmem_read(
//  input longint raddr, output longint rdata);
//import "DPI-C" function void pmem_write(
//  input longint waddr, input longint wdata, input byte wmask);
import "DPI-C" function void MEM_state_trace(longint a,longint b,longint c,longint d,longint e,longint f,longint g,longint h,longint i,longint j,longint k,longint l,longint m,longint n,longint o,longint p);



module ysyx_22050612_MEM(
input clk,
input rst,
input       valid_EX_MEM,
output      ready_EX_MEM,
input [63:0]pc_EX_MEM,
input [31:0]inst_EX_MEM,
input [14:0]opcode_type_EX_MEM,
input [ 2:0]opcode_funct3_EX_MEM,
input [ 4:0]rd_EX_MEM,
input [ 4:0]rs2_EX_MEM,
input [63:0]ALUoutput_in,
input [63:0]src2_in,



output       valid_MEM_WB  ,
input        ready_MEM_WB  ,
output [63:0]pc_MEM_WB  ,
output [31:0]inst_MEM_WB,
output [14:0]opcode_type_MEM_WB,
output [ 4:0]rd_MEM_WB,

output       gpr_wr_wen   ,
output [ 4:0]gpr_wr_rd    ,
output [63:0]gpr_wr_value ,


//interlock
output mem_writing_gpr,
output [4:0]mem_rd,
output reg [63:0]MEM_reg_aluoutput,


input wbu_writing_gpr,
input [4:0]wbu_rd,
input [63:0]WB_reg_wdata,



output [63:0]raddr_out,
output [63:0]waddr_out,  //used by cpp file for difftest to overlook the clock operating memory



//AXI-full signals from dcache
output [31:0]araddr_dcache_axi,
output [7:0]arlen_dcache_axi,
output [2:0]arsize_dcache_axi,
output [1:0]arburst_dcache_axi,
output     arvalid_dcache_axi,
input      arready_dcache_axi,

input [63:0]rdata_dcache_axi,
input [1:0]rrsep_dcache_axi,
input rlast_dcache_axi,
input rvalid_dcache_axi,
output rready_dcache_axi,

output [31:0]awaddr_dcache_axi,
output [7:0]awlen_dcache_axi,
output [2:0]awsize_dcache_axi,
output [1:0]awburst_dcache_axi,
output      awvalid_dcache_axi,
input       awready_dcache_axi,
 
output [63:0]wdata_dcache_axi,
output [ 7:0]wstrb_dcache_axi,
output wlast_dcache_axi,
output wvalid_dcache_axi,
input wready_dcache_axi,

input [1:0]bresp_dcache_axi,
input bvalid_dcache_axi,
output bready_dcache_axi

);

assign raddr_out = raddr;
assign waddr_out = waddr;


assign mem_writing_gpr = MEM_reg_valid && (MEM_reg_opcode_type[0] || MEM_reg_opcode_type[1] || MEM_reg_opcode_type[2] || MEM_reg_opcode_type[5] || MEM_reg_opcode_type[7] || MEM_reg_opcode_type[8] || MEM_reg_opcode_type[9] || MEM_reg_opcode_type[10] || MEM_reg_opcode_type[11]);
assign mem_rd = MEM_reg_rd;

//*************************  pipeline ********************************
reg       MEM_reg_valid         ;
reg [31:0]MEM_reg_inst          ;
reg [63:0]MEM_reg_pc            ;
reg [14:0]MEM_reg_opcode_type        ;
reg [ 2:0]MEM_reg_opcode_funct3        ;
//reg [63:0]MEM_reg_aluoutput     ;
reg [63:0]MEM_reg_src2          ;
reg [ 4:0]MEM_reg_rd;
reg [ 4:0]MEM_reg_rs2;

always @(posedge clk) begin
	if(rst) begin
		MEM_reg_valid          <=  1'b0;
		MEM_reg_pc             <= 64'b0;
		MEM_reg_inst           <= 32'b0;
		MEM_reg_opcode_type         <= 15'b0;
		MEM_reg_opcode_funct3         <= 3'b0;
		MEM_reg_aluoutput      <= 64'b0;
		MEM_reg_src2           <= 64'b0;
		MEM_reg_rd           <=  5'b0;
		MEM_reg_rs2           <=  5'b0;
	end
	else if(!ready_EX_MEM)begin
		MEM_reg_valid          <= MEM_reg_valid      ; 
		MEM_reg_pc             <= MEM_reg_pc         ; 
		MEM_reg_inst           <= MEM_reg_inst       ; 
		MEM_reg_opcode_type         <= MEM_reg_opcode_type     ; 
		MEM_reg_opcode_funct3         <= MEM_reg_opcode_funct3;
		MEM_reg_aluoutput      <= MEM_reg_aluoutput  ; 
		MEM_reg_src2           <= MEM_reg_src2       ; 
		MEM_reg_rd           <= MEM_reg_rd       ; 
		MEM_reg_rs2           <=  MEM_reg_rs2;
	end
	else begin
		MEM_reg_valid          <= valid_EX_MEM;
		MEM_reg_pc             <= pc_EX_MEM;
		MEM_reg_inst           <= inst_EX_MEM;
		MEM_reg_opcode_type         <= opcode_type_EX_MEM;
		MEM_reg_opcode_funct3         <= opcode_funct3_EX_MEM;
		MEM_reg_aluoutput      <= ALUoutput_in;
		MEM_reg_src2           <= src2_in       ;
		MEM_reg_rd           <= rd_EX_MEM;
		MEM_reg_rs2           <= rs2_EX_MEM;
	end
end

wire [31:0]inst;
assign inst = MEM_reg_valid ? MEM_reg_inst : 32'b0;

wire [63:0]aluoutput;
assign aluoutput = MEM_reg_valid ? MEM_reg_aluoutput : 64'b0;

wire [14:0]opcode_type;
assign opcode_type = MEM_reg_valid ? MEM_reg_opcode_type : 15'b0;

wire [ 2:0]opcode_funct3;
assign opcode_funct3 = MEM_reg_valid ? MEM_reg_opcode_funct3 : 3'b0;

wire [63:0]src2;

assign gpr_wr_wen   = (MEM_reg_valid&&!MEM_block) ? wen       : 1'b0;
assign gpr_wr_rd    = (MEM_reg_valid&&!MEM_block) ? MEM_reg_rd : 5'b0;
assign gpr_wr_value = (MEM_reg_valid&&!MEM_block) ? wdata_reg : 64'b0;


//output
assign valid_MEM_WB = (MEM_block==1'b0) ? MEM_reg_valid :  1'b0;
assign pc_MEM_WB    = (MEM_block==1'b0) ? MEM_reg_pc    : 64'b0;
assign inst_MEM_WB  = (MEM_block==1'b0) ? MEM_reg_inst  : 32'b0;
assign opcode_type_MEM_WB  = (MEM_block==1'b0) ? MEM_reg_opcode_type : 15'b0;
assign rd_MEM_WB  = (MEM_block==1'b0) ? MEM_reg_rd : 5'b0;

wire MEM_block;
assign MEM_block = dcache_valid && !dcache_ready;
assign ready_EX_MEM = MEM_block ? 1'b0 : ready_MEM_WB;


//**************  DCACHE  ******************************
wire dcache_valid;
wire dcache_ready;
assign dcache_valid = (opcode_type[5]||opcode_type[6]);
wire [63:0]dcache_addr;
assign dcache_addr = dcache_wren ? waddr : raddr;
wire [63:0]dcache_dout;
assign rdata = dcache_dout;
//wire [63:0]dcache_waddr;
//assign dcache_waddr = waddr;
wire dcache_wren;
assign dcache_wren = opcode_type[6];
wire [63:0]dcache_din;
assign dcache_din = wdata;
wire [63:0]dcache_wmask;
assign dcache_wmask = wmask_64;

ysyx_22050612_DCACHE dcache (clk, rst, dcache_valid, dcache_ready, dcache_addr, dcache_dout, dcache_wren, dcache_din, dcache_wmask,
araddr_dcache_axi, arlen_dcache_axi, arsize_dcache_axi, arburst_dcache_axi, arvalid_dcache_axi, arready_dcache_axi, rdata_dcache_axi, rrsep_dcache_axi, rlast_dcache_axi, rvalid_dcache_axi, rready_dcache_axi, awaddr_dcache_axi, awlen_dcache_axi, awsize_dcache_axi, awburst_dcache_axi, awvalid_dcache_axi, awready_dcache_axi,    wdata_dcache_axi, wstrb_dcache_axi, wlast_dcache_axi, wvalid_dcache_axi, wready_dcache_axi,   bresp_dcache_axi, bvalid_dcache_axi, bready_dcache_axi);




//**************    load interlock    ************************
assign src2 = MEM_reg_valid ? ((mem_storing &&wbu_writing_gpr&&rs2_mem_rd_wb_match) ? WB_reg_wdata : MEM_reg_src2 ) : 64'b0;


wire rs2_mem_rd_wb_match;
assign rs2_mem_rd_wb_match  =  (wbu_rd == MEM_reg_rs2)&&(MEM_reg_rs2 != 5'b0);
wire mem_storing;
assign mem_storing = opcode_type[6];



always @(negedge clk) begin
	MEM_state_trace(MEM_reg_pc, {32'b0,MEM_reg_inst}, {63'b0,MEM_reg_valid}, dcache_dout,gpr_wr_value, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0, 64'b0 );
	//$display("MEM  pc:%x   inst:%x   valid:%x   aluout:%x   op_b:%x  wen:%x  wdata:%x  opcode:%x",MEM_reg_pc,MEM_reg_inst,MEM_reg_valid,MEM_reg_aluoutput,MEM_reg_src2   ,wen,wdata_reg,opcode);
end
//********************************************************************




wire wen;
assign wen = opcode_type[0]||opcode_type[1]||opcode_type[2]||opcode_type[3]||opcode_type[5]||opcode_type[7]||opcode_type[8]||opcode_type[9]||opcode_type[10]||opcode_type[11];
wire [63:0]wdata_reg;
assign wdata_reg = opcode_type[5]  ? rdata_fix : 
	          (opcode_type[11] ? MEM_reg_src2 : aluoutput);





wire [63:0] raddr;
wire [63:0] waddr;
assign raddr = opcode_type[5] ? aluoutput : 64'b0;
assign waddr = opcode_type[6] ? aluoutput : 64'b0;

wire [7:0]wmask_1byte;
wire [63:0]wdata_1byte;
wire [7:0]wmask_2byte;
wire [63:0]wdata_2byte;
wire [63:0] rdata;
wire [63:0] wdata;
wire [ 7:0] wmask;
wire [63:0] rdata_fix;
wire [7:0] rdata_1byte;
wire [15:0] rdata_2byte;



assign wdata_1byte = (waddr[2:0] == 3'd0) ? {56'b0, src2[7:0]} :
                     (waddr[2:0] == 3'd1) ? {48'b0, src2[7:0], 8'b0} :
                     (waddr[2:0] == 3'd2) ? {40'b0, src2[7:0], 16'b0} :
                     (waddr[2:0] == 3'd3) ? {32'b0, src2[7:0], 24'b0} :
                     (waddr[2:0] == 3'd4) ? {24'b0, src2[7:0], 32'b0} :
                     (waddr[2:0] == 3'd5) ? {16'b0, src2[7:0], 40'b0} :
                     (waddr[2:0] == 3'd6) ? {8'b0, src2[7:0], 48'b0} :
                     (waddr[2:0] == 3'd7) ? {src2[7:0], 56'b0} :
                     64'b0;

assign wmask_1byte = (waddr[2:0] == 3'd0) ? 8'h1 : 
                     (waddr[2:0] == 3'd1) ? 8'h2 : 
                     (waddr[2:0] == 3'd2) ? 8'h4 : 
                     (waddr[2:0] == 3'd3) ? 8'h8 : 
                     (waddr[2:0] == 3'd4) ? 8'h10: 
                     (waddr[2:0] == 3'd5) ? 8'h20: 
                     (waddr[2:0] == 3'd6) ? 8'h40: 
                     (waddr[2:0] == 3'd7) ? 8'h80: 
                     8'b0;

assign wdata_2byte = (waddr[2:0] == 3'd0) ? {{48{1'b0}},src2[15:0]} : 
                     (waddr[2:0] == 3'd2) ? {{32{1'b0}},src2[15:0],{16{1'b0}}} :
                     (waddr[2:0] == 3'd4) ? {{16{1'b0}},src2[15:0],{32{1'b0}}} :
                     (waddr[2:0] == 3'd6) ? {           src2[15:0],{48{1'b0}}} :
                     64'b0;

assign wmask_2byte = (waddr[2:0] == 3'd0) ? 8'h3  : 
                     (waddr[2:0] == 3'd2) ? 8'hc  :
                     (waddr[2:0] == 3'd4) ? 8'h30 : 
                     (waddr[2:0] == 3'd6) ? 8'hc0 :
                     8'b0;

assign wdata       = (opcode_funct3 == 3'b000) ? wdata_1byte  : 
                     (opcode_funct3 == 3'b001) ? wdata_2byte  :
                     (opcode_funct3 == 3'b010) ? (waddr[2]?{src2[31:0],{32{1'b0}}}:{{32{1'b0}},src2[31:0]}) : 
                     (opcode_funct3 == 3'b011) ? src2 :
                     64'b0;
assign wmask       = (opcode_funct3 == 3'b000) ? wmask_1byte  : 
                     (opcode_funct3 == 3'b001) ? wmask_2byte  :
                     (opcode_funct3 == 3'b010) ? (waddr[2]? 8'b11110000:8'b00001111) : 
                     (opcode_funct3 == 3'b011) ? 8'hff :
                     8'b0;
wire [63:0]wmask_64;
assign wmask_64    = {{8{wmask[7]}},{8{wmask[6]}},{8{wmask[5]}},{8{wmask[4]}},
	              {8{wmask[3]}},{8{wmask[2]}},{8{wmask[1]}},{8{wmask[0]}}};




assign rdata_1byte = (raddr[2:0] == 3'd0) ? rdata[ 7: 0] :
                     (raddr[2:0] == 3'd1) ? rdata[15: 8] :
                     (raddr[2:0] == 3'd2) ? rdata[23:16] :
                     (raddr[2:0] == 3'd3) ? rdata[31:24] :
                     (raddr[2:0] == 3'd4) ? rdata[39:32] :
                     (raddr[2:0] == 3'd5) ? rdata[47:40] :
                     (raddr[2:0] == 3'd6) ? rdata[55:48] :
                     (raddr[2:0] == 3'd7) ? rdata[63:56] :
                     8'b0;
assign rdata_2byte = (raddr[2:0] == 3'd0) ? rdata[15: 0] :
                     (raddr[2:0] == 3'd2) ? rdata[31:16] :
                     (raddr[2:0] == 3'd4) ? rdata[47:32] :
                     (raddr[2:0] == 3'd6) ? rdata[63:48] :
                     16'b0;


assign rdata_fix   = (opcode_funct3 == 3'b000) ? (rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte})  : 
                     (opcode_funct3 == 3'b001) ? (rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte})  :
                     (opcode_funct3 == 3'b010) ? (raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]})) : 
                     (opcode_funct3 == 3'b100) ? {{56{1'b0}},rdata_1byte} :
                     (opcode_funct3 == 3'b101) ? {{48{1'b0}},rdata_2byte} :
                     (opcode_funct3 == 3'b110) ? raddr[2]?{{32{1'b0}},rdata[63:32]}:{{32{1'b0}},rdata[31:0]} :
                     (opcode_funct3 == 3'b011) ? rdata :
                     64'b0;


//memory
/*
reg [63:0]wmask_1b;
reg [63:0]wmask_2b;
reg [63:0]wmask_dcache;

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
    3'd0  : wmask_1b=64'hff ; 
    3'd1  : wmask_1b=64'hff00;
    3'd2  : wmask_1b=64'hff0000 ;
    3'd3  : wmask_1b=64'hff000000 ;
    3'd4  : wmask_1b=64'hff00000000; 
    3'd5  : wmask_1b=64'hff0000000000; 
    3'd6  : wmask_1b=64'hff000000000000; 
    3'd7  : wmask_1b=64'hff00000000000000;
    default:wmask_1b=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wdata_2byte={{48{1'b0}},src2[15:0]}; 
    3'd2  : wdata_2byte={{32{1'b0}},src2[15:0],{16{1'b0}}};
    3'd4  : wdata_2byte={{16{1'b0}},src2[15:0],{32{1'b0}}};
    3'd6  : wdata_2byte={           src2[15:0],{48{1'b0}}};
    default:wdata_2byte=64'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_2byte=8'h3 ; 
    3'd2  : wmask_2byte=8'hc ;
    3'd4  : wmask_2byte=8'h30; 
    3'd6  : wmask_2byte=8'hc0;
    default:wmask_2byte=8'b0;
	endcase

	case(waddr[2:0])
    3'd0  : wmask_2b=64'hffff ; 
    3'd2  : wmask_2b=64'hffff0000 ;
    3'd4  : wmask_2b=64'hffff00000000; 
    3'd6  : wmask_2b=64'hffff000000000000;
    default:wmask_2b=64'b0;
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
    3'd2  : rdata_2byte=rdata[31:16];
    3'd4  : rdata_2byte=rdata[47:32];
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
    24'd16  : wmask_dcache=wmask_1b;
    24'd17  : wmask_dcache=wmask_2b;
    24'd18  : wmask_dcache=(waddr[2]? 64'hffffffff00000000:64'hffffffff);
    24'd43  : wmask_dcache=64'hffffffffffffffff;
    default: wmask_dcache=64'b0;
	endcase

	case(opcode)
    24'd11  : rdata_fix=(rdata_1byte[7]?{{56{1'b1}},rdata_1byte}:{{56{1'b0}},rdata_1byte});
    24'd12  : rdata_fix=(rdata_2byte[15]?{{48{1'b1}},rdata_2byte}:{{48{1'b0}},rdata_2byte});
    24'd13  : rdata_fix=(raddr[2]?(rdata[63]?{{32{1'b1}},rdata[63:32]}:{{32{1'b0}},rdata[63:32]}):(rdata[31]?{{32{1'b1}},rdata[31:0]}:{{32{1'b0}},rdata[31:0]}));
    24'd14  : rdata_fix={{56{1'b0}},rdata_1byte};
    24'd15  : rdata_fix={{48{1'b0}},rdata_2byte};
    24'd41  : rdata_fix=raddr[2]?{{32{1'b0}},rdata[63:32]}:{{32{1'b0}},rdata[31:0]};
    24'd42  : rdata_fix=rdata;
    default: rdata_fix=64'b0;
	endcase
end
*/






/*
always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
end
*/

endmodule
