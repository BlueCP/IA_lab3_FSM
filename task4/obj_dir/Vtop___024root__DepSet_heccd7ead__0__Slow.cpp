// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__delay__DOT__count = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState) 
               | (1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
              | (2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
             | (3U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
            | (4U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
           | (5U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
          | (6U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
         | (7U == vlSelf->top__DOT__f1_fsm__DOT__currentState))) {
        if ((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 0U;
            vlSelf->top__DOT__f1_fsm__DOT__nextState 
                = ((IData)(vlSelf->trigger) ? 1U : 0U);
        } else if ((1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 1U;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 2U;
        } else if ((2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 3U;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 3U;
        } else if ((3U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 7U;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 4U;
        } else if ((4U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 0xfU;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 5U;
        } else if ((5U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 0x1fU;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 6U;
        } else if ((6U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) {
            vlSelf->out = 0x3fU;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 7U;
        } else {
            vlSelf->out = 0x7fU;
            vlSelf->top__DOT__f1_fsm__DOT__nextState = 8U;
        }
    } else {
        vlSelf->out = ((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                        ? 0xffU : 0U);
        vlSelf->top__DOT__f1_fsm__DOT__nextState = 0U;
    }
    vlSelf->top__DOT__cmd_seq = ((0U != vlSelf->top__DOT__f1_fsm__DOT__currentState) 
                                 & (8U != vlSelf->top__DOT__f1_fsm__DOT__currentState));
    vlSelf->top__DOT__delay__DOT__next_state = ((0U 
                                                 == vlSelf->top__DOT__delay__DOT__current_state)
                                                 ? 
                                                ((8U 
                                                  == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                  ? 1U
                                                  : vlSelf->top__DOT__delay__DOT__current_state)
                                                 : 
                                                ((1U 
                                                  == vlSelf->top__DOT__delay__DOT__current_state)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__delay__DOT__count))
                                                   ? 2U
                                                   : vlSelf->top__DOT__delay__DOT__current_state)
                                                  : 
                                                 ((2U 
                                                   == vlSelf->top__DOT__delay__DOT__current_state)
                                                   ? 
                                                  ((8U 
                                                    == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                    ? 3U
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == vlSelf->top__DOT__delay__DOT__current_state)
                                                    ? 
                                                   ((8U 
                                                     == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                     ? vlSelf->top__DOT__delay__DOT__current_state
                                                     : 0U)
                                                    : 0U))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__K = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__clktick__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__delay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__delay__DOT__current_state = 0;
    vlSelf->top__DOT__delay__DOT__next_state = 0;
    vlSelf->top__DOT__f1_fsm__DOT__currentState = 0;
    vlSelf->top__DOT__f1_fsm__DOT__nextState = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
