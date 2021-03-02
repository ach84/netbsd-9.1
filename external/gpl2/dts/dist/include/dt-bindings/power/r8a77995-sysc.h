/*	$NetBSD: r8a77995-sysc.h,v 1.1.1.1 2017/10/28 10:30:32 jmcneill Exp $	*/

/*
 * Copyright (C) 2017 Glider bvba
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 */
#ifndef __DT_BINDINGS_POWER_R8A77995_SYSC_H__
#define __DT_BINDINGS_POWER_R8A77995_SYSC_H__

/*
 * These power domain indices match the numbers of the interrupt bits
 * representing the power areas in the various Interrupt Registers
 * (e.g. SYSCISR, Interrupt Status Register)
 */

#define R8A77995_PD_CA53_CPU0		 5
#define R8A77995_PD_CA53_SCU		21

/* Always-on power area */
#define R8A77995_PD_ALWAYS_ON		32

#endif /* __DT_BINDINGS_POWER_R8A77995_SYSC_H__ */