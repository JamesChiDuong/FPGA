`ifndef NP
    `define NP 100
`endif
`ifndef SEED
    `define SEED 1
`endif
module testbench();
    //input
    reg clk;
    reg reset;
    reg btn;
    //output
    wire [2:0] sel;
    
    integer np;
    integer seed = `SEED;
    parameter TLCK = 100;
    
    
    BTN_Control 
        BTNC
        (
        .clk(clk),
        .reset(reset),
        .btn(btn),
        .sel(sel)
        ); 

    initial begin
        clk = 1'b1;
        reset = 1'b1;
        #20 reset = 1'b0;
        btn = 1'b0;
        np = `NP;
         //waveform output
        $dumpfile("BTN_Control.vcd");
        $dumpvars(0,testbench);
    end
    always  begin
        #20
        np = np - 1;
        clk = ~clk;
        if(np == 0)
            $finish;
    end
    always begin
        #100 btn = ~btn;
    end
endmodule