// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcu::Vcu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , up_vld{vlSymsp->TOP.up_vld}
    , down_ready{vlSymsp->TOP.down_ready}
    , right_ready{vlSymsp->TOP.right_ready}
    , pvld_bus{vlSymsp->TOP.pvld_bus}
    , b_load_start{vlSymsp->TOP.b_load_start}
    , b_loaded{vlSymsp->TOP.b_loaded}
    , b_busy{vlSymsp->TOP.b_busy}
    , b_err{vlSymsp->TOP.b_err}
    , rd_req_vld{vlSymsp->TOP.rd_req_vld}
    , rd_src{vlSymsp->TOP.rd_src}
    , rd_len{vlSymsp->TOP.rd_len}
    , rd_req_ready{vlSymsp->TOP.rd_req_ready}
    , rd_rsp_vld{vlSymsp->TOP.rd_rsp_vld}
    , rd_rsp_ready{vlSymsp->TOP.rd_rsp_ready}
    , b_task_id{vlSymsp->TOP.b_task_id}
    , rd_id{vlSymsp->TOP.rd_id}
    , rd_rsp_id{vlSymsp->TOP.rd_rsp_id}
    , b_base{vlSymsp->TOP.b_base}
    , rd_addr{vlSymsp->TOP.rd_addr}
    , rd_rsp_data{vlSymsp->TOP.rd_rsp_data}
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
    , hold_data{vlSymsp->TOP.hold_data}
    , left_ready{vlSymsp->TOP.left_ready}
    , psum_bus{vlSymsp->TOP.psum_bus}
    , prow_bus{vlSymsp->TOP.prow_bus}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe}
    , __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe{vlSymsp->TOP.__PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcu::Vcu(const char* _vcname__)
    : Vcu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcu::~Vcu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcu___024root___eval_debug_assertions(Vcu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcu___024root___eval_static(Vcu___024root* vlSelf);
void Vcu___024root___eval_initial(Vcu___024root* vlSelf);
void Vcu___024root___eval_settle(Vcu___024root* vlSelf);
void Vcu___024root___eval(Vcu___024root* vlSelf);

void Vcu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcu___024root___eval_static(&(vlSymsp->TOP));
        Vcu___024root___eval_initial(&(vlSymsp->TOP));
        Vcu___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcu::eventsPending() { return false; }

uint64_t Vcu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcu___024root___eval_final(Vcu___024root* vlSelf);

VL_ATTR_COLD void Vcu::final() {
    contextp()->executingFinal(true);
    Vcu___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcu::hierName() const { return vlSymsp->name(); }
const char* Vcu::modelName() const { return "Vcu"; }
unsigned Vcu::threads() const { return 1; }
void Vcu::prepareClone() const { contextp()->prepareClone(); }
void Vcu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcu___024root__trace_init_top(Vcu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcu___024root*>(voidSelf);
    Vcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcu___024root__trace_decl_types(tracep);
    Vcu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcu___024root__trace_register(Vcu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1226);
    Vcu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
