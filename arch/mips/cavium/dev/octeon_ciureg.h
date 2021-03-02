/*	$NetBSD: octeon_ciureg.h,v 1.5 2016/08/20 06:34:22 skrll Exp $	*/

/*
 * Copyright (c) 2007 Internet Initiative Japan, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * CIU Registers
 */

#ifndef _OCTEON_CIUREG_H_
#define _OCTEON_CIUREG_H_

/* ---- register addresses */

#define	CIU_INT0_SUM0				UINT64_C(0x0001070000000000)
#define	CIU_INT1_SUM0				UINT64_C(0x0001070000000008)
#define	CIU_INT2_SUM0				UINT64_C(0x0001070000000010)
#define	CIU_INT3_SUM0				UINT64_C(0x0001070000000018)
#define	CIU_INT32_SUM0				UINT64_C(0x0001070000000100)
#define	CIU_INT_SUM1				UINT64_C(0x0001070000000108)
#define	CIU_INT0_EN0				UINT64_C(0x0001070000000200)
#define	CIU_INT1_EN0				UINT64_C(0x0001070000000210)
#define	CIU_INT2_EN0				UINT64_C(0x0001070000000220)
#define	CIU_INT3_EN0				UINT64_C(0x0001070000000230)
#define	CIU_INT32_EN0				UINT64_C(0x0001070000000400)
#define	CIU_INT0_EN1				UINT64_C(0x0001070000000208)
#define	CIU_INT1_EN1				UINT64_C(0x0001070000000218)
#define	CIU_INT2_EN1				UINT64_C(0x0001070000000228)
#define	CIU_INT3_EN1				UINT64_C(0x0001070000000238)
#define	CIU_INT32_EN1				UINT64_C(0x0001070000000408)
#define	CIU_TIM0				UINT64_C(0x0001070000000480)
#define	CIU_TIM1				UINT64_C(0x0001070000000488)
#define	CIU_TIM2				UINT64_C(0x0001070000000490)
#define	CIU_TIM3				UINT64_C(0x0001070000000498)
#define	CIU_WDOG0				UINT64_C(0x0001070000000500)
#define	CIU_WDOG1				UINT64_C(0x0001070000000508)
#define	CIU_PP_POKE0				UINT64_C(0x0001070000000580)
#define	CIU_PP_POKE1				UINT64_C(0x0001070000000588)
#define	CIU_MBOX_SET0				UINT64_C(0x0001070000000600)
#define	CIU_MBOX_SET1				UINT64_C(0x0001070000000608)
#define	CIU_MBOX_CLR0				UINT64_C(0x0001070000000680)
#define	CIU_MBOX_CLR1				UINT64_C(0x0001070000000688)
#define	CIU_PP_RST				UINT64_C(0x0001070000000700)
#define	CIU_PP_DBG				UINT64_C(0x0001070000000708)
#define	CIU_GSTOP				UINT64_C(0x0001070000000710)
#define	CIU_NMI					UINT64_C(0x0001070000000718)
#define	CIU_DINT				UINT64_C(0x0001070000000720)
#define	CIU_FUSE				UINT64_C(0x0001070000000728)
#define	CIU_BIST				UINT64_C(0x0001070000000730)
#define	CIU_SOFT_BIST				UINT64_C(0x0001070000000738)
#define	CIU_SOFT_RST				UINT64_C(0x0001070000000740)
#define	CIU_SOFT_PRST				UINT64_C(0x0001070000000748)
#define	CIU_PCI_INTA				UINT64_C(0x0001070000000750)
#define	CIU_INT4_SUM0				UINT64_C(0x0001070000000c00)
#define	CIU_INT4_SUM1				UINT64_C(0x0001070000000c08)
#define	CIU_INT4_EN00				UINT64_C(0x0001070000000c80)
#define	CIU_INT4_EN01				UINT64_C(0x0001070000000c88)
#define	CIU_INT4_EN10				UINT64_C(0x0001070000000c90)
#define	CIU_INT4_EN11				UINT64_C(0x0001070000000c98)

#define	CIU_BASE				UINT64_C(0x0001070000000000)

