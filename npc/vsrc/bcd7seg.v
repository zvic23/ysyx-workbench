module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);

always@(b)begin
  case(b)
     4'd0 : h =7'b1111110;
     4'd1 : h =7'b0110000;
     4'd2 : h =7'b1101101;
     4'd3 : h =7'b1111001;
     4'd4 : h =7'b0110011;
     4'd5 : h =7'b1011011;
     4'd6 : h =7'b1011111;
     4'd7 : h =7'b1110000;
     4'd8 : h =7'b1111111;
     4'd9 : h =7'b1111011;
     4'd10: h =7'b1110111;
     4'd11: h =7'b0011111;
     4'd12: h =7'b1001110;
     4'd13: h =7'b0111101;
     4'd14: h =7'b1001111;
     4'd15: h =7'b1000111;
     default: h =7'b0;
     endcase
     h=~h;
end
endmodule



