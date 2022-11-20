module lfsr (input logic clk, rst, en, output logic[6:0] out);

    always_ff @(posedge clk) begin
        if (rst)
            out <= 7'b1; // Reset to 1 to generate a sequence
        else if (en) begin
            out[0] <= out[2] ^ out[6];
            out[6:1] <= out[5:0];
        end
    end

endmodule
