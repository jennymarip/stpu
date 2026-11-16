// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcu.h for the primary calling header

#ifndef VERILATED_VCU___024ROOT_H_
#define VERILATED_VCU___024ROOT_H_  // guard

#include "verilated.h"
class Vcu_pe__R3;


class Vcu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcu___024root final {
  public:
    // CELLS
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe;
    Vcu_pe__R3* __PVT__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VlUnpacked<CData/*0:0*/, 4> up_vld;
        VlUnpacked<CData/*0:0*/, 4> down_ready;
        VlUnpacked<CData/*0:0*/, 4> right_ready;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> pvld_bus;
        VL_IN8(b_load_start,0,0);
        VL_OUT8(b_loaded,0,0);
        VL_OUT8(b_busy,0,0);
        VL_OUT8(b_err,0,0);
        VL_OUT8(rd_req_vld,0,0);
        VL_OUT8(rd_src,1,0);
        VL_OUT8(rd_len,7,0);
        VL_IN8(rd_req_ready,0,0);
        VL_IN8(rd_rsp_vld,0,0);
        VL_OUT8(rd_rsp_ready,0,0);
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr;
        CData/*4:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr;
        CData/*4:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr;
        CData/*4:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr;
        CData/*3:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr;
        CData/*4:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr;
        CData/*0:0*/ cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd;
        CData/*1:0*/ cu__DOT__u_b_loader__DOT__state;
        CData/*1:0*/ cu__DOT__u_b_loader__DOT__next_state;
        CData/*0:0*/ cu__DOT__u_b_loader__DOT__buf_vld;
        CData/*1:0*/ cu__DOT__u_b_loader__DOT__buf_col;
        CData/*2:0*/ cu__DOT__u_b_loader__DOT__j;
        CData/*2:0*/ cu__DOT__u_b_loader__DOT__written;
        CData/*0:0*/ cu__DOT__u_b_loader__DOT__do_preload;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__b_load_start__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rd_req_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rd_rsp_vld__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(b_task_id,15,0);
        VL_OUT16(rd_id,15,0);
        VL_IN16(rd_rsp_id,15,0);
        SData/*15:0*/ __Vtrigprevexpr___TOP__b_task_id__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__rd_rsp_id__0;
    };
    struct {
        VL_IN(b_base,31,0);
        VL_OUT(rd_addr,31,0);
        IData/*31:0*/ cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__u_rowgen__DOT__j;
        IData/*31:0*/ cu__DOT__u_b_loader__DOT__i;
        IData/*31:0*/ __Vtrigprevexpr___TOP__b_base__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4> rd_rsp_data;
        VlUnpacked<IData/*31:0*/, 4> fifo_wr_data;
        VlUnpacked<CData/*2:0*/, 4> fifo_wr_row;
        VlUnpacked<CData/*0:0*/, 4> fifo_wr_en;
        VlUnpacked<CData/*0:0*/, 4> fifo_full;
        VlUnpacked<CData/*0:0*/, 4> fifo_empty;
        VlUnpacked<IData/*31:0*/, 4> down_psum;
        VlUnpacked<CData/*0:0*/, 4> down_vld;
        VlUnpacked<CData/*2:0*/, 4> down_row;
        VlUnpacked<IData/*31:0*/, 4> right_data;
        VlUnpacked<CData/*0:0*/, 4> right_vld;
        VlUnpacked<CData/*2:0*/, 4> right_row;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> hold_data;
        VlUnpacked<CData/*0:0*/, 4> left_ready;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> psum_bus;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5> prow_bus;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> cu__DOT__preload_data;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> cu__DOT__preload_vld;
        VlUnpacked<IData/*31:0*/, 4> cu__DOT__u_fifo_ssa__DOT__fifo_rd_data;
        VlUnpacked<CData/*2:0*/, 4> cu__DOT__u_fifo_ssa__DOT__fifo_rd_row;
        VlUnpacked<CData/*0:0*/, 4> cu__DOT__u_fifo_ssa__DOT__fifo_rd_vld;
        VlUnpacked<IData/*31:0*/, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__up_psum;
        VlUnpacked<CData/*2:0*/, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__up_row;
        VlUnpacked<CData/*0:0*/, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__up_ready;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rdy_bus;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__data_bus;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lvld_bus;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 5>, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lrow_bus;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rrdy_bus;
        VlUnpacked<IData/*31:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data;
        VlUnpacked<CData/*2:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row;
        VlUnpacked<IData/*31:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data;
        VlUnpacked<CData/*2:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row;
        VlUnpacked<IData/*31:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data;
        VlUnpacked<CData/*2:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row;
        VlUnpacked<IData/*31:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data;
        VlUnpacked<CData/*2:0*/, 16> cu__DOT__u_fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row;
        VlUnpacked<IData/*31:0*/, 4> cu__DOT__u_b_loader__DOT__col_buf;
        VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> __Vtrigprevexpr___TOP__psum_bus__0;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> __Vtrigprevexpr___TOP__pvld_bus__0;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5> __Vtrigprevexpr___TOP__prow_bus__0;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rdy_bus__0;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__data_bus__0;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lvld_bus__0;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lrow_bus__0;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rrdy_bus__0;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> __Vtrigprevexpr___TOP__psum_bus__1;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> __Vtrigprevexpr___TOP__pvld_bus__1;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5> __Vtrigprevexpr___TOP__prow_bus__1;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rdy_bus__1;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__data_bus__1;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lvld_bus__1;
        VlUnpacked<VlUnpacked<CData/*2:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__lrow_bus__1;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 5>, 4> __Vtrigprevexpr___TOP__cu__DOT__u_fifo_ssa__DOT__u_ssa__DOT__rrdy_bus__1;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 15> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vcu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcu___024root(Vcu__Syms* symsp, const char* namep);
    ~Vcu___024root();
    VL_UNCOPYABLE(Vcu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
