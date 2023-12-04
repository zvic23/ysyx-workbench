module ysyx_22050612_FIFO #(
parameter DATA_W           = 4      ,        // Data width
parameter DEPTH            = 8      ,        // Depth of FIFO                   
parameter UPP_TH           = 4      ,        // Upper threshold to generate Almost-full
parameter LOW_TH           = 2               // Lower threshold to generate Almost-empty
)
(
input                   clk         ,        // Clock
input                   rst        ,         // Active-low Synchronous Reset

input                   wren_in      ,        // Write Enable
input  [DATA_W - 1 : 0] wrdata_in    ,        // Write-data
output                  almost_full  ,        // Almost-full signal
output                  full      ,           // Full signal

input                   rden_in      ,        // Read Enable
output [DATA_W - 1 : 0] rddata_in    ,        // Read-data
output                  almost_empty ,        // Almost-empty signal
output                  empty                 // Empty signal
);


reg [DATA_W - 1        : 0] data_rg [DEPTH] ;        // Data array
reg [$clog2(DEPTH) - 1 : 0] wrptr_rg        ;        // Write pointer
reg [$clog2(DEPTH) - 1 : 0] rdptr_rg        ;        // Read pointer
reg [$clog2(DEPTH)     : 0] dcount_rg       ;        // Data counter
      
logic                         wren_s          ;        // Write Enable signal generated iff FIFO is not full
logic                         rden_s          ;        // Read Enable signal generated iff FIFO is not empty


always @ (posedge clk) begin

   if (rst) begin     
          
      data_rg   <= '{default: '0} ;
      wrptr_rg  <= 0              ;
      rdptr_rg  <= 0              ;      
      dcount_rg <= 0              ;

   end

   else begin

      //ready_rg <= 1'b1 ;
      
      /* FIFO write logic */            
      if (wren_s) begin                          
         
         data_rg [wrptr_rg] <= wrdata_in ;        // Data written to FIFO

         if (wrptr_rg == 15) begin
            wrptr_rg <= 0               ;        // Reset write pointer  
         end

         else begin
            wrptr_rg <= wrptr_rg + 1    ;        // Increment write pointer            
         end

      end

      /* FIFO read logic */
      if (rden_s) begin         

         if (rdptr_rg == 15) begin
            rdptr_rg <= 0               ;        // Reset read pointer
         end

         else begin
            rdptr_rg <= rdptr_rg + 1    ;        // Increment read pointer            
         end

      end

      /* FIFO data counter update logic */
      if (wren_s && !rden_s) begin               // Write operation
         dcount_rg <= dcount_rg + 1 ;
      end                    
      else if (!wren_s && rden_s) begin          // Read operation
         dcount_rg <= dcount_rg - 1 ;         
      end

   end

end


/*-------------------------------------------------------------------------------------------------------------------------------
   Continuous Assignments
-------------------------------------------------------------------------------------------------------------------------------*/

assign full      = (dcount_rg == DEPTH) ? 1'b1 : 0 ;
assign empty     = (dcount_rg == 0    ) ? 1'b1 : 0 ;

// Write and Read Enables internal
assign wren_s      = wren_in & !full                ;  
assign rden_s      = rden_in & !empty               ;


// Almost-full and Almost Empty to output
assign almost_full  = (dcount_rg > UPP_TH) ? 1'b1 : 0 ;
assign almost_empty = (dcount_rg < LOW_TH) ? 1'b1 : 0 ;

// Read-data to output
assign rddata_in    = data_rg [rdptr_rg]              ;   


endmodule
