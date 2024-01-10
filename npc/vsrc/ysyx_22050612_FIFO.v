module ysyx_22050612_FIFO #(
parameter DATA_W = 4  ,        // Data width
parameter DEPTH  = 8  ,        // Depth of FIFO                   
parameter UPP_TH = 4  ,        // Upper threshold to generate Almost-full
parameter LOW_TH = 2           // Lower threshold to generate Almost-empty
)
(
input                   clk         ,        
input                   rst        ,         
//write
input                   wren_in      ,        
input  [DATA_W - 1 : 0] wrdata_in    ,        
output                  almost_full  ,       
output                  full      ,           
//read
input                   rden_in      ,     
output [DATA_W - 1 : 0] rddata_out    ,    
output                  almost_empty ,    
output                  empty              
);


reg [DATA_W - 1        : 0] data_rg [DEPTH] ;        // Data array
reg [$clog2(DEPTH) - 1 : 0] wrptr_rg        ;        // Write pointer
reg [$clog2(DEPTH) - 1 : 0] rdptr_rg        ;        // Read pointer
reg [$clog2(DEPTH)     : 0] dcount_rg       ;        // Data counter
      
wire wren; // Write Enable signal generated if FIFO is not full
wire rden; // Read  Enable signal generated if FIFO is not empty


assign full      = (dcount_rg == DEPTH) ? 1'b1 : 0 ;
assign empty     = (dcount_rg == 0    ) ? 1'b1 : 0 ;

assign wren      = wren_in & !full                ;  
assign rden      = rden_in & !empty               ;


assign almost_full  = (dcount_rg > UPP_TH) ? 1'b1 : 0 ;
assign almost_empty = (dcount_rg < LOW_TH) ? 1'b1 : 0 ;

assign rddata_out    = data_rg [rdptr_rg]              ; 


always @ (posedge clk) begin
   if (rst) begin     
      data_rg   <= '{default: '0} ;
      wrptr_rg  <= 0              ;
      rdptr_rg  <= 0              ;      
      dcount_rg <= 0              ;

   end
   else begin
      if (wren) begin                          
         
         data_rg [wrptr_rg] <= wrdata_in ;        // Data written to FIFO

         if (wrptr_rg == 15) begin
            wrptr_rg <= 0               ;        // Reset write pointer  
         end

         else begin
            wrptr_rg <= wrptr_rg + 1    ;        // Increment write pointer            
         end

      end

      if (rden) begin         

         if (rdptr_rg == 15) begin
            rdptr_rg <= 0               ;        // Reset read pointer
         end

         else begin
            rdptr_rg <= rdptr_rg + 1    ;        // Increment read pointer            
         end

      end

      if (wren && !rden) begin               // Write
         dcount_rg <= dcount_rg + 1 ;
      end                    
      else if (!wren && rden) begin          // Read 
         dcount_rg <= dcount_rg - 1 ;         
      end

   end

end


  


endmodule
