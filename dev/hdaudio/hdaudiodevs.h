/*	$NetBSD: hdaudiodevs.h,v 1.2.26.3 2020/04/29 13:51:09 martin Exp $	*/

/*
 * THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT EDIT.
 *
 * generated from:
 *	NetBSD: hdaudiodevs,v 1.2.26.3 2020/04/29 13:50:38 martin Exp
 */

/*
 * Copyright (c) 2010 Jared D. McNeill <jmcneill@invisible.ca>
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Precedence TeCHnologies Ltd
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
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

/*
 * Try to keep vendor and product names 15 characters or less. They are
 * used by the AUDIO_GETDEV ioctl and copied into buffers that are
 * constrained by MAX_AUDIO_DEV_LEN (sys/audioio.h).
 */

#define	HDAUDIO_VENDOR_ATI	0x1002		/* ATI */
#define	HDAUDIO_VENDOR_NVIDIA	0x10de		/* NVIDIA */
#define	HDAUDIO_VENDOR_REALTEK	0x10ec		/* Realtek */
#define	HDAUDIO_VENDOR_VIATECH	0x1106		/* VIA */
#define	HDAUDIO_VENDOR_SIGMATEL2	0x111d		/* Sigmatel */
#define	HDAUDIO_VENDOR_ANALOG	0x11d4		/* Analog Devices */
#define	HDAUDIO_VENDOR_CONEXANT	0x14f1		/* Conexant */
#define	HDAUDIO_VENDOR_VMWARE	0x15ad		/* VMware */
#define	HDAUDIO_VENDOR_CMEDIA	0x434d		/* C-Media */
#define	HDAUDIO_VENDOR_INTEL	0x8086		/* Intel */
#define	HDAUDIO_VENDOR_SIGMATEL	0x8384		/* Sigmatel */

/* ATI */
#define	HDAUDIO_PRODUCT_ATI_RS600_HDMI_1	0x7919		/* RS600 HDMI */
#define	HDAUDIO_PRODUCT_ATI_RS600_HDMI_2	0x793c		/* RS600 HDMI */
#define	HDAUDIO_PRODUCT_ATI_RS690_780_HDMI	0x791a		/* RS690/780 HDMI */
#define	HDAUDIO_PRODUCT_ATI_R6xx_HDMI	0xaa01		/* R6xx HDMI */

/* NVIDIA */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP77_78_HDMI_2	0x0002		/* MCP77/78 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP77_78_HDMI_3	0x0003		/* MCP77/78 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP77_78_HDMI_5	0x0005		/* MCP77/78 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP77_78_HDMI_6	0x0006		/* MCP77/78 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP79_7A_HDMI_7	0x0007		/* MCP79/7A HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_GT220_HDMI	0x000a		/* GT220 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_GT21x_HDMI	0x000b		/* GT21x HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP89_HDMI	0x000c		/* MCP89 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_GT240_HDMI	0x000d		/* GT240 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_GT5xx_HDMI_DP	0x0015		/* GT5xx HDMI/DP */
#define	HDAUDIO_PRODUCT_NVIDIA_TEGRA124_HDMI	0x0028		/* Tegra124 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP67_HDMI	0x0067		/* MCP67 HDMI */
#define	HDAUDIO_PRODUCT_NVIDIA_MCP73_HDMI	0x8001		/* MCP73 HDMI */

/* Realtek */
#define	HDAUDIO_PRODUCT_REALTEK_ALC260	0x0260		/* ALC260 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC262	0x0262		/* ALC262 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC267	0x0267		/* ALC267 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC268	0x0268		/* ALC268 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC269	0x0269		/* ALC269 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC270	0x0270		/* ALC270 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC272	0x0272		/* ALC272 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC275	0x0275		/* ALC275 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC280	0x0280		/* ALC280 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC292	0x0292		/* ALC292 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC293	0x0293		/* ALC293 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC660_VD	0x0660		/* ALC660-VD */
#define	HDAUDIO_PRODUCT_REALTEK_ALC662	0x0662		/* ALC662 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC663	0x0663		/* ALC663 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC670	0x0670		/* ALC670 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC861	0x0861		/* ALC861 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC861_VD	0x0862		/* ALC861-VD */
#define	HDAUDIO_PRODUCT_REALTEK_ALC880	0x0880		/* ALC880 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC882	0x0882		/* ALC882 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC883	0x0883		/* ALC883 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC885	0x0885		/* ALC885 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC887	0x0887		/* ALC887 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC888	0x0888		/* ALC888 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC889	0x0889		/* ALC889 */
#define	HDAUDIO_PRODUCT_REALTEK_ALC892	0x0892		/* ALC892 */