#define	CIU_INT0_SUM0_OFFSET			0x0000
#define	CIU_INT1_SUM0_OFFSET			0x0008
#define	CIU_INT2_SUM0_OFFSET			0x0010
#define	CIU_INT3_SUM0_OFFSET			0x0018
#define	CIU_INT32_SUM0_OFFSET			0x0100
#define	CIU_INT_SUM1_OFFSET			0x0108
#define	CIU_INT0_EN0_OFFSET			0x0200
#define	CIU_INT1_EN0_OFFSET			0x0210
#define	CIU_INT2_EN0_OFFSET			0x0220
#define	CIU_INT3_EN0_OFFSET			0x0230
#define	CIU_INT32_EN0_OFFSET			0x0400
#define	CIU_INT0_EN1_OFFSET			0x0208
#define	CIU_INT1_EN1_OFFSET			0x0218
#define	CIU_INT2_EN1_OFFSET			0x0228
#define	CIU_INT3_EN1_OFFSET			0x0238
#define	CIU_INT32_EN1_OFFSET			0x0408
#define	CIU_TIM0_OFFSET				0x0480
#define	CIU_TIM1_OFFSET				0x0488
#define	CIU_TIM2_OFFSET				0x0490
#define	CIU_TIM3_OFFSET				0x0498
#define	CIU_WDOG0_OFFSET			0x0500
#define	CIU_WDOG1_OFFSET			0x0508
#define	CIU_PP_POKE0_OFFSET			0x0580
#define	CIU_PP_POKE1_OFFSET			0x0588
#define	CIU_MBOX_SET0_OFFSET			0x0600
#define	CIU_MBOX_SET1_OFFSET			0x0608
#define	CIU_MBOX_CLR0_OFFSET			0x0680
#define	CIU_MBOX_CLR1_OFFSET			0x0688
#define	CIU_PP_RST_OFFSET			0x0700
#define	CIU_PP_DBG_OFFSET			0x0708
#define	CIU_GSTOP_OFFSET			0x0710
#define	CIU_NMI_OFFSET				0x0718
#define	CIU_DINT_OFFSET				0x0720
#define	CIU_FUSE_OFFSET				0x0728
#define	CIU_BIST_OFFSET				0x0730
#define	CIU_SOFT_BIST_OFFSET			0x0738
#define	CIU_SOFT_RST_OFFSET			0x0740
#define	CIU_SOFT_PRST_OFFSET			0x0748
#define	CIU_PCI_INTA_OFFSET			0x0750

/* ---- register bits */

/* ``interrupt bits'' shift values */

#define	_CIU_INT_XXX_63_SHIFT			0x3f
#define	_CIU_INT_XXX_62_SHIFT			0x3e
#define	_CIU_INT_XXX_61_SHIFT			0x3d
#define	_CIU_INT_XXX_60_SHIFT			0x3c
#define	_CIU_INT_XXX_59_SHIFT			0x3b
#define	_CIU_INT_MPI_SHIFT			0x3a
#define	_CIU_INT_PCM_SHIFT			0x39
#define	_CIU_INT_USB_SHIFT			0x38
#define	_CIU_INT_TIMER_3_SHIFT			0x37
#define	_CIU_INT_TIMER_2_SHIFT			0x36
#define	_CIU_INT_TIMER_1_SHIFT			0x35
#define	_CIU_INT_TIMER_0_SHIFT			0x34
#define	_CIU_INT_XXX_51_SHIFT			0x33
#define	_CIU_INT_IPD_DRP_SHIFT			0x32
#define	_CIU_INT_GMX_DRP_SHIFT			0x30
#define	_CIU_INT_TRACE_SHIFT			0x2f
#define	_CIU_INT_RML_SHIFT			0x2e
#define	_CIU_INT_TWSI_SHIFT			0x2d
#define	_CIU_INT_WDOG_SUM_SHIFT			0x2c
#define	_CIU_INT_PCI_MSI_63_48_SHIFT		0x2b
#define	_CIU_INT_PCI_MSI_47_32_SHIFT		0x2a
#define	_CIU_INT_PCI_MSI_31_16_SHIFT		0x29
#define	_CIU_INT_PCI_MSI_15_0_SHIFT		0x28
#define	_CIU_INT_PCI_INT_D_SHIFT		0x27
#define	_CIU_INT_PCI_INT_C_SHIFT		0x26
#define	_CIU_INT_PCI_INT_B_SHIFT		0x25
#define	_CIU_INT_PCI_INT_A_SHIFT		0x24
#define	_CIU_INT_UART_1_SHIFT			0x23
#define	_CIU_INT_UART_0_SHIFT			0x22
#define	_CIU_INT_MBOX_31_16_SHIFT		0x21
#define	_CIU_INT_MBOX_15_0_SHIFT		0x20
#define	_CIU_INT_GPIO_15_SHIFT			0x1f
#define	_CIU_INT_GPIO_14_SHIFT			0x1e
#define	_CIU_INT_GPIO_13_SHIFT			0x1d
#define	_CIU_INT_GPIO_12_SHIFT			0x1c
#define	_CIU_INT_GPIO_11_SHIFT			0x1b
#define	_CIU_INT_GPIO_10_SHIFT			0x1a
#define	_CIU_INT_GPIO_9_SHIFT			0x19
#define	_CIU_INT_GPIO_8_SHIFT			0x18
#define	_CIU_INT_GPIO_7_SHIFT			0x17
#define	_CIU_INT_GPIO_6_SHIFT			0x16
#define	_CIU_INT_GPIO_5_SHIFT			0x15
#define	_CIU_INT_GPIO_4_SHIFT			0x14
#define	_CIU_INT_GPIO_3_SHIFT			0x13
#define	_CIU_INT_GPIO_2_SHIFT			0x12
#define	_CIU_INT_GPIO_1_SHIFT			0x11
#define	_CIU_INT_GPIO_0_SHIFT			0x10
#define	_CIU_INT_WORKQ_15_SHIFT			0x0f
#define	_CIU_INT_WORKQ_14_SHIFT			0x0e
#define	_CIU_INT_WORKQ_13_SHIFT			0x0d
#define	_CIU_INT_WORKQ_12_SHIFT			0x0c
#define	_CIU_INT_WORKQ_11_SHIFT			0x0b
#define	_CIU_INT_WORKQ_10_SHIFT			0x0a
#define	_CIU_INT_WORKQ_9_SHIFT			0x09
#define	_CIU_INT_WORKQ_8_SHIFT			0x08
#define	_CIU_INT_WORKQ_7_SHIFT			0x07
#define	_CIU_INT_WORKQ_6_SHIFT			0x06
#define	_CIU_INT_WORKQ_5_SHIFT			0x05
#define	_CIU_INT_WORKQ_4_SHIFT			0x04
#define	_CIU_INT_WORKQ_3_SHIFT			0x03
#define	_CIU_INT_WORKQ_2_SHIFT			0x02
#define	_CIU_INT_WORKQ_1_SHIFT			0x01

