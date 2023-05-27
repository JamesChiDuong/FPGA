`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 03:07:31 PM
// Design Name: 
// Module Name: Binary_Counter_4_Par_Load
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


module Binary_Counter_4_Par_Load(
    output reg [3:0] A_count,
    output C_out
    //input [3:0] Data_in,
    //input Count,
    //input Load,
    //input clk,
    //input clear_b
    );
    reg clk = 0;
    reg Load = 0;
    reg Count = 0;
    reg [3:0] Data_in = 4'd8;
    reg clear_b = 0;
    assign C_out = Count &&(~Load)&&(A_count == 4'b1111);
    initial
    begin
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; Load = 1;
       #10 clk = 0; clear_b = 1;
       #10 clk = 1; clear_b = 0;
       #10 clk = 0; Load = 0;
       #10 clk = 1; Count = 1;clear_b = 1;
       #10 clk = 0;
       #10 clk = 1; Count = 0;clear_b = 0;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0; clear_b = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0; clear_b = 1; Load = 1;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; 
       #10 clk = 0; clear_b = 0; Load = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;  
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
    end
    always @(posedge clk, negedge clear_b)
    begin
        if(~clear_b)    A_count <= 4'b0000;
        else if(Load)   A_count <= Data_in;
        else if(Count)  A_count <= A_count + 1'b1;
        else            A_count <= A_count;
    end
endmodule
