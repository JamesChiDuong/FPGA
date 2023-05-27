module segment_7
(
	input clk,
	input reset,
	input [3:0] data1,
	input [3:0] data2,
	input [7:0] data3,
	output reg [6:0] LED_OUT0,
	output reg [6:0] LED_OUT1,
	output reg [6:0] LED_OUT2,
	output reg [6:0] LED_OUT4,
	output reg [6:0] LED_OUT5,
	output reg [6:0] LED_OUT6,
	output reg [6:0] LED_OUT7
);
	wire [7:0] digit0;
	wire [7:0] digit1;
	wire [7:0] digit2;
	wire [3:0] digit4;
	wire [3:0] digit5;
	wire [3:0] digit6;
	wire [3:0] digit7;
	// localparam constanstNumber = 2500000;
	localparam constanstNumber = 250;
	reg [21:0] count;
	reg refresh_clk_1Hz;

	assign digit7 = data1/10;
	assign digit6 = data1%10;
	assign digit5 = data2/10;
	assign digit4 = data2%10;
	assign digit2 = data3/100;
	assign digit1 = (data3%100)/10;
	assign digit0 = ((data3%100)%10)/1;
	
	//-------------BCD To Cathod-----------------------//
	always@(*)
	begin
		case(digit7)
		4'd0:		LED_OUT7 = 7'b0000001; //0
		4'd1:   	LED_OUT7 = 7'b1001111; //1
		4'd2:   	LED_OUT7 = 7'b0010010; //2
		4'd3:   	LED_OUT7 = 7'b0000110; //3
		4'd4:		LED_OUT7 = 7'b1001100; //4
		4'd5:   	LED_OUT7 = 7'b0100100; //5
		4'd6:   	LED_OUT7 = 7'b0100000; //6
		4'd7:   	LED_OUT7 = 7'b0001111; //7
		4'd8:   	LED_OUT7 = 7'b0000000; //8
		4'd9:   	LED_OUT7 = 7'b0000100; //9
		default: 
                LED_OUT7 = 7'b0000001;
		endcase
		case(digit6)
		4'd0:	  LED_OUT6 = 7'b0000001; //0
		4'd1:   LED_OUT6 = 7'b1001111; //1
		4'd2:   LED_OUT6 = 7'b0010010; //2
		4'd3:   LED_OUT6 = 7'b0000110; //3
		4'd4:	  LED_OUT6 = 7'b1001100; //4
		4'd5:   LED_OUT6 = 7'b0100100; //5
		4'd6:   LED_OUT6 = 7'b0100000; //6
		4'd7:   LED_OUT6 = 7'b0001111; //7
		4'd8:   LED_OUT6 = 7'b0000000; //8
		4'd9:   LED_OUT6 = 7'b0000100; //9
		default: 
                LED_OUT6 = 7'b0000001;
		endcase
		case(digit5)
		4'd0:		LED_OUT5 = 7'b0000001; //0
		4'd1:   LED_OUT5 = 7'b1001111; //1
		4'd2:   LED_OUT5 = 7'b0010010; //2
		4'd3:   LED_OUT5 = 7'b0000110; //3
		4'd4:	  LED_OUT5 = 7'b1001100; //4
		4'd5:   LED_OUT5 = 7'b0100100; //5
		4'd6:   LED_OUT5 = 7'b0100000; //6
		4'd7:   LED_OUT5 = 7'b0001111; //7
		4'd8:   LED_OUT5 = 7'b0000000; //8
		4'd9:   LED_OUT5 = 7'b0000100; //9
		default: 
                LED_OUT5 = 7'b0000001;
		endcase
		case(digit4)
		4'd0:		LED_OUT4 = 7'b0000001; //0
		4'd1:   LED_OUT4 = 7'b1001111; //1
		4'd2:   LED_OUT4 = 7'b0010010; //2
		4'd3:   LED_OUT4 = 7'b0000110; //3
		4'd4:	  LED_OUT4 = 7'b1001100; //4
		4'd5:   LED_OUT4 = 7'b0100100; //5
		4'd6:   LED_OUT4 = 7'b0100000; //6
		4'd7:   LED_OUT4 = 7'b0001111; //7
		4'd8:   LED_OUT4 = 7'b0000000; //8
		4'd9:   LED_OUT4 = 7'b0000100; //9
		default: 
                LED_OUT4 = 7'b0000001;
		endcase
		case(digit2)
		8'd0:	  LED_OUT2 = 7'b0000001; //0
		8'd1:   LED_OUT2 = 7'b1001111; //1
		8'd2:   LED_OUT2 = 7'b0010010; //2
		8'd3:   LED_OUT2 = 7'b0000110; //3
		8'd4:	  LED_OUT2 = 7'b1001100; //4
		8'd5:   LED_OUT2 = 7'b0100100; //5
		8'd6:   LED_OUT2 = 7'b0100000; //6
		8'd7:   LED_OUT2 = 7'b0001111; //7
		8'd8:   LED_OUT2 = 7'b0000000; //8
		8'd9:   LED_OUT2 = 7'b0000100; //9="
		default: 
                LED_OUT2 = 7'b0000001;
		endcase
		case(digit1)
		8'd0:	  LED_OUT1 = 7'b0000001; //0
		8'd1:   LED_OUT1 = 7'b1001111; //1
		8'd2:   LED_OUT1 = 7'b0010010; //2
		8'd3:   LED_OUT1 = 7'b0000110; //3
		8'd4:	  LED_OUT1 = 7'b1001100; //4
		8'd5:   LED_OUT1 = 7'b0100100; //5
		8'd6:   LED_OUT1 = 7'b0100000; //6
		8'd7:   LED_OUT1 = 7'b0001111; //7
		8'd8:   LED_OUT1 = 7'b0000000; //8
		8'd9:   LED_OUT1 = 7'b0000100; //9="
		default: 
                LED_OUT6 = 7'b0000001;
		endcase
		case(digit0)
		8'd0:	  LED_OUT0 = 7'b0000001; //0
		8'd1:   LED_OUT0 = 7'b1001111; //1
		8'd2:   LED_OUT0 = 7'b0010010; //2
		8'd3:   LED_OUT0 = 7'b0000110; //3
		8'd4:	  LED_OUT0 = 7'b1001100; //4
		8'd5:   LED_OUT0 = 7'b0100100; //5
		8'd6:   LED_OUT0 = 7'b0100000; //6
		8'd7:   LED_OUT0 = 7'b0001111; //7
		8'd8:   LED_OUT0 = 7'b0000000; //8
		8'd9:   LED_OUT0 = 7'b0000100; //9="
		default: 
                LED_OUT0 = 7'b0000001;
		endcase
	end
endmodule
