// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcu.h for the primary calling header

#include "Vcu__pch.h"

void Vcu_pe__R3___ctor_var_reset(Vcu_pe__R3* vlSelf);

Vcu_pe__R3::Vcu_pe__R3() = default;
Vcu_pe__R3::~Vcu_pe__R3() = default;

void Vcu_pe__R3::ctor(Vcu__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcu_pe__R3___ctor_var_reset(this);
}

void Vcu_pe__R3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcu_pe__R3::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
