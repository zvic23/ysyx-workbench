import "DPI-C" function void pmem_read_icache_low64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_read_icache_high64(
  input longint raddr, output longint rdata);

module ysyx_22050612_ICACHE (
input clk,
input rst,

input [63:0]addr,
input [63:0]addr_prev,
input valid,
input flush,
input ready_IF_ID,

output [31:0]inst,
output reg ready

);


reg [53:0]tag0[63:0];
reg [53:0]tag1[63:0];
reg [53:0]tag2[63:0];
reg [53:0]tag3[63:0];
reg [63:0]v0;
reg [63:0]v1;
reg [63:0]v2;
reg [63:0]v3;

//************************  pipeline  ******************************
always @(negedge clk) begin
	//$display("icache   pc:%x   inst:%x   valid:%d   ready:%d",addr_prev,inst,valid,ready);
	//$display("icache   %b   %b    %d  %d  %d  %d   ",way_hit,way_hit_prev,cen0,cen1,cen2,cen3);
	//$display("icache   pc:%x   inst:%x   valid:%d   ready:%d   line_prev:%x  index:%x  index_prev:%x  offset:%x  offset_prev:%x",addr_prev,inst,valid,ready,line_mem_prev,index,addr_prev[9:4],addr[3:0],addr_prev[3:0]);
	//$display("icache   %b   %b    %d  %d  %d  %d   dout:%x  dout0:%x dout1:%x dout2:%x dout3:%x  wen:%x  line:%x    dump:%d  ready_ifid:%d\ntag0:%x  tag1:%x  tag2:%x  tag3:%x\n",way_hit,way_hit_prev,cen0,cen1,cen2,cen3,dout,dout0,dout1,dout2,dout3,wen,line_mem   ,dump,ready_IF_ID,tag0[index],tag1[index],tag2[index],tag3[index],);
end
//*****************************************************************


always @(posedge clk) begin
	if(rst) begin
		v0 <= 64'b0;
		v1 <= 64'b0;
		v2 <= 64'b0;
		v3 <= 64'b0;
	end
	else if( (!cen0|!cen1|!cen2|!cen3)&&!wen  ) begin
	//else if(valid && way_hit==4'b0 && ready_IF_ID) begin
		case({!cen3,!cen2,!cen1,!cen0})
		//case(random_cnt)
			4'b0001: begin v0[index] <= 1'b1; tag0[index] <= addr[63:10]; end 
			4'b0010: begin v1[index] <= 1'b1; tag1[index] <= addr[63:10]; end
			4'b0100: begin v2[index] <= 1'b1; tag2[index] <= addr[63:10]; end
			4'b1000: begin v3[index] <= 1'b1; tag3[index] <= addr[63:10]; end
			default: begin end
		endcase
	end
end

wire [5:0]index;
assign index = addr[9:4];
wire [3:0]way_hit;
assign way_hit[0] = v0[index] && (tag0[index] == addr[63:10]);
assign way_hit[1] = v1[index] && (tag1[index] == addr[63:10]);
assign way_hit[2] = v2[index] && (tag2[index] == addr[63:10]);
assign way_hit[3] = v3[index] && (tag3[index] == addr[63:10]);



wire [127:0]dout0, dout1, dout2, dout3;
wire cen0, cen1, cen2, cen3;
wire wen;
wire [127:0]bwen;
wire [5:0]addr_sram;
wire [127:0]din;

assign addr_sram = index;
assign bwen = 128'h0;
assign cen0 = ~( ready_IF_ID ?(  valid ? (way_hit[0] ? 1'b1 : (way_hit==4'b0&&random_cnt[0] ? 1'b1 : 1'b0)) : 1'b0)  : 1'b0)  ;
assign cen1 = ~( ready_IF_ID ?(  valid ? (way_hit[1] ? 1'b1 : (way_hit==4'b0&&random_cnt[1] ? 1'b1 : 1'b0)) : 1'b0)  : 1'b0)  ;
assign cen2 = ~( ready_IF_ID ?(  valid ? (way_hit[2] ? 1'b1 : (way_hit==4'b0&&random_cnt[2] ? 1'b1 : 1'b0)) : 1'b0)  : 1'b0)  ;
assign cen3 = ~( ready_IF_ID ?(  valid ? (way_hit[3] ? 1'b1 : (way_hit==4'b0&&random_cnt[3] ? 1'b1 : 1'b0)) : 1'b0)  : 1'b0)  ;
assign  wen = ~( ready_IF_ID ?(  valid && (way_hit == 4'b0)) : 1'b0)  ;
assign  din = line_mem;


S011HD1P_X32Y2D128_BW sram_i0(dout0, clk, cen0, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i1(dout1, clk, cen1, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i2(dout2, clk, cen2, wen, bwen, addr_sram, din);
S011HD1P_X32Y2D128_BW sram_i3(dout3, clk, cen3, wen, bwen, addr_sram, din);


reg [3:0]way_hit_prev;
reg [3:0]random_cnt;
reg [127:0]line_mem_prev;
always @(posedge clk) begin
	if(rst) begin
		way_hit_prev    <= 4'b0;
		random_cnt      <= 4'b1;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	else if(!ready_IF_ID) begin
		way_hit_prev    <= way_hit_prev ;
		random_cnt      <= random_cnt   ;
		line_mem_prev   <= line_mem_prev;
		ready           <= ready        ;
	end
	else if(flush) begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	else begin
	     	way_hit_prev    <= way_hit;
		random_cnt[0]   <= random_cnt[3];
		random_cnt[3:1] <= random_cnt[2:0];
		line_mem_prev   <= line_mem;
		ready           <= valid;
	end
end

reg [127:0]dout;
always @(*) begin
	case(way_hit_prev)
		4'b0001: dout = dout0;
		4'b0010: dout = dout1;
		4'b0100: dout = dout2;
		4'b1000: dout = dout3;
		default: dout = line_mem_prev;
	endcase
end

reg [31:0]inst_prev;
reg dump;
always @(posedge clk) begin
	if(rst) begin
		inst_prev <= 32'b0;
		dump <= 1'b0;
	end
	else if(!ready_IF_ID && !dump) begin
		inst_prev <= inst;
		dump <= 1'b1;
	end
	else if(!ready_IF_ID && dump) begin
		inst_prev <= inst_prev;
		dump <= 1'b1;
	end
	else if(ready_IF_ID && dump) begin
		inst_prev <= 32'b0;
		dump <= 1'b0;
	end
end

assign inst = !dump ? (  addr_prev[3:2]==2'b0 ? dout[31:0] : (addr_prev[3:2]==2'b01 ? dout[63:32] : (addr_prev[3:2]==2'b10 ? dout[95:64] : (addr_prev[3:2]==2'b11 ? dout[127:96] : 32'b0)))  ) :   inst_prev;

wire [127:0]line_mem;
always @(*) begin
//	if(valid && (way_hit == 4'b0)) begin
		pmem_read_icache_low64 (addr, line_mem[63:0]);
		pmem_read_icache_high64(addr, line_mem[127:64]);
//	end
end


  
endmodule