#define	CIU_INTX_SUM0_XXX_63_59			UINT64_C(0xf800000000000000)
#define	CIU_INTX_SUM0_MPI			UINT64_C(0x0400000000000000)
#define	CIU_INTX_SUM0_PCM			UINT64_C(0x0200000000000000)
#define	CIU_INTX_SUM0_USB			UINT64_C(0x0100000000000000)
#define	CIU_INTX_SUM0_TIMER			UINT64_C(0x00f0000000000000)
#define	 CIU_INTX_SUM0_TIMER_3			UINT64_C(0x0080000000000000)
#define	 CIU_INTX_SUM0_TIMER_2			UINT64_C(0x0040000000000000)
#define	 CIU_INTX_SUM0_TIMER_1			UINT64_C(0x0020000000000000)
#define	 CIU_INTX_SUM0_TIMER_0			UINT64_C(0x0010000000000000)
#define	CIU_INTX_SUM0_XXX_51			UINT64_C(0x0008000000000000)
#define	CIU_INTX_SUM0_IPD_DRP			UINT64_C(0x0004000000000000)
#define	CIU_INTX_SUM0_XXX_49			UINT64_C(0x0002000000000000)
#define	CIU_INTX_SUM0_GMX_DRP			UINT64_C(0x0001000000000000)
#define	CIU_INTX_SUM0_TRACE			UINT64_C(0x0000800000000000)
#define	CIU_INTX_SUM0_RML			UINT64_C(0x0000400000000000)
#define	CIU_INTX_SUM0_TWSI			UINT64_C(0x0000200000000000)
#define	CIU_INTX_SUM0_WDOG_SUM			UINT64_C(0x0000100000000000)
#define	CIU_INTX_SUM0_PCI_MSI			UINT64_C(0x00000f0000000000)
#define	 CIU_INTX_SUM0_PCI_MSI_63_48		UINT64_C(0x0000080000000000)
#define	 CIU_INTX_SUM0_PCI_MSI_47_32		UINT64_C(0x0000040000000000)
#define	 CIU_INTX_SUM0_PCI_MSI_31_16		UINT64_C(0x0000020000000000)
#define	 CIU_INTX_SUM0_PCI_MSI_15_0		UINT64_C(0x0000010000000000)
#define	CIU_INTX_SUM0_PCI_INT			UINT64_C(0x000000f000000000)
#define	 CIU_INTX_SUM0_PCI_INT_D		UINT64_C(0x0000008000000000)
#define	 CIU_INTX_SUM0_PCI_INT_C		UINT64_C(0x0000004000000000)
#define	 CIU_INTX_SUM0_PCI_INT_B		UINT64_C(0x0000002000000000)
#define	 CIU_INTX_SUM0_PCI_INT_A		UINT64_C(0x0000001000000000)
#define	CIU_INTX_SUM0_UART			UINT64_C(0x0000000c00000000)
#define	 CIU_INTX_SUM0_UART_1			UINT64_C(0x0000000800000000)
#define	 CIU_INTX_SUM0_UART_0			UINT64_C(0x0000000400000000)
#define	CIU_INTX_SUM0_MBOX			UINT64_C(0x0000000300000000)
#define	 CIU_INTX_SUM0_MBOX_31_16		UINT64_C(0x0000000200000000)
#define	 CIU_INTX_SUM0_MBOX_15_0		UINT64_C(0x0000000100000000)
#define	CIU_INTX_SUM0_GPIO			UINT64_C(0x00000000ffff0000)
#define	 CIU_INTX_SUM0_GPIO_15			UINT64_C(0x0000000080000000)
#define	 CIU_INTX_SUM0_GPIO_14			UINT64_C(0x0000000040000000)
#define	 CIU_INTX_SUM0_GPIO_13			UINT64_C(0x0000000020000000)
#define	 CIU_INTX_SUM0_GPIO_12			UINT64_C(0x0000000010000000)
#define	 CIU_INTX_SUM0_GPIO_11			UINT64_C(0x0000000008000000)
#define	 CIU_INTX_SUM0_GPIO_10			UINT64_C(0x0000000004000000)
#define	 CIU_INTX_SUM0_GPIO_9			UINT64_C(0x0000000002000000)
#define	 CIU_INTX_SUM0_GPIO_8			UINT64_C(0x0000000001000000)
#define	 CIU_INTX_SUM0_GPIO_7			UINT64_C(0x0000000000800000)
#define	 CIU_INTX_SUM0_GPIO_6			UINT64_C(0x0000000000400000)
#define	 CIU_INTX_SUM0_GPIO_5			UINT64_C(0x0000000000200000)
#define	 CIU_INTX_SUM0_GPIO_4			UINT64_C(0x0000000000100000)
#define	 CIU_INTX_SUM0_GPIO_3			UINT64_C(0x0000000000080000)
#define	 CIU_INTX_SUM0_GPIO_2			UINT64_C(0x0000000000040000)
#define	 CIU_INTX_SUM0_GPIO_1			UINT64_C(0x0000000000020000)
#define	 CIU_INTX_SUM0_GPIO_0			UINT64_C(0x0000000000010000)
#define	CIU_INTX_SUM0_WORKQ			UINT64_C(0x000000000000ffff)
#define	 CIU_INTX_SUM0_WORKQ_15			UINT64_C(0x0000000000008000)
#define	 CIU_INTX_SUM0_WORKQ_14			UINT64_C(0x0000000000004000)
#define	 CIU_INTX_SUM0_WORKQ_13			UINT64_C(0x0000000000002000)
#define	 CIU_INTX_SUM0_WORKQ_12			UINT64_C(0x0000000000001000)
#define	 CIU_INTX_SUM0_WORKQ_11			UINT64_C(0x0000000000000800)
#define	 CIU_INTX_SUM0_WORKQ_10			UINT64_C(0x0000000000000400)
#define	 CIU_INTX_SUM0_WORKQ_9			UINT64_C(0x0000000000000200)
#define	 CIU_INTX_SUM0_WORKQ_8			UINT64_C(0x0000000000000100)
#define	 CIU_INTX_SUM0_WORKQ_7			UINT64_C(0x0000000000000080)
#define	 CIU_INTX_SUM0_WORKQ_6			UINT64_C(0x0000000000000040)
#define	 CIU_INTX_SUM0_WORKQ_5			UINT64_C(0x0000000000000020)
#define	 CIU_INTX_SUM0_WORKQ_4			UINT64_C(0x0000000000000010)
#define	 CIU_INTX_SUM0_WORKQ_3			UINT64_C(0x0000000000000008)
#define	 CIU_INTX_SUM0_WORKQ_2			UINT64_C(0x0000000000000004)
#define	 CIU_INTX_SUM0_WORKQ_1			UINT64_C(0x0000000000000002)
#define	 CIU_INTX_SUM0_WORKQ_0			UINT64_C(0x0000000000000001)

