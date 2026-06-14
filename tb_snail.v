`timescale 1ns/1ps

module tb_snail;

    logic clk;
    logic reset;
    logic A;
    logic Y;

    logic [1:0] current_state;
    logic [1:0] next_state;

    // DUT
    snail_moore dut (
        .clk(clk),
        .reset(reset),
        .A(A),
        .Y(Y),
        .current_state(current_state),
        .next_state(next_state)
    );

    // clock generation
    always begin
        #5 clk = ~clk;
    end

    initial begin

        // waveform
        $dumpfile("snail.vcd");
        $dumpvars(0, tb_snail);

        clk = 0;
        reset = 1;
        A = 0;

        // reset
        #10;
        reset = 0;

        // test sequence
        // state: s0 -> s1 -> s2 -> output Y=1

        #10 A = 0;   // stay/go s1
        #10 A = 1;   // s1 -> s2 (Y should become 1)
        #10 A = 1;   // s2 -> s0
        #10 A = 0;   // s0 -> s1
        #10 A = 1;   // s1 -> s2
        #10 A = 0;   // s2 -> s1

        #20;

        $finish;

    end

endmodule