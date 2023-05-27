module alu (
	input clk,
	input  [3:0] data_1,
	input  [3:0] data_2,
	input  [2:0] sel,
	output reg [7:0] alu_out
);

always@(posedge clk)
	case (sel)
	/* verilator lint_off WIDTH */
		3'b001 :  	alu_out <= (data_1 + data_2);
		3'b010 :  	alu_out <= (data_1 - data_2);
		3'b011 :  	alu_out <= (data_1 >> 1);
		3'b100 :  	alu_out <= (data_1 << 1);
		3'b101 :	alu_out <= data_1 * data_2;
		3'b110 :  	alu_out <= data_1 / data_2;
		default:	alu_out <= 0;
	endcase
endmodule