#define	CIU_INT_SUM1_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_INT_SUM1_WDOG			UINT64_C(0x0000000000000001)

#define	CIU_INTX_EN0_XXX_63_59			UINT64_C(0xf800000000000000)
#define	CIU_INTX_EN0_MPI			UINT64_C(0x0400000000000000)
#define	CIU_INTX_EN0_PCM			UINT64_C(0x0200000000000000)
#define	CIU_INTX_EN0_USB			UINT64_C(0x0100000000000000)
#define	CIU_INTX_EN0_TIMER			UINT64_C(0x00f0000000000000)
#define	 CIU_INTX_EN0_TIMER_3			UINT64_C(0x0080000000000000)
#define	 CIU_INTX_EN0_TIMER_2			UINT64_C(0x0040000000000000)
#define	 CIU_INTX_EN0_TIMER_1			UINT64_C(0x0020000000000000)
#define	 CIU_INTX_EN0_TIMER_0			UINT64_C(0x0010000000000000)
#define	CIU_INTX_EN0_XXX_51			UINT64_C(0x0008000000000000)
#define	CIU_INTX_EN0_IPD_DRP			UINT64_C(0x0004000000000000)
#define	CIU_INTX_EN0_XXX_49			UINT64_C(0x0002000000000000)
#define	CIU_INTX_EN0_GMX_DRP			UINT64_C(0x0001000000000000)
#define	CIU_INTX_EN0_TRACE			UINT64_C(0x0000800000000000)
#define	CIU_INTX_EN0_RML			UINT64_C(0x0000400000000000)
#define	CIU_INTX_EN0_TWSI			UINT64_C(0x0000200000000000)
#define	CIU_INTX_EN0_WDOG_SUM			UINT64_C(0x0000100000000000)
#define	CIU_INTX_EN0_PCI_MSI			UINT64_C(0x00000f0000000000)
#define	 CIU_INTX_EN0_PCI_MSI_63_48		UINT64_C(0x0000080000000000)
#define	 CIU_INTX_EN0_PCI_MSI_47_32		UINT64_C(0x0000040000000000)
#define	 CIU_INTX_EN0_PCI_MSI_31_16		UINT64_C(0x0000020000000000)
#define	 CIU_INTX_EN0_PCI_MSI_15_0		UINT64_C(0x0000010000000000)
#define	CIU_INTX_EN0_PCI_INT			UINT64_C(0x000000f000000000)
#define	 CIU_INTX_EN0_PCI_INT_D			UINT64_C(0x0000008000000000)
#define	 CIU_INTX_EN0_PCI_INT_C			UINT64_C(0x0000004000000000)
#define	 CIU_INTX_EN0_PCI_INT_B			UINT64_C(0x0000002000000000)
#define	 CIU_INTX_EN0_PCI_INT_A			UINT64_C(0x0000001000000000)
#define	CIU_INTX_EN0_UART			UINT64_C(0x0000000c00000000)
#define	 CIU_INTX_EN0_UART_1			UINT64_C(0x0000000800000000)
#define	 CIU_INTX_EN0_UART_0			UINT64_C(0x0000000400000000)
#define	CIU_INTX_EN0_MBOX			UINT64_C(0x0000000300000000)
#define	 CIU_INTX_EN0_MBOX_31_16		UINT64_C(0x0000000200000000)
#define	 CIU_INTX_EN0_MBOX_15_0			UINT64_C(0x0000000100000000)
#define	CIU_INTX_EN0_GPIO			UINT64_C(0x00000000ffff0000)
#define	 CIU_INTX_EN0_GPIO_15			UINT64_C(0x0000000080000000)
#define	 CIU_INTX_EN0_GPIO_14			UINT64_C(0x0000000040000000)
#define	 CIU_INTX_EN0_GPIO_13			UINT64_C(0x0000000020000000)
#define	 CIU_INTX_EN0_GPIO_12			UINT64_C(0x0000000010000000)
#define	 CIU_INTX_EN0_GPIO_11			UINT64_C(0x0000000008000000)
#define	 CIU_INTX_EN0_GPIO_10			UINT64_C(0x0000000004000000)
#define	 CIU_INTX_EN0_GPIO_9			UINT64_C(0x0000000002000000)
#define	 CIU_INTX_EN0_GPIO_8			UINT64_C(0x0000000001000000)
#define	 CIU_INTX_EN0_GPIO_7			UINT64_C(0x0000000000800000)
#define	 CIU_INTX_EN0_GPIO_6			UINT64_C(0x0000000000400000)
#define	 CIU_INTX_EN0_GPIO_5			UINT64_C(0x0000000000200000)
#define	 CIU_INTX_EN0_GPIO_4			UINT64_C(0x0000000000100000)
#define	 CIU_INTX_EN0_GPIO_3			UINT64_C(0x0000000000080000)
#define	 CIU_INTX_EN0_GPIO_2			UINT64_C(0x0000000000040000)
#define	 CIU_INTX_EN0_GPIO_1			UINT64_C(0x0000000000020000)
#define	 CIU_INTX_EN0_GPIO_0			UINT64_C(0x0000000000010000)
#define	CIU_INTX_EN0_WORKQ			UINT64_C(0x000000000000ffff)
#define	 CIU_INTX_EN0_WORKQ_15			UINT64_C(0x0000000000008000)
#define	 CIU_INTX_EN0_WORKQ_14			UINT64_C(0x0000000000004000)
#define	 CIU_INTX_EN0_WORKQ_13			UINT64_C(0x0000000000002000)
#define	 CIU_INTX_EN0_WORKQ_12			UINT64_C(0x0000000000001000)
#define	 CIU_INTX_EN0_WORKQ_11			UINT64_C(0x0000000000000800)
#define	 CIU_INTX_EN0_WORKQ_10			UINT64_C(0x0000000000000400)
#define	 CIU_INTX_EN0_WORKQ_9			UINT64_C(0x0000000000000200)
#define	 CIU_INTX_EN0_WORKQ_8			UINT64_C(0x0000000000000100)
#define	 CIU_INTX_EN0_WORKQ_7			UINT64_C(0x0000000000000080)
#define	 CIU_INTX_EN0_WORKQ_6			UINT64_C(0x0000000000000040)
#define	 CIU_INTX_EN0_WORKQ_5			UINT64_C(0x0000000000000020)
#define	 CIU_INTX_EN0_WORKQ_4			UINT64_C(0x0000000000000010)
#define	 CIU_INTX_EN0_WORKQ_3			UINT64_C(0x0000000000000008)
#define	 CIU_INTX_EN0_WORKQ_2			UINT64_C(0x0000000000000004)
#define	 CIU_INTX_EN0_WORKQ_1			UINT64_C(0x0000000000000002)
#define	 CIU_INTX_EN0_WORKQ_0			UINT64_C(0x0000000000000001)

