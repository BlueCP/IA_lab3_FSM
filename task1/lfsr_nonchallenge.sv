module lfsr (input logic clk, rst, en, output logic[3:0] out);

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            out <= 4'b0001; // Reset to 1 to generate a sequence
        else if (en) begin
            out[0] <= out[2] ^ out[3];
            out[3:1] <= out[2:0];
        end
    end

endmodule
