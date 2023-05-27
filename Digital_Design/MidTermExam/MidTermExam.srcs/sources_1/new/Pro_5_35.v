module Prob_5_35 (output out_z, input in_x, in_y, clk, reset_b);
  reg [1:0] state, next_state;

  assign out_z = ((state == 2'b10) || (state == 2'b11));

  always @ (posedge clk) if (reset_b == 1'b0) state <= 2'b00; else state <= next_state;

  always @ (state, in_x, in_y) begin
	 next_state = 2'b00;
    case (state)
      2'b00:	if (({in_x, in_y} == 2'b00) || ({in_x, in_y} == 2'b01)) 					next_state = 2'b00;
			else if ({in_x, in_y} == 2'b10) next_state = 2'b11;
			else if ({in_x, in_y} == 2'b11) next_state = 2'b01;

      2'b01:	if (({in_x, in_y} == 2'b00) || ({in_x, in_y} == 2'b01)) next_state = 2'b00;
			else if (({in_x, in_y} == 2'b10) || ({in_x, in_y} == 2'b11)) next_state = 2'b10;

      2'b10:	if (({in_x, in_y} == 2'b00) || ({in_x, in_y} == 2'b01)) next_state = 2'b00;
			else if (({in_x, in_y} == 2'b10) || ({in_x, in_y} == 2'b11)) next_state = 2'b11;

      2'b11:	if (({in_x, in_y} == 2'b00) || ({in_x, in_y} == 2'b01)) next_state = 2'b00;
			else if (({in_x, in_y} == 2'b10) || ({in_x, in_y} == 2'b11)) next_state = 2'b11;
	  default:	next_state = 2'b00;
    endcase
	end
endmodule