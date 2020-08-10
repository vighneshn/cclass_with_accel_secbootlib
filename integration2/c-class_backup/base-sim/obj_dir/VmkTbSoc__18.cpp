// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__26(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__26\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp3939[3];
    WData/*95:0*/ __Vtemp3951[3];
    WData/*95:0*/ __Vtemp3952[3];
    WData/*95:0*/ __Vtemp3953[3];
    WData/*95:0*/ __Vtemp3955[3];
    WData/*95:0*/ __Vtemp3966[3];
    WData/*95:0*/ __Vtemp3982[3];
    WData/*95:0*/ __Vtemp3994[3];
    WData/*95:0*/ __Vtemp4010[3];
    WData/*95:0*/ __Vtemp4016[3];
    WData/*95:0*/ __Vtemp4067[3];
    WData/*95:0*/ __Vtemp4073[3];
    WData/*95:0*/ __Vtemp4092[3];
    WData/*95:0*/ __Vtemp4096[3];
    WData/*95:0*/ __Vtemp4102[3];
    WData/*95:0*/ __Vtemp4105[3];
    WData/*95:0*/ __Vtemp4107[3];
    WData/*95:0*/ __Vtemp4109[3];
    WData/*255:0*/ __Vtemp4116[8];
    WData/*255:0*/ __Vtemp4117[8];
    WData/*255:0*/ __Vtemp4119[8];
    WData/*255:0*/ __Vtemp4120[8];
    WData/*95:0*/ __Vtemp4121[3];
    WData/*95:0*/ __Vtemp4122[3];
    WData/*95:0*/ __Vtemp4139[3];
    WData/*95:0*/ __Vtemp4143[3];
    WData/*95:0*/ __Vtemp4144[3];
    WData/*95:0*/ __Vtemp4145[3];
    // Body
    vlTOPp->__Vtableidx10 = (7U & ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U])
                                    ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U])
                                        ? 5U : ((2U 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U])
                                                 ? 5U
                                                 : 3U))
                                    : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U])
                                        ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U])
                                            ? 2U : 4U)
                                        : ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[1U] 
                                            << 0x1fU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__tx_type_w_data_wget[0U] 
                                              >> 1U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__CASE_IF_tx_type_w_data_whas___05F27_THEN_IF_tx_typ_ETC___05Fq10 
        = vlTOPp->__Vtable10_mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__CASE_IF_tx_type_w_data_whas___05F27_THEN_IF_tx_typ_ETC___05Fq10
        [vlTOPp->__Vtableidx10];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_floating_rf_upd_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv_EN_debug_access_gprs) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
               >> 0xfU)) & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_integer_rf_upd_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv_EN_debug_access_gprs) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
               >> 0xfU)) & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U]));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv_EN_ma_debug_access_csrs) {
        __Vtemp3939[0U] = ((0xfffffff0U & ((IData)(
                                                   ((0x8000U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                           >> 1U)))
                                                     : 0ULL)) 
                                           << 4U)) 
                           | (((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                ? 1U : 2U) << 2U));
        __Vtemp3939[1U] = ((0xfU & ((IData)(((0x8000U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                              ? (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                       >> 1U)))
                                              : 0ULL)) 
                                    >> 0x1cU)) | (0xfffffff0U 
                                                  & ((IData)(
                                                             (((0x8000U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                                      >> 1U)))
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     << 4U)));
        __Vtemp3939[2U] = ((0xfff0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
                                       << 3U)) | (0xfU 
                                                  & ((IData)(
                                                             (((0x8000U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                                      >> 1U)))
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)));
    } else {
        __Vtemp3939[0U] = ((0xfffffff0U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                          >> 0x17U)))) 
                                           << 4U)) 
                           | ((0xcU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                        << 0x1cU) | 
                                       (0xffffffcU 
                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                           >> 4U)))) 
                              | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                        << 0xbU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                        >> 0x15U)))));
        __Vtemp3939[1U] = ((0xfU & ((IData)((((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                              << 0x29U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                   >> 0x17U)))) 
                                    >> 0x1cU)) | (0xfffffff0U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 4U)));
        __Vtemp3939[2U] = ((0xfff0U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                        << 0x1bU) | 
                                       (0x7fffff0U 
                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                           >> 5U)))) 
                           | (0xfU & ((IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                 << 0x29U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                      >> 0x17U))) 
                                               >> 0x20U)) 
                                      >> 0x1cU)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U] 
        = __Vtemp3939[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U] 
        = __Vtemp3939[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
        = __Vtemp3939[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_EN_mav_upd_on_debugger 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_EN_take_trap) 
           & (((0x31U <= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause)) 
               & (0x35U >= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause))) 
              | (0x36U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_EN_take_trap) 
            & ((0x31U > (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause)) 
               | (0x35U < (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause)))) 
           & (0x36U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5_flush_fst 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_flush_whas) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U] 
              >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
            & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                          >> 6U))))) 
           & (((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                            >> 0x11U)))) 
               | (1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                  << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                              >> 0x11U))))) 
              | (3U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                 << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                             >> 0x11U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
             & (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                           >> 6U))))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv_EN_ma_debug_access_csrs));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decode_word32___05F_d279 
        = (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[3U] 
             >> 5U) & (3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 6U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1aU)))))
            ? ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                              << 6U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                        >> 0x1aU)))) 
               & ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                 << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 7U)))) 
                  | (((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 7U)))) 
                      & (7U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x1cU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 4U))))) & 
                     (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U]))))
            : ((((6U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                   << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                             >> 0x1cU)))) 
                 | (0xeU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU))))) 
                | ((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1fU)))) 
                   & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                         >> 0x13U)))) | ((5U == (0xfU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 3U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1dU)))) 
                                         & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__IF_wr_csrs_wget___05F6_BITS_198_TO_197_7_EQ_3_8_OR_ETC___05F_d75 
        = (((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[6U] 
                          >> 5U))) | (3U == (3U & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[6U] 
                                                   >> 5U))))
            ? (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[6U] 
                     >> 5U)) : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[0U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[1U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[2U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[3U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[3U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[4U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[4U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[5U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[5U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[6U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[6U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[7U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__data0_reg[7U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_blockdone_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_pwDequeue_whas 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_put_bram) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_prev_key4_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                   | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                     | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_prev_key6_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0775_BITS_127_TO___05FETC___05F_d70863) 
                     | (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0775_BITS_191_TO___05FETC___05F_d70896))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_key_done_0_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0775_BITS_127_TO___05FETC___05F_d70863) 
                   | (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0775_BITS_191_TO___05FETC___05F_d70896)) 
                 | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state_EN 
        = (((((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter))) 
               | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
                  & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                        | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                       | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                      | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                     | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))))) 
              | ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter)))) 
             | ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d47209))))) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start) 
               & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))))) 
           | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                    | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                   | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                      | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                     | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes) 
               & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes)) 
                 & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                       | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                      | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                     | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                    | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                 | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
              | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)))
            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_1)
            : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sub) 
                & (((((((((((((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter)) 
                                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                               | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                              | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                             | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                            | (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                           | (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                          | (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                         | (8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                        | (9U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                       | (0xaU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                      | (0xbU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                     | (0xcU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                    | (0xdU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                   | (0xeU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))))
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_2)
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_3)
                    : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start) 
                        & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt___05F8331_AND_NO_ETC___05F_d68632) 
                           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_decrypt___05F8331_83_ETC___05F_d68639)))
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_)
                            ? (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1129311)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1139547))
                            : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1139547)
                                : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1129311)
                                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                        ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1124181)
                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1144806)))))
                        : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
                            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes_0772_AND_NOT_aesb_ETC___05F_d71005) 
                               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_decrypt_aes_0772_0999_AND_ETC___05F_d71011)))
                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes)
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1182619)
                                : ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1172334)
                                    : ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                                        ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1177493)
                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1182619))))
                            : 0U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr_op_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_ctr_op_write_1___05FSEL_1)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr_op))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_pwEnqueue_whas) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[0U] 
            = (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_inp);
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[1U] 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_inp 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[2U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[3U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1167353[3U] = 0U;
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_state_var_write_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr_D_IN = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr_D_IN = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr_D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr_D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr)));
    }
    __Vtemp3951[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                        ? ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                    >> 5U)))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                                    << 0x1bU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                                      >> 5U))) 
                                                               >> 0x20U)) 
                                                      << 6U)))
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                            ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                     >> 5U))))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((0xffffffff00000000ULL 
                                                           | (QData)((IData)(
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                              >> 5U)))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : 0U));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_divider) {
        __Vtemp3952[0U] = (0x20U | ((0xffffffc0U & 
                                     ((IData)((0xffffffff00000000ULL 
                                               | (QData)((IData)(
                                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                  >> 5U))))) 
                                      << 6U)) | (0x1fU 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget))));
        __Vtemp3952[2U] = (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                 >> 5U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU));
    } else {
        __Vtemp3952[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                            ? (0x20U | ((0xffffffc0U 
                                         & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                         << 0x1bU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                        | (0x1fU & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                                ? (0x20U | ((0xffffffc0U 
                                             & ((IData)(
                                                        (0xffffffff00000000ULL 
                                                         | (QData)((IData)(
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                            >> 5U))))) 
                                                << 6U)) 
                                            | (0x1fU 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out))))
                                : 0U));
        __Vtemp3952[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                            ? (0x3fU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                        >> 5U))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) : 
                           ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                             ? (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                      >> 5U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))
                             : 0U));
    }
    __Vtemp3953[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                        ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                 >> 5U))))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((0xffffffff00000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                                >> 5U)))) 
                                                               >> 0x20U)) 
                                                      << 6U)))
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_divider)
                            ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                     >> 5U))))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((0xffffffff00000000ULL 
                                                           | (QData)((IData)(
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                              >> 5U)))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : __Vtemp3951[1U]));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfm_add_sub) {
        __Vtemp3955[0U] = (0x20U | ((0xffffffc0U & 
                                     ((IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                     >> 5U)))) 
                                      << 6U)) | (0x1fU 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])));
        __Vtemp3955[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                    >> 5U)))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                                    << 0x1bU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                                      >> 5U))) 
                                                               >> 0x20U)) 
                                                      << 6U)));
        __Vtemp3955[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                    >> 5U))) 
                                             >> 0x20U)) 
                                    >> 0x1aU));
    } else {
        __Vtemp3955[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? (0x20U | ((0xffffffc0U 
                                         & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                         << 0x1bU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                        | (0x1fU & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                                ? (0x20U | ((0xffffffc0U 
                                             & ((IData)(
                                                        (0xffffffff00000000ULL 
                                                         | (QData)((IData)(
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                            >> 5U))))) 
                                                << 6U)) 
                                            | (0x1fU 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget))))
                                : __Vtemp3952[0U]));
        __Vtemp3955[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? ((0x3fU & ((IData)((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                        >> 5U)))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : __Vtemp3953[1U]);
        __Vtemp3955[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? (0x3fU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                        >> 5U))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) : 
                           ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                             ? (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                      >> 5U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))
                             : __Vtemp3952[2U]));
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_start_stage) 
          & ((((0x14U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                    << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                 >> 8U)))) 
               | (5U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                   << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                >> 8U))))) 
              | (0x1aU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                     << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                  >> 8U))))) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F319_BITS_12_TO_8_320_EQ_0b100___05FETC___05F_d3345))) 
         & (4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                            << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                         >> 0xdU)))))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[2U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[0U] 
            = __Vtemp3955[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[1U] 
            = __Vtemp3955[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[2U] 
            = __Vtemp3955[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d195 
        = ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
            : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip)) 
                                                      << 0xbU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d67) 
                                                                         << 9U) 
                                                                        | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                            << 7U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_stip_9___05F_d70) 
                                                                               << 5U) 
                                                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 3U) 
                                                                                | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_ssip_2___05F_d73) 
                                                                                << 1U))))))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3209)
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc 
                                                     << 1U)
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504))))))
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3156
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie)) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 9U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                               << 7U) 
                                                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 3U) 
                                                                                | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie) 
                                                                                << 1U)))))))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mideleg))
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_u1)) 
                                                      << 0xfU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_m2) 
                                                                         << 0xcU) 
                                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_l10))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus))))))))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504)
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                     : (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d114))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3453)
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc 
                                                     << 1U)
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504))))))
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3400
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                         << 5U) 
                                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie) 
                                                                           << 1U)))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3260))))))))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504))));
    __Vtemp3966[1U] = ((1U & ((IData)((0x8000000000000000ULL 
                                       | (QData)((IData)(
                                                         (((0U 
                                                            != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d67) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                    << 6U) 
                                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_stip_9___05F_d70) 
                                                                       << 4U) 
                                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                          << 2U) 
                                                                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_ssip_2___05F_d73))))))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       ((0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((0U 
                                                                              != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d67) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_stip_9___05F_d70) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_ssip_2___05F_d73)))))))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    if ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3982[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (0xfffffffeU 
                                             & ((IData)(
                                                        (0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((0U 
                                                                              != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d67) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_stip_9___05F_d70) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_ssip_2___05F_d73))))))))))) 
                                                << 1U))));
        __Vtemp3982[1U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : __Vtemp3966[1U]));
        __Vtemp3982[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (1U & ((IData)(
                                                           ((0x8000000000000000ULL 
                                                             | (QData)((IData)(
                                                                               (((0U 
                                                                                != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d67) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_stip_9___05F_d70) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_ssip_2___05F_d73)))))))))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU))));
    } else {
        __Vtemp3982[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3209))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (0xfffffffeU & ((IData)(
                                                          (0x8000000000000000ULL 
                                                           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc)) 
                                                  << 1U))
                                : 0U));
        __Vtemp3982[1U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval 
                                           >> 0x20U))
                                : (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3209 
                                           >> 0x20U)))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((1U & ((IData)((0x8000000000000000ULL 
                                                   | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc)) 
                                          >> 0x1fU)) 
                                   | (0xfffffffeU & 
                                      ((IData)(((0x8000000000000000ULL 
                                                 | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc) 
                                                >> 0x20U)) 
                                       << 1U))) : 0U));
        __Vtemp3982[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 1U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (1U & ((IData)(
                                                      ((0x8000000000000000ULL 
                                                        | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc) 
                                                       >> 0x20U)) 
                                              >> 0x1fU))
                                     : 0U));
    }
    __Vtemp3994[1U] = ((1U & ((IData)((0x8000000000000000ULL 
                                       | (QData)((IData)(
                                                         (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                           << 0xbU) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                    << 6U) 
                                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                       << 4U) 
                                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                          << 2U) 
                                                                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       ((0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                             << 0xbU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    if ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp4010[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3156)
                                     : (0xfffffffeU 
                                        & ((IData)(
                                                   (0x8000000000000000ULL 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                              << 8U) 
                                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))))))) 
                                           << 1U))));
        __Vtemp4010[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 1U : (1U & ((IData)(
                                                           ((0x8000000000000000ULL 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))))))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU))));
    } else {
        __Vtemp4010[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mideleg)
                                : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_u1) 
                                    << 0xfU) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_m2) 
                                                 << 0xcU) 
                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_l10))))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus)));
        __Vtemp4010[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 1U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : 1U));
    }
    __Vtemp4016[1U] = ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                          ? 0U : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3156 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp3994[1U]))
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus 
                                                                >> 0x20U))))))));
    __Vtemp4067[1U] = ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : 0U) : ((0x20U & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                           ? ((0x10U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval 
                                                          >> 0x20U))
                                               : (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3453 
                                                          >> 0x20U)))
                                           : ((0x10U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? ((1U 
                                                   & ((IData)(
                                                              (0x8000000000000000ULL 
                                                               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc)) 
                                                      >> 0x1fU)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(
                                                                ((0x8000000000000000ULL 
                                                                  | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc) 
                                                                 >> 0x20U)) 
                                                        << 1U)))
                                               : 0U)));
    if ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp4073[0U] = 0U;
        __Vtemp4073[2U] = 0U;
    } else {
        __Vtemp4073[0U] = ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__wr_csr_misa_wget___05F2_BIT_18_3_AND_rg_soft_seip___05FETC___05F_d114)))
                                              : ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval)
                                                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3453))
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  (0xfffffffeU 
                                                   & ((IData)(
                                                              (0x8000000000000000ULL 
                                                               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc)) 
                                                      << 1U))
                                                   : 0U)))));
        __Vtemp4073[2U] = ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 1U))
                                              : ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 1U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  (1U 
                                                   & ((IData)(
                                                              ((0x8000000000000000ULL 
                                                                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc) 
                                                               >> 0x20U)) 
                                                      >> 0x1fU))
                                                   : 0U)))));
    }
    __Vtemp4092[1U] = ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3400 
                                                >> 0x20U))
                                     : ((1U & ((IData)(
                                                       (0x8000000000000000ULL 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 8U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                               << 4U) 
                                                                              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))) 
                                               >> 0x1fU)) 
                                        | (0xfffffffeU 
                                           & ((IData)(
                                                      ((0x8000000000000000ULL 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 8U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                               << 4U) 
                                                                              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))) 
                                                       >> 0x20U)) 
                                              << 1U)))))
                        : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3260 
                                                     >> 0x20U)))));
    if ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp4096[0U] = 0U;
        __Vtemp4096[2U] = 0U;
    } else {
        __Vtemp4096[0U] = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3400)
                                                  : 
                                                 (0xfffffffeU 
                                                  & ((IData)(
                                                             (0x8000000000000000ULL 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))) 
                                                     << 1U))))
                                     : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3260)))));
        __Vtemp4096[2U] = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 1U
                                                  : 
                                                 (1U 
                                                  & ((IData)(
                                                             ((0x8000000000000000ULL 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))) 
                                                              >> 0x20U)) 
                                                     >> 0x1fU))))
                                     : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 1U))));
    }
    if ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp4102[0U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504))))))));
        __Vtemp4102[1U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3504 
                                                                >> 0x20U)))))))));
    } else {
        __Vtemp4102[0U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? __Vtemp4073[0U] : ((0x200U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp4096[0U]));
        __Vtemp4102[1U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x80U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp4067[1U])))
                            : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x80U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp4092[1U]))));
    }
    __Vtemp4105[2U] = ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x100U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                      ? 0U
                                                      : 1U)))))))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? __Vtemp4073[2U] : 
                               ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : __Vtemp4096[2U])))
                        : 0U);
    __Vtemp4107[0U] = ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? ((0x200U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                             ? 0U : 
                                            ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : __Vtemp3982[0U])))
                                         : ((0x200U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                             ? 0U : 
                                            ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : __Vtemp4010[0U])))))
                            : 0U) : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                      ? __Vtemp4102[0U]
                                      : 0U));
    __Vtemp4109[2U] = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? 0U : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x400U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 
                                                 ((0x200U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    __Vtemp3982[2U])))
                                                  : 
                                                 ((0x200U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    __Vtemp4010[2U])))))
                                     : 0U) : __Vtemp4105[2U]));
    if ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U] = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U] 
            = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? 0U : __Vtemp4107[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U] 
            = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? 0U : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                         ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                             ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : ((0x400U & 
                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                          ? ((0x200U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x100U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x80U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  __Vtemp3982[1U])))
                                          : __Vtemp4016[1U]))
                             : 0U) : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                       ? __Vtemp4102[1U]
                                       : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U] 
            = __Vtemp4109[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3__DOT__MUX_rg_csr_dpc_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_EN_mav_upd_on_debugger) 
            & (0x31U <= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause))) 
           & (0x35U >= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_take_trap_type_cause)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mcause_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap) 
           & (1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_trap_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_sepc_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap) 
           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_trap_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mie_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret) 
           & (1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_ret_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_sie_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret) 
           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_ret_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mcause_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x342U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mie_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_scause_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x142U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_sie_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & ((0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                    >> 4U))) | (0x100U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                    >> 4U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ff_fwd_request_ENQ 
        = ((((((((((((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
                           & (0x300U != (0xfffU & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                   >> 4U)))) 
                          & (0x302U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                  >> 4U)))) 
                         & (0x303U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                 >> 4U)))) 
                        & (0x304U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                >> 4U)))) 
                       & (0x344U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                               >> 4U)))) 
                      & (0x305U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                              >> 4U)))) 
                     & (0x341U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                             >> 4U)))) 
                    & (0x342U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                            >> 4U)))) 
                   & (0x343U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                           >> 4U)))) 
                  & (0x100U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                          >> 4U)))) 
                 & (0x104U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                         >> 4U)))) 
                & (0x144U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                        >> 4U)))) & 
               (0x105U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                     >> 4U)))) & (0x141U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                      >> 4U)))) 
             & (0x142U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                     >> 4U)))) & (0x143U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                      >> 4U)))) 
           & (0x180U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[0U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[3U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[4U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[4U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[5U] 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[5U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
        = ((0xffffffe0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__IF_wr_csrs_wget___05F6_BITS_198_TO_197_7_EQ_3_8_OR_ETC___05F_d75) 
                           << 5U)) | (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__wr_csrs_wget[6U]));
    __Vtemp4116[0U] = 0xfffffffeU;
    __Vtemp4116[1U] = 0xffffffffU;
    __Vtemp4116[2U] = 0xffffffffU;
    __Vtemp4116[3U] = 0xffffffffU;
    __Vtemp4116[4U] = 0xffffffffU;
    __Vtemp4116[5U] = 0xffffffffU;
    __Vtemp4116[6U] = 0xffffffffU;
    __Vtemp4116[7U] = 0xffffffffU;
    VL_SHIFTL_WWI(256,256,8, __Vtemp4117, __Vtemp4116, 
                  (0xffU & ((0xc0U & (((IData)(1U) 
                                       + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_output_index)) 
                                      << 6U)) - (IData)(1U))));
    __Vtemp4119[0U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[0U] 
                       & (~ __Vtemp4117[0U]));
    __Vtemp4119[1U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[1U] 
                       & (~ __Vtemp4117[1U]));
    __Vtemp4119[2U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[2U] 
                       & (~ __Vtemp4117[2U]));
    __Vtemp4119[3U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[3U] 
                       & (~ __Vtemp4117[3U]));
    __Vtemp4119[4U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[4U] 
                       & (~ __Vtemp4117[4U]));
    __Vtemp4119[5U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[5U] 
                       & (~ __Vtemp4117[5U]));
    __Vtemp4119[6U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[6U] 
                       & (~ __Vtemp4117[6U]));
    __Vtemp4119[7U] = (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha_out[7U] 
                       & (~ __Vtemp4117[7U]));
    VL_SHIFTR_WWI(256,256,8, __Vtemp4120, __Vtemp4119, 
                  (0xc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_output_index) 
                            << 6U)));
    __Vtemp4121[0U] = (0x10U | ((0xffffffe0U & ((IData)(
                                                        ((0x80U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                      >> 0x14U))))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           __Vtemp4120[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            __Vtemp4120[0U])))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                             << 0x18U) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                              << 0x18U) 
                                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready))))))))) 
                                                << 5U)) 
                                | (0xfU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg))));
    __Vtemp4121[1U] = ((0x1fU & ((IData)(((0x80U == 
                                           (0xffU & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 0x14U))))
                                           ? (((QData)((IData)(
                                                               __Vtemp4120[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp4120[0U])))
                                           : (((QData)((IData)(
                                                               (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                       << 8U) 
                                                                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                        << 8U) 
                                                                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready))))))))) 
                                 >> 0x1bU)) | (0xffffffe0U 
                                               & ((IData)(
                                                          (((0x80U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                         >> 0x14U))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              __Vtemp4120[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               __Vtemp4120[0U])))
                                                             : 
                                                            (((QData)((IData)(
                                                                              (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x18U) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    __Vtemp4122[2U] = ((0xffffffe0U & ((((0x80U == 
                                          (0xffU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                            >> 0x14U)))) 
                                         | (0xc1U == 
                                            (0xffU 
                                             & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                        >> 0x14U)))))
                                         ? 0U : 2U) 
                                       << 5U)) | (0x1fU 
                                                  & ((IData)(
                                                             (((0x80U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                            >> 0x14U))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                __Vtemp4120[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                __Vtemp4120[0U])))
                                                                : 
                                                               (((QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready) 
                                                                                << 8U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready)))))))) 
                                                              >> 0x20U)) 
                                                     >> 0x1bU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_data_D_IN[0U] 
        = __Vtemp4121[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_data_D_IN[1U] 
        = __Vtemp4121[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_rd_data_D_IN[2U] 
        = __Vtemp4122[2U];
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_8 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_9
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_D_IN 
        = (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_rot_prev_key_write_1___05FSEL_2)
                     ? ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))
                         ? ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))
                         : ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))
                             ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_toggle_192)
                                 ? ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))
                                 : ((IData)(2U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number)))
                             : ((IData)(2U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))))
                     : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_1)
                         ? (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)) 
                             | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)))
                             ? 1U : 2U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_2)
                                            ? (((0U 
                                                 == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                                                | (1U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))
                                                ? 1U
                                                : 2U)
                                            : 0U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_D_IN 
        = (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_1) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_2)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_2)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_8))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_1)
                ? 3U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_2)
                         ? 7U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)
                                  ? 2U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_2)
                                           ? 8U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)
                                                    ? 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                     ? 8U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)
                                                     ? 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                      ? 8U
                                                      : 2U)
                                                     : 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)
                                                      ? 
                                                     ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                       ? 8U
                                                       : 2U)
                                                      : 0U)))))))
            : ((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state))
                ? 6U : 0U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_EN 
        = (((((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sub) 
                    & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                   | ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state)) 
                      & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter)))) 
                  | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdone_encoding) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fcounter_7768_EQ_ETC___05F_d67782)))) 
                 | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdone_encoding_decrypt) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fcounter_7768_EQ_ETC___05F_d67782)))) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_addKeyDecrypt)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rowColShift)) 
           | (8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state_D_IN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_rci_write_1___05FSEL_1)
            ? (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d45130)))
                ? 4U : 3U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_1)
                               ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)
                                   ? ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_127_TO_96_0_ETC___05F_d70810) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_95_TO_64_08_ETC___05F_d70812)) 
                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_63_TO_32_08_ETC___05F_d70815)) 
                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_31_TO_0_081_ETC___05F_d70818)) 
                                         & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                                        | (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_191_TO_160___05FETC___05F_d70822) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_159_TO_128___05FETC___05F_d70824)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_127_TO_96_0_ETC___05F_d70826)) 
                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_95_TO_64_08_ETC___05F_d70828)) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_63_TO_32_08_ETC___05F_d70830)) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_31_TO_0_081_ETC___05F_d70832)) 
                                           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
                                       | (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_255_TO_224___05FETC___05F_d70836) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_223_TO_192___05FETC___05F_d70838)) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_191_TO_160___05FETC___05F_d70840)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_159_TO_128___05FETC___05F_d70842)) 
                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_127_TO_96_0_ETC___05F_d70844)) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_95_TO_64_08_ETC___05F_d70846)) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_63_TO_32_08_ETC___05F_d70848)) 
                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0775_BITS_31_TO_0_081_ETC___05F_d70850)) 
                                          & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))
                                       ? 0U : 1U) : 1U)
                               : (((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter)))
                                   ? 3U : (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                                            & ((((0U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                                                 | (1U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                                                | (2U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d47209))))
                                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d47209)
                                                ? (
                                                   ((0U 
                                                     == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                                                    | (1U 
                                                       == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d45130)
                                                     ? 0U
                                                     : 2U))
                                                : 0U)
                                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_2)
                                                ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)
                                                    ? 
                                                   ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_127_T_ETC___05F_d68405) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_95_TO_ETC___05F_d68407)) 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_63_TO_ETC___05F_d68410)) 
                                                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_31_TO_ETC___05F_d68413)) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len))) 
                                                      | (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_191_T_ETC___05F_d68417) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_159_T_ETC___05F_d68419)) 
                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_127_T_ETC___05F_d68421)) 
                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_95_TO_ETC___05F_d68423)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_63_TO_ETC___05F_d68425)) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_31_TO_ETC___05F_d68427)) 
                                                         & (1U 
                                                            == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)))) 
                                                     | (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_255_T_ETC___05F_d68431) 
                                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_223_T_ETC___05F_d68433)) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_191_T_ETC___05F_d68435)) 
                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_159_T_ETC___05F_d68437)) 
                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_127_T_ETC___05F_d68439)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_95_TO_ETC___05F_d68441)) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_63_TO_ETC___05F_d68443)) 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8396_BITS_31_TO_ETC___05F_d68445)) 
                                                        & (2U 
                                                           == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len))))
                                                     ? 0U
                                                     : 1U)
                                                    : 1U)
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state))
                                                    ? 2U
                                                    : 0U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d195) 
                           << 2U)) | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U] 
                                               >> 2U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U] 
        = ((3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d195) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d195 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U] 
        = ((3U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d195 
                           >> 0x20U)) >> 0x1eU)) | 
           (0xfffffffcU & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                                     >> 4U)))) 
                           << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U] 
        = ((3U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                            >> 4U)))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                                               >> 4U))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U] 
        = (3U & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                            >> 4U))) 
                          >> 0x20U)) >> 0x1eU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[0U] 
        = (IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req)
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U])))
                    : 0ULL));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[1U] 
        = (IData)((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req)
                     ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U])))
                     : 0ULL) >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[2U] 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_31_TO_7_0_6_0x2_ETC___05Fq2 
        = (((0U == (0x1ffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 1U)))) 
            | (0x2000U == (0x1ffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 0x1fU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 1U)))))
            ? 6U : (((((((2U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU)))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x17U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 9U))))) 
                        & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1fU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 1U))))) 
                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                          >> 0x10U)) | (((((0x102U 
                                            == (0xfffU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU)))) 
                                           & (0U == 
                                              (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 9U))))) 
                                          & (0U == 
                                             (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 1U))))) 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                            >> 0x15U)) 
                                        & ((3U == (3U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                      >> 5U))) 
                                           | ((1U == 
                                               (3U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                   >> 5U))) 
                                              & (~ 
                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                  >> 0x19U)))))) 
                     | ((((0x302U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U))))) 
                        & (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                        >> 5U))))) ? 5U
                     : ((((0x105U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U)))))
                         ? ((1U & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                       >> 0x18U)) | 
                                   (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                 >> 5U)))))
                             ? 7U : 6U) : (((9U == 
                                             (0x7fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U)))) 
                                            & (0U == 
                                               (0x1fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 1U)))))
                                            ? ((1U 
                                                & ((~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                     >> 0x17U)) 
                                                   | (3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                          >> 5U)))))
                                                ? 1U
                                                : 6U)
                                            : 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d360 
        = ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
            ? ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? 6U : (((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))) 
                             | ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U))))
                                 ? (0U == (0x7fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U))))
                                 : ((5U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 6U)))) 
                                    & ((0U == (0x7fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x13U)))) 
                                       | (0x20U == 
                                          (0x7fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U))))))))
                             ? 0U : 6U)) : ((0x10000000U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                             ? 0U : 
                                            ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_1_3_ETC___05F_d147)
                                              ? 0U : 6U)))
            : ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? (((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 6U)))) | 
                        (1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 6U))))) ? 1U
                        : 6U) : 6U) : ((0x10000000U 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                        ? (((0U != 
                                             (3U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                << 0x10U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                  >> 0x10U)))) 
                                            & (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                 >> 8U) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          >> 6U))))) 
                                               | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                   >> 6U) 
                                                  & (3U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            >> 6U)))))))
                                            ? 1U : 6U)
                                        : ((7U == (7U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 6U))))
                                            ? 6U : 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1011_ETC___05F_d618 
        = ((((0xbU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                 << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                           >> 0x1cU)))) 
             & ((0x18U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU))))
                 ? (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                    >> 1U) : (((0xdU != (0x1fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU)))) 
                               & (5U != (0x1fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU))))) 
                              & ((0x1bU == (0x1fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              << 4U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU))))
                                  ? (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     >> 0xeU) : (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x19U))))) 
            << 0xbU) | ((((((5U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              << 4U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                            | (0xbU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU))))) 
                           | (0xdU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 4U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))))
                           ? 0U : (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U)))) 
                         << 5U) | ((((0xbU == (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU))))
                                      ? 0U : (0xfU 
                                              & ((((8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         << 4U) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                           >> 0x1cU)))) 
                                                   | ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            << 4U) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                              >> 0x1cU)))) 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                         >> 8U))) 
                                                  | (0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          << 4U) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                            >> 0x1cU)))))
                                                  ? 
                                                 ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 2U))
                                                  : 
                                                 (((5U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         << 4U) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                           >> 0x1cU)))) 
                                                   | (0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                           << 4U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                             >> 0x1cU)))))
                                                   ? 0U
                                                   : 
                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xfU)))))) 
                                    << 1U) | ((0xbU 
                                               != (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 4U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1cU)))) 
                                              & (((8U 
                                                   == 
                                                   (0x1fU 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        << 4U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                          >> 0x1cU)))) 
                                                  | ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                           << 4U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                             >> 0x1cU)))) 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                        >> 8U)))
                                                  ? 
                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 1U)
                                                  : 
                                                 (((((0x18U 
                                                      != 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                           << 4U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                             >> 0x1cU)))) 
                                                     & (0xdU 
                                                        != 
                                                        (0x1fU 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             << 4U) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                               >> 0x1cU))))) 
                                                    & (5U 
                                                       != 
                                                       (0x1fU 
                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            << 4U) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                              >> 0x1cU))))) 
                                                   & (0x1bU 
                                                      != 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                           << 4U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                             >> 0x1cU))))) 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0xeU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT___theResult___05F___05F_9_snd___05Fh3604 
        = ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
            ? ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? 2U : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                         ? 2U : ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U))))
                                  ? ((0U == (0x1ffffffU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 1U))))
                                      ? ((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                            >> 0x17U) 
                                           & (3U != 
                                              (3U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                >> 5U)))) 
                                          & (1U != 
                                             (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                               >> 5U))))
                                          ? 8U : ((
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                    >> 0x15U) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                          >> 5U))))
                                                   ? 9U
                                                   : 0xbU))
                                      : ((0x2000U == 
                                          (0x1ffffffU 
                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 1U))))
                                          ? (((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[0U] 
                                                 >> 0xfU) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                       >> 5U)))) 
                                               | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[0U] 
                                                   >> 0xeU) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                         >> 5U))))) 
                                              | (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[0U] 
                                                   >> 0xdU) 
                                                  & (3U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                         >> 5U)))) 
                                                 & (1U 
                                                    != 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                        >> 5U)))))
                                              ? 0x31U
                                              : 3U)
                                          : 2U)) : 2U)))
            : 2U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693 
        = (0xfU & (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                   << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                             >> 0x1fU)))) 
                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                        >> 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                  >> 6U))) ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               << 4U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU))
                    : ((0xbU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           << 4U) | 
                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                           >> 0x1cU))))
                        ? ((0xeU & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_27_84_OR_decoder_func_ETC___05F_d686)
                                      ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 0xbU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0x15U))
                                      : ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 9U) | 
                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                          >> 0x17U))) 
                                    << 1U)) | (1U & 
                                               ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_27_84_OR_decoder_func_ETC___05F_d686) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U))))
                        : 0U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d161 
        = ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
            ? ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1cU)))) 
                   | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                      & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U)))) | 
                         ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U))))
                           ? (0U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U))))
                           : ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U)))) 
                              & ((0U == (0x7fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x13U)))) 
                                 | (0x20U == (0x7fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U))))))))))
                : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                      << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                       | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                          & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))) 
                             | ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U))))
                                 ? (0U == (0x7fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U))))
                                 : ((5U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 6U)))) 
                                    & ((0U == (0x7fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x13U)))) 
                                       | (0x20U == 
                                          (0x7fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U))))))))))
                    : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_1_3_ETC___05F_d147)))
            : ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x1aU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                       | (1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U))))) : 
                   ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                   << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                             >> 0x1cU)))) 
                    | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                      << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                       & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
                          | ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                              ? (0U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U))))
                              : ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                                 & ((0U == (0x7fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xdU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x13U)))) 
                                    | (0x20U == (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U)))))))))))
                : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                      << 0x10U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                   >> 0x10U)))) 
                       & (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                            >> 8U) & (2U == (7U & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 6U))))) 
                          | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                              >> 6U) & (3U == (7U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))))))
                    : (7U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_111_96_AND_decoder_fu_ETC___05F_d208 
        = ((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
              >> 0xfU) & (1U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0xdU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0x13U))))) 
            & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
               | (3U < (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                               << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 6U)))))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_1_3_ETC___05F_d207));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_26_20_OR_decoder_func_ETC___05F_d508 
        = (1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                   >> 0x14U) | (0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                              << 0x10U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                >> 0x10U))))) 
                 | (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                      >> 0x13U) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                      >> 8U))) & ((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U)) 
                                                  | (~ 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                      >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_4_TO_2_0b0_deco_ETC___05Fq6 
        = (1U & ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                  ? ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                      ? ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                         & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           << 4U) | 
                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                           >> 0x1cU)))) 
                            | ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1aU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 6U)))) 
                               & ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U))))
                                   ? (0U != (0x7fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xdU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x13U))))
                                   : ((5U != (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                                      | ((0U != (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U)))) 
                                         & (0x20U != 
                                            (0x7fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xdU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x13U))))))))))
                      : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            << 4U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                              >> 0x1cU)))) 
                             & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               << 4U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                                | ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 6U)))) 
                                   & ((1U == (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U))))
                                       ? (0U != (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U))))
                                       : ((5U != (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 6U)))) 
                                          | ((0U != 
                                              (0x7fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x13U)))) 
                                             & (0x20U 
                                                != 
                                                (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U))))))))))
                          : ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                              ? (0U != (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x14U))))
                              : (((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                                  & (0U != (0x3fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xcU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x14U))))) 
                                 & (0x10U != (0x3fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x14U))))))))
                  : ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                      ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))) 
                             & (1U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1aU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 6U)))))
                          : ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            << 4U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                              >> 0x1cU)))) 
                             & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               << 4U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                                | ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 6U)))) 
                                   & ((1U == (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U))))
                                       ? (0U != (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U))))
                                       : ((5U != (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 6U)))) 
                                          | ((0U != 
                                              (0x7fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x13U)))) 
                                             & (0x20U 
                                                != 
                                                (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U)))))))))))
                      : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                              >> 0x10U)))) 
                             | (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                     >> 8U)) | (2U 
                                                != 
                                                (7U 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 6U))))) 
                                & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                       >> 6U)) | (3U 
                                                  != 
                                                  (7U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 6U)))))))
                          : (7U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_99_69_AND_decoder_fun_ETC___05F_d195 
        = (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
             >> 3U) & ((2U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x1aU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                       | (3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U)))))) 
           & (((((((((((0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0xbU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x15U)))) 
                       | (1U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0xbU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0x15U))))) 
                      | (3U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 0xbU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0x15U))))) 
                     | (4U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0xbU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x15U))))) 
                    | (8U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0xbU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0x15U))))) 
                   | (0xcU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0xbU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x15U))))) 
                  | (0x10U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0xbU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x15U))))) 
                 | (0x14U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0xbU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0x15U))))) 
                | (0x18U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0xbU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U))))) 
               | (0x1cU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0x15U))))) 
              | ((2U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                 & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228 
        = (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                >> 0x14U)) & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                              >> 0x10U))))) 
           & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                   >> 0x13U)) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                 >> 8U)) | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0x13U) 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                               >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_csrs_BIT_111_96_87_OR_NOT___05FETC___05F_d497 
        = ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                 >> 0xfU)) | (1U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U))))) 
            | ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
               & (3U >= (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))) 
           & ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                          >> 6U))))
               ? (0U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U))))
               : (((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U)))) 
                   & (5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U))))) 
                  | ((0U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x13U)))) 
                     & (0x20U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0xdU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0x13U))))))));
    if ((7U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                       << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                    >> 6U))))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511 
            = ((5U == (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U])) 
               | (6U == (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U])));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238 
            = ((5U != (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U])) 
               & (6U != (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U])));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511 
            = ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
               | (6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238 
            = ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
               & (6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_7_TO_4_0_address___05FETC___05Fq5 
        = ((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                            << 0xeU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0x12U))))
            ? (((((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU)))) 
                  | (4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                 | (5U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU))))) 
                | (6U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU))))) 
               & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                  >> 0x15U)) : ((4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xeU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x12U))))
                                 ? ((((((0U == (0xfU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU)))) 
                                        | (1U == (0xfU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x12U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0xeU))))) 
                                       | (2U == (0xfU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU))))) 
                                      | (3U == (0xfU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU))))) 
                                     | (4U == (0xfU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0xeU))))) 
                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                       >> 0x15U)) : 
                                (((8U == (0xfU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x12U)))) 
                                  & (0U == (0xfU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x12U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU))))) 
                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                    >> 0x15U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_csrs_BITS_198_TO_197_1_de_ETC___05Fq1 
        = (((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                          >> 5U))) | (3U == (3U & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                   >> 5U))))
            ? (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                     >> 5U)) : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__address_valid_misa_BIT_13_1_AND_address_valid___05FETC___05F_d23 
        = (1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                  >> 0x10U) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                               >> 0x17U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh8271 
        = ((1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U]))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                           >> 2U)))
            : ((2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U]))
                ? ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                                >> 2U))) 
                   | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))
                : ((~ (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                        << 0x3eU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                                      << 0x1eU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                                   >> 2U)))) 
                   & (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[0U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[0U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[0U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[0U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[0U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[0U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[1U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[1U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[1U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[1U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[1U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[1U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[1U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[2U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[2U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[2U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[2U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[2U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[2U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[2U]);
    if ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d373 
            = ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? 6U : ((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                               >> 0xfU) & (1U == (0x7fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0xdU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0x13U))))) 
                             & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U)))) 
                                | (3U < (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U))))))
                             ? 9U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_1_3_ETC___05F_d207)
                                      ? 0U : 6U))) : 
               ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                 ? 0U : (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                           >> 0xfU) & (1U == (0x7fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U)))))
                          ? 9U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d200)
                                   ? 0U : 6U))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d214 
            = ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1cU)))) 
                   | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_111_96_AND_decoder_fu_ETC___05F_d208)))
                : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                      << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                       | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_111_96_AND_decoder_fu_ETC___05F_d208)))
                    : (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                         >> 0xfU) & (1U == (0x7fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xdU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x13U))))) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d200))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d503 
            = (1U & ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                      ? ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                         & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           << 4U) | 
                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                           >> 0x1cU)))) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_csrs_BIT_111_96_87_OR_NOT___05FETC___05F_d497)))
                      : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            << 4U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                              >> 0x1cU)))) 
                             & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               << 4U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_csrs_BIT_111_96_87_OR_NOT___05FETC___05F_d497)))
                          : (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                  >> 0xfU)) | (1U != 
                                               (0x7fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0xdU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0x13U))))) 
                             & (((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                                 | (5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 6U)))))
                                 ? ((0U != (0x7fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xdU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x13U)))) 
                                    & (0x20U != (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U)))))
                                 : (0U != (0x7fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xdU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x13U)))))))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d373 
            = ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_99_69_AND_decoder_fun_ETC___05F_d195)
                        ? 1U : 6U) : 6U) : ((0x10000000U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                             ? ((((
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                    >> 8U) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                             >> 0x10U))))) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            >> 6U))))) 
                                                 | (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                      >> 6U) 
                                                     & (0U 
                                                        != 
                                                        (3U 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                               >> 0x10U))))) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                            << 0x1aU) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              >> 6U))))))
                                                 ? 1U
                                                 : 6U)
                                             : ((4U 
                                                 > 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 6U))))
                                                 ? 1U
                                                 : 6U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d214 
            = ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_99_69_AND_decoder_fun_ETC___05F_d195)
                    : ((5U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                      << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                       | ((6U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_csrs_BIT_111_96_AND_decoder_fu_ETC___05F_d208))))
                : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? ((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                          >> 8U) & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                    >> 0x10U))))) 
                        & (2U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U))))) 
                       | (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                            >> 6U) & (0U != (3U & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                      >> 0x10U))))) 
                          & (3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U))))))
                    : (4U > (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d503 
            = (1U & ((0x20000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                      ? ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                  >> 3U)) | ((2U != 
                                              (7U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                                             & (3U 
                                                != 
                                                (7U 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 6U)))))) 
                             | (((((((((((0U != (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x15U)))) 
                                         & (1U != (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0xbU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 0x15U))))) 
                                        & (3U != (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0xbU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0x15U))))) 
                                       & (4U != (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x15U))))) 
                                      & (8U != (0x1fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0x15U))))) 
                                     & (0xcU != (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x15U))))) 
                                    & (0x10U != (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x15U))))) 
                                   & (0x14U != (0x1fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0x15U))))) 
                                  & (0x18U != (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0xbU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0x15U))))) 
                                 & (0x1cU != (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xbU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x15U))))) 
                                & ((2U != (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                   | (0U != (0x1fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))))))
                          : ((5U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            << 4U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                              >> 0x1cU)))) 
                             & ((6U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               << 4U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_csrs_BIT_111_96_87_OR_NOT___05FETC___05F_d497))))
                      : ((0x10000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                          ? ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                   >> 8U)) | (0U == 
                                              (3U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                 << 0x10U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                   >> 0x10U))))) 
                              | (2U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U))))) 
                             & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                     >> 6U)) | (0U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                       >> 0x10U))))) 
                                | (3U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U))))))
                          : (4U <= (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))));
    }
    if ((0x2000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d530 
            = ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (((0x1eU != (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                | (0U != (0x1fU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU))))) 
                               | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))))
                            : ((0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                               | ((0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                                  & (1U != (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 6U))))))))
                    : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x11U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xfU)))) 
                           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511))))
                : ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (((0x1eU != (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                | (0U != (0x1fU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU))))) 
                               | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))))
                            : (3U <= (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U))))))
                    : (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                        | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU))))) 
                       | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U)))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d537 
            = (1U & ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                      ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                          ? ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                              ? ((((8U != (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                   | (0U != (0xfU & 
                                             ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x11U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xfU))))) 
                                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511)) 
                                 | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269)))
                              : ((0U != (0x1fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 0xeU)))) 
                                 | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 6U))))))
                          : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                              ? ((((8U != (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                   | (0U != (0xfU & 
                                             ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x11U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xfU))))) 
                                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511)) 
                                 | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269)))
                              : ((1U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xfU)))) 
                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511))))
                      : ((((8U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                           | (0U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x11U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xfU))))) 
                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511)) 
                         | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d262 
            = ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (((0x1eU == (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                & (0U == (0x1fU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU))))) 
                               & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))))
                            : ((0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                               & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)))) 
                                  | (1U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 6U))))))))
                    : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x11U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xfU)))) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238))))
                : ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (((0x1eU == (0x1fU & 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                                & (0U == (0x1fU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU))))) 
                               & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))))
                            : (3U > (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))))
                    : (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                        & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU))))) 
                       & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U)))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d273 
            = ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? ((((8U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xbU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x15U)))) 
                             & (0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x11U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xfU))))) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269))
                        : ((0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU)))) 
                           & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))))
                    : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? ((((8U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xbU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x15U)))) 
                             & (0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x11U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xfU))))) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269))
                        : ((1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x11U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xfU)))) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238))))
                : ((((8U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0xbU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                     & (0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x11U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0xfU))))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d530 
            = ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                        | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU))))) 
                       | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U))))) : 
                   ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                     ? ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                         ? ((0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x12U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU)))) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511))
                         : (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xbU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x15U)))) 
                             | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
                            | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U))))))
                     : (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xbU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x15U)))) 
                         | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU))))) 
                        | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))))))
                : ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           | (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (2U <= (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U))))
                            : (3U <= (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U))))))
                    : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d537 
            = (1U & ((((8U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0xbU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x15U)))) 
                       | (0U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 0x11U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0xfU))))) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511)) 
                     | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d262 
            = ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                        & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU))))) 
                       & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x1aU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U))))) : 
                   ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                     ? ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                         ? ((0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x12U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU)))) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238))
                         : (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xbU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x15U)))) 
                             & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
                            & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U))))))
                     : (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0xbU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x15U)))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU))))) 
                        & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))))))
                : ((0x800000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                    ? ((0x400000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                        ? (((0x1eU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0xbU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x15U)))) 
                            & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                << 0x12U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                           & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U)))))
                        : ((0x200000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                            ? (2U > (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                            : (3U > (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))))
                    : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d273 
            = ((((8U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0x15U)))) 
                 & (0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x11U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xfU))))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_25_22_EQ_INV_decoder___05FETC___05F_d269));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_valid_csr_access_1__DOT__CASE_valid_csr_access_prv_1_valid_csr_access_p_ETC___05Fq1 
        = (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_csrs_BITS_198_TO_197_1_de_ETC___05Fq1)) 
            | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_csrs_BITS_198_TO_197_1_de_ETC___05Fq1)))
            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_csrs_BITS_198_TO_197_1_de_ETC___05Fq1)
            : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_7_TO_4_0_address___05FETC___05Fq1 
        = ((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                            << 0xeU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0x12U))))
            ? ((((((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU)))) 
                   | (1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
                  | (4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))) 
                 | (5U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU))))) 
                | (6U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU))))) 
               | (((2U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU)))) 
                   | (3U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__address_valid_misa_BIT_13_1_AND_address_valid___05FETC___05F_d23) 
                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                        >> 0x15U)))) : ((2U == (0xfU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0x12U))))
                                         ? ((1U != 
                                             (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xeU)))) 
                                            & (2U != 
                                               (0xfU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 0xeU)))))
                                         : ((3U == 
                                             (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x12U)))) 
                                            | ((4U 
                                                == 
                                                (0xfU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x12U)))) 
                                               & (((((0U 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                           << 0x12U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             >> 0xeU)))) 
                                                     | (1U 
                                                        == 
                                                        (0xfU 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                             << 0x12U) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                               >> 0xeU))))) 
                                                    | (2U 
                                                       == 
                                                       (0xfU 
                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                            << 0x12U) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              >> 0xeU))))) 
                                                   | (3U 
                                                      == 
                                                      (0xfU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                           << 0x12U) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             >> 0xeU))))) 
                                                  | (4U 
                                                     == 
                                                     (0xfU 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                          << 0x12U) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            >> 0xeU)))))))));
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_9 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_10
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ma_core_req_req_BITS_79_TO_68_EQ_0x300_AND_IF___05FETC___05F_d247 
        = ((0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                 >> 4U))) & (((3U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh8271 
                                                           >> 0xbU)))) 
                                              | ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_csr_misa 
                                                          >> 0x12U)) 
                                                 & (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh8271 
                                                                >> 0xbU)))))) 
                                             | ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_csr_misa 
                                                         >> 0x14U)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh8271 
                                                               >> 0xbU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
            & (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                          >> 6U))))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait)) 
              | (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U])));
    if ((((0U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                        >> 7U))) & (1U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                                                 >> 7U)))) 
         & (2U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                         >> 7U))))) {
        __Vtemp4139[0U] = (0xfffffffeU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U])))) 
                                          << 1U));
        __Vtemp4139[1U] = ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U])))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
        __Vtemp4139[2U] = ((0x3eU & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U]) 
                           | (1U & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)));
    } else {
        __Vtemp4139[0U] = ((0xfffffffeU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                          >> 0xcU)))) 
                                           << 1U)) 
                           | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                    >> 1U)));
        __Vtemp4139[1U] = ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                 >> 0xcU)))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                                 << 0x14U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                                   >> 0xcU))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
        __Vtemp4139[2U] = ((0x3eU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U] 
                                      << 0x1aU) | (0x3fffffeU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U] 
                                                      >> 6U)))) 
                           | (1U & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                    >> 0xcU))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)));
    }
    if ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                      >> 7U)))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_commit_wget[0U] 
            = (0xfffffffeU & ((IData)((((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                           >> 6U)))) 
                              << 1U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_commit_wget[1U] 
            = ((1U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                >> 6U)))) 
                      >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                                 << 0x1aU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                                   >> 6U))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_commit_wget[0U] 
            = __Vtemp4139[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_commit_wget[1U] 
            = __Vtemp4139[1U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__wr_commit_wget[2U] 
        = (0x40U | ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                                  >> 7U))) ? ((0x3eU 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U]) 
                                              | (1U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[2U])) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[1U])) 
                                                                  << 0x1aU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[0U])) 
                                                                    >> 6U))) 
                                                             >> 0x20U)) 
                                                    >> 0x1fU)))
                     : __Vtemp4139[2U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_whas___05F4_AND_NOT_rx_w_data_wget___05F5_BI_ETC___05F_d103 
        = ((((0U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                           >> 7U))) & (1U != (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                                               >> 7U)))) 
            & (2U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__rx_w_data_wget[4U] 
                            >> 7U)))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr_system_instruction[2U] 
                                         | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d277 
        = ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
            ? (((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                               << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                         >> 0x1cU)))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228)) 
               & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d262) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d273)))
            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335 
        = ((((0x180U != (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU)))) 
             | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                   >> 0x17U))) | (1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_csrs_BITS_198_TO_197_1_de_ETC___05Fq1))) 
           & (((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_valid_csr_access_1__DOT__CASE_valid_csr_access_prv_1_valid_csr_access_p_ETC___05Fq1)) 
                 | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_valid_csr_access_1__DOT__CASE_valid_csr_access_prv_1_valid_csr_access_p_ETC___05Fq1)))
                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_valid_csr_access_1__DOT__CASE_valid_csr_access_prv_1_valid_csr_access_p_ETC___05Fq1)
                 : 0U) >= (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 0xaU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0x16U)))) 
              & ((~ ((0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x17U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 9U)))) | 
                     (1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 6U)))))) 
                 | (3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0x18U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_11_TO_10_0b0_CASE_ETC___05Fq2 
        = ((0x2000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
            ? ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0xeU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x12U)))) 
                   & ((((1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x12U) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 0xeU)))) 
                        | (2U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x12U) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0xeU))))) 
                       | (3U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                          << 0x12U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0xeU))))) 
                      | (4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x12U) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 0xeU))))))
                : ((((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0xeU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0x12U)))) 
                     | (1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0xeU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0x12U))))) 
                    | (8U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0xeU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0x12U))))) 
                   | (9U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0xeU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0x12U))))))
            : ((0x1000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                ? ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0x18U)))) 
                   & (((0xc2U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x12U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0xeU)))) 
                       | (0xc0U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x12U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0xeU))))) 
                      | (0xc1U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU))))))
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_7_TO_4_0_address___05FETC___05Fq1)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338 
        = ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                          << 0xaU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                      >> 0x16U)))) ? 
           ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                           << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     >> 0x18U)))) ? 
            (((((((((0U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                    | (4U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x12U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0xeU))))) 
                   | (5U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x12U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 0xeU))))) 
                  | (0x40U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x12U) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 0xeU))))) 
                 | (0x41U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x12U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0xeU))))) 
                | (0x42U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x12U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 0xeU))))) 
               | (0x43U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
              | (0x44U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU)))))
              ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__address_valid_misa_BIT_13_1_AND_address_valid___05FETC___05F_d23)
              : (((1U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0xeU)))) 
                  | (2U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU))))) 
                 | (3U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 0xeU))))))
             : ((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                               << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         >> 0x18U))))
                 ? (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0x13U))))
                 : ((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                   << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0x18U)))) 
                    & (0U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x12U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 0xeU)))))))
            : ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                              << 0xaU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                          >> 0x16U))))
                ? ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 0x18U)))) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_7_TO_4_0_address___05FETC___05Fq5))
                : ((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                  << 0xaU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 0x16U)))) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__instance_address_valid_0__DOT__CASE_address_valid_addr_BITS_11_TO_10_0b0_CASE_ETC___05Fq2))));
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_10 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_11
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]);
    }
    if ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                       << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                    >> 6U))))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d591 
            = ((((((2U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                   & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x17U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 9U))))) & 
                  (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 1U))))) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                    >> 0x10U)) | (((((0x102U == (0xfffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                     & (0U == (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 9U))))) 
                                    & (0U == (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 1U))))) 
                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                      >> 0x15U)) & 
                                  ((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                 >> 5U))) 
                                   | ((1U == (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                               >> 5U))) 
                                      & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                            >> 0x19U)))))) 
               | ((((0x302U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x12U) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0xeU)))) 
                    & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x17U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 9U))))) 
                   & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 1U))))) & 
                  (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                >> 5U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d340 
            = (1U & (((((((2U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U))))) 
                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                           >> 0x10U)) | (((((0x102U 
                                             == (0xfffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                            & (0U == 
                                               (0x1fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 9U))))) 
                                           & (0U == 
                                              (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 1U))))) 
                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                             >> 0x15U)) 
                                         & ((3U == 
                                             (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                               >> 5U))) 
                                            | ((1U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                    >> 5U))) 
                                               & (~ 
                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                   >> 0x19U)))))) 
                      | ((((0x302U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xeU)))) 
                           & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 9U))))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 1U))))) 
                         & (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                         >> 5U))))) 
                     | ((((0x105U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U)))))
                         ? ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                >> 0x18U)) | (3U == 
                                              (3U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                >> 5U))))
                         : (((9U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U)))) 
                             & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 1U))))) 
                            & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                   >> 0x17U)) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                     >> 5U))))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d580 
            = (1U & (((((((2U != (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU)))) 
                          | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U))))) 
                        | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                              >> 0x10U))) & (((((0x102U 
                                                 != 
                                                 (0xfffU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x12U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0xeU)))) 
                                                | (0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                        << 0x17U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          >> 9U))))) 
                                               | (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 1U))))) 
                                              | (~ 
                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                  >> 0x15U))) 
                                             | ((3U 
                                                 != 
                                                 (3U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                     >> 5U))) 
                                                & ((1U 
                                                    != 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                        >> 5U))) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                                      >> 0x19U))))) 
                      & ((((0x302U != (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xeU)))) 
                           | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 9U))))) 
                          | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 1U))))) 
                         | (3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                         >> 5U))))) 
                     & ((((0x105U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U)))))
                         ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                             >> 0x18U) & (3U != (3U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                                    >> 5U))))
                         : (((9U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U)))) 
                             | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 1U))))) 
                            | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U] 
                                >> 0x17U) & (3U != 
                                             (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[6U] 
                                               >> 5U))))))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d591 
            = (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                               << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 6U)))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d340 
            = (1U & (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d580 
            = (1U & (((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                      | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335))) 
                     | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338))));
    }
    if ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1fU)))) 
                   & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU))))
                       ? ((2U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
                          & (3U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))
                       : ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU))))
                           ? (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                           : ((3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             << 4U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                              | ((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                << 4U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d340))))))
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d277));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d588 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1fU)))) 
                   | ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU))))
                       ? ((2U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
                          | (3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))
                       : ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU))))
                           ? (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                           : ((3U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             << 4U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                              & ((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                << 4U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d580))))))
                : ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_26_20_OR_decoder_func_ETC___05F_d508)) 
                       | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d530) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d537)))
                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_26_20_OR_decoder_func_ETC___05F_d508) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d511))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d214)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d161));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d588 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d503)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_4_TO_2_0b0_deco_ETC___05Fq6));
    }
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_11 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_12
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_17_EQ_0b11_18_ETC___05F_d594 
        = (((((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                             << 6U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                       >> 0x1aU)))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d588)) 
             & (3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                              << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                        >> 0x1fU))))) 
            & (4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                             << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                       >> 0x1cU))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d591));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1_ETC___05F_d709 
        = (((QData)((IData)((((((((((0x1cU != (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU)))) 
                                    | (9U != (0x7fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0xdU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0x13U))))) 
                                   | (0U != (7U & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 6U))))) 
                                  & (0xbU != (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU))))) 
                                 & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 6U)) | (3U 
                                                   != 
                                                   (0x1fU 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        << 4U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                          >> 0x1cU)))))) 
                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                    >> 6U) | (3U != 
                                              (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU)))))) 
                               & (8U != (0x1fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU))))) 
                              & ((9U != (0x1fU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 4U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                     >> 0x1cU)))) 
                                 | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                       >> 8U)))) ? 0U
                              : (((8U == (0x1fU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    << 4U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                      >> 0x1cU)))) 
                                  | ((9U == (0x1fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 4U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                        >> 8U))) ? 1U
                                  : (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                          >> 6U)) & 
                                      (3U == (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU)))))
                                      ? 3U : (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 6U) 
                                               & (3U 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 4U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1cU)))))
                                               ? 4U
                                               : ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        << 4U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                          >> 0x1cU))))
                                                   ? 2U
                                                   : 5U))))))) 
            << 0x28U) | (((QData)((IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_17_EQ_0b11_18_ETC___05F_d594)
                                            ? ((0x1f000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   << 3U)) 
                                               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1011_ETC___05F_d618))
                                            : ((0x80000000U 
                                                & (((0xbU 
                                                     != 
                                                     (0x1fU 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          << 4U) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                            >> 0x1cU)))) 
                                                    << 0x1fU) 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 6U))) 
                                               | ((0x7ff00000U 
                                                   & ((((5U 
                                                         == 
                                                         (0x1fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1cU)))) 
                                                        | (0xdU 
                                                           == 
                                                           (0x1fU 
                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                << 4U) 
                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                  >> 0x1cU)))))
                                                        ? 
                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                         << 0x12U) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                           >> 0xeU))
                                                        : 
                                                       ((0xbU 
                                                         == 
                                                         (0x1fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1cU))))
                                                         ? 0U
                                                         : 
                                                        ((0x7f8U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            >> 0x19U)))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                >> 0x17U)) 
                                                            | ((2U 
                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                   >> 0x18U)) 
                                                               | (1U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     >> 0x19U))))))) 
                                                      << 0x14U)) 
                                                  | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_6_TO_2_0b101_de_ETC___05Fq10) 
                                                      << 0xcU) 
                                                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1011_ETC___05F_d618))))))) 
                          << 8U) | (QData)((IData)(
                                                   ((((((3U 
                                                         != 
                                                         (3U 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 6U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1aU)))) 
                                                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348)) 
                                                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d588))
                                                       ? 
                                                      ((((((3U 
                                                            != 
                                                            (3U 
                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                 << 6U) 
                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                   >> 0x1aU)))) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348)) 
                                                          | (0U 
                                                             == 
                                                             (3U 
                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                  << 1U) 
                                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                    >> 0x1fU))))) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                 << 1U) 
                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                   >> 0x1fU))))) 
                                                        | (2U 
                                                           == 
                                                           (3U 
                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                << 1U) 
                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                  >> 0x1fU)))))
                                                        ? 2U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 1U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1fU))))
                                                         ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT___theResult___05F___05F_9_snd___05Fh3604)
                                                         : 2U))
                                                       : 
                                                      ((((1U 
                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                          ? 
                                                         ((0x80000000U 
                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                           ? 
                                                          ((0x40000000U 
                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)
                                                            : 
                                                           ((0x20000000U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)
                                                             : 
                                                            ((0x10000000U 
                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                              ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)
                                                              : 
                                                             ((0x100U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                               ? 
                                                              (8U 
                                                               | (7U 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                      << 0x1aU) 
                                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                        >> 6U))))
                                                               : 
                                                              (2U 
                                                               | (1U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     >> 6U)))))))
                                                           : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693))
                                                          : 
                                                         ((0x80000000U 
                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                           ? 
                                                          ((0x40000000U 
                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)
                                                             : 
                                                            ((0x100U 
                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                              ? 
                                                             ((0x80U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                               ? 
                                                              (7U 
                                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                   << 0x1aU) 
                                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     >> 6U)))
                                                               : 
                                                              ((0x40U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                ? 
                                                               ((0x1000000U 
                                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                 ? 0xbU
                                                                 : 5U)
                                                                : 
                                                               (7U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      >> 6U)))))
                                                              : 
                                                             ((0x80U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                               ? 
                                                              ((0x40U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                ? 0xeU
                                                                : 0xcU)
                                                               : 
                                                              ((0x40U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                ? 
                                                               (7U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      >> 6U)))
                                                                : 
                                                               ((0x1000000U 
                                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                 ? 0xaU
                                                                 : 0U)))))
                                                            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693))
                                                           : 
                                                          ((0x40000000U 
                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                            ? 
                                                           ((0x10000000U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (7U 
                                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                   << 0x1aU) 
                                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     >> 6U))))
                                                              ? 0xcU
                                                              : 
                                                             ((3U 
                                                               == 
                                                               (7U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      >> 6U))))
                                                               ? 0xeU
                                                               : 
                                                              ((5U 
                                                                == 
                                                                (7U 
                                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                       >> 6U))))
                                                                ? 
                                                               ((0x1000000U 
                                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                 ? 0xbU
                                                                 : 5U)
                                                                : 
                                                               (7U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                    << 0x1aU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      >> 6U)))))))
                                                            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b10_ETC___05F_d693)))) 
                                                        << 3U) 
                                                       | (7U 
                                                          & ((((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                       << 6U) 
                                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                         >> 0x1aU)))) 
                                                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d588)) 
                                                                & (2U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                        << 1U) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                          >> 0x1fU))))) 
                                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d277)) 
                                                              & (7U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                      << 0x1aU) 
                                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                        >> 6U)))))
                                                              ? 
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[1U]
                                                              : 
                                                             ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                               << 0x1aU) 
                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                 >> 6U)))))) 
                                                     << 1U) 
                                                    | (((3U 
                                                         == 
                                                         (0x1fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1cU)))) 
                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_17_EQ_0b11_18_ETC___05F_d594)) 
                                                       | (((0x1cU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                 << 4U) 
                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                   >> 0x1cU)))) 
                                                           & (9U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                   << 0xdU) 
                                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     >> 0x13U))))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                  << 0x1aU) 
                                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                    >> 6U)))))))))));
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_12 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_13
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]);
    }
    __Vtemp4143[0U] = (IData)((((QData)((IData)(((4U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 2U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0xbU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0x15U)))
                                                  : 0U))) 
                                << 0x37U) | (((QData)((IData)(
                                                              (((4U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      << 2U) 
                                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                        >> 0x1eU)))) 
                                                                | (((5U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 2U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1eU)))) 
                                                                    & (0xdU 
                                                                       != 
                                                                       (0xfU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              >> 0x16U))))) 
                                                                   & (0xfU 
                                                                      != 
                                                                      (0xfU 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                           << 0xaU) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             >> 0x16U))))))
                                                                ? 2U
                                                                : 
                                                               ((((((0x1bU 
                                                                     != 
                                                                     (0x1fU 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 4U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1cU)))) 
                                                                    & (0x19U 
                                                                       != 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 4U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1cU))))) 
                                                                   & (5U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 4U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1cU))))) 
                                                                  & (4U 
                                                                     != 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 2U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1eU))))) 
                                                                 & (((5U 
                                                                      != 
                                                                      (7U 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 2U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1eU)))) 
                                                                     | (0xdU 
                                                                        == 
                                                                        (0xfU 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                             << 0xaU) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               >> 0x16U))))) 
                                                                    | (0xfU 
                                                                       == 
                                                                       (0xfU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              >> 0x16U))))))
                                                                 ? 0U
                                                                 : 1U)))) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 (((((5U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 2U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1eU)))) 
                                                                     & (~ 
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                         >> 0x18U))) 
                                                                    | (9U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 4U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1cU))))) 
                                                                   | (4U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 2U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1eU)))))
                                                                   ? 4U
                                                                   : 
                                                                  (((((((((0x19U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                          & (0x1bU 
                                                                             != 
                                                                             (0x1fU 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                         & (3U 
                                                                            != 
                                                                            (0x1fU 
                                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                        & (1U 
                                                                           != 
                                                                           (7U 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))) 
                                                                       & (0xdU 
                                                                          != 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 4U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                      & ((5U 
                                                                          != 
                                                                          (7U 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 2U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            >> 0x18U))) 
                                                                     & (9U 
                                                                        != 
                                                                        (0x1fU 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             << 4U) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                               >> 0x1cU))))) 
                                                                    & (4U 
                                                                       != 
                                                                       (7U 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 2U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1eU)))))
                                                                    ? 0U
                                                                    : 
                                                                   (((1U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 2U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1eU)))) 
                                                                     | (0xdU 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             << 4U) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                               >> 0x1cU)))))
                                                                     ? 1U
                                                                     : 
                                                                    (((((0x19U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              << 4U) 
                                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                        | (0x1bU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                       | (3U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 4U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                      & (~ 
                                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                          >> 0xfU)))
                                                                      ? 2U
                                                                      : 3U)))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (4U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 2U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1eU)))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (((1U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 4U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                         | ((((5U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                              & (0xaU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                             & (0xcU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                            & (0xeU 
                                                                               != 
                                                                               (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U)))))) 
                                                                        | (4U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (((3U 
                                                                             != 
                                                                             (3U 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 6U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1aU)))) 
                                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348))
                                                                            ? 6U
                                                                            : 
                                                                           ((1U 
                                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                             ? 
                                                                            ((0x80000000U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                              ? 
                                                                             ((0x40000000U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                               ? 
                                                                              ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                ? 6U
                                                                                : 
                                                                               ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_31_TO_7_0_6_0x2_ETC___05Fq2)
                                                                                 : 
                                                                                ((((4U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335)) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338))
                                                                                 ? 5U
                                                                                 : 6U))))
                                                                               : 
                                                                              ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                ? 
                                                                               ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 3U
                                                                                 : 6U)
                                                                                : 
                                                                               ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                                 ? 4U
                                                                                 : 6U)
                                                                                 : 
                                                                                (((2U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))) 
                                                                                & (3U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))
                                                                                 ? 2U
                                                                                 : 6U))))
                                                                              : 
                                                                             ((0x40000000U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                               ? 
                                                                              ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                ? 6U
                                                                                : 
                                                                               ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228) 
                                                                                & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d262) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d273)))
                                                                                 ? 8U
                                                                                 : 6U)))
                                                                               : 
                                                                              (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238))
                                                                                ? 8U
                                                                                : 6U)))
                                                                             : 
                                                                            ((0x80000000U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                              ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d373)
                                                                              : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d360)))))) 
                                                          << 0x2cU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1_ETC___05F_d709 
                                                            << 1U))))))));
    __Vtemp4143[1U] = ((0xf0000000U & (((((0x18U == 
                                           (0x1fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              << 4U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                                          | (4U == 
                                             (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 3U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1dU))))) 
                                         | (3U == (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 4U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1cU)))))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 1U)))) 
                                       << 0x1cU)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               ((4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xbU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x15U)))
                                                                                 : 0U))) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(
                                                                                (((4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (0xdU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xfU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((((((0x1bU 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                & (0x19U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (5U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (4U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))) 
                                                                                & (((5U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (0xdU 
                                                                                == 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                | (0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))))
                                                                                 ? 0U
                                                                                 : 1U)))) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                (((((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x18U))) 
                                                                                | (9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                | (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))))
                                                                                 ? 4U
                                                                                 : 
                                                                                (((((((((0x19U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                & (0x1bU 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (3U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (1U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))) 
                                                                                & (0xdU 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & ((5U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x18U))) 
                                                                                & (9U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (4U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))))
                                                                                 ? 1U
                                                                                 : 
                                                                                (((((0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                | (0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                | (3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                & (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0xfU)))
                                                                                 ? 2U
                                                                                 : 3U)))))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(
                                                                                (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))))) 
                                                                        << 0x31U) 
                                                                       | (((QData)((IData)(
                                                                                (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (0xaU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xcU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xeU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U)))))) 
                                                                                | (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))))) 
                                                                           << 0x30U) 
                                                                          | (((QData)((IData)(
                                                                                (((3U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 6U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1aU)))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_20_EQ_0b0___05FETC___05F_d348))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                                 ? 
                                                                                ((0x80000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_31_TO_7_0_6_0x2_ETC___05Fq2)
                                                                                 : 
                                                                                ((((4U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d335)) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d338))
                                                                                 ? 5U
                                                                                 : 6U))))
                                                                                 : 
                                                                                ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 3U
                                                                                 : 6U)
                                                                                 : 
                                                                                ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                                 ? 4U
                                                                                 : 6U)
                                                                                 : 
                                                                                (((2U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))) 
                                                                                & (3U 
                                                                                != 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))
                                                                                 ? 2U
                                                                                 : 6U))))
                                                                                 : 
                                                                                ((0x40000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 
                                                                                ((0x20000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x10000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 6U
                                                                                 : 
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228) 
                                                                                & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d262) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d273)))
                                                                                 ? 8U
                                                                                 : 6U)))
                                                                                 : 
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_20_21_AND_NOT___05FETC___05F_d228) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_2_ETC___05F_d238))
                                                                                 ? 8U
                                                                                 : 6U)))
                                                                                 : 
                                                                                ((0x80000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d373)
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_22_EQ_0b0___05FETC___05F_d360)))))) 
                                                                              << 0x2cU) 
                                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1_ETC___05F_d709 
                                                                                << 1U))))))) 
                                                             >> 0x20U)));
    __Vtemp4144[2U] = ((0xfffffffeU & (((((((((((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU)))) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          >> 6U))))) 
                                               & (9U 
                                                  != 
                                                  (0x7fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 0x13U))))) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 2U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1eU))))) 
                                             | (0xdU 
                                                == 
                                                (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU))))) 
                                            | (1U == 
                                               (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    << 2U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                      >> 0x1eU))))) 
                                           | (0x1bU 
                                              == (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU))))) 
                                          | (0x19U 
                                             == (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU))))) 
                                         | (((5U == 
                                              (7U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 2U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1eU)))) 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x18U)) 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                >> 6U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT____Vcellinp__instance_decoder_func_32_2__decoder_func_32_csrs[3U] 
                                                  >> 8U))))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                       << 1U)) | (0xfffffffU 
                                                  & (((((0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1cU)))) 
                                                        | (4U 
                                                           == 
                                                           (0xfU 
                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                << 3U) 
                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                  >> 0x1dU))))) 
                                                       | (3U 
                                                          == 
                                                          (0x1fU 
                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                               << 4U) 
                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                 >> 0x1cU)))))
                                                       ? 0U
                                                       : 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             >> 1U)))) 
                                                     >> 4U)));
    __Vtemp4145[2U] = ((0xffffffc0U & ((((((0x1bU == 
                                            (0x1fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 4U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                                           | (0xdU 
                                              == (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU))))) 
                                          | (5U == 
                                             (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU))))) 
                                         | ((0x1cU 
                                             == (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU)))) 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 8U)))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x17U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 9U)))) 
                                       << 6U)) | __Vtemp4144[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[0U] 
        = __Vtemp4143[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[1U] 
        = __Vtemp4143[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[2U] 
        = __Vtemp4145[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__SEXT_decoder_func_32_8_BITS_40_TO_9_99___05F_d300 
        = (((QData)((IData)((- (IData)((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[1U] 
                                              >> 8U)))))) 
            << 0x20U) | (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[1U] 
                                          << 0x17U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass__DOT__riscv__DOT__stage2__DOT__decoder_func_32___05F_d88[0U] 
                                            >> 9U)))));
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_13 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_14
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]);
    }
    if ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
          & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_14 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_15
                : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_15 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__w_15;
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_capture_write_request) 
              & (0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
                                         >> 0x14U))))) 
             & ((((((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index)) 
                      | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                     | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                    | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                   | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                  | (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                 | (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) 
                | (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[2U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[3U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[4U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[5U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[6U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[7U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[8U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[9U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xaU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xbU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xcU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xdU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xeU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xfU];
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU] = 0U;
    }
    vlTOPp->__Vtableidx13 = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__y___05Fh1784 
        = vlTOPp->__Vtable13_mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__y___05Fh1784
        [vlTOPp->__Vtableidx13];
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
           & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__CAN_FIRE_RL_routput 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__full_reg) 
           & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start 
        = (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_start)) 
           & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_capture_write_request) 
             & (0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
                                        >> 0x14U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i_D_IN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__MUX_i_write_1___05FSEL_2)
            ? (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i)))
            : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i_EN 
        = (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
            & (0x3fU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state_D_IN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__CAN_FIRE_RL_routput)
            ? 0U : (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
                     & (0x3fU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i)))
                     ? 2U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start)
                              ? 1U : 0U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state_EN 
        = ((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state)) 
             & (0x3fU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__i))) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__CAN_FIRE_RL_routput)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start));
    vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_sha_sha_rl_getOutput 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__result_fifo__DOT__empty_reg) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_sha__DOT__state))) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_outp_ready))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_sha_rl_start))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_capture_read_request)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_capture_write_request 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__empty_reg) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__empty_reg)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_resp__DOT__full_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg;
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index_D_IN 
        = ((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))));
    if ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[3U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[4U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[5U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[6U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[7U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[8U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[9U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xaU] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xbU] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xcU] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xdU] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU];
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xeU] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xfU] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? (IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]))))
                                    : (IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                                << 0x33U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                   << 0x13U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                     >> 0xdU))))))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[1U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? (IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0U]))) 
                                               >> 0x20U))
                                    : (IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                      >> 0xdU))) 
                                               >> 0x20U))))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[2U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? (IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                                << 0x33U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                   << 0x13U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                     >> 0xdU))))
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[2U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[3U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? (IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                                 << 0x33U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                      >> 0xdU))) 
                                               >> 0x20U))
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[3U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[4U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? (IData)((((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                 >> 0xdU))))
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[4U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[5U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? (IData)(((((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                             << 0x33U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                  >> 0xdU))) 
                                           >> 0x20U))
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[5U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[6U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? (IData)((((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                           >> 0xdU))))
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[6U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[7U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? (IData)(((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                         << 0x33U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                            << 0x13U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                              >> 0xdU))) 
                                       >> 0x20U)) : 
                           ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                             ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]
                             : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]
                                 : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[7U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[8U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? (IData)((((QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                    >> 0xdU))))
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[8U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[9U] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? (IData)(((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                                   << 0x13U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                     >> 0xdU))) 
                                   >> 0x20U)) : ((4U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]
                                                    : 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[9U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xaU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                << 0x33U) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                              << 0x13U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                >> 0xdU))))
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xaU]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xbU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                 >> 0xdU))) 
                               >> 0x20U)) : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                              ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]
                                              : ((4U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]
                                                    : 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xbU]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xcU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                            << 0x33U) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                          << 0x13U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                            >> 0xdU))))
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xcU]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xdU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                             << 0x33U) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                           << 0x13U) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                             >> 0xdU))) 
                           >> 0x20U)) : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                          ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]
                                          : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                              ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]
                                              : ((4U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]
                                                    : 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xdU]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xeU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]))))
                : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]
                    : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]
                        : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]
                            : ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]
                                : ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text_D_IN[0xfU] 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                ? (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xeU]))) 
                           >> 0x20U)) : ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                          ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]
                                          : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                              ? vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]
                                              : ((4U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]
                                                    : 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_rg_input_text[0xfU]))))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_resp_D_IN 
        = (((((0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
                                       >> 0x14U)))) 
              | (0xc0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
                                            >> 0x14U)))))
              ? 0U : 2U) << 4U) | (0xfU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_sha_sha_rg_start_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_sha_capture_write_request) 
            & (0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sha_s_xactor_f_wr_addr__DOT__data0_reg 
                                       >> 0x14U))))) 
           & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sha_sha_input_index)));
}
