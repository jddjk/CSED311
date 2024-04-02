// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcAout__0 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcAout;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcBout__0 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcBout;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
    vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in1 = 4U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h4662afda_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h060d699d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h226c588b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hcf948f29_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h5c16ead3_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hf2c18577_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_haee0c9e2_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h7e9b0eb9_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtop__ConstPool__TABLE_hc9f02a73_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond 
        = vlSelf->top__DOT__cpu__DOT__PCWriteNotCond;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__wire_A = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__wire_ALUOut = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__wire_B = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__wire_MDR = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__x17 = vlSelf->top__DOT__cpu__DOT__x17_val;
    vlSelf->top__DOT__cpu__DOT__reg_to_A = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0xfU))];
    vlSelf->top__DOT__cpu__DOT__reg_to_B = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__cond1 = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                         & (IData)(vlSelf->top__DOT__cpu__DOT__PCWriteNotCond));
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate 
        = (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm = 
        ((0xfe0U & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U)) | (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 7U)));
    vlSelf->top__DOT__cpu__DOT__wire_IR = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    __Vtableidx2 = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelf->top__DOT__cpu__DOT__PCWrite = Vtop__ConstPool__TABLE_h4662afda_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemRead = Vtop__ConstPool__TABLE_h4662afda_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemWrite = Vtop__ConstPool__TABLE_h060d699d_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__IRWrite = Vtop__ConstPool__TABLE_h226c588b_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUCtrlOp = Vtop__ConstPool__TABLE_hcf948f29_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__MemToReg = Vtop__ConstPool__TABLE_h5c16ead3_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = Vtop__ConstPool__TABLE_h226c588b_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = Vtop__ConstPool__TABLE_hf2c18577_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__RegWrite = Vtop__ConstPool__TABLE_haee0c9e2_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__PCSource = Vtop__ConstPool__TABLE_h7e9b0eb9_0
        [__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__IorD = Vtop__ConstPool__TABLE_h5c16ead3_0
        [__Vtableidx2];
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__wire_MDR;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__x17_val 
        = vlSelf->top__DOT__cpu__DOT__x17;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__reg_to_A;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__reg_to_B;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__wire_IR;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__wire_IR;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__is_ecall = (0x73U == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                     << 4U) | (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hc9f02a73_0[__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x13U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate))
                                                     : 
                                                    ((0x23U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm))
                                                      : 
                                                     ((0x63U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__wire_IR) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                                       >> 0x14U))))))
                                                        : 
                                                       ((0x37U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                          ? 
                                                         (0xfffff000U 
                                                          & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                          : vlSelf->top__DOT__cpu__DOT__wire_IR))))))));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite 
        = vlSelf->top__DOT__cpu__DOT__PCWrite;
    vlSelf->top__DOT__cpu__DOT__cond2 = ((IData)(vlSelf->top__DOT__cpu__DOT__cond1) 
                                         | (IData)(vlSelf->top__DOT__cpu__DOT__PCWrite));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__sel 
        = (1U & ((IData)(vlSelf->top__DOT__cpu__DOT__PCSource) 
                 >> 0U));
    vlSelf->top__DOT__cpu__DOT__PCSrcWire = ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__PCSource))
                                              ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                              : vlSelf->top__DOT__cpu__DOT__alu_result);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUCtrlOp 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_ctrl_op 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    vlSelf->top__DOT__cpu__DOT__alu_op = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))
                                           ? 2U : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                      ? 0xaU
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                       ? 0xbU
                                                       : 0xcU))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                      ? 0xaU
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                       ? 0xdU
                                                       : 0xeU)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))
                                                     ? 
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu__DOT__wire_IR))
                                                      ? 
                                                     ((0x20U 
                                                       == 
                                                       (vlSelf->top__DOT__cpu__DOT__wire_IR 
                                                        >> 0x19U))
                                                       ? 4U
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                          ? 7U
                                                          : 8U)
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                          ? 5U
                                                          : 9U))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                         ? 0xaU
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->top__DOT__cpu__DOT__wire_IR)
                                                          ? 6U
                                                          : 0xaU))))
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__wire_IR))
                                                       ? 0xfU
                                                       : 0xaU))
                                                     : 0U)));
    if (vlSelf->top__DOT__cpu__DOT__MemToReg) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__RegSource = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__RegSource = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    if (vlSelf->top__DOT__cpu__DOT__ALUSrcA) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcAout = vlSelf->top__DOT__cpu__DOT__A;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcAout = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 1U;
        vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__mem_addr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 0U;
        vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrcBout = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                               ? vlSelf->top__DOT__cpu__DOT__B
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                   ? 4U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                    ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                                    : 0U)));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = vlSelf->top__DOT__cpu__DOT__cond2;
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__PCSrcWire;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__RegSource;
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__RegSource;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcAout;
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcAout;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__mem_addr;
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__mem_addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__mem_addr, 2U);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcBout;
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcBout;
    vlSelf->top__DOT__cpu__DOT__mem_data = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                             ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                            [(0x3fffU 
                                              & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                             : 0U);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_data;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.cpu.ALUSrcAout or [changed] top.cpu.ALUSrcBout or [changed] top.cpu.alu_op)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.cpu.ALUSrcAout or [changed] top.cpu.ALUSrcBout or [changed] top.cpu.alu_op)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcAout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcBout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__RegSource = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSrcWire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__x17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_to_A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_to_B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wire_IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wire_MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wire_A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wire_B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__wire_ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ALUCtrlOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__MemToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCWriteNotCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUOp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegSoruce = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cond1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cond2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__x17_val = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__x17_val = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUCtrlOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_srcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__immediate = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_ctrl_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemorySorucemux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegSourceMux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSourceAmux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUOutmux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSourceBmux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcAout__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__ALUSrcBout__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__cpu__DOT__alu_op__0 = VL_RAND_RESET_I(4);
    vlSelf->__VactDidInit = 0;
}
