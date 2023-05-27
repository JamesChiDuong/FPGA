`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 10:36:34 AM
// Design Name: 
// Module Name: D_FIFO
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

module D_FIFO (
    input clk, 
    input reset_b,
    input D,
    output reg Q 
    );
always @ (posedge clk, negedge reset_b) 
    if (reset_b == 0) 
        Q <= 0; 
        else 
        Q <= D;
endmodule
