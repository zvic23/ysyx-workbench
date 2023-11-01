//import "DPI-C" function void pmem_read_pc(
//  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);


module ysyx_22050612_SRAM(
   input clk,
   input rst,
   
//read
   input  [31:0]araddr,
   input  [7:0]arlen,
   input  [2:0]arsize,
   input  [1:0]arburst,
   input  arvalid,
   output reg arready,

   output [63:0]rdata,
   output reg [1:0]rresp,
   output reg rlast,
   output reg rvalid,
   input  rready,

//write
   input [31:0]awaddr,
   input [7:0]awlen,
   input [2:0]awsize,
   input [1:0]awburst,
   input awvalid,
   output awready,

   input [63:0]wdata,
   input [ 7:0]wstrb,
   input wlast,
   input wvalid,
   output wready,

   output [1:0]bresp,
   output bvalid,
   input bready


//   output reg [1:0]write_current_state,
//   output [63:0]wwdata,
//   output [ 7:0]wwstrb,
//   output [31:0]wwaddr,
//   input  [1:0]dc_state,
//   input [63:0]dc_wdata,
//   input [7:0]dc_wstrb
   
);
//assign wwdata = wdata;
//assign wwstrb = wstrb;
//assign wwaddr = w_addr;

/*
always @(negedge clk) begin
	$display("sram:   arvalid:%x   rlen:%x  rlast:%x  state:%x",arvalid,awlen,rlast,read_current_state);
end
*/

//************** read  *******************
//assign arready = (read_current_state == read_send_rdata) ? 1'b0 : 1'b1;
reg [1:0]read_current_state, read_next_state;

localparam read_idle       = 2'b00;        //waiting for arvalid
localparam read_send_rdata = 2'b01;        //sending read data after read address handshake
localparam read_last_send  = 2'b11;        //sending the last data and 'rlast'

reg [31:0]r_addr;
reg  [7:0]r_len;
reg  [2:0]r_size;
reg  [1:0]r_burst;
reg  [7:0]r_count;

always @(posedge clk) begin
	if(rst == 1'b1) read_current_state <= read_idle;
	else            read_current_state <= read_next_state;

	if(arvalid&&arready&&(read_current_state==read_idle)) begin
		r_addr  <= araddr;
		r_len   <= arlen;
		r_size  <= arsize;
		r_burst <= arburst;

		r_count <= 8'b0;
	end
	else if(read_current_state == read_send_rdata) begin
		r_count <= r_count + 8'h1;
	end
end

reg [63:0]r_data;
assign rdata = r_data;

assign arready = read_current_state == read_idle;
assign rlast  = (r_count == r_len) && (read_current_state == read_send_rdata);


always @(*) begin
	case(read_current_state)
		read_idle: begin
			rvalid = 1'b0;
			rresp  = 2'b0;
			read_next_state = (arvalid == 1'b1)? read_send_rdata : read_idle;
		end
		read_send_rdata: begin
  			pmem_read({{32{1'b0}},(r_addr[31:0]+r_count*8)}, r_data);	
  			//pmem_read({{32{1'b0}},r_addr[31:6],r_count[3:0],{2{1'b0}}}, r_data);	
  			//if(clk)pmem_read({{32{1'b0}},r_addr+r_count*(a_size-1)}, r_data);	
			rvalid = 1'b1;
			rresp  = 2'b0;
			read_next_state = (r_count == r_len) ? read_idle : read_send_rdata;
		end
		default: begin
			rvalid = 1'b0;
			rresp  = 2'b0;
			read_next_state = read_idle;
		end
	endcase
end





//************** write *******************
reg [1:0]write_current_state, write_next_state;

localparam write_idle  = 2'b00;
localparam write_receive_wdata = 2'b01;        //receive wdata and write it to memory
localparam write_w_rsp = 2'b11;                //write respone

reg [31:0]w_addr;
reg  [7:0]w_len;
reg  [2:0]w_size;
reg  [1:0]w_burst;
reg  [7:0]w_count;

always @(posedge clk) begin
	if(rst == 1'b1) write_current_state <= write_idle;
	else            write_current_state <= write_next_state;

	if(awvalid&&awready&&(write_current_state==write_idle)) begin
		w_addr  <= awaddr;
		w_len   <= awlen;
		w_size  <= awsize;
		w_burst <= awburst;

		w_count <= 8'b0;
	end
	else if(write_current_state == write_receive_wdata) begin
		w_count <= w_count + 8'h1;
	end
end


always @(posedge clk) begin
	if(rst == 1'b1) write_current_state <= write_idle;
	else            write_current_state <= write_next_state;

//	if(w_addr == 32'h80008fe8)begin
//	$display("sram: addr:%x, state:%b, wdata:%x, wstrb:%x  awaddr:%x      state:%b,data:%x,strb:%x\n",w_addr,write_current_state,wdata,wstrb,   awaddr,      dc_state,dc_wdata,dc_wstrb);
//        end
end

assign awready = write_current_state==write_idle;
assign bresp   = 2'b0;
assign bvalid  = write_current_state==write_w_rsp;

always @(*) begin
	case(write_current_state)
		write_idle: begin
			wready  = 1'b0;
			write_next_state = (awvalid && awready) ? write_receive_wdata : write_idle;
		end
		write_receive_wdata: begin
			pmem_write({{32{1'b0}},w_addr}, wdata, wstrb);
			wready  = 1'b1;
			write_next_state = (w_count == w_len) ? write_w_rsp : write_receive_wdata;
		end
		write_w_rsp: begin
			wready  = 1'b0;
			write_next_state = write_idle;
		end
		default: begin
			wready  = 1'b0;
			write_next_state = write_idle;
		end
	endcase
end



endmodule