#define	CIU_INTX_EN1_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_INTX_EN1_WDOG			UINT64_C(0x0000000000000001)

#define	CIU_TIMX_XXX_63_37			UINT64_C(0xffffffe000000000)
#define	CIU_TIMX_ONE_SHOT			UINT64_C(0x0000001000000000)
#define	CIU_TIMX_LEN				UINT64_C(0x0000000fffffffff)

#define	CIU_WDOGX_XXX_63_46			UINT64_C(0xffffc00000000000)
#define	CIU_WDOGX_GSTOPEN			UINT64_C(0x0000200000000000)
#define	CIU_WDOGX_DSTOP				UINT64_C(0x0000100000000000)
#define	CIU_WDOGX_CNT				UINT64_C(0x00000ffffff00000)
#define	CIU_WDOGX_LEN				UINT64_C(0x00000000000ffff0)
#define	CIU_WDOGX_STATE				UINT64_C(0x000000000000000c)
#define	CIU_WDOGX_MODE				UINT64_C(0x0000000000000003)

#define	CIU_PP_POKEX_XXX_63_0			UINT64_C(0xffffffffffffffff)

#define	CIU_MBOX_SETX_XXX_63_32			UINT64_C(0xffffffff00000000)
#define	CIU_MBOX_SETX_SET			UINT64_C(0x00000000ffffffff)

