`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/26/2023 10:33:58 AM
// Design Name: 
// Module Name: 4_universalShiftRegister
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
//UniversalShiftRegister with structure mode

module universalShiftRegister(
        //input [1:0] sel,
        //input MSB_in,
        //input LSB_in,
        //input clk,
        //input clear_b,
        //input [3:0] I_par,
        //output [3:0] A_par
    );
wire Y3,Y2,Y1,Y0;
reg [1:0]sel = 2'b00;
reg clk = 0;
reg clear_b = 0;
reg [3:0] I_par_Buffer = 4'd12;
wire [3:0]I_par;
reg MSB_in = 1'b0;
reg LSB_in = 1'b0;
wire [3:0] A_par;
assign I_par = I_par_Buffer;
initial
begin
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; sel = 2'b00;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0; sel = 2'b01;
       #10 clk = 1; MSB_in = 1;
       #10 clk = 0;
       #10 clk = 1; LSB_in = 1;
       #10 clk = 0;
       #10 clk = 1;sel = 2'b10;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;sel = 2'b11;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; clear_b = 1; MSB_in = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; sel = 2'b01;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0; sel = 2'b10;
       #10 clk = 1;  
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;MSB_in = 0; clear_b = 0; sel = 2'b10;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1; clear_b = 1; MSB_in = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0;
       #10 clk = 1;
       #10 clk = 0; clear_b = 0; MSB_in = 0;
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
D_FIFO FF3(.clk(clk),.reset_b(clear_b),.D(Y3),.Q(A_par[3]));
D_FIFO FF2(.clk(clk),.reset_b(clear_b),.D(Y2),.Q(A_par[2]));
D_FIFO FF1(.clk(clk),.reset_b(clear_b),.D(Y1),.Q(A_par[1]));
D_FIFO FF0(.clk(clk),.reset_b(clear_b),.D(Y0),.Q(A_par[0]));

mux_4_1 MUX3(.sel(sel),.I0(A_par[3]),.I1(MSB_in),.I2(A_par[2]),.I3(I_par[3]),.Y(Y3));
mux_4_1 MUX2(.sel(sel),.I0(A_par[2]),.I1(A_par[3]),.I2(A_par[1]),.I3(I_par[2]),.Y(Y2));
mux_4_1 MUX1(.sel(sel),.I0(A_par[1]),.I1(A_par[2]),.I2(A_par[0]),.I3(I_par[1]),.Y(Y1));
mux_4_1 MUX0(.sel(sel),.I0(A_par[0]),.I1(A_par[1]),.I2(LSB_in),.I3(I_par[0]),.Y(Y0));
endmodule
