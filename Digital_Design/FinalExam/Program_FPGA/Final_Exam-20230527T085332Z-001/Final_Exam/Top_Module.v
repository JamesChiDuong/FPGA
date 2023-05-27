module Top_Module (
    input clk,
    input [3:0] sw_data_1,
    input [3:0] sw_data_2,
    input  btn_sel, // dung fsm de dieu chinh trang thai, co 8 trang thai, thay doi lan luot cac trang thai
    output [6:0] LED_OUT0,
    output [6:0] LED_OUT1,
    output [6:0] LED_OUT2,
	 output [6:0] LED_OUT4,
    output [6:0] LED_OUT5,
    output [6:0] LED_OUT6,
    output [6:0] LED_OUT7
);

wire [7:0] alu_out;
wire btn_tick;
wire [2:0] sel_out;
reg  reset;
initial reset = 1'b1;
always@(posedge clk)
	reset = 1'b0;
debounce_explicit DB1 
    (
        .clk(clk),
        .reset(reset),
        .btn(btn_sel),
        .db_tick(btn_tick)
    );

BTN_Control BTC1 
    (
        .clk(clk),
        .reset(reset),
        .btn(btn_tick),
        .sel(sel_out)
    );
alu ALU1
    (
        .clk(clk),
        .data_1(sw_data_1),
        .data_2(sw_data_2),
        .sel(sel_out),
        .alu_out(alu_out)
    );
segment_7 SG7
    (
        .clk(clk),
        .reset(reset),
        .data1(sw_data_1),
        .data2(sw_data_2),
        .data3(alu_out),
        .LED_OUT0(LED_OUT0),
        .LED_OUT1(LED_OUT1),
        .LED_OUT2(LED_OUT2),
		  .LED_OUT4(LED_OUT4),
        .LED_OUT5(LED_OUT5),
        .LED_OUT6(LED_OUT6),
		  .LED_OUT7(LED_OUT7)
    );

endmodule
