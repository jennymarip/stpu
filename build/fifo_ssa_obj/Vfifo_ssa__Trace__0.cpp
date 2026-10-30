// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vfifo_ssa__Syms.h"


void Vfifo_ssa___024root__trace_chg_0_sub_0(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo_ssa___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_0\n"); );
    // Body
    Vfifo_ssa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_ssa___024root*>(voidSelf);
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vfifo_ssa___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo_ssa___024root__trace_chg_dtype____0(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____1(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____2(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____3(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____4(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____5(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____6(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____7(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____8(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____9(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____10(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____11(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____12(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____13(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____14(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____15(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____16(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____17(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____18(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____19(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____20(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____21(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____22(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____23(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____24(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____25(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____26(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____27(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5>& __VdtypeVar);
void Vfifo_ssa___024root__trace_chg_dtype____28(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5>& __VdtypeVar);

void Vfifo_ssa___024root__trace_chg_0_sub_0(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_0_sub_0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vfifo_ssa___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_psum);
    }
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity[1U] 
                        | vlSelfRef.__Vm_traceActivity[7U]) 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[14U])))) {
        bufp->chgBit(oldp+4,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U])));
        bufp->chgBit(oldp+5,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U])));
        bufp->chgBit(oldp+6,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U])));
        bufp->chgBit(oldp+7,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U])));
        bufp->chgBit(oldp+8,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U])));
        bufp->chgBit(oldp+9,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                               ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin)
                               : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U])));
        bufp->chgBit(oldp+10,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U])));
        bufp->chgBit(oldp+11,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U])));
        bufp->chgBit(oldp+12,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U])));
        bufp->chgBit(oldp+13,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U])));
        bufp->chgBit(oldp+14,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U])));
        bufp->chgBit(oldp+15,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U])));
        bufp->chgBit(oldp+16,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U])));
        bufp->chgBit(oldp+17,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U])));
        bufp->chgBit(oldp+18,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U])));
        bufp->chgBit(oldp+19,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U])));
        bufp->chgBit(oldp+20,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U])));
        bufp->chgBit(oldp+21,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U])));
        bufp->chgBit(oldp+22,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U])));
        bufp->chgBit(oldp+23,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U])));
        bufp->chgBit(oldp+24,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U])));
        bufp->chgBit(oldp+25,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U])));
        bufp->chgBit(oldp+26,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U])));
        bufp->chgBit(oldp+27,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U])));
        bufp->chgBit(oldp+28,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U])));
        bufp->chgBit(oldp+29,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U])));
        bufp->chgBit(oldp+30,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U])));
        bufp->chgBit(oldp+31,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U])));
        bufp->chgBit(oldp+32,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U])));
        bufp->chgBit(oldp+33,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U])));
        bufp->chgBit(oldp+34,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U])));
        bufp->chgBit(oldp+35,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin)
                                : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U])));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[7U]) 
                      | vlSelfRef.__Vm_traceActivity[14U])))) {
        bufp->chgBit(oldp+36,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_rd));
        bufp->chgBit(oldp+37,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_rd));
        bufp->chgBit(oldp+38,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_rd));
        bufp->chgBit(oldp+39,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_rd));
        Vfifo_ssa___024root__trace_chg_dtype____1(vlSelf, bufp, 40, vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_ready);
        bufp->chgBit(oldp+44,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][0U]));
        bufp->chgBit(oldp+45,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][1U]));
        bufp->chgBit(oldp+46,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][2U]));
        bufp->chgBit(oldp+47,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[0U][3U]));
        bufp->chgBit(oldp+48,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U]));
        bufp->chgBit(oldp+49,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U]));
        bufp->chgBit(oldp+50,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U]));
        bufp->chgBit(oldp+51,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U]));
        bufp->chgBit(oldp+52,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U]));
        bufp->chgBit(oldp+53,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U]));
        bufp->chgBit(oldp+54,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U]));
        bufp->chgBit(oldp+55,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U]));
        bufp->chgBit(oldp+56,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U]));
        bufp->chgBit(oldp+57,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U]));
        bufp->chgBit(oldp+58,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U]));
        bufp->chgBit(oldp+59,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U]));
        bufp->chgBit(oldp+60,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U]));
        bufp->chgBit(oldp+61,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U]));
        bufp->chgBit(oldp+62,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U]));
        bufp->chgBit(oldp+63,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U]));
        bufp->chgBit(oldp+64,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][0U]));
        bufp->chgBit(oldp+65,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U]));
        bufp->chgBit(oldp+66,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U]));
        bufp->chgBit(oldp+67,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U]));
        bufp->chgBit(oldp+68,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U]));
        bufp->chgBit(oldp+69,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][0U]));
        bufp->chgBit(oldp+70,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U]));
        bufp->chgBit(oldp+71,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U]));
        bufp->chgBit(oldp+72,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U]));
        bufp->chgBit(oldp+73,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U]));
        bufp->chgBit(oldp+74,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][0U]));
        bufp->chgBit(oldp+75,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U]));
        bufp->chgBit(oldp+76,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U]));
        bufp->chgBit(oldp+77,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U]));
        bufp->chgBit(oldp+78,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U]));
        bufp->chgBit(oldp+79,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][0U]));
        bufp->chgBit(oldp+80,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U]));
        bufp->chgBit(oldp+81,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U]));
        bufp->chgBit(oldp+82,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U]));
        bufp->chgBit(oldp+83,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U]));
        bufp->chgBit(oldp+84,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][0U]));
        bufp->chgBit(oldp+85,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][1U]));
        bufp->chgBit(oldp+86,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][1U]));
        bufp->chgBit(oldp+87,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][2U]));
        bufp->chgBit(oldp+88,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][2U]));
        bufp->chgBit(oldp+89,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][3U]));
        bufp->chgBit(oldp+90,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[1U][3U]));
        bufp->chgBit(oldp+91,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[0U][4U]));
        bufp->chgBit(oldp+92,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][0U]));
        bufp->chgBit(oldp+93,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][1U]));
        bufp->chgBit(oldp+94,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][1U]));
        bufp->chgBit(oldp+95,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][2U]));
        bufp->chgBit(oldp+96,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][2U]));
        bufp->chgBit(oldp+97,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][3U]));
        bufp->chgBit(oldp+98,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[2U][3U]));
        bufp->chgBit(oldp+99,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[1U][4U]));
        bufp->chgBit(oldp+100,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][0U]));
        bufp->chgBit(oldp+101,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][1U]));
        bufp->chgBit(oldp+102,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][1U]));
        bufp->chgBit(oldp+103,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][2U]));
        bufp->chgBit(oldp+104,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][2U]));
        bufp->chgBit(oldp+105,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][3U]));
        bufp->chgBit(oldp+106,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[3U][3U]));
        bufp->chgBit(oldp+107,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[2U][4U]));
        bufp->chgBit(oldp+108,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][0U]));
        bufp->chgBit(oldp+109,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][1U]));
        bufp->chgBit(oldp+110,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][1U]));
        bufp->chgBit(oldp+111,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][2U]));
        bufp->chgBit(oldp+112,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][2U]));
        bufp->chgBit(oldp+113,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][3U]));
        bufp->chgBit(oldp+114,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rdy_bus[4U][3U]));
        bufp->chgBit(oldp+115,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__rrdy_bus[3U][4U]));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[2U] 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[11U])))) {
        bufp->chgIData(oldp+116,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][4U]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][4U]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][4U]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][4U]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U]),32);
        bufp->chgIData(oldp+137,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][0U])),32);
        bufp->chgIData(oldp+138,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U]),32);
        bufp->chgIData(oldp+139,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][1U])),32);
        bufp->chgIData(oldp+140,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U]),32);
        bufp->chgIData(oldp+141,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][2U])),32);
        bufp->chgIData(oldp+142,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U]),32);
        bufp->chgIData(oldp+143,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[0U][3U])),32);
        bufp->chgIData(oldp+144,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U]),32);
        bufp->chgIData(oldp+145,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][0U])),32);
        bufp->chgIData(oldp+146,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U]),32);
        bufp->chgIData(oldp+147,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][1U])),32);
        bufp->chgIData(oldp+148,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U]),32);
        bufp->chgIData(oldp+149,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][2U])),32);
        bufp->chgIData(oldp+150,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U]),32);
        bufp->chgIData(oldp+151,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[1U][3U])),32);
        bufp->chgIData(oldp+152,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U]),32);
        bufp->chgIData(oldp+153,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][0U])),32);
        bufp->chgIData(oldp+154,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U]),32);
        bufp->chgIData(oldp+155,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][1U])),32);
        bufp->chgIData(oldp+156,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U]),32);
        bufp->chgIData(oldp+157,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][2U])),32);
        bufp->chgIData(oldp+158,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U]),32);
        bufp->chgIData(oldp+159,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[2U][3U])),32);
        bufp->chgIData(oldp+160,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U]),32);
        bufp->chgIData(oldp+161,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][0U])),32);
        bufp->chgIData(oldp+162,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U]),32);
        bufp->chgIData(oldp+163,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][1U])),32);
        bufp->chgIData(oldp+164,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U]),32);
        bufp->chgIData(oldp+165,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][2U])),32);
        bufp->chgIData(oldp+166,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U]),32);
        bufp->chgIData(oldp+167,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__data_bus[3U][3U])),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[3U] 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[12U])))) {
        bufp->chgBit(oldp+168,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U]));
        bufp->chgBit(oldp+169,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U]));
        bufp->chgBit(oldp+170,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U]));
        bufp->chgBit(oldp+171,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U]));
        bufp->chgBit(oldp+172,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][4U]));
        bufp->chgBit(oldp+173,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U]));
        bufp->chgBit(oldp+174,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U]));
        bufp->chgBit(oldp+175,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U]));
        bufp->chgBit(oldp+176,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U]));
        bufp->chgBit(oldp+177,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][4U]));
        bufp->chgBit(oldp+178,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U]));
        bufp->chgBit(oldp+179,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U]));
        bufp->chgBit(oldp+180,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U]));
        bufp->chgBit(oldp+181,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U]));
        bufp->chgBit(oldp+182,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][4U]));
        bufp->chgBit(oldp+183,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U]));
        bufp->chgBit(oldp+184,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U]));
        bufp->chgBit(oldp+185,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U]));
        bufp->chgBit(oldp+186,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U]));
        bufp->chgBit(oldp+187,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][4U]));
        bufp->chgBit(oldp+188,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U]));
        bufp->chgBit(oldp+189,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][0U])));
        bufp->chgBit(oldp+190,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U]));
        bufp->chgBit(oldp+191,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][1U])));
        bufp->chgBit(oldp+192,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U]));
        bufp->chgBit(oldp+193,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][2U])));
        bufp->chgBit(oldp+194,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U]));
        bufp->chgBit(oldp+195,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[0U][3U])));
        bufp->chgBit(oldp+196,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U]));
        bufp->chgBit(oldp+197,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][0U])));
        bufp->chgBit(oldp+198,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U]));
        bufp->chgBit(oldp+199,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][1U])));
        bufp->chgBit(oldp+200,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U]));
        bufp->chgBit(oldp+201,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][2U])));
        bufp->chgBit(oldp+202,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U]));
        bufp->chgBit(oldp+203,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[1U][3U])));
        bufp->chgBit(oldp+204,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U]));
        bufp->chgBit(oldp+205,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][0U])));
        bufp->chgBit(oldp+206,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U]));
        bufp->chgBit(oldp+207,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][1U])));
        bufp->chgBit(oldp+208,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U]));
        bufp->chgBit(oldp+209,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][2U])));
        bufp->chgBit(oldp+210,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U]));
        bufp->chgBit(oldp+211,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[2U][3U])));
        bufp->chgBit(oldp+212,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U]));
        bufp->chgBit(oldp+213,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][0U])));
        bufp->chgBit(oldp+214,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U]));
        bufp->chgBit(oldp+215,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][1U])));
        bufp->chgBit(oldp+216,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U]));
        bufp->chgBit(oldp+217,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][2U])));
        bufp->chgBit(oldp+218,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U]));
        bufp->chgBit(oldp+219,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                 ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld)
                                 : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lvld_bus[3U][3U])));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[4U] 
                       | vlSelfRef.__Vm_traceActivity[8U]) 
                      | vlSelfRef.__Vm_traceActivity[13U])))) {
        bufp->chgCData(oldp+220,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U]),3);
        bufp->chgCData(oldp+221,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U]),3);
        bufp->chgCData(oldp+222,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U]),3);
        bufp->chgCData(oldp+223,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U]),3);
        bufp->chgCData(oldp+224,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][4U]),3);
        bufp->chgCData(oldp+225,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U]),3);
        bufp->chgCData(oldp+226,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U]),3);
        bufp->chgCData(oldp+227,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U]),3);
        bufp->chgCData(oldp+228,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U]),3);
        bufp->chgCData(oldp+229,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][4U]),3);
        bufp->chgCData(oldp+230,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U]),3);
        bufp->chgCData(oldp+231,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U]),3);
        bufp->chgCData(oldp+232,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U]),3);
        bufp->chgCData(oldp+233,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U]),3);
        bufp->chgCData(oldp+234,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][4U]),3);
        bufp->chgCData(oldp+235,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U]),3);
        bufp->chgCData(oldp+236,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U]),3);
        bufp->chgCData(oldp+237,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U]),3);
        bufp->chgCData(oldp+238,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U]),3);
        bufp->chgCData(oldp+239,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][4U]),3);
        bufp->chgCData(oldp+240,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U]),3);
        bufp->chgCData(oldp+241,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][0U])),3);
        bufp->chgCData(oldp+242,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U]),3);
        bufp->chgCData(oldp+243,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][1U])),3);
        bufp->chgCData(oldp+244,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U]),3);
        bufp->chgCData(oldp+245,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][2U])),3);
        bufp->chgCData(oldp+246,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U]),3);
        bufp->chgCData(oldp+247,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[0U][3U])),3);
        bufp->chgCData(oldp+248,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U]),3);
        bufp->chgCData(oldp+249,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][0U])),3);
        bufp->chgCData(oldp+250,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U]),3);
        bufp->chgCData(oldp+251,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][1U])),3);
        bufp->chgCData(oldp+252,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U]),3);
        bufp->chgCData(oldp+253,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][2U])),3);
        bufp->chgCData(oldp+254,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U]),3);
        bufp->chgCData(oldp+255,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[1U][3U])),3);
        bufp->chgCData(oldp+256,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U]),3);
        bufp->chgCData(oldp+257,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][0U])),3);
        bufp->chgCData(oldp+258,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U]),3);
        bufp->chgCData(oldp+259,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][1U])),3);
        bufp->chgCData(oldp+260,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U]),3);
        bufp->chgCData(oldp+261,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][2U])),3);
        bufp->chgCData(oldp+262,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U]),3);
        bufp->chgCData(oldp+263,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[2U][3U])),3);
        bufp->chgCData(oldp+264,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U]),3);
        bufp->chgCData(oldp+265,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][0U])),3);
        bufp->chgCData(oldp+266,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U]),3);
        bufp->chgCData(oldp+267,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][1U])),3);
        bufp->chgCData(oldp+268,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U]),3);
        bufp->chgCData(oldp+269,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][2U])),3);
        bufp->chgCData(oldp+270,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U]),3);
        bufp->chgCData(oldp+271,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                   ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row)
                                   : vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__lrow_bus[3U][3U])),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgBit(oldp+272,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_allowin));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_allowin));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgBit(oldp+288,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+296,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+303,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_allowin));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_allowin));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_allowin));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[7U] 
                      | vlSelfRef.__Vm_traceActivity[14U])))) {
        bufp->chgBit(oldp+320,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+328,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+367,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__mac_fire));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_allowin));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_to_res_buf_valid));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_allowin));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_to_right_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        Vfifo_ssa___024root__trace_chg_dtype____2(vlSelf, bufp, 400, vlSelfRef.fifo_ssa__DOT__fifo_rd_data);
        Vfifo_ssa___024root__trace_chg_dtype____3(vlSelf, bufp, 404, vlSelfRef.fifo_ssa__DOT__fifo_rd_row);
        Vfifo_ssa___024root__trace_chg_dtype____4(vlSelf, bufp, 408, vlSelfRef.fifo_ssa__DOT__fifo_rd_vld);
        bufp->chgBit(oldp+412,((0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count))));
        bufp->chgIData(oldp+413,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr]),32);
        bufp->chgCData(oldp+414,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr]),3);
        bufp->chgBit(oldp+415,((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count))));
        bufp->chgBit(oldp+416,((0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count))));
        Vfifo_ssa___024root__trace_chg_dtype____5(vlSelf, bufp, 417, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_data);
        Vfifo_ssa___024root__trace_chg_dtype____6(vlSelf, bufp, 433, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__mem_row);
        bufp->chgCData(oldp+449,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+450,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+451,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__count),5);
        bufp->chgBit(oldp+452,((0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count))));
        bufp->chgIData(oldp+453,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr]),32);
        bufp->chgCData(oldp+454,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr]),3);
        bufp->chgBit(oldp+455,((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count))));
        bufp->chgBit(oldp+456,((0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count))));
        Vfifo_ssa___024root__trace_chg_dtype____5(vlSelf, bufp, 457, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_data);
        Vfifo_ssa___024root__trace_chg_dtype____6(vlSelf, bufp, 473, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__mem_row);
        bufp->chgCData(oldp+489,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+490,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+491,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__count),5);
        bufp->chgBit(oldp+492,((0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count))));
        bufp->chgIData(oldp+493,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr]),32);
        bufp->chgCData(oldp+494,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr]),3);
        bufp->chgBit(oldp+495,((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count))));
        bufp->chgBit(oldp+496,((0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count))));
        Vfifo_ssa___024root__trace_chg_dtype____5(vlSelf, bufp, 497, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_data);
        Vfifo_ssa___024root__trace_chg_dtype____6(vlSelf, bufp, 513, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__mem_row);
        bufp->chgCData(oldp+529,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+530,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+531,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__count),5);
        bufp->chgBit(oldp+532,((0x10U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count))));
        bufp->chgIData(oldp+533,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr]),32);
        bufp->chgCData(oldp+534,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row
                                 [vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr]),3);
        bufp->chgBit(oldp+535,((0U != (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count))));
        bufp->chgBit(oldp+536,((0U == (IData)(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count))));
        Vfifo_ssa___024root__trace_chg_dtype____5(vlSelf, bufp, 537, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_data);
        Vfifo_ssa___024root__trace_chg_dtype____6(vlSelf, bufp, 553, vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__mem_row);
        bufp->chgCData(oldp+569,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+570,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+571,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__count),5);
        Vfifo_ssa___024root__trace_chg_dtype____7(vlSelf, bufp, 572, vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__up_row);
        bufp->chgIData(oldp+576,(vlSelfRef.fifo_ssa__DOT__u_ssa__DOT__u_rowgen__DOT__j),32);
        bufp->chgIData(oldp+577,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+578,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+579,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+580,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+581,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+582,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+583,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+584,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+589,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+594,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+596,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+597,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+598,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+600,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+601,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+603,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+606,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+607,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+612,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+613,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+614,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+615,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+616,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+617,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+618,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+619,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+623,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+624,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+625,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+630,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+632,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+633,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+635,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+636,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+637,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+638,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+640,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+641,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+642,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+643,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+648,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+650,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+651,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+656,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+657,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+661,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+666,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+668,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+669,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+672,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+673,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+674,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+676,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+677,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+679,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+684,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+686,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+687,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+688,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+690,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+693,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+694,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+695,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+697,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+702,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+704,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+705,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+720,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+722,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+723,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+727,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+732,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+733,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+734,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+738,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+739,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+740,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+741,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+745,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+747,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+748,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+749,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+750,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+756,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+758,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+759,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+766,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+767,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+768,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+769,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+770,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+771,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+774,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+776,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+777,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+785,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+792,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+794,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+795,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+798,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+800,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+805,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+810,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+811,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+812,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+813,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+814,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+817,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+820,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+823,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+826,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+828,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+829,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+830,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+831,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+832,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+833,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+834,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+835,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+838,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+840,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+841,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+846,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__row_flag),3);
        bufp->chgIData(oldp+847,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data),32);
        bufp->chgBit(oldp+848,((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)));
        bufp->chgIData(oldp+849,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf),32);
        bufp->chgIData(oldp+850,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf),32);
        bufp->chgIData(oldp+851,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf),32);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf),32);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_row),3);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_row),3);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row),3);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_row),3);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_row),3);
        bufp->chgBit(oldp+859,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__up_buf_vld));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__left_buf_vld));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__right_buf_vld));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__res_buf_vld));
        bufp->chgCData(oldp+864,(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__row_flag),3);
    }
    bufp->chgBit(oldp+865,(vlSelfRef.clk));
    bufp->chgBit(oldp+866,(vlSelfRef.rst_n));
    Vfifo_ssa___024root__trace_chg_dtype____8(vlSelf, bufp, 867, vlSelfRef.up_vld);
    Vfifo_ssa___024root__trace_chg_dtype____9(vlSelf, bufp, 871, vlSelfRef.fifo_wr_data);
    Vfifo_ssa___024root__trace_chg_dtype____10(vlSelf, bufp, 875, vlSelfRef.fifo_wr_row);
    Vfifo_ssa___024root__trace_chg_dtype____11(vlSelf, bufp, 879, vlSelfRef.fifo_wr_en);
    Vfifo_ssa___024root__trace_chg_dtype____12(vlSelf, bufp, 883, vlSelfRef.fifo_full);
    Vfifo_ssa___024root__trace_chg_dtype____13(vlSelf, bufp, 887, vlSelfRef.fifo_empty);
    Vfifo_ssa___024root__trace_chg_dtype____14(vlSelf, bufp, 891, vlSelfRef.down_psum);
    Vfifo_ssa___024root__trace_chg_dtype____15(vlSelf, bufp, 895, vlSelfRef.down_vld);
    Vfifo_ssa___024root__trace_chg_dtype____16(vlSelf, bufp, 899, vlSelfRef.down_row);
    Vfifo_ssa___024root__trace_chg_dtype____17(vlSelf, bufp, 903, vlSelfRef.down_ready);
    Vfifo_ssa___024root__trace_chg_dtype____18(vlSelf, bufp, 907, vlSelfRef.right_data);
    Vfifo_ssa___024root__trace_chg_dtype____19(vlSelf, bufp, 911, vlSelfRef.right_vld);
    Vfifo_ssa___024root__trace_chg_dtype____20(vlSelf, bufp, 915, vlSelfRef.right_row);
    Vfifo_ssa___024root__trace_chg_dtype____21(vlSelf, bufp, 919, vlSelfRef.right_ready);
    Vfifo_ssa___024root__trace_chg_dtype____22(vlSelf, bufp, 923, vlSelfRef.preload_data);
    Vfifo_ssa___024root__trace_chg_dtype____23(vlSelf, bufp, 939, vlSelfRef.preload_vld);
    Vfifo_ssa___024root__trace_chg_dtype____24(vlSelf, bufp, 955, vlSelfRef.hold_data);
    Vfifo_ssa___024root__trace_chg_dtype____25(vlSelf, bufp, 971, vlSelfRef.left_ready);
    Vfifo_ssa___024root__trace_chg_dtype____26(vlSelf, bufp, 975, vlSelfRef.psum_bus);
    Vfifo_ssa___024root__trace_chg_dtype____27(vlSelf, bufp, 995, vlSelfRef.pvld_bus);
    Vfifo_ssa___024root__trace_chg_dtype____28(vlSelf, bufp, 1015, vlSelfRef.prow_bus);
    bufp->chgBit(oldp+1035,(vlSelfRef.fifo_wr_en[0U]));
    bufp->chgIData(oldp+1036,(vlSelfRef.fifo_wr_data[0U]),32);
    bufp->chgCData(oldp+1037,(vlSelfRef.fifo_wr_row[0U]),3);
    bufp->chgBit(oldp+1038,(vlSelfRef.left_ready[0U]));
    bufp->chgBit(oldp+1039,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__0__KET____DOT__u_fifo__DOT__do_wr));
    bufp->chgBit(oldp+1040,(vlSelfRef.fifo_wr_en[1U]));
    bufp->chgIData(oldp+1041,(vlSelfRef.fifo_wr_data[1U]),32);
    bufp->chgCData(oldp+1042,(vlSelfRef.fifo_wr_row[1U]),3);
    bufp->chgBit(oldp+1043,(vlSelfRef.left_ready[1U]));
    bufp->chgBit(oldp+1044,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__1__KET____DOT__u_fifo__DOT__do_wr));
    bufp->chgBit(oldp+1045,(vlSelfRef.fifo_wr_en[2U]));
    bufp->chgIData(oldp+1046,(vlSelfRef.fifo_wr_data[2U]),32);
    bufp->chgCData(oldp+1047,(vlSelfRef.fifo_wr_row[2U]),3);
    bufp->chgBit(oldp+1048,(vlSelfRef.left_ready[2U]));
    bufp->chgBit(oldp+1049,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__2__KET____DOT__u_fifo__DOT__do_wr));
    bufp->chgBit(oldp+1050,(vlSelfRef.fifo_wr_en[3U]));
    bufp->chgIData(oldp+1051,(vlSelfRef.fifo_wr_data[3U]),32);
    bufp->chgCData(oldp+1052,(vlSelfRef.fifo_wr_row[3U]),3);
    bufp->chgBit(oldp+1053,(vlSelfRef.left_ready[3U]));
    bufp->chgBit(oldp+1054,(vlSelfRef.fifo_ssa__DOT__gen_fifo__BRA__3__KET____DOT__u_fifo__DOT__do_wr));
    bufp->chgIData(oldp+1055,(vlSelfRef.psum_bus[0U][0U]),32);
    bufp->chgBit(oldp+1056,(vlSelfRef.pvld_bus[0U][0U]));
    bufp->chgCData(oldp+1057,(vlSelfRef.prow_bus[0U][0U]),3);
    bufp->chgIData(oldp+1058,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[0U][0U])),32);
    bufp->chgBit(oldp+1059,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[0U][0U])));
    bufp->chgCData(oldp+1060,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[0U][0U])),3);
    bufp->chgIData(oldp+1061,(vlSelfRef.preload_data[0U][0U]),32);
    bufp->chgBit(oldp+1062,(vlSelfRef.preload_vld[0U][0U]));
    bufp->chgIData(oldp+1063,(vlSelfRef.psum_bus[0U][1U]),32);
    bufp->chgBit(oldp+1064,(vlSelfRef.pvld_bus[0U][1U]));
    bufp->chgCData(oldp+1065,(vlSelfRef.prow_bus[0U][1U]),3);
    bufp->chgIData(oldp+1066,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[0U][1U])),32);
    bufp->chgBit(oldp+1067,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[0U][1U])));
    bufp->chgCData(oldp+1068,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[0U][1U])),3);
    bufp->chgIData(oldp+1069,(vlSelfRef.preload_data[0U][1U]),32);
    bufp->chgBit(oldp+1070,(vlSelfRef.preload_vld[0U][1U]));
    bufp->chgIData(oldp+1071,(vlSelfRef.psum_bus[0U][2U]),32);
    bufp->chgBit(oldp+1072,(vlSelfRef.pvld_bus[0U][2U]));
    bufp->chgCData(oldp+1073,(vlSelfRef.prow_bus[0U][2U]),3);
    bufp->chgIData(oldp+1074,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[0U][2U])),32);
    bufp->chgBit(oldp+1075,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[0U][2U])));
    bufp->chgCData(oldp+1076,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[0U][2U])),3);
    bufp->chgIData(oldp+1077,(vlSelfRef.preload_data[0U][2U]),32);
    bufp->chgBit(oldp+1078,(vlSelfRef.preload_vld[0U][2U]));
    bufp->chgIData(oldp+1079,(vlSelfRef.psum_bus[0U][3U]),32);
    bufp->chgBit(oldp+1080,(vlSelfRef.pvld_bus[0U][3U]));
    bufp->chgCData(oldp+1081,(vlSelfRef.prow_bus[0U][3U]),3);
    bufp->chgIData(oldp+1082,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[0U][3U])),32);
    bufp->chgBit(oldp+1083,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[0U][3U])));
    bufp->chgCData(oldp+1084,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[0U][3U])),3);
    bufp->chgIData(oldp+1085,(vlSelfRef.preload_data[0U][3U]),32);
    bufp->chgBit(oldp+1086,(vlSelfRef.preload_vld[0U][3U]));
    bufp->chgIData(oldp+1087,(vlSelfRef.psum_bus[1U][0U]),32);
    bufp->chgBit(oldp+1088,(vlSelfRef.pvld_bus[1U][0U]));
    bufp->chgCData(oldp+1089,(vlSelfRef.prow_bus[1U][0U]),3);
    bufp->chgIData(oldp+1090,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[1U][0U])),32);
    bufp->chgBit(oldp+1091,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[1U][0U])));
    bufp->chgCData(oldp+1092,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[1U][0U])),3);
    bufp->chgIData(oldp+1093,(vlSelfRef.preload_data[1U][0U]),32);
    bufp->chgBit(oldp+1094,(vlSelfRef.preload_vld[1U][0U]));
    bufp->chgIData(oldp+1095,(vlSelfRef.psum_bus[1U][1U]),32);
    bufp->chgBit(oldp+1096,(vlSelfRef.pvld_bus[1U][1U]));
    bufp->chgCData(oldp+1097,(vlSelfRef.prow_bus[1U][1U]),3);
    bufp->chgIData(oldp+1098,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[1U][1U])),32);
    bufp->chgBit(oldp+1099,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[1U][1U])));
    bufp->chgCData(oldp+1100,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[1U][1U])),3);
    bufp->chgIData(oldp+1101,(vlSelfRef.preload_data[1U][1U]),32);
    bufp->chgBit(oldp+1102,(vlSelfRef.preload_vld[1U][1U]));
    bufp->chgIData(oldp+1103,(vlSelfRef.psum_bus[1U][2U]),32);
    bufp->chgBit(oldp+1104,(vlSelfRef.pvld_bus[1U][2U]));
    bufp->chgCData(oldp+1105,(vlSelfRef.prow_bus[1U][2U]),3);
    bufp->chgIData(oldp+1106,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[1U][2U])),32);
    bufp->chgBit(oldp+1107,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[1U][2U])));
    bufp->chgCData(oldp+1108,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[1U][2U])),3);
    bufp->chgIData(oldp+1109,(vlSelfRef.preload_data[1U][2U]),32);
    bufp->chgBit(oldp+1110,(vlSelfRef.preload_vld[1U][2U]));
    bufp->chgIData(oldp+1111,(vlSelfRef.psum_bus[1U][3U]),32);
    bufp->chgBit(oldp+1112,(vlSelfRef.pvld_bus[1U][3U]));
    bufp->chgCData(oldp+1113,(vlSelfRef.prow_bus[1U][3U]),3);
    bufp->chgIData(oldp+1114,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[1U][3U])),32);
    bufp->chgBit(oldp+1115,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[1U][3U])));
    bufp->chgCData(oldp+1116,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[1U][3U])),3);
    bufp->chgIData(oldp+1117,(vlSelfRef.preload_data[1U][3U]),32);
    bufp->chgBit(oldp+1118,(vlSelfRef.preload_vld[1U][3U]));
    bufp->chgIData(oldp+1119,(vlSelfRef.psum_bus[2U][0U]),32);
    bufp->chgBit(oldp+1120,(vlSelfRef.pvld_bus[2U][0U]));
    bufp->chgCData(oldp+1121,(vlSelfRef.prow_bus[2U][0U]),3);
    bufp->chgIData(oldp+1122,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[2U][0U])),32);
    bufp->chgBit(oldp+1123,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[2U][0U])));
    bufp->chgCData(oldp+1124,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[2U][0U])),3);
    bufp->chgIData(oldp+1125,(vlSelfRef.preload_data[2U][0U]),32);
    bufp->chgBit(oldp+1126,(vlSelfRef.preload_vld[2U][0U]));
    bufp->chgIData(oldp+1127,(vlSelfRef.psum_bus[2U][1U]),32);
    bufp->chgBit(oldp+1128,(vlSelfRef.pvld_bus[2U][1U]));
    bufp->chgCData(oldp+1129,(vlSelfRef.prow_bus[2U][1U]),3);
    bufp->chgIData(oldp+1130,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[2U][1U])),32);
    bufp->chgBit(oldp+1131,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[2U][1U])));
    bufp->chgCData(oldp+1132,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[2U][1U])),3);
    bufp->chgIData(oldp+1133,(vlSelfRef.preload_data[2U][1U]),32);
    bufp->chgBit(oldp+1134,(vlSelfRef.preload_vld[2U][1U]));
    bufp->chgIData(oldp+1135,(vlSelfRef.psum_bus[2U][2U]),32);
    bufp->chgBit(oldp+1136,(vlSelfRef.pvld_bus[2U][2U]));
    bufp->chgCData(oldp+1137,(vlSelfRef.prow_bus[2U][2U]),3);
    bufp->chgIData(oldp+1138,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[2U][2U])),32);
    bufp->chgBit(oldp+1139,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[2U][2U])));
    bufp->chgCData(oldp+1140,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[2U][2U])),3);
    bufp->chgIData(oldp+1141,(vlSelfRef.preload_data[2U][2U]),32);
    bufp->chgBit(oldp+1142,(vlSelfRef.preload_vld[2U][2U]));
    bufp->chgIData(oldp+1143,(vlSelfRef.psum_bus[2U][3U]),32);
    bufp->chgBit(oldp+1144,(vlSelfRef.pvld_bus[2U][3U]));
    bufp->chgCData(oldp+1145,(vlSelfRef.prow_bus[2U][3U]),3);
    bufp->chgIData(oldp+1146,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[2U][3U])),32);
    bufp->chgBit(oldp+1147,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[2U][3U])));
    bufp->chgCData(oldp+1148,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[2U][3U])),3);
    bufp->chgIData(oldp+1149,(vlSelfRef.preload_data[2U][3U]),32);
    bufp->chgBit(oldp+1150,(vlSelfRef.preload_vld[2U][3U]));
    bufp->chgIData(oldp+1151,(vlSelfRef.psum_bus[3U][0U]),32);
    bufp->chgBit(oldp+1152,(vlSelfRef.pvld_bus[3U][0U]));
    bufp->chgCData(oldp+1153,(vlSelfRef.prow_bus[3U][0U]),3);
    bufp->chgIData(oldp+1154,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[3U][0U])),32);
    bufp->chgBit(oldp+1155,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[3U][0U])));
    bufp->chgCData(oldp+1156,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[3U][0U])),3);
    bufp->chgIData(oldp+1157,(vlSelfRef.preload_data[3U][0U]),32);
    bufp->chgBit(oldp+1158,(vlSelfRef.preload_vld[3U][0U]));
    bufp->chgIData(oldp+1159,(vlSelfRef.psum_bus[3U][1U]),32);
    bufp->chgBit(oldp+1160,(vlSelfRef.pvld_bus[3U][1U]));
    bufp->chgCData(oldp+1161,(vlSelfRef.prow_bus[3U][1U]),3);
    bufp->chgIData(oldp+1162,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[3U][1U])),32);
    bufp->chgBit(oldp+1163,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[3U][1U])));
    bufp->chgCData(oldp+1164,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[3U][1U])),3);
    bufp->chgIData(oldp+1165,(vlSelfRef.preload_data[3U][1U]),32);
    bufp->chgBit(oldp+1166,(vlSelfRef.preload_vld[3U][1U]));
    bufp->chgIData(oldp+1167,(vlSelfRef.psum_bus[3U][2U]),32);
    bufp->chgBit(oldp+1168,(vlSelfRef.pvld_bus[3U][2U]));
    bufp->chgCData(oldp+1169,(vlSelfRef.prow_bus[3U][2U]),3);
    bufp->chgIData(oldp+1170,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[3U][2U])),32);
    bufp->chgBit(oldp+1171,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[3U][2U])));
    bufp->chgCData(oldp+1172,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[3U][2U])),3);
    bufp->chgIData(oldp+1173,(vlSelfRef.preload_data[3U][2U]),32);
    bufp->chgBit(oldp+1174,(vlSelfRef.preload_vld[3U][2U]));
    bufp->chgIData(oldp+1175,(vlSelfRef.psum_bus[3U][3U]),32);
    bufp->chgBit(oldp+1176,(vlSelfRef.pvld_bus[3U][3U]));
    bufp->chgCData(oldp+1177,(vlSelfRef.prow_bus[3U][3U]),3);
    bufp->chgIData(oldp+1178,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf
                                : vlSelfRef.psum_bus[3U][3U])),32);
    bufp->chgBit(oldp+1179,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                              ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_vld)
                              : vlSelfRef.pvld_bus[3U][3U])));
    bufp->chgCData(oldp+1180,(((0U != vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.hold_data)
                                ? (IData)(vlSymsp->TOP__fifo_ssa__DOT__u_ssa__DOT__genblk5__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__u_pe.__PVT__down_buf_row)
                                : vlSelfRef.prow_bus[3U][3U])),3);
    bufp->chgIData(oldp+1181,(vlSelfRef.preload_data[3U][3U]),32);
    bufp->chgBit(oldp+1182,(vlSelfRef.preload_vld[3U][3U]));
}

