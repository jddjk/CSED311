// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine__Syms.h"
#include "Vvending_machine___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval_triggers__ico(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvending_machine___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval_triggers__act(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvending_machine___024root___dump_triggers__act(vlSelf);
    }
#endif
}
