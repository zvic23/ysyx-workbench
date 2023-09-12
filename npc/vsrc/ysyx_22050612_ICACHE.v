module ysyx_22050612_ICACHE (

input addr,
input valid,

output [31:0]inst,
output ready

);


reg [53:0]tag1[63:0];
reg [53:0]tag2[63:0];
reg [53:0]tag3[63:0];
reg [53:0]tag4[63:0];
reg [63:0]v1;
reg [63:0]v2;
reg [63:0]v3;
reg [63:0]v4;


always @(posedge clk) begin
	if(rst) begin
		v1 <= 64'b0;
		v2 <= 64'b0;
		v3 <= 64'b0;
		v4 <= 64'b0;
	end
end

wire [5:0]index;
assign index = addr[9:4];
wire [3:0]way_hit;
assign way_hit[0] = v1[index] && (tag[index] == addr[63:10]);

  
endmodule