void Vfifo_ssa___024root__trace_chg_dtype____0(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____0\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____1(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____1\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____2(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____2\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____3(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____3\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____4(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____4\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____5(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____5\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____6(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____6\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),3);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),3);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),3);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),3);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),3);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),3);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),3);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),3);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),3);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),3);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),3);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____7(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____7\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____8(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____8\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____9(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____9\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____10(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____10\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____11(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____11\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____12(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____12\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____13(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____13\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____14(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____14\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____15(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____15\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____16(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____16\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____17(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____17\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____18(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____18\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____19(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____19\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____20(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____20\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),3);
}

void Vfifo_ssa___024root__trace_chg_dtype____21(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____21\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____22(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____22\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____23(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____23\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0U][2U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[0U][3U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[1U][2U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[1U][3U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[2U][2U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[2U][3U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[3U][2U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[3U][3U]));
}

void Vfifo_ssa___024root__trace_chg_dtype____24(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____24\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____25(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____25\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vfifo_ssa___024root__trace_chg_dtype____26(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____26\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[4U][0U]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[4U][1U]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[4U][2U]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[4U][3U]),32);
}

void Vfifo_ssa___024root__trace_chg_dtype____27(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____27\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0U][0U]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0U][1U]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0U][2U]));
    bufp->chgBit(oldp+3,(__VdtypeVar[0U][3U]));
    bufp->chgBit(oldp+4,(__VdtypeVar[1U][0U]));
    bufp->chgBit(oldp+5,(__VdtypeVar[1U][1U]));
    bufp->chgBit(oldp+6,(__VdtypeVar[1U][2U]));
    bufp->chgBit(oldp+7,(__VdtypeVar[1U][3U]));
    bufp->chgBit(oldp+8,(__VdtypeVar[2U][0U]));
    bufp->chgBit(oldp+9,(__VdtypeVar[2U][1U]));
    bufp->chgBit(oldp+10,(__VdtypeVar[2U][2U]));
    bufp->chgBit(oldp+11,(__VdtypeVar[2U][3U]));
    bufp->chgBit(oldp+12,(__VdtypeVar[3U][0U]));
    bufp->chgBit(oldp+13,(__VdtypeVar[3U][1U]));
    bufp->chgBit(oldp+14,(__VdtypeVar[3U][2U]));
    bufp->chgBit(oldp+15,(__VdtypeVar[3U][3U]));
    bufp->chgBit(oldp+16,(__VdtypeVar[4U][0U]));
    bufp->chgBit(oldp+17,(__VdtypeVar[4U][1U]));
    bufp->chgBit(oldp+18,(__VdtypeVar[4U][2U]));
    bufp->chgBit(oldp+19,(__VdtypeVar[4U][3U]));
}

void Vfifo_ssa___024root__trace_chg_dtype____28(Vfifo_ssa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*2:0*/, 4>, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_chg_dtype____28\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][1U]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][2U]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[0U][3U]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[1U][0U]),3);
    bufp->chgCData(oldp+5,(__VdtypeVar[1U][1U]),3);
    bufp->chgCData(oldp+6,(__VdtypeVar[1U][2U]),3);
    bufp->chgCData(oldp+7,(__VdtypeVar[1U][3U]),3);
    bufp->chgCData(oldp+8,(__VdtypeVar[2U][0U]),3);
    bufp->chgCData(oldp+9,(__VdtypeVar[2U][1U]),3);
    bufp->chgCData(oldp+10,(__VdtypeVar[2U][2U]),3);
    bufp->chgCData(oldp+11,(__VdtypeVar[2U][3U]),3);
    bufp->chgCData(oldp+12,(__VdtypeVar[3U][0U]),3);
    bufp->chgCData(oldp+13,(__VdtypeVar[3U][1U]),3);
    bufp->chgCData(oldp+14,(__VdtypeVar[3U][2U]),3);
    bufp->chgCData(oldp+15,(__VdtypeVar[3U][3U]),3);
    bufp->chgCData(oldp+16,(__VdtypeVar[4U][0U]),3);
    bufp->chgCData(oldp+17,(__VdtypeVar[4U][1U]),3);
    bufp->chgCData(oldp+18,(__VdtypeVar[4U][2U]),3);
    bufp->chgCData(oldp+19,(__VdtypeVar[4U][3U]),3);
}

void Vfifo_ssa___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_ssa___024root__trace_cleanup\n"); );
    // Body
    Vfifo_ssa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_ssa___024root*>(voidSelf);
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[14U] = 0U;
}
