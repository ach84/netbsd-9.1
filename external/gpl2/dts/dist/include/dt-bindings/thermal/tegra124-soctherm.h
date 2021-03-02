/*	$NetBSD: tegra124-soctherm.h,v 1.1.1.2 2017/11/30 19:40:51 jmcneill Exp $	*/

/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for binding nvidia,tegra124-soctherm.
 */

#ifndef _DT_BINDINGS_THERMAL_TEGRA124_SOCTHERM_H
#define _DT_BINDINGS_THERMAL_TEGRA124_SOCTHERM_H

#define TEGRA124_SOCTHERM_SENSOR_CPU 0
#define TEGRA124_SOCTHERM_SENSOR_MEM 1
#define TEGRA124_SOCTHERM_SENSOR_GPU 2
#define TEGRA124_SOCTHERM_SENSOR_PLLX 3
#define TEGRA124_SOCTHERM_SENSOR_NUM 4

#define TEGRA_SOCTHERM_THROT_LEVEL_LOW  0
#define TEGRA_SOCTHERM_THROT_LEVEL_MED  1
#define TEGRA_SOCTHERM_THROT_LEVEL_HIGH 2
#define TEGRA_SOCTHERM_THROT_LEVEL_NONE -1

#endif