#define	CIU_MBOX_CLRX_XXX_63_32			UINT64_C(0xffffffff00000000)
#define	CIU_MBOX_CLRX_CLR			UINT64_C(0x00000000ffffffff)

#define	CIU_PP_RST_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_PP_RST_RST0				UINT64_C(0x0000000000000001)

#define	CIU_PP_DBG_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_PP_DBG_PPDBG			UINT64_C(0x0000000000000001)

#define	CIU_GSTOP_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_GSTOP_GSTOP				UINT64_C(0x0000000000000001)

#define	CIU_NMI_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_NMI_NMI				UINT64_C(0x0000000000000001)

#define	CIU_DINT_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_DINT_DINT				UINT64_C(0x0000000000000001)

#define	CIU_FUSE_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_FUSE_FUSE				UINT64_C(0x0000000000000001)

#define	CIU_BIST_XXX_63_4			UINT64_C(0xfffffffffffffff0)
#define	CIU_BIST_BIST				UINT64_C(0x000000000000000f)

#define	CIU_SOFT_BIST_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_SOFT_BIST_SOFT_BIST			UINT64_C(0x0000000000000001)

#define	CIU_SOFT_RST_XXX_63_1			UINT64_C(0xfffffffffffffffe)
#define	CIU_SOFT_RST_SOFT_RST			UINT64_C(0x0000000000000001)

#define	CIU_SOFT_PRST_XXX_63_1			UINT64_C(0xfffffffffffffff8)
#define	CIU_SOFT_PRST_HOST64			UINT64_C(0x0000000000000004)
#define	CIU_SOFT_PRST_NPI			UINT64_C(0x0000000000000002)
#define	CIU_SOFT_PRST_SOFT_PRST			UINT64_C(0x0000000000000001)

#define	CIU_PCI_INTA_XXX_63_2			UINT64_C(0xfffffffffffffffc)
#define	CIU_PCI_INTA_INT			UINT64_C(0x0000000000000003)

/* -- snprintb(9) */

