// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcu.h for the primary calling header

#include "Vcu__pch.h"

void Vcu___024root___ctor_var_reset(Vcu___024root* vlSelf);

Vcu___024root::Vcu___024root(Vcu__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcu___024root___ctor_var_reset(this);
}

void Vcu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcu___024root::~Vcu___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
