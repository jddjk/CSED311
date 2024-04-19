// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__PC__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__PC__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h35d8aa1b_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h8981ffb5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h7e1c4842_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hc01e725a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h4d427c12_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hdde40778_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hb4d880cc_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h59f55d1a_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_hf55ccedb_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_hf0f85b63_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h1cbcce86_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hdb1abe66_0;
extern const VlUnpacked<CData/*3:0*/, 4096> Vtop__ConstPool__TABLE_hdd31a4d8_0;

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*11:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cpu__DOT__bcond) 
                     << 4U) | (IData)(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state));
    vlSelf->top__DOT__cpu__DOT__PCWriteNotCond = Vtop__ConstPool__TABLE_h35d8aa1b_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__PC_Write = Vtop__ConstPool__TABLE_h8981ffb5_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__IorD = Vtop__ConstPool__TABLE_h7e1c4842_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemRead = Vtop__ConstPool__TABLE_hc01e725a_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemWrite = Vtop__ConstPool__TABLE_h4d427c12_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__MemToReg = Vtop__ConstPool__TABLE_hdde40778_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__IRWrite = Vtop__ConstPool__TABLE_hb4d880cc_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__PCSource = Vtop__ConstPool__TABLE_h59f55d1a_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__ALUop = Vtop__ConstPool__TABLE_hf55ccedb_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src_B = Vtop__ConstPool__TABLE_hf0f85b63_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src_A = Vtop__ConstPool__TABLE_h1cbcce86_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__write_enable = Vtop__ConstPool__TABLE_hdb1abe66_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__IRWrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemWrite 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__write_enable;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__reg_write 
        = vlSelf->top__DOT__cpu__DOT__write_enable;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PC_Write 
        = vlSelf->top__DOT__cpu__DOT__PC_Write;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PCWriteNotCond 
        = vlSelf->top__DOT__cpu__DOT__PCWriteNotCond;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemRead 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    if (vlSelf->top__DOT__cpu__DOT__MemToReg) {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemToReg = 1U;
        vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemToReg = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PCSource 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__IorD = 1U;
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__MemAddr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__IorD = 0U;
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__MemAddr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_B 
        = vlSelf->top__DOT__cpu__DOT__alu_src_B;
    vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__sel 
        = vlSelf->top__DOT__cpu__DOT__alu_src_B;
    vlSelf->top__DOT__cpu__DOT__in_2_ALU = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_src_B))
                                             ? vlSelf->top__DOT__cpu__DOT__B
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__alu_src_B))
                                                 ? 4U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__alu_src_B))
                                                  ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                                  : 0U)));
    if (vlSelf->top__DOT__cpu__DOT__alu_src_A) {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_A = 1U;
        vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__sel = 1U;
        vlSelf->top__DOT__cpu__DOT__in_1_ALU = vlSelf->top__DOT__cpu__DOT__A;
    } else {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_A = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__sel = 0U;
        vlSelf->top__DOT__cpu__DOT__in_1_ALU = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUop 
        = vlSelf->top__DOT__cpu__DOT__ALUop;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__ALUop 
        = vlSelf->top__DOT__cpu__DOT__ALUop;
    vlSelf->top__DOT__cpu__DOT__ALUCtrlOp = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUop))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUop))
                                               ? 2U
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__ALUop))
                                                   ? 
                                                  ((0x33U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT7))
                                                     ? 2U
                                                     : (IData)(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT3))
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                     ? (IData)(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT3)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((0x23U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((0x6fU 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((0x67U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                         ? 0U
                                                         : 
                                                        ((0x63U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                          ? 2U
                                                          : 0U)))))))
                                                   : 0U)));
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__MemAddr;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__MemAddr;
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__MemAddr, 2U);
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__in_2_ALU 
        = vlSelf->top__DOT__cpu__DOT__in_2_ALU;
    vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__in_2_ALU;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__in_1_ALU 
        = vlSelf->top__DOT__cpu__DOT__in_1_ALU;
    vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__in_1_ALU;
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUCtrlOp 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__ALUCtrlOp 
        = vlSelf->top__DOT__cpu__DOT__ALUCtrlOp;
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = (vlSelf->top__DOT__cpu__DOT__in_1_ALU 
                                                 + vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = (vlSelf->top__DOT__cpu__DOT__in_1_ALU 
                                                 - vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
        vlSelf->top__DOT__cpu__DOT__bcond = (1U & (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__FUNCT))
                                                    ? 
                                                   (0U 
                                                    == vlSelf->top__DOT__cpu__DOT__ALUResult)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__FUNCT))
                                                     ? 
                                                    (0U 
                                                     != vlSelf->top__DOT__cpu__DOT__ALUResult)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__FUNCT))
                                                      ? 
                                                     (vlSelf->top__DOT__cpu__DOT__ALUResult 
                                                      >> 0x1fU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__FUNCT)) 
                                                      && (1U 
                                                          & (~ 
                                                             (vlSelf->top__DOT__cpu__DOT__ALUResult 
                                                              >> 0x1fU))))))));
    } else if ((4U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = (vlSelf->top__DOT__cpu__DOT__in_1_ALU 
                                                 ^ vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else if ((6U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = (vlSelf->top__DOT__cpu__DOT__in_1_ALU 
                                                 | vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else if ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = (vlSelf->top__DOT__cpu__DOT__in_1_ALU 
                                                 & vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__in_1_ALU, vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else if ((5U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__ALUResult = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__in_1_ALU, vlSelf->top__DOT__cpu__DOT__in_2_ALU);
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__ALUResult = 0U;
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    }
    if ((2U != (IData)(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp))) {
        vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__dout = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                         ? vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem
                                        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_addr)]
                                         : 0U);
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__ALUResult 
        = vlSelf->top__DOT__cpu__DOT__ALUResult;
    vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ALUResult;
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__PCSource)
                                            ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                            : vlSelf->top__DOT__cpu__DOT__ALUResult);
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__bcond = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__cpu__DOT__bcond) 
                     << 0xbU) | (((IData)(vlSelf->top__DOT__cpu__DOT__opcode) 
                                  << 4U) | (IData)(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state)));
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hdd31a4d8_0[__Vtableidx2];
    vlSelf->top__DOT__cpu__DOT__cond = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                        & (IData)(vlSelf->top__DOT__cpu__DOT__PCWriteNotCond));
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
    vlSelf->top__DOT__cpu__DOT__PC__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__next_state 
        = vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__next_state;
    vlSelf->top__DOT__cpu__DOT__PCWrite = ((IData)(vlSelf->top__DOT__cpu__DOT__cond) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT__PC_Write));
    vlSelf->top__DOT__cpu__DOT__PC__DOT__PCWrite = vlSelf->top__DOT__cpu__DOT__PCWrite;
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_he30476b8_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33;
    __Vdlyvdim0__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33;
    __Vdlyvval__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33;
    __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__Memory__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__Memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__Memory__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__Memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__Memory__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__Memory__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__Memory__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__Memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__Memory__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem[(0x3fffU 
                                                          & vlSelf->top__DOT__cpu__DOT__Memory__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__Memory__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__Memory__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(8, Vtop__ConstPool__CONST_he30476b8_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem)
                     , 0, ~0ULL);
    } else if (vlSelf->top__DOT__cpu__DOT__MemWrite) {
        __Vdlyvval__top__DOT__cpu__DOT__Memory__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__B;
        __Vdlyvset__top__DOT__cpu__DOT__Memory__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__Memory__DOT__mem__v0 
            = (0x3fffU & vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_addr);
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v0 = 1U;
        vlSelf->top__DOT__cpu__DOT__MDR = 0U;
        vlSelf->top__DOT__cpu__DOT__A = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUOut = 0U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state = 0U;
        vlSelf->top__DOT__cpu__DOT__IR = 0U;
        vlSelf->top__DOT__cpu__DOT__B = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__write_enable) 
             & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__rd)))) {
            __Vdlyvval__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 
                = vlSelf->top__DOT__cpu__DOT__rd_din;
            __Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33 
                = vlSelf->top__DOT__cpu__DOT__rd;
        }
        vlSelf->top__DOT__cpu__DOT__MDR = vlSelf->top__DOT__cpu__DOT__dout;
        vlSelf->top__DOT__cpu__DOT__A = vlSelf->top__DOT__cpu__DOT__rs1_dout;
        vlSelf->top__DOT__cpu__DOT__ALUOut = vlSelf->top__DOT__cpu__DOT__ALUResult;
        if (vlSelf->top__DOT__cpu__DOT__PCWrite) {
            vlSelf->top__DOT__cpu__DOT__current_pc 
                = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state 
            = vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__next_state;
        if (vlSelf->top__DOT__cpu__DOT__IRWrite) {
            vlSelf->top__DOT__cpu__DOT__IR = vlSelf->top__DOT__cpu__DOT__dout;
        }
        vlSelf->top__DOT__cpu__DOT__B = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__Memory__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__Memory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__Memory__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0x1fU] = 0U;
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[2U] = 0x2ffcU;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33) {
        vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33] 
            = __Vdlyvval__top__DOT__cpu__DOT__RegisterFile__DOT__rf__v33;
    }
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__PC__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__in1 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__current_state 
        = vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state;
    vlSelf->top__DOT__cpu__DOT__rs2_in = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                                   >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate 
        = (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U);
    vlSelf->top__DOT__cpu__DOT__instruction = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__rd = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 7U));
    vlSelf->top__DOT__cpu__DOT__FUNCT = (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT7 
        = (vlSelf->top__DOT__cpu__DOT__IR >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__opcode = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
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
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs2 
        = vlSelf->top__DOT__cpu__DOT__rs2_in;
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs2_in];
    vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__instruction;
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__instruction 
        = vlSelf->top__DOT__cpu__DOT__instruction;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rd 
        = vlSelf->top__DOT__cpu__DOT__rd;
    vlSelf->top__DOT__cpu__DOT__ALU__DOT__FUNCT = vlSelf->top__DOT__cpu__DOT__FUNCT;
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT3 
        = vlSelf->top__DOT__cpu__DOT__FUNCT;
    vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT7) 
            << 5U) | (IData)(vlSelf->top__DOT__cpu__DOT__rd));
    vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__is_ecall = (0x73U == (IData)(vlSelf->top__DOT__cpu__DOT__opcode));
    vlSelf->top__DOT__cpu__DOT__Memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in0 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((0x13U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (IData)(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate))
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (IData)(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate))
                                                     : 
                                                    ((0x23U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (IData)(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm))
                                                      : 
                                                     ((0x63U 
                                                       == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                      >> 7U))))))
                                                       : 
                                                      ((0x6fU 
                                                        == (IData)(vlSelf->top__DOT__cpu__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | ((0x100000U 
                                                            & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top__DOT__cpu__DOT__instruction) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top__DOT__cpu__DOT__instruction 
                                                                       >> 0x14U))))))
                                                        : vlSelf->top__DOT__cpu__DOT__instruction))))));
    vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__opcode;
    if (vlSelf->top__DOT__cpu__DOT__is_ecall) {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__rs1_in = 0x11U;
    } else {
        vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__rs1_in = (0x1fU 
                                              & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 0xfU));
    }
    vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in2 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    vlSelf->top__DOT__cpu__DOT__halted = (0xaU == vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf
                                          [vlSelf->top__DOT__cpu__DOT__rs1_in]);
    vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__halted) 
                         & (IData)(vlSelf->top__DOT__cpu__DOT__is_ecall));
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