#define	CIU_INTX_SUM0_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x3a"		"MPI\0" \
	"b\x39"		"PCM\0" \
	"b\x38"		"USB\0" \
	"b\x37"		"TIMER_3\0" \
	"b\x36"		"TIMER_2\0" \
	"b\x35"		"TIMER_1\0" \
	"b\x34"		"TIMER_0\0" \
	"f\x34\x04"	"TIMER\0" \
	"b\x32"		"IPD_DRP\0" \
	"b\x30"		"GMX_DRP\0" \
	"b\x2f"		"TRACE\0" \
	"b\x2e"		"RML\0" \
	"b\x2d"		"TWSI\0" \
	"b\x2c"		"WDOG_SUM\0" \
	"b\x2b"		"PCI_MSI_63_48\0" \
	"b\x2a"		"PCI_MSI_47_32\0" \
	"b\x29"		"PCI_MSI_31_16\0" \
	"b\x28"		"PCI_MSI_15_0\0" \
	"f\x28\x04"	"PCI_MSI\0" \
	"b\x27"		"PCI_INT_D\0" \
	"b\x26"		"PCI_INT_C\0" \
	"b\x25"		"PCI_INT_B\0" \
	"f\x24\x04"	"PCI_INT\0" \
	"b\x24"		"PCI_INT_A\0" \
	"b\x23"		"UART_1\0" \
	"b\x22"		"UART_0\0" \
	"f\x22\x02"	"UART\0" \
	"b\x21"		"MBOX_31_16\0" \
	"f\x20\x02"	"MBOX\0" \
	"b\x20"		"MBOX_15_0\0" \
	"b\x1f"		"GPIO_15\0" \
	"b\x1e"		"GPIO_14\0" \
	"b\x1d"		"GPIO_13\0" \
	"b\x1c"		"GPIO_12\0" \
	"b\x1b"		"GPIO_11\0" \
	"b\x1a"		"GPIO_10\0" \
	"b\x19"		"GPIO_9\0" \
	"b\x18"		"GPIO_8\0" \
	"b\x17"		"GPIO_7\0" \
	"b\x16"		"GPIO_6\0" \
	"b\x15"		"GPIO_5\0" \
	"b\x14"		"GPIO_4\0" \
	"b\x13"		"GPIO_3\0" \
	"b\x12"		"GPIO_2\0" \
	"b\x11"		"GPIO_1\0" \
	"b\x10"		"GPIO_0\0" \
	"f\x10\x10"	"GPIO\0" \
	"b\x0f"		"WORKQ_15\0" \
	"b\x0e"		"WORKQ_14\0" \
	"b\x0d"		"WORKQ_13\0" \
	"b\x0c"		"WORKQ_12\0" \
	"b\x0b"		"WORKQ_11\0" \
	"b\x0a"		"WORKQ_10\0" \
	"b\x09"		"WORKQ_9\0" \
	"b\x08"		"WORKQ_8\0" \
	"b\x07"		"WORKQ_7\0" \
	"b\x06"		"WORKQ_6\0" \
	"b\x05"		"WORKQ_5\0" \
	"b\x04"		"WORKQ_4\0" \
	"b\x03"		"WORKQ_3\0" \
	"b\x02"		"WORKQ_2\0" \
	"b\x01"		"WORKQ_1\0" \
	"b\x00"		"WORKQ_0\0" \
	"f\x00\x10"	"WORKQ\0"
#define	CIU_INT0_SUM0_BITS			CIU_INTX_SUM0_BITS
#define	CIU_INT1_SUM0_BITS			CIU_INTX_SUM0_BITS
#define	CIU_INT2_SUM0_BITS			CIU_INTX_SUM0_BITS
#define	CIU_INT3_SUM0_BITS			CIU_INTX_SUM0_BITS
#define	CIU_INT32_SUM0_BITS			CIU_INTX_SUM0_BITS

#define	CIU_INT_SUM1_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"WDOG\0"

#define	CIU_INTX_EN0_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x3a"		"MPI\0" \
	"b\x39"		"PCM\0" \
	"b\x38"		"USB\0" \
	"b\x37"		"TIMER_3\0" \
	"b\x36"		"TIMER_2\0" \
	"b\x35"		"TIMER_1\0" \
	"b\x34"		"TIMER_0\0" \
	"f\x34\x04"	"TIMER\0" \
	"b\x32"		"IPD_DRP\0" \
	"b\x30"		"GMX_DRP\0" \
	"b\x2f"		"TRACE\0" \
	"b\x2e"		"RML\0" \
	"b\x2d"		"TWSI\0" \
	"b\x2c"		"WDOG_SUM\0" \
	"b\x2b"		"PCI_MSI_63_48\0" \
	"b\x2a"		"PCI_MSI_47_32\0" \
	"b\x29"		"PCI_MSI_31_16\0" \
	"b\x28"		"PCI_MSI_15_0\0" \
	"f\x28\x04"	"PCI_MSI\0" \
	"b\x27"		"PCI_INT_D\0" \
	"b\x26"		"PCI_INT_C\0" \
	"b\x25"		"PCI_INT_B\0" \
	"f\x24\x04"	"PCI_INT\0" \
	"b\x24"		"PCI_INT_A\0" \
	"b\x23"		"UART_1\0" \
	"b\x22"		"UART_0\0" \
	"f\x22\x02"	"UART\0" \
	"b\x21"		"MBOX_31_16\0" \
	"f\x20\x02"	"MBOX\0" \
	"b\x20"		"MBOX_15_0\0" \
	"b\x1f"		"GPIO_15\0" \
	"b\x1e"		"GPIO_14\0" \
	"b\x1d"		"GPIO_13\0" \
	"b\x1c"		"GPIO_12\0" \
	"b\x1b"		"GPIO_11\0" \
	"b\x1a"		"GPIO_10\0" \
	"b\x19"		"GPIO_9\0" \
	"b\x18"		"GPIO_8\0" \
	"b\x17"		"GPIO_7\0" \
	"b\x16"		"GPIO_6\0" \
	"b\x15"		"GPIO_5\0" \
	"b\x14"		"GPIO_4\0" \
	"b\x13"		"GPIO_3\0" \
	"b\x12"		"GPIO_2\0" \
	"b\x11"		"GPIO_1\0" \
	"b\x10"		"GPIO_0\0" \
	"f\x10\x10"	"GPIO\0" \
	"b\x0f"		"WORKQ_15\0" \
	"b\x0e"		"WORKQ_14\0" \
	"b\x0d"		"WORKQ_13\0" \
	"b\x0c"		"WORKQ_12\0" \
	"b\x0b"		"WORKQ_11\0" \
	"b\x0a"		"WORKQ_10\0" \
	"b\x09"		"WORKQ_9\0" \
	"b\x08"		"WORKQ_8\0" \
	"b\x07"		"WORKQ_7\0" \
	"b\x06"		"WORKQ_6\0" \
	"b\x05"		"WORKQ_5\0" \
	"b\x04"		"WORKQ_4\0" \
	"b\x03"		"WORKQ_3\0" \
	"b\x02"		"WORKQ_2\0" \
	"b\x01"		"WORKQ_1\0" \
	"b\x00"		"WORKQ_0\0" \
	"f\x00\x10"	"WORKQ\0"
