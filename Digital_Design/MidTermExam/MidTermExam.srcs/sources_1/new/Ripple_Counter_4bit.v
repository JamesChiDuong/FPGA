`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 03:43:40 PM
// Design Name: 
// Module Name: Ripple_Counter_4bit
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

module Ripple_Counter_4bit(
    output A3,A2,A1,A0,
    input Count,Reset
    );
    D_Flip_Flop F0(.Q(A0),.clk(Count),.reset(Reset));
    D_Flip_Flop F1(.Q(A1),.clk(A0),.reset(Reset));
    D_Flip_Flop F2(.Q(A2),.clk(A1),.reset(Reset));
    D_Flip_Flop F3(.Q(A3),.clk(A2),.reset(Reset)); 
endmodule
