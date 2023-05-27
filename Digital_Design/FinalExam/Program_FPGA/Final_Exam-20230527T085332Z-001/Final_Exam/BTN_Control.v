module BTN_Control (
    input clk,
    input reset,
    input btn,
    output reg [2:0] sel
);
reg [2:0] count;
parameter [2:0] START   = 3'b000,
                ADD     = 3'b001,
                SUB     = 3'b010,
                LEFT     = 3'b011,
                RIGHT     = 3'b100,
                MUL     = 3'b101,
                DIV     = 3'b110,
                STOP    = 3'b111;
 reg [2:0] current_state, next_state;
//dieu khien fsm sau do dua ra cac sel de chon
//Next state logic
initial count = 3'd0;
always@(posedge btn)
begin
    if(reset == 1'b1)
		count = 3'd0;
    else
      count = count + 3'd1;
end
always @(posedge clk) begin
 case (current_state)
        START: begin
            if(count == 3'd1)
                next_state <= ADD;
        end
        ADD:begin
            if(count == 3'd2)
                next_state <= SUB;
        end
        SUB: begin
            if(count == 3'd3)
                next_state <= LEFT;
        end
        LEFT: begin
            if(count == 3'd4)
                next_state <= RIGHT;
        end
        RIGHT: begin
            if(count == 3'd5)
                next_state <= MUL;
        end
        MUL: begin
            if(count == 3'd6)
                next_state <= DIV;
        end
        DIV: begin
            if(count == 3'd7)
                next_state <= STOP;
        end
        STOP: begin
            next_state <= START;
        end
        default: next_state <= START;
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
           LEFT : begin
                sel = LEFT;
           end
           RIGHT : begin
                sel = RIGHT;
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
