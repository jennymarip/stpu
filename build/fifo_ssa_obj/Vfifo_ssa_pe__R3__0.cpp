// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_ssa.h for the primary calling header

#include "Vfifo_ssa__pch.h"

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[0U][0U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[0U][0U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[0U][0U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[0U][0U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[0U][0U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[0U][0U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[0U][1U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[0U][1U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[0U][1U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[0U][1U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[0U][1U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[0U][1U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[0U][2U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[0U][2U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[0U][2U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[0U][2U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[0U][2U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[0U][2U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[0U][3U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[0U][3U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[0U][3U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[0U][3U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[0U][3U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[0U][3U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[1U][0U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[1U][0U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[1U][0U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[1U][0U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[1U][0U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[1U][0U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[1U][1U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[1U][1U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[1U][1U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[1U][1U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[1U][1U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[1U][1U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[1U][2U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[1U][2U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[1U][2U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[1U][2U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[1U][2U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[1U][2U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[1U][3U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[1U][3U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[1U][3U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[1U][3U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[1U][3U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[1U][3U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[2U][0U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[2U][0U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[2U][0U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[2U][0U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[2U][0U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[2U][0U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[2U][1U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[2U][1U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[2U][1U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[2U][1U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[2U][1U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[2U][1U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[2U][2U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[2U][2U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[2U][2U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[2U][2U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[2U][2U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[2U][2U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[2U][3U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[2U][3U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[2U][3U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[2U][3U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[2U][3U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[2U][3U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[3U][0U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[3U][0U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[3U][0U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[3U][0U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[3U][0U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[3U][0U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[3U][1U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[3U][1U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[3U][1U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[3U][1U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[3U][1U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[3U][1U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[3U][2U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[3U][2U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[3U][2U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[3U][2U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[3U][2U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[3U][2U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_psum = ((0U != vlSelfRef.hold_data)
                            ? vlSelfRef.__PVT__down_buf
                            : vlSymsp->TOP.psum_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_vld = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_vld)
                           : vlSymsp->TOP.pvld_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.down_row = ((0U != vlSelfRef.hold_data)
                           ? (IData)(vlSelfRef.__PVT__down_buf_row)
                           : vlSymsp->TOP.prow_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_data = ((0U != vlSelfRef.hold_data)
                             ? vlSelfRef.__PVT__right_buf
                             : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_vld = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_vld)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.right_row = ((0U != vlSelfRef.hold_data)
                            ? (IData)(vlSelfRef.__PVT__right_buf_row)
                            : vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U]);
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__right_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__right_buf_vld)) 
                                                | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U]));
}

void Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__down_buf_vld)) 
                                               | vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U]));
    vlSelfRef.__PVT__res_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__res_buf_vld)) 
                                              | (IData)(vlSelfRef.__PVT__down_buf_allowin)));
}

void Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___act_comb__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mac_fire = ((0U != vlSelfRef.hold_data) 
                                 & ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                    & ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                       & ((IData)(vlSelfRef.__PVT__res_buf_allowin) 
                                          & (((IData)(vlSelfRef.__PVT__up_buf_row) 
                                              == (IData)(vlSelfRef.__PVT__row_flag)) 
                                             & (((IData)(vlSelfRef.__PVT__left_buf_row) 
                                                 == (IData)(vlSelfRef.__PVT__row_flag)) 
                                                & (IData)(vlSelfRef.__PVT__right_buf_allowin)))))));
    vlSelfRef.__PVT__up_buf_to_res_buf_valid = ((IData)(vlSelfRef.__PVT__up_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__left_buf_to_right_valid = ((IData)(vlSelfRef.__PVT__left_buf_vld) 
                                                & (IData)(vlSelfRef.__PVT__mac_fire));
    vlSelfRef.__PVT__up_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__up_buf_vld)) 
                                             | (IData)(vlSelfRef.__PVT__mac_fire)));
    vlSelfRef.__PVT__left_buf_allowin = (1U & ((~ (IData)(vlSelfRef.__PVT__left_buf_vld)) 
                                               | (IData)(vlSelfRef.__PVT__mac_fire)));
    if ((0U != vlSelfRef.hold_data)) {
        vlSelfRef.up_ready = vlSelfRef.__PVT__up_buf_allowin;
        vlSelfRef.left_ready = vlSelfRef.__PVT__left_buf_allowin;
    } else {
        vlSelfRef.up_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U];
        vlSelfRef.left_ready = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U];
    }
}

void Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___nba_sequent__TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe__0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__row_flag;
    __Vdly__row_flag = 0;
    // Body
    __Vdly__row_flag = vlSelfRef.__PVT__row_flag;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        __Vdly__row_flag = 0U;
        vlSelfRef.__PVT__down_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf_row = vlSelfRef.__PVT__res_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__right_buf = 0U;
        vlSelfRef.__PVT__right_buf_row = 0U;
        vlSelfRef.__PVT__down_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__res_buf_vld) & (IData)(vlSelfRef.__PVT__down_buf_allowin))) {
        vlSelfRef.__PVT__down_buf = vlSelfRef.__PVT__res_buf;
    }
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__right_buf_allowin)) 
         & (IData)(vlSelfRef.__PVT__left_buf_to_right_valid))) {
        vlSelfRef.__PVT__right_buf = vlSelfRef.__PVT__left_buf;
        vlSelfRef.__PVT__right_buf_row = vlSelfRef.__PVT__left_buf_row;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        __Vdly__row_flag = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__row_flag)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__res_buf_row = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf_row = vlSelfRef.__PVT__up_buf_row;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__left_buf_row = 0U;
        vlSelfRef.__PVT__res_buf = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__up_buf_to_res_buf_valid) 
         & (IData)(vlSelfRef.__PVT__res_buf_allowin))) {
        vlSelfRef.__PVT__res_buf = ((vlSelfRef.hold_data 
                                     * vlSelfRef.__PVT__left_buf) 
                                    + vlSelfRef.__PVT__up_buf);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelfRef.__PVT__up_buf_row = 0U;
        vlSelfRef.__PVT__up_buf = 0U;
        vlSelfRef.__PVT__left_buf = 0U;
    }
    vlSelfRef.__PVT__row_flag = __Vdly__row_flag;
    if ((((0U != vlSelfRef.hold_data) & (IData)(vlSelfRef.__PVT__left_buf_allowin)) 
         & vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U])) {
        vlSelfRef.__PVT__left_buf_row = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U];
        vlSelfRef.__PVT__left_buf = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U];
    }
    if ((((0U != vlSelfRef.hold_data) & vlSymsp->TOP.pvld_bus[3U][3U]) 
         & (IData)(vlSelfRef.__PVT__up_buf_allowin))) {
        vlSelfRef.__PVT__up_buf_row = vlSymsp->TOP.prow_bus[3U][3U];
        vlSelfRef.__PVT__up_buf = vlSymsp->TOP.psum_bus[3U][3U];
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelfRef.__PVT__right_buf_allowin) {
            vlSelfRef.__PVT__right_buf_vld = vlSelfRef.__PVT__left_buf_to_right_valid;
        }
        if (vlSelfRef.__PVT__up_buf_allowin) {
            vlSelfRef.__PVT__up_buf_vld = vlSymsp->TOP.pvld_bus[3U][3U];
        }
        if (vlSelfRef.__PVT__left_buf_allowin) {
            vlSelfRef.__PVT__left_buf_vld = vlSymsp->TOP.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U];
        }
        if (vlSelfRef.__PVT__down_buf_allowin) {
            vlSelfRef.__PVT__down_buf_vld = vlSelfRef.__PVT__res_buf_vld;
        }
        if (vlSelfRef.__PVT__res_buf_allowin) {
            vlSelfRef.__PVT__res_buf_vld = vlSelfRef.__PVT__up_buf_to_res_buf_valid;
        }
        if (vlSymsp->TOP.preload_vld[3U][3U]) {
            vlSelfRef.hold_data = vlSymsp->TOP.preload_data[3U][3U];
        }
    } else {
        vlSelfRef.__PVT__right_buf_vld = 0U;
        vlSelfRef.__PVT__up_buf_vld = 0U;
        vlSelfRef.__PVT__left_buf_vld = 0U;
        vlSelfRef.__PVT__down_buf_vld = 0U;
        vlSelfRef.__PVT__res_buf_vld = 0U;
        vlSelfRef.hold_data = 0U;
    }
}
