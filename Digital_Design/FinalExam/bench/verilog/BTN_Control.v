module BTN_Control (
    input clk,
    input reset,
    input btn,
    output reg [2:0] sel
);
reg [3:0] counter;

parameter [2:0] ADD = 3'b000,
                SUB = 3'b001,
                AND = 3'b010,
                XOR = 3'b011,
                MUL = 3'b100,
                DIV = 3'b101,
 reg [2:0] current_state, next_state;
//dieu khien fsm sau do dua ra cac sel de chon
//Next state logic
initial counter = 4'd0;
always@(posedge btn)
begin
    if(reset)
        counter <= 0;
    else
        counter <= counter + 1'b1;
end
always @(posedge clk) begin
 case (current_state)
     ADD:begin
        if(counter == 4'd1)
            next_state <= SUB;
        else if(counter == 4'd2)
            next_state <= AND;
     end
     SUB: begin
        if(counter == 4'd2)
            next_state <= AND;
     end
     AND: begin
        if(counter == 4'd3)
            next_state <= XOR;
     end
     XOR: begin
        if(counter == 4'd4)
            next_state <= MUL;
     end
     MUL: begin
        if(counter == 4'd5)
            next_state <= DIV;
     end
     DIV: begin
        if(counter == 4'd6)
            next_state <= ADD;
     end
    default: next_state <= ADD;
 endcase   
end
// Sequential logic
always @(posedge clk) begin
    if(reset)
        current_state <= 3'd0;
    else
        current_state <= next_state;
end
always @(*) begin
    begin
        case (current_state)
           ADD : begin
                sel = ADD;
           end
           SUB : begin
                sel = SUB;
           end
           AND : begin
                sel = AND;
           end
           XOR : begin
                sel = XOR;
           end
           MUL : begin
                sel = MUL;
           end
           DIV : begin
                sel = DIV;
           end
            default: sel = 3'd0;
        endcase
    end
end
endmodule