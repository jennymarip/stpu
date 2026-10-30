// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_ssa.h for the primary calling header

#include "Vfifo_ssa__pch.h"

VL_ATTR_COLD void Vfifo_ssa_pe__R3___ctor_var_reset(Vfifo_ssa_pe__R3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_ssa_pe__R3___ctor_var_reset\n"); );
    Vfifo_ssa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->up_psum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8962357061321592993ull);
    vlSelf->up_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7743564823181995240ull);
    vlSelf->up_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15804063310634920179ull);
    vlSelf->up_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665201967701316538ull);
    vlSelf->left_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11790430490267205170ull);
    vlSelf->left_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8472096719821467426ull);
    vlSelf->left_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7916491313005789307ull);
    vlSelf->left_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16672691943336703525ull);
    vlSelf->down_psum = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8201375550869037268ull);
    vlSelf->down_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8642049772943105549ull);
    vlSelf->down_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9544066157014876323ull);
    vlSelf->down_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6839793671511351070ull);
    vlSelf->right_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9607041164081935019ull);
    vlSelf->right_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1854059639311904013ull);
    vlSelf->right_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 185955208741822259ull);
    vlSelf->right_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1133703019521615645ull);
    vlSelf->preload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4118038610242092838ull);
    vlSelf->preload_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4878882608371328099ull);
    vlSelf->hold_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14873643597579704809ull);
    vlSelf->__PVT__mac_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1295516404785692828ull);
    vlSelf->__PVT__up_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7107622602137024544ull);
    vlSelf->__PVT__left_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9935277111031627452ull);
    vlSelf->__PVT__down_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7522021749690442580ull);
    vlSelf->__PVT__right_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11081885662298335961ull);
    vlSelf->__PVT__res_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13402816909311643904ull);
    vlSelf->__PVT__up_buf_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12865598293071919920ull);
    vlSelf->__PVT__left_buf_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13385225400534186135ull);
    vlSelf->__PVT__down_buf_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5282440685707472160ull);
    vlSelf->__PVT__right_buf_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9737675634804433650ull);
    vlSelf->__PVT__res_buf_row = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3513020490984345052ull);
    vlSelf->__PVT__up_buf_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8520539270958066298ull);
    vlSelf->__PVT__left_buf_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16230678847494801949ull);
    vlSelf->__PVT__down_buf_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314359474781980729ull);
    vlSelf->__PVT__right_buf_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9287712087264589564ull);
    vlSelf->__PVT__res_buf_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8957332153159880670ull);
    vlSelf->__PVT__row_flag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 893644703038901093ull);
    vlSelf->__PVT__up_buf_allowin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16984902182772399785ull);
    vlSelf->__PVT__up_buf_to_res_buf_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12501558833959570981ull);
    vlSelf->__PVT__res_buf_allowin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711768079380696828ull);
    vlSelf->__PVT__down_buf_allowin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15746034130423216266ull);
    vlSelf->__PVT__left_buf_allowin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12554135806852653398ull);
    vlSelf->__PVT__left_buf_to_right_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15103663535109931967ull);
    vlSelf->__PVT__right_buf_allowin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9147020333254698559ull);
}
