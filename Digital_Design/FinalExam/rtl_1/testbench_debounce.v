`ifndef NP
    `define NP 50*1600
`endif
`ifndef SEED
    `define SEED 1
`endif
module testbench_debounce ();
    reg clk;
    reg reset;
    reg button_in;
    wire db_tick;
    integer np;
    debounce_explicit 
    DB1
    (
    .clk(clk),
    .reset(reset),
    .btn(button_in),
    .db_tick(db_tick)
    );
/* verilator lint_off STMTDLY */
 initial begin
        clk = 0;
        reset = 1'b0;
        #200 reset = 1'b1;
        np = `NP;
        $dumpfile("debounce.vcd");
        $dumpvars(0,testbench_debounce);
 end
 initial begin
			#40000 button_in = 1'b1;
			
			#400 button_in = 1'b0;		
			
			#800 button_in = 1'b1;	
			
			#800 button_in = 1'b0;				
			
			#800 button_in = 1'b1;

			#40000 button_in = 1'b0;
			
			#4000 button_in = 1'b1;		
			
			#40000 button_in = 1'b0;

			#400 button_in = 1'b1;
			
			#800 button_in = 1'b0;		
			
			#800 button_in = 1'b1;

			#800 button_in = 1'b0;
			
			#40000 button_in = 1'b1;		
			
			#4000 button_in = 1'b0;
 end 
always  begin
#10
    np = np - 1;
    clk = ~clk;
    if(np == 0)
    $finish;
end
endmodule