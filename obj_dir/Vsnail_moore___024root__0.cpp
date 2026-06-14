// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsnail_moore.h for the primary calling header

#include "Vsnail_moore__pch.h"

VlCoroutine Vsnail_moore___024root___eval_initial__TOP__Vtiming__0(Vsnail_moore___024root* vlSelf);
VlCoroutine Vsnail_moore___024root___eval_initial__TOP__Vtiming__1(Vsnail_moore___024root* vlSelf);

void Vsnail_moore___024root___eval_initial(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_initial\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsnail_moore___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsnail_moore___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsnail_moore___024root___eval_initial__TOP__Vtiming__0(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("snail.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_snail__DOT__clk = 0U;
    vlSelfRef.tb_snail__DOT__reset = 1U;
    vlSelfRef.tb_snail__DOT__A = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         39);
    vlSelfRef.tb_snail__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         45);
    vlSelfRef.tb_snail__DOT__A = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         46);
    vlSelfRef.tb_snail__DOT__A = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         47);
    vlSelfRef.tb_snail__DOT__A = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         48);
    vlSelfRef.tb_snail__DOT__A = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         49);
    vlSelfRef.tb_snail__DOT__A = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_snail.v", 
                                         50);
    vlSelfRef.tb_snail__DOT__A = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_snail.v", 
                                         52);
    VL_FINISH_MT("tb_snail.v", 54, "");
    co_return;
}

VlCoroutine Vsnail_moore___024root___eval_initial__TOP__Vtiming__1(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_snail.v", 
                                             25);
        vlSelfRef.tb_snail__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_snail__DOT__clk)));
    }
    co_return;
}

void Vsnail_moore___024root___eval_triggers_vec__act(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_triggers_vec__act\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_snail__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_snail__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_snail__DOT__clk__0 
        = vlSelfRef.tb_snail__DOT__clk;
}

bool Vsnail_moore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 8> Vsnail_moore__ConstPool__TABLE_h9d05cb09_0;

void Vsnail_moore___024root___act_sequent__TOP__0(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___act_sequent__TOP__0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_snail__DOT__A) 
                     << 2U) | (IData)(vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t));
    vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t 
        = Vsnail_moore__ConstPool__TABLE_h9d05cb09_0
        [__Vtableidx1];
}

void Vsnail_moore___024root___eval_act(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_act\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsnail_moore___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsnail_moore___024root___nba_sequent__TOP__0(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___nba_sequent__TOP__0\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_snail__DOT__dut__DOT__current_state_t 
        = ((IData)(vlSelfRef.tb_snail__DOT__reset) ? 0U
            : (IData)(vlSelfRef.tb_snail__DOT__dut__DOT__next_state_t));
}

void Vsnail_moore___024root___eval_nba(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_nba\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsnail_moore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsnail_moore___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsnail_moore___024root___timing_resume(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___timing_resume\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsnail_moore___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsnail_moore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsnail_moore___024root___eval_phase__act(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_phase__act\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsnail_moore___024root___eval_triggers_vec__act(vlSelf);
    Vsnail_moore___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsnail_moore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsnail_moore___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsnail_moore___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsnail_moore___024root___timing_resume(vlSelf);
        Vsnail_moore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsnail_moore___024root___eval_phase__inact(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_phase__inact\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_snail.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsnail_moore___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsnail_moore___024root___eval_phase__nba(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_phase__nba\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsnail_moore___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsnail_moore___024root___eval_nba(vlSelf);
        Vsnail_moore___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsnail_moore___024root___eval(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsnail_moore___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_snail.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_snail.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsnail_moore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_snail.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsnail_moore___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsnail_moore___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsnail_moore___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vsnail_moore___024root___eval_debug_assertions(Vsnail_moore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsnail_moore___024root___eval_debug_assertions\n"); );
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
