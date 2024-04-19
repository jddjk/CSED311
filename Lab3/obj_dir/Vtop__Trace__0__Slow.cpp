// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"imm_gen_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs1_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"rs2_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"MemAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"in_1_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"in_2_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rd_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"rs1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"rs2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+121,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+122,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"MemToReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"PCWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"IRWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+129,0,"IorD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"alu_src_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+132,0,"alu_src_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"PC_Write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"PCWriteNotCond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"PCSource",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"ALUCtrlOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"FUNCT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+141,0,"bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"MDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"ALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"ALUCtrlOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"in_1_ALU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"in_2_ALU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"FUNCT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ALUControlUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"ALUCtrlOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+157,0,"FUNCT7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+158,0,"FUNCT3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("ControlUnit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+160,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"bcond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"ALUop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,0,"alu_src_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+165,0,"alu_src_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"PCWriteNotCond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"PC_Write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"MemToReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"IorD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"IRWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"PCSource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("MicroSequencer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+179,0,"current_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+180,0,"bcond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"next_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ImmediateGenerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+185,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+186,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("IorD_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+297,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+199,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+200,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+208,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+209,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+210,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+214+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+246,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_src_A_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_src_B_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+288,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_to_reg_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+291,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_source_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+297,(0x4000U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reset));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->is_halted));
    bufp->fullIData(oldp+4,(vlSelf->print_reg[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->print_reg[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->print_reg[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->print_reg[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->print_reg[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->print_reg[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->print_reg[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->print_reg[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->print_reg[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->print_reg[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->print_reg[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->print_reg[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->print_reg[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->print_reg[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->print_reg[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->print_reg[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->print_reg[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->print_reg[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->print_reg[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->print_reg[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->print_reg[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->print_reg[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->print_reg[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->print_reg[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->print_reg[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->print_reg[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->print_reg[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->print_reg[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->print_reg[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->print_reg[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->print_reg[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->print_reg[31]),32);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__reset));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__clk));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__is_halted));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__cpu__DOT__current_pc),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__cpu__DOT__ALUResult),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__cpu__DOT__rs1_dout),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__cpu__DOT__rs2_dout),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__cpu__DOT__instruction),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__cpu__DOT__MemAddr),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__cpu__DOT__adder_out),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__cpu__DOT__dout),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__cpu__DOT__in_1_ALU),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__cpu__DOT__in_2_ALU),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__cpu__DOT__rd_din),32);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__cpu__DOT__rs1_in),5);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__cpu__DOT__rs2_in),5);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__cpu__DOT__rd),5);
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__cpu__DOT__MemRead));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__cpu__DOT__MemWrite));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__cpu__DOT__MemToReg));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__cpu__DOT__PCWrite));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__cpu__DOT__write_enable));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__cpu__DOT__IRWrite));
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__cpu__DOT__opcode),7);
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__cpu__DOT__IorD));
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__cpu__DOT__ALUop),2);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__cpu__DOT__alu_src_B),2);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__cpu__DOT__alu_src_A));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__cpu__DOT__PC_Write));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__cpu__DOT__PCWriteNotCond));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__cpu__DOT__PCSource));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__cpu__DOT__cond));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__cpu__DOT__halted));
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__cpu__DOT__ALUCtrlOp),3);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__cpu__DOT__FUNCT),3);
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__cpu__DOT__bcond));
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__cpu__DOT__IR),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__cpu__DOT__MDR),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__cpu__DOT__A),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__cpu__DOT__B),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__cpu__DOT__ALUOut),32);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__ALUCtrlOp),3);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__in_1_ALU),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__in_2_ALU),32);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__FUNCT),3);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__ALUResult),32);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__cpu__DOT__ALU__DOT__bcond));
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__instruction),32);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUop),2);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__ALUCtrlOp),3);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__opcode),7);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT7),7);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__cpu__DOT__ALUControlUnit__DOT__FUNCT3),3);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__opcode),7);
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__clk));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__reset));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__bcond));
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__ALUop),2);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_B),2);
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__alu_src_A));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PCWriteNotCond));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PC_Write));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemRead));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemWrite));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MemToReg));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__IorD));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__IRWrite));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__PCSource));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__reg_write));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__is_ecall));
    bufp->fullCData(oldp+176,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__current_state),4);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__next_state),4);
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__opcode),7);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__current_state),4);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__bcond));
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__cpu__DOT__ControlUnit__DOT__MicroSequencer__DOT__next_state),4);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__instruction),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__opcode),7);
    bufp->fullSData(oldp+185,(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__immediate),12);
    bufp->fullSData(oldp+186,(vlSelf->top__DOT__cpu__DOT__ImmediateGenerator__DOT__imm),12);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__in1),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__in0),32);
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__sel));
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__out),32);
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__reset));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__clk));
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__addr),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__din),32);
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_read));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_write));
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__dout),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__i),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__cpu__DOT__Memory__DOT__mem_addr),32);
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__cpu__DOT__PC__DOT__reset));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__cpu__DOT__PC__DOT__clk));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__cpu__DOT__PC__DOT__PCWrite));
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__cpu__DOT__PC__DOT__next_pc),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__cpu__DOT__PC__DOT__current_pc),32);
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__reset));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__clk));
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs1),5);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs2),5);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rd),5);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rd_din),32);
    bufp->fullBit(oldp+211,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__write_enable));
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs1_dout),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rs2_dout),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__i),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__cpu__DOT__RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__in1),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__in0),32);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__sel));
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__cpu__DOT__alu_src_A_mux__DOT__out),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in0),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in1),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in2),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__in3),32);
    bufp->fullCData(oldp+287,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__sel),2);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__cpu__DOT__alu_src_B_mux__DOT__out),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in1),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__in0),32);
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__sel));
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__out),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__in1),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__in0),32);
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__sel));
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__cpu__DOT__pc_source_mux__DOT__out),32);
}
