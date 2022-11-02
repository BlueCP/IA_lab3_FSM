// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___settle__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_fsm__DOT__currentState) 
               | (1U == vlSelf->f1_fsm__DOT__currentState)) 
              | (2U == vlSelf->f1_fsm__DOT__currentState)) 
             | (3U == vlSelf->f1_fsm__DOT__currentState)) 
            | (4U == vlSelf->f1_fsm__DOT__currentState)) 
           | (5U == vlSelf->f1_fsm__DOT__currentState)) 
          | (6U == vlSelf->f1_fsm__DOT__currentState)) 
         | (7U == vlSelf->f1_fsm__DOT__currentState))) {
        if ((0U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->f1_fsm__DOT__currentState)) {
            vlSelf->f1_fsm__DOT__nextState = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->f1_fsm__DOT__nextState = 8U;
            vlSelf->out = 0x7fU;
        }
    } else {
        vlSelf->f1_fsm__DOT__nextState = 0U;
        vlSelf->out = ((8U == vlSelf->f1_fsm__DOT__currentState)
                        ? 0xffU : 0U);
    }
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
    // Body
    Vf1_fsm___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root___final(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->f1_fsm__DOT__currentState = 0;
    vlSelf->f1_fsm__DOT__nextState = 0;
}
