// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCU__SYMS_H_
#define VERILATED_VCU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcu.h"

// INCLUDE MODULE CLASSES
#include "Vcu___024root.h"
#include "Vcu_pe__R3.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcu___024root                  TOP;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3                     TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;

    // CONSTRUCTORS
    Vcu__Syms(VerilatedContext* contextp, const char* namep, Vcu* modelp);
    ~Vcu__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
