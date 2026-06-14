// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsnail_moore__Syms.h"


void Vsnail_moore___024root__trace_chg_0_sub_0(Vsnail_moore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsnail_moore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_chg_0\n"); );
    // Body
    Vsnail_moore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsnail_moore___024root*>(voidSelf);
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsnail_moore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsnail_moore___024root__trace_chg_0_sub_0(Vsnail_moore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_chg_0_sub_0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((2U == (IData)(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t))));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t),2);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t),2);
    }
    bufp->chgBit(oldp+3,(vlSelfRef.tb_snail__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelfRef.tb_snail__DOT__reset));
    bufp->chgBit(oldp+5,(vlSelfRef.tb_snail__DOT__A));
    bufp->chgCData(oldp+6,(vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t),2);
    bufp->chgCData(oldp+7,(vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t),2);
}

void Vsnail_moore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root__trace_cleanup\n"); );
    // Body
    Vsnail_moore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsnail_moore___024root*>(voidSelf);
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
