
module ysyx_22050612_Arbiter(
   input clk,
   input rst,
   
   input reg arvalid_1,
   input reg arvalid_2,
   output reg arvalid,
   input [31:0]araddr_1,
   input [31:0]araddr_2,
   output [31:0]araddr,
   output arready_1,
   output arready_2,
   input arready,

   output reg rvalid_1,
   output reg rvalid_2,
   input reg rvalid,
   output [63:0]rdata_1,
   output [63:0]rdata_2,
   input [63:0]rdata,
   output reg [1:0]rresp_1,
   output reg [1:0]rresp_2,
   input reg [1:0]rresp,
   input rready_1,
   input rready_2,
   output rready,

   input awvalid_1,
   input awvalid_2,
   output awvalid,
   input [31:0]awaddr_1,
   input [31:0]awaddr_2,
   output [31:0]awaddr,
   output awready_1,
   output awready_2,
   input awready,

   input wvalid_1,
   input wvalid_2,
   output wvalid,
   input [63:0]wdata_1,
   input [63:0]wdata_2,
   output [63:0]wdata,
   input [ 7:0]wstrb_1,
   input [ 7:0]wstrb_2,
   output [ 7:0]wstrb,
   output wready_1,
   output wready_2,
   input wready,

   output [1:0]bresp_1,
   output [1:0]bresp_2,
   input [1:0]bresp,
   output bvalid_1,
   output bvalid_2,
   input bvalid,
   input bready_1,
   input bready_2,
   output bready


);


//*********************    write    ********************
reg writing_1;
reg writing_2;
wire writing;
assign writing = writing_1 || writing_2;

