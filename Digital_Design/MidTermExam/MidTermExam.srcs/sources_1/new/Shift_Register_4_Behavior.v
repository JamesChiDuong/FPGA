`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 02:52:38 PM
// Design Name: 
// Module Name: Shift_Register_4_Behavior
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


module Shift_Register_4_Behavior(
    output reg [3:0] A_par,
    input [3:0] I_par,
    input s1,s0,
    input MSB_in,
    input LSB_in,
    input clk,
    input Clear_b
    );
    always @(posedge clk, negedge Clear_b)
    begin
        if(Clear_b == 0)
        begin
            A_par <= 4'b000;
        end
        else
        begin
            case({s1,s0})
                2'b00: A_par <= A_par;
                2'b01: A_par <= {MSB_in,A_par[3:1]};
                2'b10: A_par <= {A_par[2:0],LSB_in};
                2'b11: A_par <= I_par;
            endcase
        end
    end
endmodule
