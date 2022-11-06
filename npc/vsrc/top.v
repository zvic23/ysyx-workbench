module top(mode , A ,B ,z ,ovfl ,c ,out, hex );
   input  [2:0]mode;
   input  [3:0]A,B;
   output reg [3:0]out;
   output reg ovfl,z,c;
   output [6:0]hex;

   reg [3:0]D;

   always @(mode or A or B  ) begin
      ovfl = 0; z =0; c =0; out =0; D = 0;     
      if(mode == 3'b0) begin
      {c,out} = A+B;
      z   = (out==0);      
      ovfl= (A[3]==B[3])&&(out[3]!=A[3]);
      end
      
      else if(mode == 3'b1) begin
      D = B;
      D = ~D+4'b1;
      {c,out} = A+D;
      z   = (out==0);
      ovfl= (A[3]==B[3])&&(out[3]!=A[3]);
      end
     
      else if(mode == 3'b10) 
      out = ~A;

      else if(mode == 3'b11) 
      out = A&B;

      else if(mode == 3'b100)
      out = A|B;

      else if(mode == 3'b101)
      out = A^B;

      else if(mode == 3'b110)begin
        if(A[3]!=B[3]) out[0] = (A[3]==1);
        else  out[0] = (A[2:0]<B[2:0]);	
      end

      else if(mode == 3'b111)
      out[0] = (A==B);

end

bcd7seg s0(out , hex);

endmodule





