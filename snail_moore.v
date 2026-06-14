`timescale 1ns/1ps

module snail_moore(
        input logic clk,
        input logic reset,
        input logic A,
        output logic Y,
        output logic [1:0] current_state,
        output logic [1:0] next_state
);

typedef enum logic [1:0] { 
        s0 = 2'b00,
        s1 = 2'b01,
        s2 = 2'b10
} state_t;

state_t current_state_t;
state_t next_state_t;

always_comb begin

        case (current_state_t)

                s0: begin
                        if (A == 1'b0)
                                next_state_t = s1;
                        else
                                next_state_t = s0;
                end
                
                s1: begin
                        if(A == 1'b0)
                                next_state_t = s1;
                        else
                                next_state_t = s2;
                end

                s2: begin
                        if (A == 1'b0)
                                next_state_t = s1;
                        else
                                next_state_t = s0;
                end

                default:
                        next_state_t = s0;
                
        endcase

end

always_ff @(posedge clk) begin

        if (reset)
                current_state_t <= s0;
        else
                current_state_t <= next_state_t;

end

always_comb begin
        
        case(current_state_t)

                s2: 
                        Y = 1'b1;

                default: 
                        Y = 1'b0;

        endcase

end

assign current_state = current_state_t;
assign next_state = next_state_t;
                

endmodule

