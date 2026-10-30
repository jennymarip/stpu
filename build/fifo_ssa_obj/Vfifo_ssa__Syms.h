// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIFO_SSA__SYMS_H_
#define VERILATED_VFIFO_SSA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfifo_ssa.h"

// INCLUDE MODULE CLASSES
#include "Vfifo_ssa___024root.h"
#include "Vfifo_ssa_pe__R3.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfifo_ssa__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfifo_ssa* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfifo_ssa___024root            TOP;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3               TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;

    // CONSTRUCTORS
    Vfifo_ssa__Syms(VerilatedContext* contextp, const char* namep, Vfifo_ssa* modelp);
    ~Vfifo_ssa__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
