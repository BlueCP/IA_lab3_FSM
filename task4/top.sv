module top (input logic clk, rst, trigger, logic[7:0] N, output logic[7:0] out);

    logic cmd_seq, cmd_delay, tick, time_out, fsm_en;
    logic[6:0] K;

    clktick clktick(clk, rst, cmd_seq, N, tick);
    lfsr lfsr(clk, rst, 1, K);
    delay delay(clk, rst, cmd_delay, K, time_out);
    f1_fsm f1_fsm(clk, rst, fsm_en, trigger, out, cmd_seq, cmd_delay);

    always_comb begin
        if (cmd_seq)
            fsm_en = tick;
        else
            fsm_en = time_out;
    end

endmodule
