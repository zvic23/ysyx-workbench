import "DPI-C" function void read_inst(int npc_inst);

module ysyx_22050612_IFU (
   input clk,
   input rst, 
   input [63:0]dnpc,
   output [63:0]pc,
   output [31:0]inst  
);


ysyx_22050612_Reg #(64,64'h80000000) pc_rg (clk, rst, dnpc, pc, 1'b1);

//Reg #(1,1'b0) pc0  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc1  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//
//Reg #(1,1'b0) pc2  (clk, rst,    clk, pc[ ], 1'b1);
//Reg #(1,1'b0) pc3  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc4  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc5  (clk, rst, ~pc[ ], pc[ ], 1'b1);
//Reg #(1,1'b0) pc6  (clk, rst, ~pc[ ], pc[ ], 1'b1);

wire [63:0]inst_mix;
always @(*) begin
  pmem_read(pc, inst_mix);
end
assign inst = pc[2]?inst_mix[63:32] : inst_mix[31:0];


always @(*) begin
  read_inst(inst);
end


endmodule

