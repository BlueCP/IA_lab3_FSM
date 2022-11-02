#include "Vtop.h"

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

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
        vbdBar(top->out & 0xff);
        vbdCycle(i);

        // Update input signals
        top->rst = (i < 2);
        top->trigger = vbdFlag();
        top->N = vbdValue();
    }

    vbdClose();
    tfp->close();
    exit(0);
}