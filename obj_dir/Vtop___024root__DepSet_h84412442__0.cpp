// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (vlSelf->top__DOT__cpu__DOT__next_pc 
                                     != vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__next_pc__1));
    vlSelf->__VactTriggered.set(2U, (((vlSelf->top__DOT__cpu__DOT__alu_in_2 
                                       != vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_in_2__0) 
                                      | ((IData)(vlSelf->top__DOT__cpu__DOT__alu_op) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0))) 
                                     | (vlSelf->top__DOT__cpu__DOT__rs1_dout 
                                        != vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__rs1_dout__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__next_pc__1 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_in_2__0 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__rs1_dout__0 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
