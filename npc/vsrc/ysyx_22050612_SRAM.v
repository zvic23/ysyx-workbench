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

   output [31:0]rdata,
   output reg [1:0]rresp,
   output reg rlast,
   output reg rvalid,
   input  rready
/*
//write
   input [31:0]awaddr,
   input [7:0]awlen,
   input [2:0]awsize,
   input [1:0]arburst,
   input awvalid,
   output awready,

   input [63:0]wdata,
   input [ 7:0]wstrb,
   input wlast,
   input wvalid,
   output wready,

   output reg [1:0]bresp,
   output reg bvalid,
   input bready
   */
);





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
assign rdata = r_data[31:0];

always @(read_current_state or arvalid) begin
	case(read_current_state)
		read_idle: begin
			arready = 1'b1;
			rvalid = 1'b0;
			rresp  = 2'b0;
			rlast  = 1'b0;
			read_next_state = (arvalid == 1'b1)? read_send_rdata : read_idle;
		end
		read_send_rdata: begin
  			pmem_read({{32{1'b0}},r_addr[31:6],r_count[3:0],{2{1'b0}}}, r_data);	
  			//if(clk)pmem_read({{32{1'b0}},r_addr+r_count*(a_size-1)}, r_data);	
			arready = 1'b0;
			rvalid = 1'b1;
			rresp  = 2'b0;
			rlast  = (r_count == r_len) ? 1'b1 : 1'b0;
			read_next_state = (r_count == r_len) ? read_idle : read_send_rdata;
		end
		default: begin
			arready = 1'b1;
			rvalid = 1'b0;
			rresp  = 2'b0;
			rlast  = 1'b0;
			read_next_state = read_idle;
		end
	endcase
end




/*
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
end

always @(*) begin
	case(write_current_state)
		write_idle: begin
			awready = 1'b1;
			wready  = 1'b0;
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = (awvalid && awready) ? write_receive_wdata : write_idle;
		end
		write_receive_wdata: begin
			pmem_write({{32{1'b0}},w_addr}, wdata, wstrb);
			awready = 1'b0;
			wready  = 1'b1;
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = (w_count == w_len) ? write_w_rsp : write_receive_wdata;
		end
		write_w_rsp: begin
			awready = 1'b0;
			wready  = 1'b0;
			bvalid = 1'b1;
			bresp  = 2'b0;
			write_next_state = write_idle;
		end
		default: begin
			awready = 1'b1;
			wready  = 1'b0;
			bvalid = 1'b0;
			bresp  = 2'b0;
			write_next_state = write_idle;
		end
	endcase
end
*/


endmodule