/* VIA */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708	0x1708		/* VT1708 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709	0x1709		/* VT1708 */
#define	HDAUDIO_PRODUCT_VIATECH_VT170A	0x170a		/* VT1708 */
#define	HDAUDIO_PRODUCT_VIATECH_VT170B	0x170b		/* VT1708 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_10CH_0	0xe710		/* VT1709 10ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_10CH_1	0xe711		/* VT1709 10ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_10CH_2	0xe712		/* VT1709 10ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_10CH_3	0xe713		/* VT1709 10ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_6CH_4	0xe714		/* VT1709 6ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_6CH_5	0xe715		/* VT1709 6ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_6CH_6	0xe716		/* VT1709 6ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1709_6CH_7	0xe717		/* VT1709 6ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_8CH_0	0xe720		/* VT1708B 8ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_8CH_1	0xe721		/* VT1708B 8ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_8CH_2	0xe722		/* VT1708B 8ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_8CH_3	0xe723		/* VT1708B 8ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_4CH_4	0xe724		/* VT1708B 4ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_4CH_5	0xe725		/* VT1708B 4ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_4CH_6	0xe726		/* VT1708B 4ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708B_4CH_7	0xe727		/* VT1708B 4ch */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_0	0x0397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_1	0x1397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_2	0x2397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_3	0x3397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_4	0x4397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_5	0x5397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S_6	0x6397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1708S	0x7397		/* VT1708S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_0	0x0398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_1	0x1398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_2	0x2398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_3	0x3398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_4	0x4398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_5	0x5398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_6	0x6398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1702_7	0x7398		/* VT1702 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1718S	0x0428		/* VT1718S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1718S_1	0x4428		/* VT1718S */
#define	HDAUDIO_PRODUCT_VIATECH_VT2020	0x0441		/* VT2020 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1828S	0x4441		/* VT1828S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1716S	0x0433		/* VT1716S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1716S_1	0xa721		/* VT1716S */
#define	HDAUDIO_PRODUCT_VIATECH_VT2002P	0x0438		/* VT2002P */
#define	HDAUDIO_PRODUCT_VIATECH_VT2002P_1	0x4438		/* VT2002P */
#define	HDAUDIO_PRODUCT_VIATECH_VT1812	0x0448		/* VT1812 */
#define	HDAUDIO_PRODUCT_VIATECH_VT1818S	0x0440		/* VT1818S */
#define	HDAUDIO_PRODUCT_VIATECH_VT1705	0x4760		/* VT1705 */

/* Analog Devices */
#define	HDAUDIO_PRODUCT_ANALOG_AD1884A	0x184a		/* AD1884A */
#define	HDAUDIO_PRODUCT_ANALOG_AD1882	0x1882		/* AD1882 */
#define	HDAUDIO_PRODUCT_ANALOG_AD1883	0x1883		/* AD1883 */
#define	HDAUDIO_PRODUCT_ANALOG_AD1884	0x1884		/* AD1884 */
#define	HDAUDIO_PRODUCT_ANALOG_AD1984A	0x194a		/* AD1984A */
#define	HDAUDIO_PRODUCT_ANALOG_AD1984B	0x194b		/* AD1984B */
#define	HDAUDIO_PRODUCT_ANALOG_AD1981HD	0x1981		/* AD1981HD */
#define	HDAUDIO_PRODUCT_ANALOG_AD1983	0x1983		/* AD1983 */
#define	HDAUDIO_PRODUCT_ANALOG_AD1984	0x1984		/* AD1984 */
#define	HDAUDIO_PRODUCT_ANALOG_AD1986A	0x1986		/* AD1986A */
#define	HDAUDIO_PRODUCT_ANALOG_AD1988A	0x1988		/* AD1988A */
#define	HDAUDIO_PRODUCT_ANALOG_AD1988B	0x198b		/* AD1988B */
#define	HDAUDIO_PRODUCT_ANALOG_AD1989A	0x989a		/* AD1989A */
#define	HDAUDIO_PRODUCT_ANALOG_AD1989B	0x989b		/* AD1989B */

/* Conexant */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20549	0x5045		/* CX20549 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20551	0x5047		/* CX20551 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20561	0x5051		/* CX20561 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20582	0x5066		/* CX20582 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20583	0x5067		/* CX20583 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20585	0x5069		/* CX20585 */
#define	HDAUDIO_PRODUCT_CONEXANT_CX20671	0x506e		/* CX20671 */

/* CMedia */
#define	HDAUDIO_PRODUCT_CMEDIA_CMI9880	0x4980		/* CMI9880 */

