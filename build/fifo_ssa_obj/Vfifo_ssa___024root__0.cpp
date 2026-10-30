// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_ssa.h for the primary calling header

#include "Vfifo_ssa__pch.h"

bool Vfifo_ssa___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vfifo_ssa___024root___ico_sequent__TOP__0(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___ico_sequent__TOP__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[3U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[2U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[1U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[0U]);
    vlSelfRef.pvld_bus[0U][0U] = vlSelfRef.up_vld[0U];
    vlSelfRef.pvld_bus[0U][1U] = vlSelfRef.up_vld[1U];
    vlSelfRef.pvld_bus[0U][2U] = vlSelfRef.up_vld[2U];
    vlSelfRef.pvld_bus[0U][3U] = vlSelfRef.up_vld[3U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U] 
        = vlSelfRef.down_ready[0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U] 
        = vlSelfRef.down_ready[1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U] 
        = vlSelfRef.down_ready[2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U] 
        = vlSelfRef.down_ready[3U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U] 
        = vlSelfRef.right_ready[0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U] 
        = vlSelfRef.right_ready[1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U] 
        = vlSelfRef.right_ready[2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U] 
        = vlSelfRef.right_ready[3U];
    vlSelfRef.down_vld[0U] = vlSelfRef.pvld_bus[4U][0U];
    vlSelfRef.down_vld[1U] = vlSelfRef.pvld_bus[4U][1U];
    vlSelfRef.down_vld[2U] = vlSelfRef.pvld_bus[4U][2U];
    vlSelfRef.down_vld[3U] = vlSelfRef.pvld_bus[4U][3U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[0U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[1U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[2U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[3U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][3U];
    vlSelfRef.left_ready[0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][0U];
    vlSelfRef.left_ready[1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][0U];
    vlSelfRef.left_ready[2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][0U];
    vlSelfRef.left_ready[3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][0U];
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[3U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[2U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[1U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[0U]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_ssa___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfifo_ssa___024root___eval_phase__ico(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_phase__ico\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_ssa___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vfifo_ssa___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
                Vfifo_ssa___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

bool Vfifo_ssa___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfifo_ssa___024root___act_sequent__TOP__0(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.psum_bus[1U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[1U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[1U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[1U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[2U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[2U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[2U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[2U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[3U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[3U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[3U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[3U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[4U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[4U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[4U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_psum;
    vlSelfRef.psum_bus[4U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_psum;
    vlSelfRef.down_psum[0U] = vlSelfRef.psum_bus[4U][0U];
    vlSelfRef.down_psum[1U] = vlSelfRef.psum_bus[4U][1U];
    vlSelfRef.down_psum[2U] = vlSelfRef.psum_bus[4U][2U];
    vlSelfRef.down_psum[3U] = vlSelfRef.psum_bus[4U][3U];
}

void Vfifo_ssa___024root___act_sequent__TOP__1(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pvld_bus[1U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[1U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[1U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[1U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[2U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[2U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[2U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[2U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[3U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[3U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[3U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[3U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[4U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[4U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[4U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_vld;
    vlSelfRef.pvld_bus[4U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_vld;
    vlSelfRef.down_vld[0U] = vlSelfRef.pvld_bus[4U][0U];
    vlSelfRef.down_vld[1U] = vlSelfRef.pvld_bus[4U][1U];
    vlSelfRef.down_vld[2U] = vlSelfRef.pvld_bus[4U][2U];
    vlSelfRef.down_vld[3U] = vlSelfRef.pvld_bus[4U][3U];
}

void Vfifo_ssa___024root___act_sequent__TOP__2(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prow_bus[1U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[1U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[1U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[1U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[2U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[2U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[2U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[2U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[3U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[3U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[3U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[3U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[4U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[4U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[4U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.down_row;
    vlSelfRef.prow_bus[4U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.down_row;
    vlSelfRef.down_row[0U] = vlSelfRef.prow_bus[4U][0U];
    vlSelfRef.down_row[1U] = vlSelfRef.prow_bus[4U][1U];
    vlSelfRef.down_row[2U] = vlSelfRef.prow_bus[4U][2U];
    vlSelfRef.down_row[3U] = vlSelfRef.prow_bus[4U][3U];
}

void Vfifo_ssa___024root___act_sequent__TOP__3(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_data;
    vlSelfRef.right_data[0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][4U];
    vlSelfRef.right_data[1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][4U];
    vlSelfRef.right_data[2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][4U];
    vlSelfRef.right_data[3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][4U];
}

void Vfifo_ssa___024root___act_sequent__TOP__4(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_vld;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_vld;
    vlSelfRef.right_vld[0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][4U];
    vlSelfRef.right_vld[1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][4U];
    vlSelfRef.right_vld[2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][4U];
    vlSelfRef.right_vld[3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][4U];
}

void Vfifo_ssa___024root___act_sequent__TOP__5(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_sequent__TOP__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.right_row;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][4U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.right_row;
    vlSelfRef.right_row[0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][4U];
    vlSelfRef.right_row[1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][4U];
    vlSelfRef.right_row[2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][4U];
    vlSelfRef.right_row[3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][4U];
}

void Vfifo_ssa___024root___act_comb__TOP__0(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___act_comb__TOP__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][0U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.up_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U] 
        = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.left_ready;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[0U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[1U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[2U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[3U] 
        = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][3U];
    vlSelfRef.left_ready[0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][0U];
    vlSelfRef.left_ready[1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][0U];
    vlSelfRef.left_ready[2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][0U];
    vlSelfRef.left_ready[3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][0U];
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[3U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[2U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[1U]);
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd 
        = ((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.left_ready[0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);

void Vfifo_ssa___024root___eval_act(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_act\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
    }
    if ((0x0000000000000088ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vfifo_ssa___024root___nba_sequent__TOP__0(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___nba_sequent__TOP__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v0;
    __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v0;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v0 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v1;
    __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v1 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v1;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v1 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v2;
    __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v2 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v2;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v2 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v3;
    __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v3 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v3;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v3 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v4;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v4 = 0;
    IData/*31:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    IData/*31:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    IData/*31:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    IData/*31:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 = 0;
    CData/*2:0*/ __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    CData/*3:0*/ __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0;
    __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0 = 0;
    // Body
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 = 0U;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 = 0U;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 = 0U;
    __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 = 0U;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v0 = 0U;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v1 = 0U;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v2 = 0U;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v3 = 0U;
    __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v4 = 0U;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__u_rowgen__DOT__j = 4U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr) 
                                       << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr) 
                                           << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd)))
                                   ? ((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count))));
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr) 
                                       << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr) 
                                           << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd)))
                                   ? ((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count))));
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr) 
                                       << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr) 
                                           << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd)))
                                   ? ((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count))));
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr) 
                                       << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count))
                               : ((1U == (((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr) 
                                           << 1U) | (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd)))
                                   ? ((IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count))));
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd) {
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd) {
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd) {
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd) {
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr) {
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_wr_data[3U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr;
            __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0 = 1U;
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_wr_row[3U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr;
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr) {
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_wr_data[2U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr;
            __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0 = 1U;
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_wr_row[2U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr;
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr) {
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_wr_data[1U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr;
            __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0 = 1U;
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_wr_row[1U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr;
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr)));
        }
        if (vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr) {
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_wr_data[0U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr;
            __VdlySet__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0 = 1U;
            __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_wr_row[0U];
            __VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0 
                = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr;
            vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr)));
        }
        if ((vlSelfRef.up_vld[0U] & vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[0U])) {
            __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[0U])));
            __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v0 = 1U;
        }
        if ((vlSelfRef.up_vld[1U] & vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[1U])) {
            __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v1 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[1U])));
            __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v1 = 1U;
        }
        if ((vlSelfRef.up_vld[2U] & vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[2U])) {
            __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[2U])));
            __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v2 = 1U;
        }
        if ((vlSelfRef.up_vld[3U] & vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready[3U])) {
            __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v3 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[3U])));
            __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v3 = 1U;
        }
    } else {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr = 0U;
        __VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v4 = 1U;
    }
    if (__VdlySet__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0) {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data__v0;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row__v0;
    }
    if (__VdlySet__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0) {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data__v0;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row__v0;
    }
    if (__VdlySet__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0) {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data__v0;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row__v0;
    }
    if (__VdlySet__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0) {
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data__v0;
        vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row[__VdlyDim0__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0] 
            = __VdlyVal__fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row__v0;
    }
    if (__VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v0) {
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[0U] 
            = __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v0;
    }
    if (__VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v1) {
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[1U] 
            = __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v1;
    }
    if (__VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v2) {
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[2U] 
            = __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v2;
    }
    if (__VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v3) {
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[3U] 
            = __VdlyVal__fifo_ssa__DOT__u_ssa__DOT__up_row__v3;
    }
    if (__VdlySet__fifo_ssa__DOT__u_ssa__DOT__up_row__v4) {
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[0U] = 0U;
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[1U] = 0U;
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[2U] = 0U;
        vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[3U] = 0U;
    }
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[3U]);
    vlSelfRef.fifo_full[3U] = (0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_empty[3U] = (0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[3U] = (0U 
                                                != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[2U]);
    vlSelfRef.fifo_full[2U] = (0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_empty[2U] = (0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[2U] = (0U 
                                                != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[1U]);
    vlSelfRef.fifo_full[1U] = (0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_empty[1U] = (0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[1U] = (0U 
                                                != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr 
        = ((0x10U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count)) 
           & vlSelfRef.fifo_wr_en[0U]);
    vlSelfRef.fifo_full[0U] = (0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_empty[0U] = (0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[0U] = (0U 
                                                != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count));
    vlSelfRef.fifo_ssa__DOT__fifo_rd_data[3U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_row[3U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_data[2U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_row[2U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_data[1U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_row[1U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_data[0U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr];
    vlSelfRef.fifo_ssa__DOT__fifo_rd_row[0U] = vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row
        [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr];
}

void Vfifo_ssa___024root___nba_sequent__TOP__1(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___nba_sequent__TOP__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hold_data[0U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[0U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[0U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[0U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[1U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[1U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[1U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[1U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[2U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[2U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[2U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[2U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[3U][0U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[3U][1U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data;
    vlSelfRef.hold_data[3U][2U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data;
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_row[0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_row[1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_row[2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_row[3U];
    vlSelfRef.prow_bus[0U][0U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[0U];
    vlSelfRef.prow_bus[0U][1U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[1U];
    vlSelfRef.prow_bus[0U][2U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[2U];
    vlSelfRef.prow_bus[0U][3U] = vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row[3U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_data[0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_data[1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_data[2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_data[3U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[0U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[1U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[2U];
    vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U] 
        = vlSelfRef.fifo_ssa__DOT__fifo_rd_vld[3U];
    vlSelfRef.hold_data[3U][3U] = vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data;
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);
void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf);

void Vfifo_ssa___024root___eval_nba(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_nba\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000380ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
    }
    if ((0x0000000000000308ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
    }
    if ((0x0000000000000301ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000302ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000304ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000310ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000320ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[12U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000340ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[13U] = 1U;
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000388ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        vlSelfRef.__Vm_traceActivity[14U] = 1U;
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe));
        Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0((&vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe));
        Vfifo_ssa___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vfifo_ssa___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_ssa___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfifo_ssa___024root___eval_phase__act(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_phase__act\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((~ (IData)(vlSelfRef.rst_n)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                           << 9U) 
                                                          | (((IData)(vlSelfRef.clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))) 
                                                             << 8U)) 
                                                         | (((((vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__rrdy_bus__1.neq(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus) 
                                                                << 3U) 
                                                               | (vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__lrow_bus__1.neq(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus) 
                                                                  << 2U)) 
                                                              | ((vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__lvld_bus__1.neq(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus) 
                                                                  << 1U) 
                                                                 | vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__data_bus__1.neq(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus))) 
                                                             << 4U) 
                                                            | (((vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__rdy_bus__1.neq(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus) 
                                                                 << 3U) 
                                                                | (vlSelfRef.__Vtrigprevexpr___TOP__prow_bus__1.neq(vlSelfRef.prow_bus) 
                                                                   << 2U)) 
                                                               | ((vlSelfRef.__Vtrigprevexpr___TOP__pvld_bus__1.neq(vlSelfRef.pvld_bus) 
                                                                   << 1U) 
                                                                  | vlSelfRef.__Vtrigprevexpr___TOP__psum_bus__1.neq(vlSelfRef.psum_bus)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__psum_bus__1.assign(vlSelfRef.psum_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__pvld_bus__1.assign(vlSelfRef.pvld_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__prow_bus__1.assign(vlSelfRef.prow_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__rdy_bus__1.assign(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__data_bus__1.assign(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__lvld_bus__1.assign(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__lrow_bus__1.assign(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_ssa__DOT__u_ssa__DOT__rrdy_bus__1.assign(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus);
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
            vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                             | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_ssa___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfifo_ssa___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo_ssa___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfifo_ssa___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vfifo_ssa___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_ssa___024root___eval_phase__nba(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_phase__nba\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo_ssa___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo_ssa___024root___eval_nba(vlSelf);
        Vfifo_ssa___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo_ssa___024root___eval(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_ssa___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("src/rtl/fifo_ssa.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vfifo_ssa___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_ssa___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/rtl/fifo_ssa.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfifo_ssa___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/rtl/fifo_ssa.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vfifo_ssa___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfifo_ssa___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vfifo_ssa___024root___eval_debug_assertions(Vfifo_ssa___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root___eval_debug_assertions\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
