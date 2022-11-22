module ps2_keyboard(clk,clr,ps2_clk,ps2_data,data,press,capital,enter,backspace
                    );
    input clk,clr,ps2_clk,ps2_data;
    output [7:0] data;        //输出显示键码
    output press,enter;
    output reg capital,backspace;

    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    reg [7:0] buff[3:1];
    reg outing,enter;
    reg [1:0] aim;

    assign press = (aim!=0)? 1:0;
    assign data = press? buff[aim]:0;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clr == 1) begin // reset
            count <= 0; buff[1] <= 8'h80; buff[2] <= 8'h80; buff[3]<= 8'h80;
	    aim <= 0; outing<=0; capital <= 0; backspace<=0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
		  

		    if(buffer[8:1]==8'hF0) begin
			    outing<=1;
		    end
                    else if(outing==1) begin
                            if((buffer[8:1]==8'h12)||(buffer[8:1]==8'h14)) begin
				    capital<=0;

			    end
			    else if(buffer[8:1]==8'h5A) begin 
				    enter<=0;
			    end
			    else if(buffer[8:1]==8'h66) begin 
				    backspace<=0;
			    end
			    else if(buffer[8:1]==buff[1]) begin
				    aim<=aim-1;
				    buff[1]<=buff[2];
				    buff[2]<=buff[3];
				    buff[3]<=8'h80;
				    
			    end
			    else if(buffer[8:1]==buff[2]) begin
				    aim<=aim-1;
				    buff[2]<=buff[3];
				    buff[3]<=8'h80;
				    
			    end
			    else if(buffer[8:1]==buff[3]) begin
				    aim<=aim-1;
				    buff[3]<=8'h80;
			    end
		    
		            outing <=0;
		    end
		    else if((buffer[8:1]==8'h12)||(buffer[8:1]==8'h14)) capital<=1;
		    else if(buffer[8:1]==8'h5A) enter<=1;
		    else if(buffer[8:1]==8'h66) backspace<=1;
		    else if((buffer[8:1]!=buff[1])&&(buffer[8:1]!=buff[2])&&(buffer[8:1]!=buff[3]))begin
			    aim<=aim+1;
			    buff[aim+1]<=buffer[8:1];

		    end


		end
                        count <= 0;     // for next
		      $display("receive %x", buffer[8:1]);
		     // $display(data);
		      //$display(aim);
              end 
	      else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
        end
    end
    end
endmodule
