// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFIFO_SSA_H_
#define VERILATED_VFIFO_SSA_H_  // guard

#include "verilated.h"

class Vfifo_ssa__Syms;
class Vfifo_ssa___024root;
class VerilatedVcdC;
class Vfifo_ssa_pe__R3;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vfifo_ssa VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vfifo_ssa__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VlUnpacked<CData/*0:0*/, 4> &up_vld;
    VlUnpacked<CData/*0:0*/, 4> &down_ready;
    VlUnpacked<CData/*0:0*/, 4> &right_ready;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> &pvld_bus;
    VlUnpacked<IData/*31:0*/, 4> &fifo_wr_data;
    VlUnpacked<CData/*2:0*/, 4> &fifo_wr_row;
    VlUnpacked<CData/*0:0*/, 4> &fifo_wr_en;
    VlUnpacked<CData/*0:0*/, 4> &fifo_full;
    VlUnpacked<CData/*0:0*/, 4> &fifo_empty;
    VlUnpacked<IData/*31:0*/, 4> &down_psum;
    VlUnpacked<CData/*0:0*/, 4> &down_vld;
    VlUnpacked<CData/*2:0*/, 4> &down_row;
    VlUnpacked<IData/*31:0*/, 4> &right_data;
    VlUnpacked<CData/*0:0*/, 4> &right_vld;
    VlUnpacked<CData/*2:0*/, 4> &right_row;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> &preload_data;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> &preload_vld;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> &hold_data;
    VlUnpacked<CData/*0:0*/, 4> &left_ready;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> &psum_bus;
    VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5> &prow_bus;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vfifo_ssa_pe__R3* const __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vfifo_ssa___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vfifo_ssa(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vfifo_ssa(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vfifo_ssa();
  private:
    VL_UNCOPYABLE(Vfifo_ssa);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
