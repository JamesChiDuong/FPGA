`ifndef NP
    `define NP 500*20000
`endif
`ifndef SEED
    `define SEED 1
`endif
module testbench_Top();
    reg clk;
    reg reset;
    reg [3:0] sw_data_1;
    reg [3:0] sw_data_2;
    reg btn_sel;
    wire [6:0] LED_OUT1;
    wire [6:0] LED_OUT2;
    wire [6:0] LED_OUT0;
    wire [6:0] LED_OUT4;
    wire [6:0] LED_OUT5;
    wire [6:0] LED_OUT6;
    wire [6:0] LED_OUT7;
    integer np;
    integer seed = `SEED;

    Top_Module TOP1
    (
        .clk(clk),
        .reset(reset),
        .sw_data_1(sw_data_1),
        .sw_data_2(sw_data_2),
        .btn_sel(btn_sel), // dung fsm de dieu chinh trang thai, co 8 trang thai, thay doi lan luot cac trang thai
        .LED_OUT0(LED_OUT0),
        .LED_OUT1(LED_OUT1),
        .LED_OUT2(LED_OUT2),
        .LED_OUT4(LED_OUT4),
        .LED_OUT5(LED_OUT5),
        .LED_OUT6(LED_OUT6),
        .LED_OUT7(LED_OUT7)
    );

     initial 
     begin
        clk = 0;
        reset = 1'b1;
        #200 reset = 1'b0;
        np = `NP;
        $dumpfile("Top_Module.vcd");
        $dumpvars(0,testbench_Top);
    end
     initial 
     begin
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;

        /**********2*************/
                #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********3*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********4*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********5*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********6*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********7*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********8*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;
        /**********9*************/
        #40000 btn_sel = 1'b1;
        
        #400 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;	
        
        #800 btn_sel = 1'b0;				
        
        #800 btn_sel = 1'b1;

        #40000 btn_sel = 1'b0;
        
        #4000 btn_sel = 1'b1;		
        
        #40000 btn_sel = 1'b0;

        #400 btn_sel = 1'b1;
        
        #800 btn_sel = 1'b0;		
        
        #800 btn_sel = 1'b1;

        #800 btn_sel = 1'b0;
        
        #40000 btn_sel = 1'b1;		
        
        #4000 btn_sel = 1'b0;

    end
    initial begin
        #100 sw_data_1 = 4'd13;
        #300 sw_data_2 = 4'd10;
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