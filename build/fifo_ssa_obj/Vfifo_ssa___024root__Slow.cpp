// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_ssa.h for the primary calling header

#include "Vfifo_ssa__pch.h"

void Vfifo_ssa___024root___ctor_var_reset(Vfifo_ssa___024root* vlSelf);

Vfifo_ssa___024root::Vfifo_ssa___024root(Vfifo_ssa__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfifo_ssa___024root___ctor_var_reset(this);
}

void Vfifo_ssa___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfifo_ssa___024root::~Vfifo_ssa___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