#define	CIU_INT0_EN0_BITS			CIU_INTX_EN0_BITS
#define	CIU_INT1_EN0_BITS			CIU_INTX_EN0_BITS
#define	CIU_INT2_EN0_BITS			CIU_INTX_EN0_BITS
#define	CIU_INT3_EN0_BITS			CIU_INTX_EN0_BITS
#define	CIU_INT32_EN0_BITS			CIU_INTX_EN0_BITS

#define	CIU_INTX_EN1_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"WDOG\0"
#define	CIU_INT0_EN1_BITS			CIU_INTX_EN1_BITS
#define	CIU_INT1_EN1_BITS			CIU_INTX_EN1_BITS
#define	CIU_INT2_EN1_BITS			CIU_INTX_EN1_BITS
#define	CIU_INT3_EN1_BITS			CIU_INTX_EN1_BITS
#define	CIU_INT32_EN1_BITS			CIU_INTX_EN1_BITS

#define	CIU_TIMX_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x24"		"ONE_SHOT\0" \
	"f\x00\x24"	"LEN\0"
#define	CIU_TIM0_BITS				CIU_TIMX_BITS
#define	CIU_TIM1_BITS				CIU_TIMX_BITS
#define	CIU_TIM2_BITS				CIU_TIMX_BITS
#define	CIU_TIM3_BITS				CIU_TIMX_BITS
#define	CIU_TIM32_BITS				CIU_TIMX_BITS

#define	CIU_WDOGX_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x2d"		"GSTOPEN\0" \
	"b\x2c"		"DSTOP\0" \
	"f\x14\x18"	"CNT\0" \
	"f\x04\x10"	"LEN\0" \
	"f\x02\x02"	"STATE\0" \
	"f\x00\x02"	"MODE\0"
#define	CIU_WDOG0_BITS				CIU_WDOGX_BITS
#define	CIU_WDOG1_BITS				CIU_WDOGX_BITS

#if 0
#define	CIU_PP_POKEX_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \

#define	CIU_PP_POKE0_BITS			CIU_PP_POKEX_BITS
#define	CIU_PP_POKE1_BITS			CIU_PP_POKEX_BITS
#endif

#define	CIU_MBOX_SETX_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"f\x00\x20"	"SET\0"
#define	CIU_MBOX_SET0_BITS			CIU_MBOX_SETX_BITS
#define	CIU_MBOX_SET1_BITS			CIU_MBOX_SETX_BITS

#define	CIU_MBOX_CLRX_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"f\x00\x20"	"CLR\0"
#define	CIU_MBOX_CLR0_BITS			CIU_MBOX_CLRX_BITS
#define	CIU_MBOX_CLR1_BITS			CIU_MBOX_CLRX_BITS

#define	CIU_PP_RST_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"RST0\0"

#define	CIU_PP_DBG_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"PPDBG\0"

#define	CIU_GSTOP_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"GSTOP\0"

#define	CIU_NMI_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"NMI\0"

#define	CIU_DINT_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"DINT\0"

#define	CIU_FUSE_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"FUSE\0"

#define	CIU_BIST_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"f\x00\x04"	"BIST\0"

#define	CIU_SOFT_BIST_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"SOFT_BIST\0"

#define	CIU_SOFT_RST_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x00"		"SOFT_RST\0"

#define	CIU_SOFT_PRST_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"b\x02"		"HOST64\0" \
	"b\x01"		"NPI\0" \
	"b\x00"		"SOFT_PRST\0"

#define	CIU_PCI_INTA_BITS \
	"\177"		/* new format */ \
	"\020"		/* hex display */ \
	"\020"		/* %016x format */ \
	"f\x00\x02"	"INT\0"

#endif /* _OCTEON_CIUREG_H_ */
