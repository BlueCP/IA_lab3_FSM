// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_IN8(N,7,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ top__DOT__cmd_seq;
    CData/*0:0*/ top__DOT__tick;
    CData/*6:0*/ top__DOT__K;
    CData/*7:0*/ top__DOT__clktick__DOT__count;
    CData/*6:0*/ top__DOT__delay__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT__delay__DOT__current_state;
    IData/*31:0*/ top__DOT__delay__DOT__next_state;
    IData/*31:0*/ top__DOT__f1_fsm__DOT__currentState;
    IData/*31:0*/ top__DOT__f1_fsm__DOT__nextState;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
