module f1_fsm (input logic clk, rst, en, trigger, output logic[7:0] out, logic cmd_seq, cmd_delay);

    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} light_state;
    light_state currentState, nextState;

    always_ff @(posedge clk) begin
        if (rst)
            currentState <= S0; // Reset to 1 to generate a sequence
        else if (en | trigger)
            currentState <= nextState;
    end

    always_comb begin
        case (currentState)
            S0: nextState = trigger ? S1 : S0;
            S1: nextState = S2;
            S2: nextState = S3;
            S3: nextState = S4;
            S4: nextState = S5;
            S5: nextState = S6;
            S6: nextState = S7;
            S7: nextState = S8;
            S8: nextState = S0;
            default: nextState = S0;
        endcase
    end

    always_comb begin
        case (currentState)
            S0: out = 8'b0;
            S1: out = 8'b1;
            S2: out = 8'b11;
            S3: out = 8'b111;
            S4: out = 8'b1111;
            S5: out = 8'b11111;
            S6: out = 8'b111111;
            S7: out = 8'b1111111;
            S8: out = 8'b11111111;
            default: out = 8'b0;
        endcase
        cmd_seq = currentState != S0 && currentState != S8;
        cmd_delay = currentState == S8;
    end

endmodule
