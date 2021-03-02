/*	$NetBSD: imx7_ccmvar.h,v 1.1 2016/05/17 06:44:45 ryo Exp $	*/

/*
 * Copyright (c) 2015 Internet Initiative Japan, Inc.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _ARM_IMX_IMX7_CCMVAR_H_
#define _ARM_IMX_IMX7_CCMVAR_H_

enum imx7_clock {
	/* OSC */
	IMX7CLK_OSC_24M,	/* fixed */
	IMX7CLK_REF_1M,		/* fixed */
	IMX7CLK_OSC_32K,	/* fixed */

	/* external clocks */
	IMX7CLK_EXT_CLK1,
	IMX7CLK_EXT_CLK2,
	IMX7CLK_EXT_CLK3,
	IMX7CLK_EXT_CLK4,

	/* PLLs */
	IMX7CLK_ARM_PLL,
	IMX7CLK_SYS_PLL,
	IMX7CLK_ENET_PLL,	/* fixed */
	IMX7CLK_AUDIO_PLL,
	IMX7CLK_VIDEO_PLL,
	IMX7CLK_DDR_PLL,
	IMX7CLK_USB_PLL,	/* fixed? */

	/* PLL PFDs */
	IMX7CLK_SYS_PLL_PFD0,
	IMX7CLK_SYS_PLL_PFD1,
	IMX7CLK_SYS_PLL_PFD2,
	IMX7CLK_SYS_PLL_PFD3,
	IMX7CLK_SYS_PLL_PFD4,
	IMX7CLK_SYS_PLL_PFD5,
	IMX7CLK_SYS_PLL_PFD6,
	IMX7CLK_SYS_PLL_PFD7,

	/* fixed divided */
	IMX7CLK_SYS_PLL_DIV2,
	IMX7CLK_SYS_PLL_DIV4,
	IMX7CLK_SYS_PLL_PFD0_DIV2,
	IMX7CLK_SYS_PLL_PFD1_DIV2,
	IMX7CLK_SYS_PLL_PFD2_DIV2,
	IMX7CLK_ENET_PLL_DIV2,
	IMX7CLK_ENET_PLL_DIV4,
	IMX7CLK_ENET_PLL_DIV8,
	IMX7CLK_ENET_PLL_DIV10,
	IMX7CLK_ENET_PLL_DIV20,
	IMX7CLK_ENET_PLL_DIV25,
	IMX7CLK_ENET_PLL_DIV40,
	IMX7CLK_ENET_PLL_DIV50,
	IMX7CLK_DDR_PLL_DIV2,

	/* root clocks */
	IMX7CLK_ARM_A7_CLK_ROOT,
	IMX7CLK_ARM_M4_CLK_ROOT,
	IMX7CLK_MAIN_AXI_CLK_ROOT,
	IMX7CLK_DISP_AXI_CLK_ROOT,
	IMX7CLK_ENET_AXI_CLK_ROOT,
	IMX7CLK_NAND_USDHC_BUS_CLK_ROOT,
	IMX7CLK_AHB_CLK_ROOT,
	IMX7CLK_IPG_CLK_ROOT,
	IMX7CLK_DRAM_PHYM_CLK_ROOT,
	IMX7CLK_DRAM_CLK_ROOT,
	IMX7CLK_DRAM_PHYM_ALT_CLK_ROOT,
	IMX7CLK_DRAM_ALT_CLK_ROOT,
	IMX7CLK_USB_HSIC_CLK_ROOT,
	IMX7CLK_PCIE_CTRL_CLK_ROOT,
	IMX7CLK_PCIE_PHY_CLK_ROOT,
	IMX7CLK_EPDC_PIXEL_CLK_ROOT,
	IMX7CLK_LCDIF_PIXEL_CLK_ROOT,
	IMX7CLK_MIPI_DSI_CLK_ROOT,
	IMX7CLK_MIPI_CSI_CLK_ROOT,
	IMX7CLK_MIPI_DPHY_REF_CLK_ROOT,
	IMX7CLK_SAI1_CLK_ROOT,
	IMX7CLK_SAI2_CLK_ROOT,
	IMX7CLK_SAI3_CLK_ROOT,
	IMX7CLK_ENET1_REF_CLK_ROOT,
	IMX7CLK_ENET1_TIME_CLK_ROOT,
	IMX7CLK_ENET2_REF_CLK_ROOT,
	IMX7CLK_ENET2_TIME_CLK_ROOT,
	IMX7CLK_ENET_PHY_REF_CLK_ROOT,
	IMX7CLK_EIM_CLK_ROOT,
	IMX7CLK_NAND_CLK_ROOT,
	IMX7CLK_QSPI_CLK_ROOT,
	IMX7CLK_USDHC1_CLK_ROOT,
	IMX7CLK_USDHC2_CLK_ROOT,
	IMX7CLK_USDHC3_CLK_ROOT,
	IMX7CLK_CAN1_CLK_ROOT,
	IMX7CLK_CAN2_CLK_ROOT,
	IMX7CLK_I2C1_CLK_ROOT,
	IMX7CLK_I2C2_CLK_ROOT,
	IMX7CLK_I2C3_CLK_ROOT,
	IMX7CLK_I2C4_CLK_ROOT,
	IMX7CLK_UART1_CLK_ROOT,
	IMX7CLK_UART2_CLK_ROOT,
	IMX7CLK_UART3_CLK_ROOT,
	IMX7CLK_UART4_CLK_ROOT,
	IMX7CLK_UART5_CLK_ROOT,
	IMX7CLK_UART6_CLK_ROOT,
	IMX7CLK_UART7_CLK_ROOT,
	IMX7CLK_ECSPI1_CLK_ROOT,
	IMX7CLK_ECSPI2_CLK_ROOT,
	IMX7CLK_ECSPI3_CLK_ROOT,
	IMX7CLK_ECSPI4_CLK_ROOT,
	IMX7CLK_PWM1_CLK_ROOT,
	IMX7CLK_PWM2_CLK_ROOT,
	IMX7CLK_PWM3_CLK_ROOT,
	IMX7CLK_PWM4_CLK_ROOT,
	IMX7CLK_FLEXTIMER1_CLK_ROOT,
	IMX7CLK_FLEXTIMER2_CLK_ROOT,
	IMX7CLK_SIM1_CLK_ROOT,
	IMX7CLK_SIM2_CLK_ROOT,
	IMX7CLK_GPT1_CLK_ROOT,
	IMX7CLK_GPT2_CLK_ROOT,
	IMX7CLK_GPT3_CLK_ROOT,
	IMX7CLK_GPT4_CLK_ROOT,
	IMX7CLK_TRACE_CLK_ROOT,
	IMX7CLK_WDOG_CLK_ROOT,
	IMX7CLK_CSI_MCLK_CLK_ROOT,
	IMX7CLK_AUDIO_MCLK_CLK_ROOT,
	IMX7CLK_CCM_CLKO1,
	IMX7CLK_CCM_CLKO2
};

uint32_t imx7_ccm_read(uint32_t);
void imx7_ccm_write(uint32_t, uint32_t);
uint32_t imx7_ccm_analog_read(uint32_t);
void imx7_ccm_analog_write(uint32_t, uint32_t);
int imx7_pll_power(uint32_t, int);
uint32_t imx7_get_clock(enum imx7_clock);
int imx7_set_clock(enum imx7_clock, uint32_t);

#endif /* _ARM_IMX_IMX7_CCMVAR_H_ */
