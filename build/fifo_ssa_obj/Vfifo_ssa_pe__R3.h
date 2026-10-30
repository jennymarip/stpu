// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_ssa.h for the primary calling header

#ifndef VERILATED_VFIFO_SSA_PE__R3_H_
#define VERILATED_VFIFO_SSA_PE__R3_H_  // guard

#include "verilated.h"


class Vfifo_ssa__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_ssa_pe__R3 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ up_vld;
    CData/*2:0*/ up_row;
    CData/*0:0*/ up_ready;
    CData/*0:0*/ left_vld;
    CData/*2:0*/ left_row;
    CData/*0:0*/ left_ready;
    CData/*0:0*/ down_vld;
    CData/*2:0*/ down_row;
    CData/*0:0*/ down_ready;
    CData/*0:0*/ right_vld;
    CData/*2:0*/ right_row;
    CData/*0:0*/ right_ready;
    CData/*0:0*/ preload_vld;
    CData/*0:0*/ __PVT__mac_fire;
    CData/*2:0*/ __PVT__up_buf_row;
    CData/*2:0*/ __PVT__left_buf_row;
    CData/*2:0*/ __PVT__down_buf_row;
    CData/*2:0*/ __PVT__right_buf_row;
    CData/*2:0*/ __PVT__res_buf_row;
    CData/*0:0*/ __PVT__up_buf_vld;
    CData/*0:0*/ __PVT__left_buf_vld;
    CData/*0:0*/ __PVT__down_buf_vld;
    CData/*0:0*/ __PVT__right_buf_vld;
    CData/*0:0*/ __PVT__res_buf_vld;
    CData/*2:0*/ __PVT__row_flag;
    CData/*0:0*/ __PVT__up_buf_allowin;
    CData/*0:0*/ __PVT__up_buf_to_res_buf_valid;
    CData/*0:0*/ __PVT__res_buf_allowin;
    CData/*0:0*/ __PVT__down_buf_allowin;
    CData/*0:0*/ __PVT__left_buf_allowin;
    CData/*0:0*/ __PVT__left_buf_to_right_valid;
    CData/*0:0*/ __PVT__right_buf_allowin;
    IData/*31:0*/ up_psum;
    IData/*31:0*/ left_data;
    IData/*31:0*/ down_psum;
    IData/*31:0*/ right_data;
    IData/*31:0*/ preload_data;
    IData/*31:0*/ hold_data;
    IData/*31:0*/ __PVT__up_buf;
    IData/*31:0*/ __PVT__left_buf;
    IData/*31:0*/ __PVT__down_buf;
    IData/*31:0*/ __PVT__right_buf;
    IData/*31:0*/ __PVT__res_buf;

    // INTERNAL VARIABLES
    Vfifo_ssa__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_ssa_pe__R3();
    ~Vfifo_ssa_pe__R3();
    void ctor(Vfifo_ssa__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vfifo_ssa_pe__R3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
