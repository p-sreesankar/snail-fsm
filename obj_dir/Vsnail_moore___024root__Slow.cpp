// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsnail_moore.h for the primary calling header

#include "Vsnail_moore__pch.h"

void Vsnail_moore___024root___ctor_var_reset(Vsnail_moore___024root* vlSelf);

Vsnail_moore___024root::Vsnail_moore___024root(Vsnail_moore__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vsnail_moore___024root___ctor_var_reset(this);
}

void Vsnail_moore___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsnail_moore___024root::~Vsnail_moore___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