always @(*) begin
	if(writing == 1'b0 && (awvalid_1 == 1'b1 || wvalid_1 == 1'b1)) begin
		awvalid   = awvalid_1;
		awaddr    = awaddr_1;
		awready_1 = awready;
		awready_2 = 1'b0; 
		wvalid    = wvalid_1;
		wdata     = wdata_1;
		wstrb     = wstrb_1;
		wready_1  = wready;
		wready_2  = 1'b0; 
		bresp_1   = bresp;
		bresp_2   = 2'b0; 
		bvalid_1  = bvalid;
		bvalid_2  = 1'b0; 
		bready    = bready_1;
	end
	else if(writing == 1'b0 && (awvalid_2 == 1'b1 || wvalid_2 == 1'b1)) begin
		awvalid   = awvalid_2;
		awaddr    = awaddr_2;
		awready_1 = 1'b0; 
		awready_2 = awready;
		wvalid    = wvalid_2;
		wdata     = wdata_2;
		wstrb     = wstrb_2;
		wready_1  = 1'b0; 
		wready_2  = wready;
		bresp_1   = 2'b0; 
		bresp_2   = bresp;
		bvalid_1  = 1'b0; 
		bvalid_2  = bvalid;
		bready    = bready_2;
	end
	else if(writing_1 == 1'b1) begin
		awvalid   = awvalid_1;
		awaddr    = awaddr_1;
		awready_1 = awready;
		awready_2 = 1'b0; 
		wvalid    = wvalid_1;
		wdata     = wdata_1;
		wstrb     = wstrb_1;
		wready_1  = wready;
		wready_2  = 1'b0; 
		bresp_1   = bresp;
		bresp_2   = 2'b0; 
		bvalid_1  = bvalid;
		bvalid_2  = 1'b0; 
		bready    = bready_1;
	end
	else if(writing_2 == 1'b1) begin
		awvalid   = awvalid_2;
		awaddr    = awaddr_2;
		awready_1 = 1'b0; 
		awready_2 = awready;
		wvalid    = wvalid_2;
		wdata     = wdata_2;
		wstrb     = wstrb_2;
		wready_1  = 1'b0; 
		wready_2  = wready;
		bresp_1   = 2'b0; 
		bresp_2   = bresp;
		bvalid_1  = 1'b0; 
		bvalid_2  = bvalid;
		bready    = bready_2;
	end
	else begin
		awvalid = 1'b0; 
		awaddr  = 32'b0; 
		awready_1 = 1'b0; 
		awready_2 = 1'b0; 
		wvalid  = 1'b0; 
		wdata   = 64'b0; 
		wstrb   = 8'b0; 
		wready_1  = 1'b0; 
		wready_2  = 1'b0; 
		bresp_1   = 2'b0; 
		bresp_2   = 2'b0; 
		bvalid_1  = 1'b0; 
		bvalid_2  = 1'b0; 
		bready  = 1'b0; 
	end
end

always @(posedge clk) begin
	if(rst == 1'b1)begin
		writing_1 <=1'b0;
		writing_2 <=1'b0;
	end
	else if(writing == 1'b0 && awvalid_1 == 1'b1) begin
		writing_1 <=1'b1;
	end
	else if(writing == 1'b0 && awvalid_2 == 1'b1) begin
		writing_2 <=1'b1;
	end
	else if(writing_1 == 1'b1 && bvalid_1 == 1'b1 && bready_1 == 1'b1) begin
		writing_1 <=1'b0;
	end
	else if(writing_2 == 1'b1 && bvalid_2 == 1'b1 && bready_2 == 1'b1) begin
		writing_2 <=1'b0;
	end
end



//*********************    read    ********************
reg reading_1;
reg reading_2;
wire reading;
assign reading = reading_1 || reading_2;

always @(*) begin
	if(reading == 1'b0 && arvalid_1 == 1'b1) begin
		arvalid   = arvalid_1;
		araddr    = araddr_1;
		arready_1 = arready;
		arready_2 = 1'b0; 
		rvalid_1  = rvalid;
		rvalid_2  = 1'b0; 
		rdata_1   = rdata;
		rdata_2   = 64'b0; 
		rresp_1   = rresp;
		rresp_2   = 2'b0; 
		rready    = rready_1;
	end
	else if(reading == 1'b0 && arvalid_2 == 1'b1) begin
		arvalid   = arvalid_2;
		araddr    = araddr_2;
		arready_1 = 1'b0; 
		arready_2 = arready;
		rvalid_1  = 1'b0; 
		rvalid_2  = rvalid;
		rdata_1   = 64'b0; 
		rdata_2   = rdata;
		rresp_1   = 2'b0; 
		rresp_2   = rresp;
		rready    = rready_2;
	end
	else if(reading_1 == 1'b1) begin
		arvalid   = arvalid_1;
		araddr    = araddr_1;
		arready_1 = arready;
		arready_2 = 1'b0; 
		rvalid_1  = rvalid;
		rvalid_2  = 1'b0; 
		rdata_1   = rdata;
		rdata_2   = 64'b0; 
		rresp_1   = rresp;
		rresp_2   = 2'b0; 
		rready    = rready_1;
	end
	else if(reading_2 == 1'b1) begin
		arvalid   = arvalid_2;
		araddr    = araddr_2;
		arready_1 = 1'b0; 
		arready_2 = arready;
		rvalid_1  = 1'b0; 
		rvalid_2  = rvalid;
		rdata_1   = 64'b0; 
		rdata_2   = rdata;
		rresp_1   = 2'b0; 
		rresp_2   = rresp;
		rready    = rready_2;
	end
	else  begin
		arvalid   = 1'b0; 
		araddr    = 32'b0; 
		arready_1 = 1'b0; 
		arready_2 = 1'b0; 
		rvalid_1  = 1'b0; 
		rvalid_2  = 1'b0; 
		rdata_1   = 64'b0; 
		rdata_2   = 64'b0; 
		rresp_1   = 2'b0; 
		rresp_2   = 2'b0; 
		rready    = 1'b0; 
	end
end

always @(posedge clk) begin
	if(rst == 1'b1)begin
		reading_1 <=1'b0;
		reading_2 <=1'b0;
	end
	else if(reading == 1'b0 && arvalid_1 == 1'b1) begin
		reading_1 <=1'b1;
	end
	else if(reading == 1'b0 && arvalid_2 == 1'b1) begin
		reading_2 <=1'b1;
	end
	else if(reading_1 == 1'b1 && rvalid_1 == 1'b1 && rready_1 == 1'b1) begin
		reading_1 <=1'b0;
	end
	else if(reading_2 == 1'b1 && rvalid_2 == 1'b1 && rready_2 == 1'b1) begin
		reading_2 <=1'b0;
	end
end





endmodule
