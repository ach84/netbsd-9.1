/* $NetBSD: ti_lcdcreg.h,v 1.1.2.2 2019/11/27 13:46:44 martin Exp $ */
/*-
 * Copyright 2013 Oleksandr Tymoshenko <gonzo@freebsd.org>
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#define	LCD_PID			0x00
#define	LCD_CTRL		0x04
#define		CTRL_DIV_MASK		0xff
#define		CTRL_DIV_SHIFT		8
#define		CTRL_AUTO_UFLOW_RESTART	(1 << 1)
#define		CTRL_RASTER_MODE	1
#define		CTRL_LIDD_MODE		0
#define	LCD_LIDD_CTRL		0x0C
#define	LCD_LIDD_CS0_CONF	0x10
#define	LCD_LIDD_CS0_ADDR	0x14
#define	LCD_LIDD_CS0_DATA	0x18
#define	LCD_LIDD_CS1_CONF	0x1C
#define	LCD_LIDD_CS1_ADDR	0x20
#define	LCD_LIDD_CS1_DATA	0x24
#define	LCD_RASTER_CTRL		0x28
#define		RASTER_CTRL_TFT24_UNPACKED	(1 << 26)
#define		RASTER_CTRL_TFT24		(1 << 25)
#define		RASTER_CTRL_STN565		(1 << 24)
#define		RASTER_CTRL_TFTMAP		(1 << 23)
#define		RASTER_CTRL_NIBMODE		(1 << 22)
#define		RASTER_CTRL_PALMODE_PALETTE_AND_DATA (0 << 20)
#define		RASTER_CTRL_PALMODE_PALETTE_ONLY (1 << 20)
#define		RASTER_CTRL_PALMODE_DATA_ONLY	(2 << 20)
#define		RASTER_CTRL_REQDLY(v)		((v) << 12)
#define		RASTER_CTRL_MONO8B		(1 << 9)
#define		RASTER_CTRL_RDORDER		(1 << 8)
#define		RASTER_CTRL_LCDTFT		(1 << 7)
#define		RASTER_CTRL_LCDBW		(1 << 1)
#define		RASTER_CTRL_LCDEN		(1 << 0)
#define	LCD_RASTER_TIMING_0	0x2C
#define		RASTER_TIMING_0_HBP(v)		((((v) - 1) & 0xff) << 24)
#define		RASTER_TIMING_0_HFP(v)		((((v) - 1) & 0xff) << 16)
#define		RASTER_TIMING_0_HSW(v)		((((v) - 1) & 0x3f) << 10)
#define		RASTER_TIMING_0_PPL(w) \
		(((((w) - 1) >> 7) & 0x8) | ((((w) - 1) >> 0) & 0x3f0))
#define	LCD_RASTER_TIMING_1	0x30
#define		RASTER_TIMING_1_VBP(v)		(((v) & 0xff) << 24)
#define		RASTER_TIMING_1_VFP(v)		(((v) & 0xff) << 16)
#define		RASTER_TIMING_1_VSW(v)		((((v) - 1) & 0x3f) << 10)
#define		RASTER_TIMING_1_LPP(h)		((((h) - 1) & 0x3ff) << 0)
#define	LCD_RASTER_TIMING_2	0x34
#define		RASTER_TIMING_2_HSW(v)		(((((v) - 1) >> 6) & 0xf) << 27)
#define		RASTER_TIMING_2_LPP(h)		(((h) & 0x400) ? (1 << 26) : 0)
#define		RASTER_TIMING_2_PHSVS		(1 << 25)
#define		RASTER_TIMING_2_PHSVS_RISE	(1 << 24)
#define		RASTER_TIMING_2_PHSVS_FALL	(0 << 24)
#define		RASTER_TIMING_2_IOE		(1 << 23)
#define		RASTER_TIMING_2_IPC		(1 << 22)
#define		RASTER_TIMING_2_IHS		(1 << 21)
#define		RASTER_TIMING_2_IVS		(1 << 20)
#define		RASTER_TIMING_2_ACBI(x)		((x) << 16)
#define		RASTER_TIMING_2_ACB(x)		((x) << 8)
#define		RASTER_TIMING_2_HBP(v)		((((v) - 1) >> 4) & 0x30)
#define		RASTER_TIMING_2_HFP(v)		((((v) - 1) >> 8) & 0x3)
#define	LCD_RASTER_SUBPANEL	0x38
#define	LCD_RASTER_SUBPANEL2	0x3C
#define	LCD_LCDDMA_CTRL		0x40
#define		LCDDMA_CTRL_DMA_MASTER_PRIO_SHIFT		16
#define		LCDDMA_CTRL_TH_FIFO_RDY_SHIFT	8
#define		LCDDMA_CTRL_BURST_SIZE_SHIFT	4
#define		LCDDMA_CTRL_BYTES_SWAP		(1 << 3)
#define		LCDDMA_CTRL_BE			(1 << 1)
#define		LCDDMA_CTRL_FB0_FB1		(1 << 0)
#define		LCDDMA_CTRL_FB0_ONLY		(0 << 0)
#define	LCD_LCDDMA_FB0_BASE	0x44
#define	LCD_LCDDMA_FB0_CEILING	0x48
#define	LCD_LCDDMA_FB1_BASE	0x4C
#define	LCD_LCDDMA_FB1_CEILING	0x50
#define	LCD_SYSCONFIG		0x54
#define		SYSCONFIG_STANDBY_FORCE		(0 << 4)
#define		SYSCONFIG_STANDBY_NONE		(1 << 4)
#define		SYSCONFIG_STANDBY_SMART		(2 << 4)
#define		SYSCONFIG_IDLE_FORCE		(0 << 2)
#define		SYSCONFIG_IDLE_NONE		(1 << 2)
#define		SYSCONFIG_IDLE_SMART		(2 << 2)
#define	LCD_IRQSTATUS_RAW	0x58
#define	LCD_IRQSTATUS		0x5C
#define	LCD_IRQENABLE_SET	0x60
#define	LCD_IRQENABLE_CLEAR	0x64
#define		IRQ_EOF1		(1 << 9)
#define		IRQ_EOF0		(1 << 8)
#define		IRQ_PL			(1 << 6)
#define		IRQ_FUF			(1 << 5)
#define		IRQ_ACB			(1 << 3)
#define		IRQ_SYNC_LOST		(1 << 2)
#define		IRQ_RASTER_DONE		(1 << 1)
#define		IRQ_FRAME_DONE		(1 << 0)
#define	LCD_CLKC_ENABLE		0x6C
#define		CLKC_ENABLE_DMA		(1 << 2)
#define		CLKC_ENABLE_LIDD	(1 << 1)
#define		CLKC_ENABLE_CORE	(1 << 0)
#define	LCD_CLKC_RESET		0x70
#define		CLKC_RESET_MAIN		(1 << 3)
#define		CLKC_RESET_DMA		(1 << 2)
#define		CLKC_RESET_LIDD		(1 << 1)
#define		CLKC_RESET_CORE		(1 << 0)

/* 16-Entry Palette/Buffer Format */
#define PALETTE_BPP_1			(0 << 12)
#define PALETTE_BPP_2			(1 << 12)
#define PALETTE_BPP_4			(2 << 12)
#define PALETTE_BPP_8			(3 << 12)
#define PALETTE_BPP_XX			(4 << 12)
#define PALETTE_MONO(v)			((v) & 0xf)
#define PALETTE_RED(r)			(((r) & 0xf) << 8)
#define PALETTE_GREEN(g)		(((g) & 0xf) << 4)
#define PALETTE_BLUE(b)			(((b) & 0xf) << 0)
#define PALETTE_COLOR(r, g, b) \
			(PALETTE_RED(r) | PALETTE_GREEN(g) | PALETTE_BLUE(b))
