import "DPI-C" function void npc_complete_one_inst ();
import "DPI-C" function void npc_loadstore(int getinst, longint raddr, longint waddr);
import "DPI-C" function void WBU_state_trace(longint a,longint b,longint c,longint d,longint e,longint f);
import "DPI-C" function void read_inst(int npc_inst);


module ysyx_22050612_WBU(
input clk,
input rst,
input       valid_MEM_WB  ,
output      ready_MEM_WB  ,
input [63:0]pc_MEM_WB  ,
input [31:0]inst_MEM_WB,
input [14:0]opcode_type_MEM_WB,
input [ 4:0]rd_MEM_WB,

input       reg_wr_wen,
input [ 4:0]reg_wr_ID,
input [63:0]reg_wr_value,

output [63:0] gpr[31:0],



output wbu_writing_gpr,
output [4:0]wbu_rd,
output reg [63:0]WB_reg_wdata,

output reg [63:0]WB_reg_pc,

input reg [63:0]raddr,
input reg [63:0]waddr,

input ready_EX_MEM
);


assign wbu_writing_gpr = WB_reg_valid && (WB_reg_opcode_type[0] || WB_reg_opcode_type[1] || WB_reg_opcode_type[2] || WB_reg_opcode_type[5] || WB_reg_opcode_type[7] || WB_reg_opcode_type[8] || WB_reg_opcode_type[9] || WB_reg_opcode_type[10] || WB_reg_opcode_type[11]);
assign wbu_rd = WB_reg_id;

//*************************  pipeline ********************************
reg       WB_reg_valid;
reg [31:0]WB_reg_inst ;
//reg [63:0]WB_reg_pc   ;
reg       WB_reg_wen ;
reg [ 4:0]WB_reg_id ;
//reg [63:0]WB_reg_wdata ;
reg [14:0]WB_reg_opcode_type;


reg [63:0]reg_raddr;
reg [63:0]reg_waddr;

always @(posedge clk) begin
	if(rst) begin
		WB_reg_valid <= 1'b0;
		WB_reg_pc    <= 64'b0;
		WB_reg_inst  <= 32'b0;
		WB_reg_opcode_type <= 15'b0;
		WB_reg_wen  <=  1'b0;
		WB_reg_id   <=  5'b0;
		WB_reg_wdata<= 64'b0;

		reg_raddr <= 64'b0;
		reg_waddr <= 64'b0;
	end
	else if(!ready_EX_MEM) begin
		WB_reg_valid <= WB_reg_valid; 
		WB_reg_pc    <= WB_reg_pc    ;
		WB_reg_inst  <= WB_reg_inst  ;
		WB_reg_opcode_type <= WB_reg_opcode_type;
		WB_reg_wen   <= WB_reg_wen   ;
		WB_reg_id    <= WB_reg_id    ;
		WB_reg_wdata <= WB_reg_wdata ;

		reg_raddr <= reg_raddr;
		reg_waddr <= reg_waddr;
	end
	else begin
		WB_reg_valid <= valid_MEM_WB;
		WB_reg_pc    <= pc_MEM_WB;
		WB_reg_inst  <= inst_MEM_WB;
		WB_reg_opcode_type <= opcode_type_MEM_WB;
		WB_reg_wen  <= reg_wr_wen   ;
		WB_reg_id   <= reg_wr_ID    ;
		WB_reg_wdata<= reg_wr_value ;

		reg_raddr <= raddr;
		reg_waddr <= waddr;
	end
end

wire [31:0]inst;
assign inst = WB_reg_valid ? WB_reg_inst : 32'b0;


assign ready_MEM_WB = 1'b1;



always @(negedge clk) begin
	WBU_state_trace(WB_reg_pc, {32'b0,WB_reg_inst}, {63'b0,WB_reg_valid}, 64'b0,64'b0,64'b0 );
	//$display("WB   pc:%x   inst:%x   valid:%d  wen:%d  wdata:%x rd:%x",WB_reg_pc,WB_reg_inst,WB_reg_valid,WB_reg_wen,WB_reg_wdata,WB_reg_id);
	//$display("WB   pc:%x   inst:%x   valid:%d  wen:%d  wdata:%x rd:%x\n",WB_reg_pc,WB_reg_inst,WB_reg_valid,reg_wr_wen,reg_wr_value,reg_wr_ID);
	if(WB_reg_valid && ready_EX_MEM) begin 
		npc_complete_one_inst();
		read_inst(inst);
	end
	else begin
		read_inst(32'b0);
	end
end
//********************************************************************


always @(negedge clk) begin            //support mtrace, to give the csrc a signal that a memory operation is coming
	if(WB_reg_valid&& ready_EX_MEM)begin
	case({WB_reg_inst[14:12],WB_reg_inst[6:0]})
    10'b000_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b001_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b010_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b100_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b101_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b000_0100011:   npc_loadstore(2, reg_raddr, reg_waddr);
    10'b001_0100011:   npc_loadstore(2, reg_raddr, reg_waddr);
    10'b010_0100011:   npc_loadstore(2, reg_raddr, reg_waddr);
    10'b110_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b011_0000011:   npc_loadstore(1, reg_raddr, reg_waddr);
    10'b011_0100011:   npc_loadstore(2, reg_raddr, reg_waddr);
    default: npc_loadstore(0, 0, 0);
	endcase
end
end



endmodule


