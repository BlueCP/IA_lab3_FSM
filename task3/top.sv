module top (input logic en, rst, clk, logic[15:0] N, output logic[7:0] out);

    logic tick;

    clktick clktick(clk, rst, en, N, tick);
    f1_fsm f1_fsm(clk, rst, tick, out);

endmodule
