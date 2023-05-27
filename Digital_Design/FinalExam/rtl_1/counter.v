module counter
(
	input clk,
	input reset,
	output reg [3:0]cnt
);
	always@(posedge clk or posedge reset)
	begin
		if(reset) cnt <= 4'd0;
		else 
			if(cnt >= 4'd9) 
				cnt <= 4'd0;
			else
				cnt <= cnt + 4'd1;
	end
endmodule