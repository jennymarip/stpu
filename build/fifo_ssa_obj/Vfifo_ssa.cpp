// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfifo_ssa__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfifo_ssa::Vfifo_ssa(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfifo_ssa__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , up_vld{vlSymsp->TOP.up_vld}
    , down_ready{vlSymsp->TOP.down_ready}
    , right_ready{vlSymsp->TOP.right_ready}
    , pvld_bus{vlSymsp->TOP.pvld_bus}
    , fifo_wr_data{vlSymsp->TOP.fifo_wr_data}
    , fifo_wr_row{vlSymsp->TOP.fifo_wr_row}
    , fifo_wr_en{vlSymsp->TOP.fifo_wr_en}
    , fifo_full{vlSymsp->TOP.fifo_full}
    , fifo_empty{vlSymsp->TOP.fifo_empty}
    , down_psum{vlSymsp->TOP.down_psum}
    , down_vld{vlSymsp->TOP.down_vld}
    , down_row{vlSymsp->TOP.down_row}
    , right_data{vlSymsp->TOP.right_data}
    , right_vld{vlSymsp->TOP.right_vld}
    , right_row{vlSymsp->TOP.right_row}
    , preload_data{vlSymsp->TOP.preload_data}
    , preload_vld{vlSymsp->TOP.preload_vld}
    , hold_data{vlSymsp->TOP.hold_data}
    , left_ready{vlSymsp->TOP.left_ready}
    , psum_bus{vlSymsp->TOP.psum_bus}
    , prow_bus{vlSymsp->TOP.prow_bus}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfifo_ssa::Vfifo_ssa(const char* _vcname__)
    : Vfifo_ssa(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfifo_ssa::~Vfifo_ssa() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfifo_ssa___024root___eval_debug_assertions(Vfifo_ssa___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo_ssa___024root___eval_static(Vfifo_ssa___024root* vlSelf);
void Vfifo_ssa___024root___eval_initial(Vfifo_ssa___024root* vlSelf);
void Vfifo_ssa___024root___eval_settle(Vfifo_ssa___024root* vlSelf);
void Vfifo_ssa___024root___eval(Vfifo_ssa___024root* vlSelf);

void Vfifo_ssa::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfifo_ssa::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfifo_ssa___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfifo_ssa___024root___eval_static(&(vlSymsp->TOP));
        Vfifo_ssa___024root___eval_initial(&(vlSymsp->TOP));
        Vfifo_ssa___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfifo_ssa___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfifo_ssa::eventsPending() { return false; }

uint64_t Vfifo_ssa::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfifo_ssa::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfifo_ssa___024root___eval_final(Vfifo_ssa___024root* vlSelf);

VL_ATTR_COLD void Vfifo_ssa::final() {
    contextp()->executingFinal(true);
    Vfifo_ssa___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfifo_ssa::hierName() const { return vlSymsp->name(); }
const char* Vfifo_ssa::modelName() const { return "Vfifo_ssa"; }
unsigned Vfifo_ssa::threads() const { return 1; }
void Vfifo_ssa::prepareClone() const { contextp()->prepareClone(); }
void Vfifo_ssa::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfifo_ssa::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vfifo_ssa___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfifo_ssa___024root__trace_init_top(Vfifo_ssa___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfifo_ssa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_ssa___024root*>(voidSelf);
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vfifo_ssa___024root__trace_decl_types(tracep);
    Vfifo_ssa___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo_ssa___024root__trace_register(Vfifo_ssa___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfifo_ssa::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfifo_ssa::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1188);
    Vfifo_ssa___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
