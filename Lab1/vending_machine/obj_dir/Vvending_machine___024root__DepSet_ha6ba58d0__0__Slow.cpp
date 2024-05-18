// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine___024root.h"

VL_ATTR_COLD void Vvending_machine___024root___eval_static(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vvending_machine___024root___eval_initial__TOP(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_initial(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_initial\n"); );
    // Body
    Vvending_machine___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vvending_machine___024root___eval_initial__TOP(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->o_available_item = 0U;
    vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 4U;
    vlSelf->vending_machine__DOT__item_price[0U] = 0x190U;
    vlSelf->vending_machine__DOT__item_price[1U] = 0x1f4U;
    vlSelf->vending_machine__DOT__item_price[2U] = 0x3e8U;
    vlSelf->vending_machine__DOT__item_price[3U] = 0x7d0U;
    vlSelf->vending_machine__DOT__coin_value[0U] = 0x64U;
    vlSelf->vending_machine__DOT__coin_value[1U] = 0x1f4U;
    vlSelf->vending_machine__DOT__coin_value[2U] = 0x3e8U;
    vlSelf->o_return_coin = 0U;
    vlSelf->vending_machine__DOT__wait_time = 0xaU;
}

VL_ATTR_COLD void Vvending_machine___024root___eval_final(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_settle(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vvending_machine___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvending_machine___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvending_machine___024root___stl_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_available_item = ((0xcU & (IData)(vlSelf->o_available_item)) 
                                | (((vlSelf->vending_machine__DOT__current_total 
                                     >= vlSelf->vending_machine__DOT__item_price
                                     [1U]) << 1U) | 
                                   (vlSelf->vending_machine__DOT__current_total 
                                    >= vlSelf->vending_machine__DOT__item_price
                                    [0U])));
    vlSelf->o_available_item = ((3U & (IData)(vlSelf->o_available_item)) 
                                | (((vlSelf->vending_machine__DOT__current_total 
                                     >= vlSelf->vending_machine__DOT__item_price
                                     [3U]) << 3U) | 
                                   ((vlSelf->vending_machine__DOT__current_total 
                                     >= vlSelf->vending_machine__DOT__item_price
                                     [2U]) << 2U)));
    vlSelf->o_return_coin = 0U;
    vlSelf->vending_machine__DOT__input_total = 0U;
    vlSelf->vending_machine__DOT__current_total_nxt 
        = vlSelf->vending_machine__DOT__current_total;
    vlSelf->vending_machine__DOT__return_total = 0U;
    vlSelf->o_output_item = 0U;
    if ((1U & (IData)(vlSelf->i_input_coin))) {
        vlSelf->vending_machine__DOT__input_total = 
            (vlSelf->vending_machine__DOT__input_total 
             + vlSelf->vending_machine__DOT__coin_value
             [0U]);
    }
    if ((2U & (IData)(vlSelf->i_input_coin))) {
        vlSelf->vending_machine__DOT__input_total = 
            (vlSelf->vending_machine__DOT__input_total 
             + vlSelf->vending_machine__DOT__coin_value
             [1U]);
    }
    if ((4U & (IData)(vlSelf->i_input_coin))) {
        vlSelf->vending_machine__DOT__input_total = 
            (vlSelf->vending_machine__DOT__input_total 
             + vlSelf->vending_machine__DOT__coin_value
             [2U]);
    }
    vlSelf->vending_machine__DOT__current_total_nxt 
        = (vlSelf->vending_machine__DOT__current_total_nxt 
           + vlSelf->vending_machine__DOT__input_total);
    if (((IData)(vlSelf->i_select_item) & (vlSelf->vending_machine__DOT__current_total_nxt 
                                           >= vlSelf->vending_machine__DOT__item_price
                                           [0U]))) {
        vlSelf->vending_machine__DOT__current_total_nxt 
            = (vlSelf->vending_machine__DOT__current_total_nxt 
               - vlSelf->vending_machine__DOT__item_price
               [0U]);
        vlSelf->o_output_item = (1U | (IData)(vlSelf->o_output_item));
    } else {
        vlSelf->o_output_item = (0xeU & (IData)(vlSelf->o_output_item));
    }
    if ((((IData)(vlSelf->i_select_item) >> 1U) & (vlSelf->vending_machine__DOT__current_total_nxt 
                                                   >= 
                                                   vlSelf->vending_machine__DOT__item_price
                                                   [1U]))) {
        vlSelf->vending_machine__DOT__current_total_nxt 
            = (vlSelf->vending_machine__DOT__current_total_nxt 
               - vlSelf->vending_machine__DOT__item_price
               [1U]);
        vlSelf->o_output_item = (2U | (IData)(vlSelf->o_output_item));
    } else {
        vlSelf->o_output_item = (0xdU & (IData)(vlSelf->o_output_item));
    }
    if ((((IData)(vlSelf->i_select_item) >> 2U) & (vlSelf->vending_machine__DOT__current_total_nxt 
                                                   >= 
                                                   vlSelf->vending_machine__DOT__item_price
                                                   [2U]))) {
        vlSelf->vending_machine__DOT__current_total_nxt 
            = (vlSelf->vending_machine__DOT__current_total_nxt 
               - vlSelf->vending_machine__DOT__item_price
               [2U]);
        vlSelf->o_output_item = (4U | (IData)(vlSelf->o_output_item));
    } else {
        vlSelf->o_output_item = (0xbU & (IData)(vlSelf->o_output_item));
    }
    if ((((IData)(vlSelf->i_select_item) >> 3U) & (vlSelf->vending_machine__DOT__current_total_nxt 
                                                   >= 
                                                   vlSelf->vending_machine__DOT__item_price
                                                   [3U]))) {
        vlSelf->vending_machine__DOT__current_total_nxt 
            = (vlSelf->vending_machine__DOT__current_total_nxt 
               - vlSelf->vending_machine__DOT__item_price
               [3U]);
        vlSelf->o_output_item = (8U | (IData)(vlSelf->o_output_item));
    } else {
        vlSelf->o_output_item = (7U & (IData)(vlSelf->o_output_item));
    }
    if (((IData)(vlSelf->i_trigger_return) | (0U >= vlSelf->vending_machine__DOT__wait_time))) {
        vlSelf->o_return_coin = 1U;
        if ((0x3e8U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->o_return_coin = 5U;
        } else if ((0x1f4U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->o_return_coin = 3U;
        }
        vlSelf->vending_machine__DOT__return_total 
            = vlSelf->vending_machine__DOT__current_total_nxt;
        vlSelf->vending_machine__DOT__current_total_nxt = 0U;
    }
}

VL_ATTR_COLD void Vvending_machine___024root___eval_stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vvending_machine___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvending_machine___024root___eval_triggers__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvending_machine___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vvending_machine___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__nba(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvending_machine___024root___ctor_var_reset(Vvending_machine___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->i_input_coin = VL_RAND_RESET_I(3);
    vlSelf->i_select_item = VL_RAND_RESET_I(4);
    vlSelf->i_trigger_return = VL_RAND_RESET_I(1);
    vlSelf->o_available_item = VL_RAND_RESET_I(4);
    vlSelf->o_output_item = VL_RAND_RESET_I(4);
    vlSelf->o_return_coin = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->vending_machine__DOT__item_price[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vending_machine__DOT__coin_value[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->vending_machine__DOT__current_total = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__current_total_nxt = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__input_total = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__return_total = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__wait_time = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__counter1 = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__counter2 = VL_RAND_RESET_I(32);
    vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
