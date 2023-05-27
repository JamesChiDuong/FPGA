`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 03:49:47 PM
// Design Name: 
// Module Name: TB_Ripple_Counter_4bit
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module TB_Ripple_Counter_4bit(
    );
    reg Count;
    reg Reset;
    wire A0,A1,A2,A3;
    
    Ripple_Counter_4bit M0(.A3(A3),.A2(A2),.A1(A1),.A0(A0),.Count(Count),.Reset(Reset));
    always #5 Count =~Count;
    initial
    begin
        Count = 1'b0;
        Reset = 1'b1;
        #4 Reset = 1'b0;
    end
    initial #170 $finish;
    
endmodule
