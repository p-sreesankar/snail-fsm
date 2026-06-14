// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsnail_moore__Syms.h"


VL_ATTR_COLD void Vsnail_moore___024root__trace_init_sub__TOP__0(Vsnail_moore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_init_sub__TOP__0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_snail", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"current_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"next_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"current_state_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"next_state_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_init_top(Vsnail_moore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_init_top\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsnail_moore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsnail_moore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsnail_moore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsnail_moore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsnail_moore___024root__trace_register(Vsnail_moore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_register\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsnail_moore___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsnail_moore___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsnail_moore___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsnail_moore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_const_0\n"); );
    // Body
    Vsnail_moore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsnail_moore___024root*>(voidSelf);
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_full_0_sub_0(Vsnail_moore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsnail_moore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_full_0\n"); );
    // Body
    Vsnail_moore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsnail_moore___024root*>(voidSelf);
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsnail_moore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_full_0_sub_0(Vsnail_moore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_full_0_sub_0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,((2U == (IData)(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t))));
    bufp->fullCData(oldp+1,(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t),2);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t),2);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_snail__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_snail__DOT__reset));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_snail__DOT__A));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t),2);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t),2);
}
