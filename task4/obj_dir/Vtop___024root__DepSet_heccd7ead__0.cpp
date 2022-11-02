// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__clktick__DOT__count;
    CData/*6:0*/ __Vdly__top__DOT__K;
    // Body
    __Vdly__top__DOT__K = vlSelf->top__DOT__K;
    __Vdly__top__DOT__clktick__DOT__count = vlSelf->top__DOT__clktick__DOT__count;
    vlSelf->top__DOT__delay__DOT__count = (0x7fU & 
                                           ((((IData)(vlSelf->rst) 
                                              | (8U 
                                                 == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                             | (0U 
                                                == (IData)(vlSelf->top__DOT__delay__DOT__count)))
                                             ? ((IData)(vlSelf->top__DOT__K) 
                                                - (IData)(1U))
                                             : ((IData)(vlSelf->top__DOT__delay__DOT__count) 
                                                - (IData)(1U))));
    if (vlSelf->rst) {
        __Vdly__top__DOT__K = 1U;
        vlSelf->top__DOT__f1_fsm__DOT__currentState = 0U;
        vlSelf->top__DOT__tick = 0U;
        __Vdly__top__DOT__clktick__DOT__count = vlSelf->N;
        vlSelf->top__DOT__delay__DOT__current_state = 0U;
    } else {
        __Vdly__top__DOT__K = ((0x7eU & (IData)(__Vdly__top__DOT__K)) 
                               | (1U & (~ (((IData)(vlSelf->top__DOT__K) 
                                            >> 2U) 
                                           ^ ((IData)(vlSelf->top__DOT__K) 
                                              >> 6U)))));
        __Vdly__top__DOT__K = ((1U & (IData)(__Vdly__top__DOT__K)) 
                               | (0x7eU & ((IData)(vlSelf->top__DOT__K) 
                                           << 1U)));
        if ((((IData)(vlSelf->top__DOT__cmd_seq) ? (IData)(vlSelf->top__DOT__tick)
               : ((0U != vlSelf->top__DOT__delay__DOT__current_state) 
                  & ((1U != vlSelf->top__DOT__delay__DOT__current_state) 
                     & (2U == vlSelf->top__DOT__delay__DOT__current_state)))) 
             | (IData)(vlSelf->trigger))) {
            vlSelf->top__DOT__f1_fsm__DOT__currentState 
                = vlSelf->top__DOT__f1_fsm__DOT__nextState;
        }
        if (vlSelf->top__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->top__DOT__clktick__DOT__count))) {
                vlSelf->top__DOT__tick = 1U;
                __Vdly__top__DOT__clktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__top__DOT__clktick__DOT__count 
                    = (0xffU & ((IData)(vlSelf->top__DOT__clktick__DOT__count) 
                                - (IData)(1U)));
                vlSelf->top__DOT__tick = 0U;
            }
        }
        vlSelf->top__DOT__delay__DOT__current_state 
            = vlSelf->top__DOT__delay__DOT__next_state;
    }
    vlSelf->top__DOT__K = __Vdly__top__DOT__K;
    vlSelf->out = (((((((((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState) 
                          | (1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                         | (2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                        | (3U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                       | (4U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                      | (5U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                     | (6U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                    | (7U == vlSelf->top__DOT__f1_fsm__DOT__currentState))
                    ? ((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                        ? 0U : ((1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                 ? 1U : ((2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                          ? 3U : ((3U 
                                                   == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                    : ((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                        ? 0xffU : 0U));
    vlSelf->top__DOT__clktick__DOT__count = __Vdly__top__DOT__clktick__DOT__count;
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__f1_fsm__DOT__nextState = ((((
                                                   (((((0U 
                                                        == vlSelf->top__DOT__f1_fsm__DOT__currentState) 
                                                       | (1U 
                                                          == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                      | (2U 
                                                         == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                     | (3U 
                                                        == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                    | (4U 
                                                       == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                   | (5U 
                                                      == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                  | (6U 
                                                     == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                                 | (7U 
                                                    == vlSelf->top__DOT__f1_fsm__DOT__currentState))
                                                 ? 
                                                ((0U 
                                                  == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                  ? 
                                                 ((IData)(vlSelf->trigger)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((1U 
                                                   == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                       ? 6U
                                                       : 
                                                      ((6U 
                                                        == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                        ? 7U
                                                        : 8U)))))))
                                                 : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
