// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"N", false,-1, 7,0);
    tracep->declBus(c+17,"out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+16,"N", false,-1, 7,0);
    tracep->declBus(c+17,"out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBit(c+5,"fsm_en", false,-1);
    tracep->declBus(c+6,"K", false,-1, 6,0);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+16,"N", false,-1, 7,0);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+6,"n", false,-1, 6,0);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBus(c+8,"count", false,-1, 6,0);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBit(c+15,"trigger", false,-1);
    tracep->declBus(c+17,"out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBus(c+11,"currentState", false,-1, 31,0);
    tracep->declBus(c+12,"nextState", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr ");
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+20,"en", false,-1);
    tracep->declBus(c+6,"out", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__cmd_seq));
    bufp->fullBit(oldp+2,((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__tick));
    bufp->fullBit(oldp+4,(((0U != vlSelf->top__DOT__delay__DOT__current_state) 
                           & ((1U != vlSelf->top__DOT__delay__DOT__current_state) 
                              & (2U == vlSelf->top__DOT__delay__DOT__current_state)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->top__DOT__cmd_seq)
                            ? (IData)(vlSelf->top__DOT__tick)
                            : ((0U != vlSelf->top__DOT__delay__DOT__current_state) 
                               & ((1U != vlSelf->top__DOT__delay__DOT__current_state) 
                                  & (2U == vlSelf->top__DOT__delay__DOT__current_state))))));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__K),7);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__clktick__DOT__count),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__delay__DOT__count),7);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__delay__DOT__current_state),32);
    bufp->fullIData(oldp+10,(((0U == vlSelf->top__DOT__delay__DOT__current_state)
                               ? ((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                   ? 1U : vlSelf->top__DOT__delay__DOT__current_state)
                               : ((1U == vlSelf->top__DOT__delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->top__DOT__delay__DOT__count))
                                       ? 2U : vlSelf->top__DOT__delay__DOT__current_state)
                                   : ((2U == vlSelf->top__DOT__delay__DOT__current_state)
                                       ? ((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->top__DOT__delay__DOT__current_state)
                                           ? ((8U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                               ? vlSelf->top__DOT__delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__f1_fsm__DOT__currentState),32);
    bufp->fullIData(oldp+12,((((((((((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState) 
                                     | (1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                    | (2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                   | (3U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                  | (4U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                 | (5U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                                | (6U == vlSelf->top__DOT__f1_fsm__DOT__currentState)) 
                               | (7U == vlSelf->top__DOT__f1_fsm__DOT__currentState))
                               ? ((0U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                   ? 1U : ((1U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                            ? 2U : 
                                           ((2U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                             ? 3U : 
                                            ((3U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                              ? 4U : 
                                             ((4U == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                               ? 5U
                                               : ((5U 
                                                   == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                   ? 6U
                                                   : 
                                                  ((6U 
                                                    == vlSelf->top__DOT__f1_fsm__DOT__currentState)
                                                    ? 7U
                                                    : 8U)))))))
                               : 0U)),32);
    bufp->fullBit(oldp+13,(vlSelf->clk));
    bufp->fullBit(oldp+14,(vlSelf->rst));
    bufp->fullBit(oldp+15,(vlSelf->trigger));
    bufp->fullCData(oldp+16,(vlSelf->N),8);
    bufp->fullCData(oldp+17,(vlSelf->out),8);
    bufp->fullIData(oldp+18,(8U),32);
    bufp->fullIData(oldp+19,(7U),32);
    bufp->fullBit(oldp+20,(1U));
}
