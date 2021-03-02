/* $NetBSD: sunxi_lradc.h,v 1.1 2018/03/07 20:55:31 bouyer Exp $ */

/*-
 * Copyright (c) 2016 Manuel Bouyer
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

#define AWIN_LRADC_CTRL_REG		0x00
#define AWIN_LRADC_CTRL_FIRSTCONV_MASK		__BITS(31,24)
#define AWIN_LRADC_CTRL_FIRSTCONV_SHIFT		24
#define AWIN_LRADC_CTRL_CHAN_MASK		__BITS(23,22)
#define AWIN_LRADC_CTRL_CHAN_SHIFT		22
#define AWIN_LRADC_CTRL_CONT_MASK		__BITS(19,16)
#define AWIN_LRADC_CTRL_CONT_SHIFT		16
#define AWIN_LRADC_CTRL_KMODE_MASK		__BITS(13,12)
#define AWIN_LRADC_CTRL_KMODE_NORMAL		(0 << 12)
#define AWIN_LRADC_CTRL_KMODE_SINGLE		(1 << 12)
#define AWIN_LRADC_CTRL_KMODE_CONTINUE		(2 << 12)
#define AWIN_LRADC_CTRL_LV_A_B_CNT_MASK		__BITS(11,8)
#define AWIN_LRADC_CTRL_LV_A_B_CNT_SHIFT	8
#define AWIN_LRADC_CTRL_HOLD_EN			__BIT(6)
#define AWIN_LRADC_CTRL_LEVEL_B_MASK		__BITS(5,4)
#define AWIN_LRADC_CTRL_LEVEL_B_3C		(0 << 4)
#define AWIN_LRADC_CTRL_LEVEL_B_39		(1 << 4)
#define AWIN_LRADC_CTRL_LEVEL_B_36		(2 << 4)
#define AWIN_LRADC_CTRL_LEVEL_B_33		(3 << 4)
#define AWIN_LRADC_CTRL_RATE_MASK		__BITS(3,2)
#define AWIN_LRADC_CTRL_RATE_250		(0 << 2)
#define AWIN_LRADC_CTRL_RATE_125		(1 << 2)
#define AWIN_LRADC_CTRL_RATE_62			(2 << 2)
#define AWIN_LRADC_CTRL_RATE_31			(3 << 2)
#define AWIN_LRADC_CTRL_EN			__BIT(0)
#define AWIN_LRADC_INTC_REG		0x04
#define AWIN_LRADC_INTS_REG		0x08
#define AWIN_LRADC_INT_KEYUP1		__BIT(12)
#define AWIN_LRADC_INT_ALREADYHOLD1	__BIT(11)
#define AWIN_LRADC_INT_HOLD1		__BIT(10)
#define AWIN_LRADC_INT_KEY1		__BIT(9)
#define AWIN_LRADC_INT_DATA1		__BIT(8)
#define AWIN_LRADC_INT_KEYUP0		__BIT(4)
#define AWIN_LRADC_INT_ALREADYHOLD0	__BIT(3)
#define AWIN_LRADC_INT_HOLD0		__BIT(2)
#define AWIN_LRADC_INT_KEY0		__BIT(1)
#define AWIN_LRADC_INT_DATA0		__BIT(0)
#define AWIN_LRADC_DATA0_REG		0x0c
#define AWIN_LRADC_DATA1_REG		0x10

