`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 03:41:10 PM
// Design Name: 
// Module Name: D_Flip_Flop
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


module D_Flip_Flop(
    output reg Q,
    input clk,
    input reset
    );
    always@(negedge clk, posedge reset)
    begin
        if(reset)
        begin
            Q <= 1'b0;
        end
        else
        begin
            Q <= #2~Q;
        end
    end
endmodule
