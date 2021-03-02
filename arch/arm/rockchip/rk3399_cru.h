/* $NetBSD: rk3399_cru.h,v 1.1 2018/08/12 16:48:05 jmcneill Exp $ */

/*-
 * Copyright (c) 2018 Jared McNeill <jmcneill@invisible.ca>
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
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _RK3399_CRU_H
#define _RK3399_CRU_H

/*
 * Clocks
 */

#define	RK3399_PLL_APLLL			1
#define	RK3399_PLL_APLLB			2
#define	RK3399_PLL_DPLL				3
#define	RK3399_PLL_CPLL				4
#define	RK3399_PLL_GPLL				5
#define	RK3399_PLL_NPLL				6
#define	RK3399_PLL_VPLL				7
#define	RK3399_ARMCLKL				8
#define	RK3399_ARMCLKB				9
#define	RK3399_SCLK_I2C1			65
#define	RK3399_SCLK_I2C2			66
#define	RK3399_SCLK_I2C3			67
#define	RK3399_SCLK_I2C5			68
#define	RK3399_SCLK_I2C6			69
#define	RK3399_SCLK_I2C7			70
#define	RK3399_SCLK_SPI0			71
#define	RK3399_SCLK_SPI1			72
#define	RK3399_SCLK_SPI2			73
#define	RK3399_SCLK_SPI4			74
#define	RK3399_SCLK_SPI5			75
#define	RK3399_SCLK_SDMMC			76
#define	RK3399_SCLK_SDIO			77
#define	RK3399_SCLK_EMMC			78
#define	RK3399_SCLK_TSADC			79
#define	RK3399_SCLK_SARADC			80
#define	RK3399_SCLK_UART0			81
#define	RK3399_SCLK_UART1			82
#define	RK3399_SCLK_UART2			83
#define	RK3399_SCLK_UART3			84
#define	RK3399_SCLK_SPDIF_8CH			85
#define	RK3399_SCLK_I2S0_8CH			86
#define	RK3399_SCLK_I2S1_8CH			87
#define	RK3399_SCLK_I2S2_8CH			88
#define	RK3399_SCLK_I2S_8CH_OUT			89
#define	RK3399_SCLK_TIMER00			90
#define	RK3399_SCLK_TIMER01			91
#define	RK3399_SCLK_TIMER02			92
#define	RK3399_SCLK_TIMER03			93
#define	RK3399_SCLK_TIMER04			94
#define	RK3399_SCLK_TIMER05			95
#define	RK3399_SCLK_TIMER06			96
#define	RK3399_SCLK_TIMER07			97
#define	RK3399_SCLK_TIMER08			98
#define	RK3399_SCLK_TIMER09			99
#define	RK3399_SCLK_TIMER10			100
#define	RK3399_SCLK_TIMER11			101
#define	RK3399_SCLK_MACREF			102
#define	RK3399_SCLK_MAC_RX			103
#define	RK3399_SCLK_MAC_TX			104
#define	RK3399_SCLK_MAC				105
#define	RK3399_SCLK_MACREF_OUT			106
#define	RK3399_SCLK_VOP0_PWM			107
#define	RK3399_SCLK_VOP1_PWM			108
#define	RK3399_SCLK_RGA_CORE			109
#define	RK3399_SCLK_ISP0			110
#define	RK3399_SCLK_ISP1			111
#define	RK3399_SCLK_HDMI_CEC			112
#define	RK3399_SCLK_HDMI_SFR			113
#define	RK3399_SCLK_DP_CORE			114
#define	RK3399_SCLK_PVTM_CORE_L			115
#define	RK3399_SCLK_PVTM_CORE_B			116
#define	RK3399_SCLK_PVTM_GPU			117
#define	RK3399_SCLK_PVTM_DDR			118
#define	RK3399_SCLK_MIPIDPHY_REF		119
#define	RK3399_SCLK_MIPIDPHY_CFG		120
#define	RK3399_SCLK_HSICPHY			121
#define	RK3399_SCLK_USBPHY480M			122
#define	RK3399_SCLK_USB2PHY0_REF		123
#define	RK3399_SCLK_USB2PHY1_REF		124
#define	RK3399_SCLK_UPHY0_TCPDPHY_REF		125
#define	RK3399_SCLK_UPHY0_TCPDCORE		126
#define	RK3399_SCLK_UPHY1_TCPDPHY_REF		127
#define	RK3399_SCLK_UPHY1_TCPDCORE		128
#define	RK3399_SCLK_USB3OTG0_REF		129
#define	RK3399_SCLK_USB3OTG1_REF		130
#define	RK3399_SCLK_USB3OTG0_SUSPEND		131
#define	RK3399_SCLK_USB3OTG1_SUSPEND		132
#define	RK3399_SCLK_CRYPTO0			133
#define	RK3399_SCLK_CRYPTO1			134
#define	RK3399_SCLK_CCI_TRACE			135
#define	RK3399_SCLK_CS				136
#define	RK3399_SCLK_CIF_OUT			137
#define	RK3399_SCLK_PCIEPHY_REF			138
#define	RK3399_SCLK_PCIE_CORE			139
#define	RK3399_SCLK_M0_PERILP			140
#define	RK3399_SCLK_M0_PERILP_DEC		141
#define	RK3399_SCLK_CM0S			142
#define	RK3399_SCLK_DBG_NOC			143
#define	RK3399_SCLK_DBG_PD_CORE_B		144
#define	RK3399_SCLK_DBG_PD_CORE_L		145
#define	RK3399_SCLK_DFIMON0_TIMER		146
#define	RK3399_SCLK_DFIMON1_TIMER		147
#define	RK3399_SCLK_INTMEM0			148
#define	RK3399_SCLK_INTMEM1			149
#define	RK3399_SCLK_INTMEM2			150
#define	RK3399_SCLK_INTMEM3			151
#define	RK3399_SCLK_INTMEM4			152
#define	RK3399_SCLK_INTMEM5			153
#define	RK3399_SCLK_SDMMC_DRV			154
#define	RK3399_SCLK_SDMMC_SAMPLE		155
#define	RK3399_SCLK_SDIO_DRV			156
#define	RK3399_SCLK_SDIO_SAMPLE			157
#define	RK3399_SCLK_VDU_CORE			158
#define	RK3399_SCLK_VDU_CA			159
#define	RK3399_SCLK_PCIE_PM			160
#define	RK3399_SCLK_SPDIF_REC_DPTX		161
#define	RK3399_SCLK_DPHY_PLL			162
#define	RK3399_SCLK_DPHY_TX0_CFG		163
#define	RK3399_SCLK_DPHY_TX1RX1_CFG		164
#define	RK3399_SCLK_DPHY_RX0_CFG		165
#define	RK3399_SCLK_RMII_SRC			166
#define	RK3399_SCLK_PCIEPHY_REF100M		167
#define	RK3399_SCLK_DDRC			168
#define	RK3399_SCLK_TESTCLKOUT1			169
#define	RK3399_SCLK_TESTCLKOUT2			170
#define	RK3399_DCLK_VOP0			180
#define	RK3399_DCLK_VOP1			181
#define	RK3399_DCLK_VOP0_DIV			182
#define	RK3399_DCLK_VOP1_DIV			183
#define	RK3399_DCLK_M0_PERILP			184
#define	RK3399_DCLK_VOP0_FRAC			185
#define	RK3399_DCLK_VOP1_FRAC			186
#define	RK3399_FCLK_CM0S			190
#define	RK3399_ACLK_PERIHP			192
#define	RK3399_ACLK_PERIHP_NOC			193
#define	RK3399_ACLK_PERILP0			194
#define	RK3399_ACLK_PERILP0_NOC			195
#define	RK3399_ACLK_PERF_PCIE			196
#define	RK3399_ACLK_PCIE			197
#define	RK3399_ACLK_INTMEM			198
#define	RK3399_ACLK_TZMA			199
#define	RK3399_ACLK_DCF				200
#define	RK3399_ACLK_CCI				201
#define	RK3399_ACLK_CCI_NOC0			202
#define	RK3399_ACLK_CCI_NOC1			203
#define	RK3399_ACLK_CCI_GRF			204
#define	RK3399_ACLK_CENTER			205
#define	RK3399_ACLK_CENTER_MAIN_NOC		206
#define	RK3399_ACLK_CENTER_PERI_NOC		207
#define	RK3399_ACLK_GPU				208
#define	RK3399_ACLK_PERF_GPU			209
#define	RK3399_ACLK_GPU_GRF			210
#define	RK3399_ACLK_DMAC0_PERILP		211
#define	RK3399_ACLK_DMAC1_PERILP		212
#define	RK3399_ACLK_GMAC			213
#define	RK3399_ACLK_GMAC_NOC			214
#define	RK3399_ACLK_PERF_GMAC			215
#define	RK3399_ACLK_VOP0_NOC			216
#define	RK3399_ACLK_VOP0			217
#define	RK3399_ACLK_VOP1_NOC			218
#define	RK3399_ACLK_VOP1			219
#define	RK3399_ACLK_RGA				220
#define	RK3399_ACLK_RGA_NOC			221
#define	RK3399_ACLK_HDCP			222
#define	RK3399_ACLK_HDCP_NOC			223
#define	RK3399_ACLK_HDCP22			224
#define	RK3399_ACLK_IEP				225
#define	RK3399_ACLK_IEP_NOC			226
#define	RK3399_ACLK_VIO				227
#define	RK3399_ACLK_VIO_NOC			228
#define	RK3399_ACLK_ISP0			229
#define	RK3399_ACLK_ISP1			230
#define	RK3399_ACLK_ISP0_NOC			231
#define	RK3399_ACLK_ISP1_NOC			232
#define	RK3399_ACLK_ISP0_WRAPPER		233
#define	RK3399_ACLK_ISP1_WRAPPER		234
#define	RK3399_ACLK_VCODEC			235
#define	RK3399_ACLK_VCODEC_NOC			236
#define	RK3399_ACLK_VDU				237
#define	RK3399_ACLK_VDU_NOC			238
#define	RK3399_ACLK_PERI			239
#define	RK3399_ACLK_EMMC			240
#define	RK3399_ACLK_EMMC_CORE			241
#define	RK3399_ACLK_EMMC_NOC			242
#define	RK3399_ACLK_EMMC_GRF			243
#define	RK3399_ACLK_USB3			244
#define	RK3399_ACLK_USB3_NOC			245
#define	RK3399_ACLK_USB3OTG0			246
#define	RK3399_ACLK_USB3OTG1			247
#define	RK3399_ACLK_USB3_RKSOC_AXI_PERF		248
#define	RK3399_ACLK_USB3_GRF			249
#define	RK3399_ACLK_GIC				250
#define	RK3399_ACLK_GIC_NOC			251
#define	RK3399_ACLK_GIC_ADB400_CORE_L_2_GIC	252
#define	RK3399_ACLK_GIC_ADB400_CORE_B_2_GIC	253
#define	RK3399_ACLK_GIC_ADB400_GIC_2_CORE_L	254
#define	RK3399_ACLK_GIC_ADB400_GIC_2_CORE_B	255
#define	RK3399_ACLK_CORE_ADB400_CORE_L_2_CCI500 256
#define	RK3399_ACLK_CORE_ADB400_CORE_B_2_CCI500 257
#define	RK3399_ACLK_ADB400M_PD_CORE_L		258
#define	RK3399_ACLK_ADB400M_PD_CORE_B		259
#define	RK3399_ACLK_PERF_CORE_L			260
#define	RK3399_ACLK_PERF_CORE_B			261
#define	RK3399_ACLK_GIC_PRE			262
#define	RK3399_ACLK_VOP0_PRE			263
#define	RK3399_ACLK_VOP1_PRE			264
#define	RK3399_PCLK_PERIHP			320
#define	RK3399_PCLK_PERIHP_NOC			321
#define	RK3399_PCLK_PERILP0			322
#define	RK3399_PCLK_PERILP1			323
#define	RK3399_PCLK_PERILP1_NOC			324
#define	RK3399_PCLK_PERILP_SGRF			325
#define	RK3399_PCLK_PERIHP_GRF			326
#define	RK3399_PCLK_PCIE			327
#define	RK3399_PCLK_SGRF			328
#define	RK3399_PCLK_INTR_ARB			329
#define	RK3399_PCLK_CENTER_MAIN_NOC		330
#define	RK3399_PCLK_CIC				331
#define	RK3399_PCLK_COREDBG_B			332
#define	RK3399_PCLK_COREDBG_L			333
#define	RK3399_PCLK_DBG_CXCS_PD_CORE_B		334
#define	RK3399_PCLK_DCF				335
#define	RK3399_PCLK_GPIO2			336
#define	RK3399_PCLK_GPIO3			337
#define	RK3399_PCLK_GPIO4			338
#define	RK3399_PCLK_GRF				339
#define	RK3399_PCLK_HSICPHY			340
#define	RK3399_PCLK_I2C1			341
#define	RK3399_PCLK_I2C2			342
#define	RK3399_PCLK_I2C3			343
#define	RK3399_PCLK_I2C5			344
#define	RK3399_PCLK_I2C6			345
#define	RK3399_PCLK_I2C7			346
#define	RK3399_PCLK_SPI0			347
#define	RK3399_PCLK_SPI1			348
#define	RK3399_PCLK_SPI2			349
#define	RK3399_PCLK_SPI4			350
#define	RK3399_PCLK_SPI5			351
#define	RK3399_PCLK_UART0			352
#define	RK3399_PCLK_UART1			353
#define	RK3399_PCLK_UART2			354
#define	RK3399_PCLK_UART3			355
#define	RK3399_PCLK_TSADC			356
#define	RK3399_PCLK_SARADC			357
#define	RK3399_PCLK_GMAC			358
#define	RK3399_PCLK_GMAC_NOC			359
#define	RK3399_PCLK_TIMER0			360
#define	RK3399_PCLK_TIMER1			361
#define	RK3399_PCLK_EDP				362
#define	RK3399_PCLK_EDP_NOC			363
#define	RK3399_PCLK_EDP_CTRL			364
#define	RK3399_PCLK_VIO				365
#define	RK3399_PCLK_VIO_NOC			366
#define	RK3399_PCLK_VIO_GRF			367
#define	RK3399_PCLK_MIPI_DSI0			368
#define	RK3399_PCLK_MIPI_DSI1			369
#define	RK3399_PCLK_HDCP			370
#define	RK3399_PCLK_HDCP_NOC			371
#define	RK3399_PCLK_HDMI_CTRL			372
#define	RK3399_PCLK_DP_CTRL			373
#define	RK3399_PCLK_HDCP22			374
#define	RK3399_PCLK_GASKET			375
#define	RK3399_PCLK_DDR				376
#define	RK3399_PCLK_DDR_MON			377
#define	RK3399_PCLK_DDR_SGRF			378
#define	RK3399_PCLK_ISP1_WRAPPER		379
#define	RK3399_PCLK_WDT				380
#define	RK3399_PCLK_EFUSE1024NS			381
#define	RK3399_PCLK_EFUSE1024S			382
#define	RK3399_PCLK_PMU_INTR_ARB		383
#define	RK3399_PCLK_MAILBOX0			384
#define	RK3399_PCLK_USBPHY_MUX_G		385
#define	RK3399_PCLK_UPHY0_TCPHY_G		386
#define	RK3399_PCLK_UPHY0_TCPD_G		387
#define	RK3399_PCLK_UPHY1_TCPHY_G		388
#define	RK3399_PCLK_UPHY1_TCPD_G		389
#define	RK3399_PCLK_ALIVE			390
#define	RK3399_HCLK_PERIHP			448
#define	RK3399_HCLK_PERILP0			449
#define	RK3399_HCLK_PERILP1			450
#define	RK3399_HCLK_PERILP0_NOC			451
#define	RK3399_HCLK_PERILP1_NOC			452
#define	RK3399_HCLK_M0_PERILP			453
#define	RK3399_HCLK_M0_PERILP_NOC		454
#define	RK3399_HCLK_AHB1TOM			455
#define	RK3399_HCLK_HOST0			456
#define	RK3399_HCLK_HOST0_ARB			457
#define	RK3399_HCLK_HOST1			458
#define	RK3399_HCLK_HOST1_ARB			459
#define	RK3399_HCLK_HSIC			460
#define	RK3399_HCLK_SD				461
#define	RK3399_HCLK_SDMMC			462
#define	RK3399_HCLK_SDMMC_NOC			463
#define	RK3399_HCLK_M_CRYPTO0			464
#define	RK3399_HCLK_M_CRYPTO1			465
#define	RK3399_HCLK_S_CRYPTO0			466
#define	RK3399_HCLK_S_CRYPTO1			467
#define	RK3399_HCLK_I2S0_8CH			468
#define	RK3399_HCLK_I2S1_8CH			469
#define	RK3399_HCLK_I2S2_8CH			470
#define	RK3399_HCLK_SPDIF			471
#define	RK3399_HCLK_VOP0_NOC			472
#define	RK3399_HCLK_VOP0			473
#define	RK3399_HCLK_VOP1_NOC			474
#define	RK3399_HCLK_VOP1			475
#define	RK3399_HCLK_ROM				476
#define	RK3399_HCLK_IEP				477
#define	RK3399_HCLK_IEP_NOC			478
#define	RK3399_HCLK_ISP0			479
#define	RK3399_HCLK_ISP1			480
#define	RK3399_HCLK_ISP0_NOC			481
#define	RK3399_HCLK_ISP1_NOC			482
#define	RK3399_HCLK_ISP0_WRAPPER		483
#define	RK3399_HCLK_ISP1_WRAPPER		484
#define	RK3399_HCLK_RGA				485
#define	RK3399_HCLK_RGA_NOC			486
#define	RK3399_HCLK_HDCP			487
#define	RK3399_HCLK_HDCP_NOC			488
#define	RK3399_HCLK_HDCP22			489
#define	RK3399_HCLK_VCODEC			490
#define	RK3399_HCLK_VCODEC_NOC			491
#define	RK3399_HCLK_VDU				492
#define	RK3399_HCLK_VDU_NOC			493
#define	RK3399_HCLK_SDIO			494
#define	RK3399_HCLK_SDIO_NOC			495
#define	RK3399_HCLK_SDIOAUDIO_NOC		496

#endif /* !_RK3399_CRU_H */
