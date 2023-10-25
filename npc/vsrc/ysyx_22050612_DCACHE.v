import "DPI-C" function void pmem_read_dcache_low64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_read_dcache_high64(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write_dcache_low64(
  input longint raddr, input wren, input longint wdata, input longint wmask, output longint rdata_low, output longint rdata_high);
import "DPI-C" function void pmem_write_dcache_high64(
  input longint raddr, input byte wren, input longint wdata, input longint wmask, output longint rdata);
import "DPI-C" function void dcache_collect(int hit);
import "DPI-C" function void DCACHE_state_trace (longint a,longint b,longint c,longint d,longint e,longint f,longint g,longint h,longint i,longint j,longint k,longint l,longint m,longint n,longint o,longint p); //16 parameters

module ysyx_22050612_DCACHE (
input clk,
input rst,

input valid,
output reg ready,

input [63:0]addr,
output [63:0]dout,

input wren,
input [63:0]din,
input [63:0]mask
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
	DCACHE_state_trace (addr, dout, {63'b0,valid}, {63'b0,ready}, line_mem_prev[127:64], line_mem_prev[63:0], {58'b0,index}, {58'b0,addr[9:4]},
	{60'b0,addr[3:0]}, {60'b0,addr[3:0]}, {60'b0,way_hit}, {60'b0,way_hit_prev}, {60'b0,cen3,cen2,cen1,cen0}, {63'b0,wen}, line_mem[127:64], line_mem[63:0]);
end
//*****************************************************************

integer i;
always @(posedge clk) begin
	if(rst) begin
		v0 <= 64'b0;
		v1 <= 64'b0;
		v2 <= 64'b0;
		v3 <= 64'b0;
		for(i=0;i<=63;i=i+1)begin
			tag0[i] <= 54'b0;
			tag1[i] <= 54'b0;
			tag2[i] <= 54'b0;
			tag3[i] <= 54'b0;
		end
	end
	else if( (!cen0|!cen1|!cen2|!cen3)&&!wen  ) begin
	    if(not_device) begin   //暂时用来维持设备和dcache的一致性
		case({!cen3,!cen2,!cen1,!cen0})
			4'b0001: begin v0[index] <= 1'b1; tag0[index] <= addr[63:10]; end 
			4'b0010: begin v1[index] <= 1'b1; tag1[index] <= addr[63:10]; end
			4'b0100: begin v2[index] <= 1'b1; tag2[index] <= addr[63:10]; end
			4'b1000: begin v3[index] <= 1'b1; tag3[index] <= addr[63:10]; end
			default: begin $display("icache all misses!!!!!!!!!!!!!!!!!!!!!!!!\n\n");end
		endcase
	    end
	end
/*
	if(waddr!=0) begin
		if(tag0[waddr[9:4]] == waddr[63:10]) begin v0[waddr[9:4]] <= 1'b0; end
		if(tag1[waddr[9:4]] == waddr[63:10]) begin v1[waddr[9:4]] <= 1'b0; end
		if(tag2[waddr[9:4]] == waddr[63:10]) begin v2[waddr[9:4]] <= 1'b0; end
		if(tag3[waddr[9:4]] == waddr[63:10]) begin v3[waddr[9:4]] <= 1'b0; end
	end
*/
end

wire [5:0]index;
assign index = addr[9:4];
wire [3:0]way_hit;
assign way_hit[0] = v0[index] && (tag0[index] == addr[63:10]);
assign way_hit[1] = v1[index] && (tag1[index] == addr[63:10]);
assign way_hit[2] = v2[index] && (tag2[index] == addr[63:10]);
assign way_hit[3] = v3[index] && (tag3[index] == addr[63:10]);

wire not_device;
assign not_device = (addr <= 64'h8fffffff);    //暂时用来调整一致性

wire [127:0]dout0, dout1, dout2, dout3;
wire cen0, cen1, cen2, cen3;
wire wen;
wire [127:0]bwen;
wire [5:0]addr_sram;
wire [127:0]din_sram;

assign addr_sram = index;
assign cen0 = ~( (valid&&!ready && not_device) ? (way_hit[0] ? 1'b1 : (way_hit==4'b0&&random_cnt[0] ? 1'b1 : 1'b0)) : 1'b0) ;
assign cen1 = ~( (valid&&!ready && not_device) ? (way_hit[1] ? 1'b1 : (way_hit==4'b0&&random_cnt[1] ? 1'b1 : 1'b0)) : 1'b0) ;
assign cen2 = ~( (valid&&!ready && not_device) ? (way_hit[2] ? 1'b1 : (way_hit==4'b0&&random_cnt[2] ? 1'b1 : 1'b0)) : 1'b0) ;
assign cen3 = ~( (valid&&!ready && not_device) ? (way_hit[3] ? 1'b1 : (way_hit==4'b0&&random_cnt[3] ? 1'b1 : 1'b0)) : 1'b0) ;
assign  wen = ~( (valid&&!ready && not_device) && (wren || ((!wren)&&(way_hit == 4'b0))) )  ;
assign  din_sram = wren ? (way_hit==4'b0 ? line_mem_wr:(addr[3] ? {din,64'b0}:{64'b0,din})) : line_mem;
assign bwen = wren ? (way_hit==4'b0 ? 128'b0 : (addr[3] ? (~{mask,64'b0}):(~{64'b0,mask}))) : 128'b0;

S011HD1P_X32Y2D128_BW sram_d0(dout0, clk, cen0, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d1(dout1, clk, cen1, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d2(dout2, clk, cen2, wen, bwen, addr_sram, din_sram);
S011HD1P_X32Y2D128_BW sram_d3(dout3, clk, cen3, wen, bwen, addr_sram, din_sram);


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
	/*
	else if(!ready_IF_ID) begin
		way_hit_prev    <= way_hit_prev ;
		random_cnt      <= random_cnt   ;
		line_mem_prev   <= line_mem_prev;
		ready           <= ready        ;
	end
	*/
       /*
	else if(flush) begin
		way_hit_prev    <= 4'b0;
		line_mem_prev   <=128'b0;
		ready           <= 1'b0;
	end
	*/
	else if(ready && valid) begin
	     	way_hit_prev    <= way_hit;
		random_cnt[0]   <= random_cnt[3];
		random_cnt[3:1] <= random_cnt[2:0];
		line_mem_prev   <= line_mem;
		ready           <= 1'b0;
	end
	else if(!ready && valid) begin
	     	way_hit_prev    <= way_hit;
		random_cnt[0]   <= random_cnt[3];
		random_cnt[3:1] <= random_cnt[2:0];
		line_mem_prev   <= line_mem;
		ready           <= 1'b1;
	end
end

reg [127:0]line_read;
always @(*) begin
	case(way_hit_prev)
		4'b0001: line_read = dout0;
		4'b0010: line_read = dout1;
		4'b0100: line_read = dout2;
		4'b1000: line_read = dout3;
		default: line_read = line_mem_prev;
	endcase
end



assign dout =  addr[3] ?  line_read[127:64] : line_read[63:0] ;

//wire [127:0]wr_miss_line;
//assign wr_miss_line = 


wire [127:0]line_mem;
wire [127:0]line_mem_wr;
always @(negedge clk) begin
		pmem_read_dcache_low64 (addr, line_mem[63:0]);
		pmem_read_dcache_high64(addr, line_mem[127:64]);
	if(valid&&!ready)begin
		pmem_write_dcache_low64 (addr, wren, din, mask, line_mem_wr[63:0],line_mem_wr[127:64]);
		//pmem_write_dcache_high64(addr, {7'b0,wren}, din, mask, line_mem_wr[127:64]);
	end
end


always @(negedge clk) begin
	if(valid&&!ready&&!wren) begin
		if(way_hit != 4'b0) begin
			dcache_collect(1);
		end
		else begin
			dcache_collect(2);
		end
	end
	else if(valid&&!ready&&wren) begin
		if(way_hit != 4'b0) begin
			dcache_collect(3);
		end
		else begin
			dcache_collect(4);
		end
	end
end

  
endmodule