/* Intel */
#define	HDAUDIO_PRODUCT_INTEL_Q57_HDMI	0x0054		/* Q57 HDMI */
#define	HDAUDIO_PRODUCT_INTEL_G45_HDMI_1	0x2801		/* G45 HDMI/1 */
#define	HDAUDIO_PRODUCT_INTEL_G45_HDMI_2	0x2802		/* G45 HDMI/2 */
#define	HDAUDIO_PRODUCT_INTEL_G45_HDMI_3	0x2803		/* G45 HDMI/3 */
#define	HDAUDIO_PRODUCT_INTEL_G45_HDMI_4	0x2804		/* G45 HDMI/4 */
#define	HDAUDIO_PRODUCT_INTEL_G45_HDMI_FB	0x29fb		/* G45 HDMI/FB */

/* Sigmatel */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9230X	0x7612		/* STAC9230X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9230D	0x7613		/* STAC9230D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9229X	0x7614		/* STAC9229X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9229D	0x7615		/* STAC9229D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9228X	0x7616		/* STAC9228X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9228D	0x7617		/* STAC9228D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9227X	0x7618		/* STAC9227X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9227D	0x7619		/* STAC9227D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9274	0x7620		/* STAC9274 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9274D	0x7621		/* STAC9274D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9273X	0x7622		/* STAC9273X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9273D	0x7623		/* STAC9273D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9272X	0x7624		/* STAC9272X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9272D	0x7625		/* STAC9272D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9271X	0x7626		/* STAC9271X */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9271D	0x7627		/* STAC9271D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9274X5NH	0x7628		/* STAC9274X5NH */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9274D5NH	0x7629		/* STAC9274D5NH */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9202	0x7632		/* STAC9202 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9202D	0x7633		/* STAC9202D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9250	0x7634		/* STAC9250 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9250D_1	0x7635		/* STAC9250D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9251	0x7636		/* STAC9251 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9250D_2	0x7637		/* STAC9250D */
#define	HDAUDIO_PRODUCT_SIGMATEL_92HD206X	0x7645		/* 92HD206X */
#define	HDAUDIO_PRODUCT_SIGMATEL_92HD206D	0x7646		/* 92HD206D */
#define	HDAUDIO_PRODUCT_SIGMATEL_CXD9872RD_K	0x7661		/* CXD9872RD/K */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9872AK	0x7662		/* STAC9872AK */
#define	HDAUDIO_PRODUCT_SIGMATEL_CXD9872AKD	0x7664		/* CXD9872AKD */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9221_A1	0x7680		/* STAC9221 A1 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9220D	0x7681		/* STAC9220D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9221_A2	0x7682		/* STAC9221 A2 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9221D	0x7683		/* STAC9221D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9200	0x7690		/* STAC9200 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9200D	0x7691		/* STAC9200D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9205	0x7698		/* STAC9205 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9205_1	0x76a0		/* STAC9205 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9205D	0x76a1		/* STAC9205D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9204	0x76a2		/* STAC9204 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9204D	0x76a3		/* STAC9204D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9255	0x76a4		/* STAC9255 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9255D	0x76a5		/* STAC9255D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9254	0x76a6		/* STAC9254 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9254D	0x76a7		/* STAC9254D */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9220_A2	0x7880		/* STAC9220 A2 */
#define	HDAUDIO_PRODUCT_SIGMATEL_STAC9220_A1	0x7882		/* STAC9220 A1 */

/* Sigmatel (alternate vendor ID) */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD75B3X5	0x7603		/* 92HD75B3X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD83C1X5	0x7604		/* 92HD83C1X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD81B1X5	0x7605		/* 92HD81B1X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD75B2X5	0x7608		/* 92HD75B2X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD88B3	0x7666		/* 92HD88B3 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD88B1	0x7667		/* 92HD88B1 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD88B2	0x7668		/* 92HD88B2 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD88B4	0x7669		/* 92HD88B4 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD73D1X5	0x7674		/* 92HD73D1X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD73C1X5	0x7675		/* 92HD73C1X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD73E1X5	0x7676		/* 92HD73E1X5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B8X	0x76b0		/* 92HD71B8X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B8X_1	0x76b1		/* 92HD71B8X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B7X	0x76b2		/* 92HD71B7X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B7X_1	0x76b3		/* 92HD71B7X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B6X	0x76b4		/* 92HD71B6X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B6X_1	0x76b5		/* 92HD71B6X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B5X	0x76b6		/* 92HD71B5X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD71B5X_1	0x76b7		/* 92HD71B5X */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD83C1C5	0x76d4		/* 92HD83C1C5 */
#define	HDAUDIO_PRODUCT_SIGMATEL2_92HD81B1C5_1	0x76d5		/* 92HD81B1C5 */

/* VMware */
#define	HDAUDIO_PRODUCT_VMWARE_VIRTUAL_HDA	0x1975		/* Virtual HDA */
