// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsnail_moore.h for the primary calling header

#ifndef VERILATED_VSNAIL_MOORE___024ROOT_H_
#define VERILATED_VSNAIL_MOORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsnail_moore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsnail_moore___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_snail__DOT__clk;
    CData/*0:0*/ tb_snail__DOT__reset;
    CData/*0:0*/ tb_snail__DOT__A;
    CData/*1:0*/ tb_snail__DOT__dut__DOT__current_state_t;
    CData/*1:0*/ tb_snail__DOT__dut__DOT__next_state_t;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_snail__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vsnail_moore__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsnail_moore___024root(Vsnail_moore__Syms* symsp, const char* namep);
    ~Vsnail_moore___024root();
    VL_UNCOPYABLE(Vsnail_moore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
