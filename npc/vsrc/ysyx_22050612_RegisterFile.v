module ysyx_22050612_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,

  input [ADDR_WIDTH-1:0] rs1,
  input [ADDR_WIDTH-1:0] rs2,
  output [DATA_WIDTH-1:0] src1,
  output [DATA_WIDTH-1:0] src2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

  assign src1 = rf[rs1];
  assign src2 = rf[rs2];

  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  always @(negedge clk) begin
    $display("%d,%d,%b\n",rf[0],rf[1],rf[2]);
    $display("%b,%d,%d",wdata,waddr,wen);
  end
endmodule
