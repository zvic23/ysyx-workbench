module priencode83(x,en,hex0,z,y);
  input  [7:0] x;
  input  en;
  output [6:0]hex0;
  output reg z;
  output reg [2:0]y;
  integer i;
  always @(x or en) begin
    if (en) begin
      y = 0;
      if(x==0) z=0;
      else begin
        z=1;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y = i[2:0];
      end
    end
    else  begin y = 0; z = 0; end
  end

  bcd7seg s0({1'b0,y},hex0);
  

endmodule
