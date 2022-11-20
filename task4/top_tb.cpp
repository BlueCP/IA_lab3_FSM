#include "Vtop.h"

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

enum ReactionState {
    INIT,
    COUNTING,
    WAITING
};

int main(int argc, char **argv, char **env) {
    int i;
    int clk;
    int reactionTime = -1;
    ReactionState reactState = ReactionState::INIT;

    Verilated::commandArgs(argc, argv);

    // Init top verilog instance
    Vtop* top = new Vtop;

    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // Init Vbuddy
    if (vbdOpen() != 1)
        return(-1);
    vbdHeader("Lab 3: FSM");
    vbdSetMode(1);

    // Init simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->trigger = 0;
    top->N = vbdValue();

    // Run simulation for many cycles
    for (i = 0; i < 1000000; i ++) {
        
        // Dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk ++) {
            tfp->dump(2*i + clk);
            top->clk = !top->clk;
            top->eval();
        }

        // Send data to Vbuddy
        vbdCycle(i);
        vbdBar(top->out & 0xff);
        if (reactionTime != -1) {
            vbdHex(1, (reactionTime % 10) & 0xf);
            vbdHex(2, ((reactionTime / 10 % 10)) & 0xf);
            vbdHex(3, ((reactionTime / 100) % 10) & 0xf);
            vbdHex(4, ((reactionTime / 1000) % 10) & 0xf);
            reactionTime = -1;
        }

        // Check light state and update input signals
        top->rst = (i < 2);
        top->N = vbdValue();
        if (top->out != 0 && reactState == ReactionState::INIT) {
            reactState = ReactionState::COUNTING;
        } else if (top->out == 0 && reactState == ReactionState::COUNTING) {
            reactState = ReactionState::WAITING;
            vbdInitWatch();
        } else if (reactState == ReactionState::WAITING && vbdFlag()) {
            reactionTime = vbdElapsed();
            reactState = ReactionState::INIT;
        }
        top->trigger = vbdFlag();
    }

    vbdClose();
    tfp->close();
    exit(0);
}