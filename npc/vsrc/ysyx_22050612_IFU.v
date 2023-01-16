module ysyx_22050612_IFU (
   input clk,
   input rst, 
     
     
     
     
     
     
     
   output [63:0]pc
);



Reg #(1,1'b0) pc0  (clk, rst,    clk, pc[ ], 1'b1);
Reg #(1,1'b0) pc1  (clk, rst, ~pc[ ], pc[ ], 1'b1);

Reg #(1,1'b0) pc2  (clk, rst,    clk, pc[ ], 1'b1);
Reg #(1,1'b0) pc3  (clk, rst, ~pc[ ], pc[ ], 1'b1);
Reg #(1,1'b0) pc4  (clk, rst, ~pc[ ], pc[ ], 1'b1);
Reg #(1,1'b0) pc5  (clk, rst, ~pc[ ], pc[ ], 1'b1);
Reg #(1,1'b0) pc6  (clk, rst, ~pc[ ], pc[ ], 1'b1);









endmodule

