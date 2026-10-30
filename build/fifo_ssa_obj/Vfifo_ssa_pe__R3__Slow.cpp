// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_ssa.h for the primary calling header

#include "Vfifo_ssa__pch.h"

void Vfifo_ssa_pe__R3___ctor_var_reset(Vfifo_ssa_pe__R3* vlSelf);

Vfifo_ssa_pe__R3::Vfifo_ssa_pe__R3() = default;
Vfifo_ssa_pe__R3::~Vfifo_ssa_pe__R3() = default;

void Vfifo_ssa_pe__R3::ctor(Vfifo_ssa__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vfifo_ssa_pe__R3___ctor_var_reset(this);
}

void Vfifo_ssa_pe__R3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vfifo_ssa_pe__R3::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
