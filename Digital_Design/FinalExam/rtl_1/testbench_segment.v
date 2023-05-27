`ifndef NP
    `define NP 500*20000
`endif
`ifndef SEED
    `define SEED 1
`endif
module testbench_segment ();

reg clk;
reg [3:0] data1;
reg [3:0] data2;
reg [7:0] data3;
wire [1:0] Anode_Activate1;
wire [1:0] Anode_Activate2;
wire [3:0] Anode_Activate3;
wire [6:0] LED_OUT1;
wire [6:0] LED_OUT2;
wire [6:0] LED_OUT3;
reg reset;
integer np;
integer seed = `SEED;

	segment_7
    SG7
    (
	.clk(clk),
	.reset(reset),
	.data1(data1),
	.data2(data2),
	.data3(data3),
	.Anode_Activate1(Anode_Activate1), // 2bit for control data 1
	.Anode_Activate2(Anode_Activate2), // 2bit for control data 2
	.Anode_Activate3(Anode_Activate3), // 4bit for result
	.LED_OUT1(LED_OUT1),
	.LED_OUT2(LED_OUT2),
	.LED_OUT3(LED_OUT3)
    );
	initial 
	begin
			reset = 1'b1;
			clk = 0;
			#200 reset = 1'b0;
			np = `NP;
			$dumpfile("segment.vcd");
			$dumpvars(0,testbench_segment);
	end
	initial 
	begin
			#100 data1 = 4'd13;
			#300 data2 = 4'd10;
			#1000 data3 = 8'd145;
 	end
	always  
	begin
	#5
    np = np - 1;
    clk = ~clk;
    if(np == 0)
    $finish;
	end
endmodule