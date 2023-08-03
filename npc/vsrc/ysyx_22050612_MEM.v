import "DPI-C" function void npc_loadstore(int getinst, longint base, longint imm_I, longint imm_S);
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_MEM(
input clk,
input rst,
input       valid_ID_EX,
output      ready_ID_IF,
input [63:0]pc_ID_EX,
input [31:0]inst_ID_EX,
/*
input [63:0]imm_I,
input [63:0]imm_U,
input [63:0]imm_J,
input [63:0]imm_B,
input [63:0]imm_S,
input [ 5:0]shamt,
input [ 4:0]rd,
input [ 4:0]rs1,
input [ 4:0]rs2,
*/
input [23:0]opcode_in,
//input [23:0]opcode,
input [63:0]ALU_operator_a,
input [63:0]ALU_operator_b,
input [ 7:0]ALU_mode,
input [63:0]src2_in,
input [ 4:0]rd,


//input [63:0]pc,


//output [63:0]dnpc,
output reg [63:0]dnpc,
output pc_update,

output       valid_EX_WB  ,
input        ready_EX_WB  ,
output [63:0]pc_EX_WB  ,
output [31:0]inst_EX_WB,

output       reg_wr_wen   ,
output [ 4:0]reg_wr_ID    ,
output [63:0]reg_wr_value ,

output [63:0]wdata_mtvec,
output [63:0]wdata_mepc,
output [63:0]wdata_mcause,
output [63:0]wdata_mstatus,
output wen_mtvec,
output wen_mepc,
output wen_mcause,
output wen_mstatus,

input [63:0] gpr[31:0]

/*
output reg arvalid,
output [31:0]araddr,
input arready,

input reg rvalid,
input [63:0]rrdata,
input reg [1:0]rresp,
output rready,

output awvalid,
output [31:0]awaddr,
input awready,

output wvalid,
output [63:0]wwdata,
output [7:0]wstrb,
input wready,

input [1:0]bresp,
input bvalid,
output bready,



output exu_block
*/



);




//*************************  pipeline ********************************
reg       EX_reg_valid         ;
reg [63:0]EX_reg_pc            ;
reg [31:0]EX_reg_inst          ;
reg [23:0]EX_reg_opcode        ;
reg [63:0]EX_reg_alu_operator_a;
reg [63:0]EX_reg_alu_operator_b;
reg [ 7:0]EX_reg_alu_mode      ;
reg [ 4:0]EX_reg_rd            ;
reg [63:0]EX_reg_src2          ;

always @(posedge clk) begin
	if(rst) begin
		EX_reg_valid          <=  1'b0;
		EX_reg_pc             <= 64'b0;
		EX_reg_inst           <= 32'b0;
		EX_reg_opcode         <= 24'b0;
		EX_reg_alu_operator_a <= 64'b0;
		EX_reg_alu_operator_b <= 64'b0;
		EX_reg_alu_mode       <=  8'b0;
		EX_reg_rd             <=  5'b0;
		EX_reg_src2           <= 64'b0;
	end
	else begin
		EX_reg_valid          <= valid_ID_EX;
		EX_reg_pc             <= pc_ID_EX;
		EX_reg_inst           <= inst_ID_EX;
		EX_reg_opcode         <= opcode_in;
		EX_reg_alu_operator_a <= ALU_operator_a;
		EX_reg_alu_operator_b <= ALU_operator_b;
		EX_reg_alu_mode       <= ALU_mode      ;
		EX_reg_rd             <= rd            ;
		EX_reg_src2           <= src2_in       ;
	end
end

wire [31:0]inst;
assign inst = EX_reg_valid ? EX_reg_inst : 32'b0;

wire [23:0]opcode;
assign opcode = EX_reg_valid ? EX_reg_opcode : 24'b0;

wire [63:0]src2;
assign src2 = EX_reg_valid ? EX_reg_src2 : 64'b0;


assign reg_wr_wen   = EX_reg_valid ? wen       : 1'b0;
assign reg_wr_ID    = EX_reg_valid ? EX_reg_rd : 5'b0;
assign reg_wr_value = EX_reg_valid ? wdata_reg : 64'b0;


//output
assign valid_EX_WB   = EX_reg_valid;
assign pc_EX_WB   = EX_reg_pc;
assign inst_EX_WB = EX_reg_inst;




always @(negedge clk) begin
	//$display("EX   pc:%x   inst:%x   valid:%x   op_a:%x   op_b:%x  op_mode:%x",EX_reg_pc,EX_reg_inst,EX_reg_valid,EX_reg_alu_operator_a,EX_reg_alu_operator_b,EX_reg_alu_mode);
