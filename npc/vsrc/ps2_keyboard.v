module ps2_keyboard(clk,clr,ps2_clk,ps2_data,data,rel,sum,cmb
                    );
    input clk,clr,ps2_clk,ps2_data;
    output reg [7:0] data;        //输出显示键码
    output reg rel;       //rel用来表示是否松开按键，1表示松开，关掉显示;cmb指示组合键是否按下
    output cmb;
    output reg [15:0]sum;         //按键次数统计
    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;
    reg [7:0] buffer1,buffer2;    //buffer12用来保存已经键入的键码
    reg [1:0] state; 

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clr == 0) begin // reset
            count <= 0;rel<= 0; data <= 0;  sum <=0; buffer1<=0;buffer2<=0;state<=0; 
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
		      
      		    if(state==0)begin                       //state 表示现在共有几个按键同时按下
		        if((buffer[8:1]!=8'hF0)&&(data!=8'hF0))begin
		         rel<=0;
                         state<=1;
			 sum<=sum+1;
		       	 buffer1<=buffer[8:1];
		        end	
                      end

                      else if(state==1)begin
                        if((buffer[8:1]!=8'hF0)&&(data!=8'hF0)&&(buffer[8:1]!=buffer1)&&(buffer[8:1]!=buffer2))begin
			  sum<=sum+1;
                          state<=2;
			  if(buffer1==0) buffer1<=buffer[8:1];
			  else buffer2<=buffer[8:1];
		        end
			else if(data==8'hF0)begin
		          rel<=1;
			  sum<=sum+1;
			  state<=0;
		          if(buffer[8:1]==buffer1) buffer1<=0;
			  else buffer2<=0;
		        end
                      end

                      else if(state==2)begin
			if(data==8'hF0)begin
			  sum<=sum+1;
			  state<=1;
		          if(buffer[8:1]==buffer1) buffer1<=0;
			  else buffer2<=0;
                        end 
		      end


		        data<=buffer[8:1];
		      end
                        count <= 0;     // for next
		      $display("receive %x", buffer[8:1]);
                      $display(state); //state会有一个周期的延迟，即显示上一次按键动作的state!!
              end 
	      else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
        end
    end
    end
assign cmb=(buffer1==8'h12||buffer1==8'h14||buffer2==8'h12||buffer2==8'h14);
endmodule