end
//********************************************************************


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
    24'd41  : rdata_fix=raddr[2]?{{32{1'b0}},rdata[63:32]}:{{32{1'b0}},rdata[31:0]};
    24'd42  : rdata_fix=rdata;
    default: rdata_fix=64'b0;
	endcase
end

always @(*) begin
	//$display("*  clk=%d",clk);
	case(opcode)
    24'd11  : raddr=result_alu0;
    24'd12  : raddr=result_alu0;
    24'd13  : raddr=result_alu0;
    24'd14  : raddr=result_alu0;
    24'd15  : raddr=result_alu0;
    24'd41  : raddr=result_alu0;
    24'd42  : raddr=result_alu0;
    default: raddr=64'b0;
	endcase

	case(opcode)
    24'd16  : waddr=result_alu0;
    24'd17  : waddr=result_alu0;
    24'd18  : waddr=result_alu0;
    24'd43  : waddr=result_alu0;
    default: waddr=64'b0;
	endcase



end
//always @(posedge clk) begin
//	$display("pose  clk=%d",clk);
//end


/*
always @(edge clk) begin
	//$display(" clk=%d    block=%d   waddr=%x   raddr=%x  ls=%d",clk,exu_block,waddr,raddr,exu_block_ls);
end
//***********************   AXI   *********************
reg exu_block_ls;
assign exu_block = (((raddr!=64'b0)||(waddr!=64'b0))? 1'b1:1'b0) & exu_block_ls;
always @(posedge clk) begin
	if(rst == 1'b1)begin
		exu_block_ls <= 1'b1;
	end
	else if(rresp == 2'b0 && rvalid == 1'b1)begin
		//$display("unblock");
		exu_block_ls <= 1'b0;
	end
	else if(bresp == 2'b0 && bvalid == 1'b1)begin
		exu_block_ls <= 1'b0;
	end
	else begin
		exu_block_ls <= 1'b1;
	end

//	if(rst == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(rresp == 2'b0 && rvalid == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(bresp == 2'b0 && bvalid == 1'b1)begin
//		exu_block_ls = 1'b0;
//	end
//	else if(raddr != 64'b0 || waddr != 64'b0)begin
//		exu_block_ls = 1'b1;
//	end
//	else begin
//		exu_block_ls = 1'b0;
//	end
end

//***********************   read   *********************

assign rready = 1'b1;

always @(posedge clk) begin
	//$display("ifu:   arvalid = %d  arready = %d  \n",arvalid, arready);   
	if(rvalid == 1'b1 && rready == 1'b1)begin
		rdata <= rrdata;
		//inst_64 = rdata;
		//$display("inst:%x",inst);
		//$display("3\n");
	end
//	else begin
//		rdata <= 64'b0;
//	end
end


always @(posedge clk) begin
	if(rst == 1'b1)begin
		arvalid <= 1'b0;
		araddr <= 32'h0;
	end
	else if(rvalid == 1'b0 && raddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		arvalid <= 1'b1;
		araddr <= raddr[31:0];
	end
	else if(arvalid == 1'b1 && arready == 1'b1) begin
		arvalid <= 1'b0;
	end
end
 
 
 
//***********************   write   *********************
assign bready = 1'b1;
reg [23:0]opcode_lastcycle;

always @(posedge clk) begin
	opcode_lastcycle <= opcode;
	if(rst == 1'b1)begin
		awvalid <= 1'b0;
		awaddr <= 32'h0;
	end
	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		//$display("1");
		awvalid <= 1'b1;
		awaddr <= waddr[31:0];
	end
	else if(awvalid == 1'b1 && awready == 1'b1) begin
		//$display("2");
		awvalid <= 1'b0;
	end

end

always @(posedge clk) begin
	if(rst == 1'b1)begin
		wvalid <= 1'b0;
		wwdata <= 64'h0;
		wstrb <= 8'h0;
	end
	else if(bvalid == 1'b0 && waddr != 64'h0 && opcode_lastcycle == 24'b0)begin
		wvalid <= 1'b1;
		wwdata <= wdata;
		wstrb <= wmask;
	end
	else if(wvalid == 1'b1 && wready == 1'b1) begin
		wvalid <= 1'b0;
	end
end

//******************************************
*/


//wire [7:0]wmask_1byte;
//wire [63:0]wdata_1byte;
reg [7:0]wmask_1byte;
reg [63:0]wdata_1byte;

//wire [7:0]wmask_2byte;
//wire [63:0]wdata_2byte;
reg [7:0]wmask_2byte;
reg [63:0]wdata_2byte;



reg [63:0] rdata;
//wire [63:0] raddr;
//wire [63:0] waddr;
//wire [63:0] wdata;
//wire [ 7:0] wmask;
reg [63:0] raddr;
reg [63:0] waddr;
reg [63:0] wdata;
reg [ 7:0] wmask;



always @(*) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
end


//wire [63:0] rdata_fix;
reg [63:0] rdata_fix;


//wire [7:0] rdata_1byte;
reg [7:0] rdata_1byte;


//wire [15:0] rdata_2byte;
reg [15:0] rdata_2byte;









/*
always @(posedge clk) begin            //support mtrace, to give the csrc a signal that a memory operation is coming
	case(opcode)
    24'd11  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd12  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd13  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd14  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd15  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd16  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd17  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd18  : npc_loadstore(2, src1, imm_I, imm_S);
    24'd41  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd42  : npc_loadstore(1, src1, imm_I, imm_S);
    24'd43  : npc_loadstore(2, src1, imm_I, imm_S);
    default: npc_loadstore(0, 0, 0, 0);
	endcase
end
*/


//always @(mtvec or mepc or mcause or mstatus) begin
//       update_csr(mtvec,mcause,mepc,mstatus);	
//end





//  always @(posedge clk) begin
//    $display("%d,%d,%d",rd,rs1,imm_I);
//    $display("%d,%d,%d,%d",result_alu0,wdata_reg,wen,opcode);
//    $display("%d,%d,%d",result_alu0,src1,imm_I);
//  end

endmodule
