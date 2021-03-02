/*	$NetBSD: clearstate_ci.h,v 1.2 2018/08/27 04:58:20 riastradh Exp $	*/

/*
 * Copyright 2013 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */

static const unsigned int ci_SECT_CONTEXT_def_1[] =
{
    0x00000000, // DB_RENDER_CONTROL
    0x00000000, // DB_COUNT_CONTROL
    0x00000000, // DB_DEPTH_VIEW
    0x00000000, // DB_RENDER_OVERRIDE
    0x00000000, // DB_RENDER_OVERRIDE2
    0x00000000, // DB_HTILE_DATA_BASE
    0, // HOLE
    0, // HOLE
    0x00000000, // DB_DEPTH_BOUNDS_MIN
    0x00000000, // DB_DEPTH_BOUNDS_MAX
    0x00000000, // DB_STENCIL_CLEAR
    0x00000000, // DB_DEPTH_CLEAR
    0x00000000, // PA_SC_SCREEN_SCISSOR_TL
    0x40004000, // PA_SC_SCREEN_SCISSOR_BR
    0, // HOLE
    0x00000000, // DB_DEPTH_INFO
    0x00000000, // DB_Z_INFO
    0x00000000, // DB_STENCIL_INFO
    0x00000000, // DB_Z_READ_BASE
    0x00000000, // DB_STENCIL_READ_BASE
    0x00000000, // DB_Z_WRITE_BASE
    0x00000000, // DB_STENCIL_WRITE_BASE
    0x00000000, // DB_DEPTH_SIZE
    0x00000000, // DB_DEPTH_SLICE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // TA_BC_BASE_ADDR
    0x00000000, // TA_BC_BASE_ADDR_HI
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // COHER_DEST_BASE_HI_0
    0x00000000, // COHER_DEST_BASE_HI_1
    0x00000000, // COHER_DEST_BASE_HI_2
    0x00000000, // COHER_DEST_BASE_HI_3
    0x00000000, // COHER_DEST_BASE_2
    0x00000000, // COHER_DEST_BASE_3
    0x00000000, // PA_SC_WINDOW_OFFSET
    0x80000000, // PA_SC_WINDOW_SCISSOR_TL
    0x40004000, // PA_SC_WINDOW_SCISSOR_BR
    0x0000ffff, // PA_SC_CLIPRECT_RULE
    0x00000000, // PA_SC_CLIPRECT_0_TL
    0x40004000, // PA_SC_CLIPRECT_0_BR
    0x00000000, // PA_SC_CLIPRECT_1_TL
    0x40004000, // PA_SC_CLIPRECT_1_BR
    0x00000000, // PA_SC_CLIPRECT_2_TL
    0x40004000, // PA_SC_CLIPRECT_2_BR
    0x00000000, // PA_SC_CLIPRECT_3_TL
    0x40004000, // PA_SC_CLIPRECT_3_BR
    0xaa99aaaa, // PA_SC_EDGERULE
    0x00000000, // PA_SU_HARDWARE_SCREEN_OFFSET
    0xffffffff, // CB_TARGET_MASK
    0xffffffff, // CB_SHADER_MASK
    0x80000000, // PA_SC_GENERIC_SCISSOR_TL
    0x40004000, // PA_SC_GENERIC_SCISSOR_BR
    0x00000000, // COHER_DEST_BASE_0
    0x00000000, // COHER_DEST_BASE_1
    0x80000000, // PA_SC_VPORT_SCISSOR_0_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_0_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_1_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_1_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_2_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_2_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_3_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_3_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_4_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_4_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_5_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_5_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_6_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_6_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_7_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_7_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_8_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_8_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_9_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_9_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_10_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_10_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_11_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_11_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_12_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_12_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_13_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_13_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_14_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_14_BR
    0x80000000, // PA_SC_VPORT_SCISSOR_15_TL
    0x40004000, // PA_SC_VPORT_SCISSOR_15_BR
    0x00000000, // PA_SC_VPORT_ZMIN_0
    0x3f800000, // PA_SC_VPORT_ZMAX_0
    0x00000000, // PA_SC_VPORT_ZMIN_1
    0x3f800000, // PA_SC_VPORT_ZMAX_1
    0x00000000, // PA_SC_VPORT_ZMIN_2
    0x3f800000, // PA_SC_VPORT_ZMAX_2
    0x00000000, // PA_SC_VPORT_ZMIN_3
    0x3f800000, // PA_SC_VPORT_ZMAX_3
    0x00000000, // PA_SC_VPORT_ZMIN_4
    0x3f800000, // PA_SC_VPORT_ZMAX_4
    0x00000000, // PA_SC_VPORT_ZMIN_5
    0x3f800000, // PA_SC_VPORT_ZMAX_5
    0x00000000, // PA_SC_VPORT_ZMIN_6
    0x3f800000, // PA_SC_VPORT_ZMAX_6
    0x00000000, // PA_SC_VPORT_ZMIN_7
    0x3f800000, // PA_SC_VPORT_ZMAX_7
    0x00000000, // PA_SC_VPORT_ZMIN_8
    0x3f800000, // PA_SC_VPORT_ZMAX_8
    0x00000000, // PA_SC_VPORT_ZMIN_9
    0x3f800000, // PA_SC_VPORT_ZMAX_9
    0x00000000, // PA_SC_VPORT_ZMIN_10
    0x3f800000, // PA_SC_VPORT_ZMAX_10
    0x00000000, // PA_SC_VPORT_ZMIN_11
    0x3f800000, // PA_SC_VPORT_ZMAX_11
    0x00000000, // PA_SC_VPORT_ZMIN_12
    0x3f800000, // PA_SC_VPORT_ZMAX_12
    0x00000000, // PA_SC_VPORT_ZMIN_13
    0x3f800000, // PA_SC_VPORT_ZMAX_13
    0x00000000, // PA_SC_VPORT_ZMIN_14
    0x3f800000, // PA_SC_VPORT_ZMAX_14
    0x00000000, // PA_SC_VPORT_ZMIN_15
    0x3f800000, // PA_SC_VPORT_ZMAX_15
};
static const unsigned int ci_SECT_CONTEXT_def_2[] =
{
    0x00000000, // PA_SC_SCREEN_EXTENT_CONTROL
    0, // HOLE
    0x00000000, // CP_PERFMON_CNTX_CNTL
    0x00000000, // CP_RINGID
    0x00000000, // CP_VMID
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0xffffffff, // VGT_MAX_VTX_INDX
    0x00000000, // VGT_MIN_VTX_INDX
    0x00000000, // VGT_INDX_OFFSET
    0x00000000, // VGT_MULTI_PRIM_IB_RESET_INDX
    0, // HOLE
    0x00000000, // CB_BLEND_RED
    0x00000000, // CB_BLEND_GREEN
    0x00000000, // CB_BLEND_BLUE
    0x00000000, // CB_BLEND_ALPHA
    0, // HOLE
    0, // HOLE
    0x00000000, // DB_STENCIL_CONTROL
    0x00000000, // DB_STENCILREFMASK
    0x00000000, // DB_STENCILREFMASK_BF
    0, // HOLE
    0x00000000, // PA_CL_VPORT_XSCALE
    0x00000000, // PA_CL_VPORT_XOFFSET
    0x00000000, // PA_CL_VPORT_YSCALE
    0x00000000, // PA_CL_VPORT_YOFFSET
    0x00000000, // PA_CL_VPORT_ZSCALE
    0x00000000, // PA_CL_VPORT_ZOFFSET
    0x00000000, // PA_CL_VPORT_XSCALE_1
    0x00000000, // PA_CL_VPORT_XOFFSET_1
    0x00000000, // PA_CL_VPORT_YSCALE_1
    0x00000000, // PA_CL_VPORT_YOFFSET_1
    0x00000000, // PA_CL_VPORT_ZSCALE_1
    0x00000000, // PA_CL_VPORT_ZOFFSET_1
    0x00000000, // PA_CL_VPORT_XSCALE_2
    0x00000000, // PA_CL_VPORT_XOFFSET_2
    0x00000000, // PA_CL_VPORT_YSCALE_2
    0x00000000, // PA_CL_VPORT_YOFFSET_2
    0x00000000, // PA_CL_VPORT_ZSCALE_2
    0x00000000, // PA_CL_VPORT_ZOFFSET_2
    0x00000000, // PA_CL_VPORT_XSCALE_3
    0x00000000, // PA_CL_VPORT_XOFFSET_3
    0x00000000, // PA_CL_VPORT_YSCALE_3
    0x00000000, // PA_CL_VPORT_YOFFSET_3
    0x00000000, // PA_CL_VPORT_ZSCALE_3
    0x00000000, // PA_CL_VPORT_ZOFFSET_3
    0x00000000, // PA_CL_VPORT_XSCALE_4
    0x00000000, // PA_CL_VPORT_XOFFSET_4
    0x00000000, // PA_CL_VPORT_YSCALE_4
    0x00000000, // PA_CL_VPORT_YOFFSET_4
    0x00000000, // PA_CL_VPORT_ZSCALE_4
    0x00000000, // PA_CL_VPORT_ZOFFSET_4
    0x00000000, // PA_CL_VPORT_XSCALE_5
    0x00000000, // PA_CL_VPORT_XOFFSET_5
    0x00000000, // PA_CL_VPORT_YSCALE_5
    0x00000000, // PA_CL_VPORT_YOFFSET_5
    0x00000000, // PA_CL_VPORT_ZSCALE_5
    0x00000000, // PA_CL_VPORT_ZOFFSET_5
    0x00000000, // PA_CL_VPORT_XSCALE_6
    0x00000000, // PA_CL_VPORT_XOFFSET_6
    0x00000000, // PA_CL_VPORT_YSCALE_6
    0x00000000, // PA_CL_VPORT_YOFFSET_6
    0x00000000, // PA_CL_VPORT_ZSCALE_6
    0x00000000, // PA_CL_VPORT_ZOFFSET_6
    0x00000000, // PA_CL_VPORT_XSCALE_7
    0x00000000, // PA_CL_VPORT_XOFFSET_7
    0x00000000, // PA_CL_VPORT_YSCALE_7
    0x00000000, // PA_CL_VPORT_YOFFSET_7
    0x00000000, // PA_CL_VPORT_ZSCALE_7
    0x00000000, // PA_CL_VPORT_ZOFFSET_7
    0x00000000, // PA_CL_VPORT_XSCALE_8
    0x00000000, // PA_CL_VPORT_XOFFSET_8
    0x00000000, // PA_CL_VPORT_YSCALE_8
    0x00000000, // PA_CL_VPORT_YOFFSET_8
    0x00000000, // PA_CL_VPORT_ZSCALE_8
    0x00000000, // PA_CL_VPORT_ZOFFSET_8
    0x00000000, // PA_CL_VPORT_XSCALE_9
    0x00000000, // PA_CL_VPORT_XOFFSET_9
    0x00000000, // PA_CL_VPORT_YSCALE_9
    0x00000000, // PA_CL_VPORT_YOFFSET_9
    0x00000000, // PA_CL_VPORT_ZSCALE_9
    0x00000000, // PA_CL_VPORT_ZOFFSET_9
    0x00000000, // PA_CL_VPORT_XSCALE_10
    0x00000000, // PA_CL_VPORT_XOFFSET_10
    0x00000000, // PA_CL_VPORT_YSCALE_10
    0x00000000, // PA_CL_VPORT_YOFFSET_10
    0x00000000, // PA_CL_VPORT_ZSCALE_10
    0x00000000, // PA_CL_VPORT_ZOFFSET_10
    0x00000000, // PA_CL_VPORT_XSCALE_11
    0x00000000, // PA_CL_VPORT_XOFFSET_11
    0x00000000, // PA_CL_VPORT_YSCALE_11
    0x00000000, // PA_CL_VPORT_YOFFSET_11
    0x00000000, // PA_CL_VPORT_ZSCALE_11
    0x00000000, // PA_CL_VPORT_ZOFFSET_11
    0x00000000, // PA_CL_VPORT_XSCALE_12
    0x00000000, // PA_CL_VPORT_XOFFSET_12
    0x00000000, // PA_CL_VPORT_YSCALE_12
    0x00000000, // PA_CL_VPORT_YOFFSET_12
    0x00000000, // PA_CL_VPORT_ZSCALE_12
    0x00000000, // PA_CL_VPORT_ZOFFSET_12
    0x00000000, // PA_CL_VPORT_XSCALE_13
    0x00000000, // PA_CL_VPORT_XOFFSET_13
    0x00000000, // PA_CL_VPORT_YSCALE_13
    0x00000000, // PA_CL_VPORT_YOFFSET_13
    0x00000000, // PA_CL_VPORT_ZSCALE_13
    0x00000000, // PA_CL_VPORT_ZOFFSET_13
    0x00000000, // PA_CL_VPORT_XSCALE_14
    0x00000000, // PA_CL_VPORT_XOFFSET_14
    0x00000000, // PA_CL_VPORT_YSCALE_14
    0x00000000, // PA_CL_VPORT_YOFFSET_14
    0x00000000, // PA_CL_VPORT_ZSCALE_14
    0x00000000, // PA_CL_VPORT_ZOFFSET_14
    0x00000000, // PA_CL_VPORT_XSCALE_15
    0x00000000, // PA_CL_VPORT_XOFFSET_15
    0x00000000, // PA_CL_VPORT_YSCALE_15
    0x00000000, // PA_CL_VPORT_YOFFSET_15
    0x00000000, // PA_CL_VPORT_ZSCALE_15
    0x00000000, // PA_CL_VPORT_ZOFFSET_15
    0x00000000, // PA_CL_UCP_0_X
    0x00000000, // PA_CL_UCP_0_Y
    0x00000000, // PA_CL_UCP_0_Z
    0x00000000, // PA_CL_UCP_0_W
    0x00000000, // PA_CL_UCP_1_X
    0x00000000, // PA_CL_UCP_1_Y
    0x00000000, // PA_CL_UCP_1_Z
    0x00000000, // PA_CL_UCP_1_W
    0x00000000, // PA_CL_UCP_2_X
    0x00000000, // PA_CL_UCP_2_Y
    0x00000000, // PA_CL_UCP_2_Z
    0x00000000, // PA_CL_UCP_2_W
    0x00000000, // PA_CL_UCP_3_X
    0x00000000, // PA_CL_UCP_3_Y
    0x00000000, // PA_CL_UCP_3_Z
    0x00000000, // PA_CL_UCP_3_W
    0x00000000, // PA_CL_UCP_4_X
    0x00000000, // PA_CL_UCP_4_Y
    0x00000000, // PA_CL_UCP_4_Z
    0x00000000, // PA_CL_UCP_4_W
    0x00000000, // PA_CL_UCP_5_X
    0x00000000, // PA_CL_UCP_5_Y
    0x00000000, // PA_CL_UCP_5_Z
    0x00000000, // PA_CL_UCP_5_W
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // SPI_PS_INPUT_CNTL_0
    0x00000000, // SPI_PS_INPUT_CNTL_1
    0x00000000, // SPI_PS_INPUT_CNTL_2
    0x00000000, // SPI_PS_INPUT_CNTL_3
    0x00000000, // SPI_PS_INPUT_CNTL_4
    0x00000000, // SPI_PS_INPUT_CNTL_5
    0x00000000, // SPI_PS_INPUT_CNTL_6
    0x00000000, // SPI_PS_INPUT_CNTL_7
    0x00000000, // SPI_PS_INPUT_CNTL_8
    0x00000000, // SPI_PS_INPUT_CNTL_9
    0x00000000, // SPI_PS_INPUT_CNTL_10
    0x00000000, // SPI_PS_INPUT_CNTL_11
    0x00000000, // SPI_PS_INPUT_CNTL_12
    0x00000000, // SPI_PS_INPUT_CNTL_13
    0x00000000, // SPI_PS_INPUT_CNTL_14
    0x00000000, // SPI_PS_INPUT_CNTL_15
    0x00000000, // SPI_PS_INPUT_CNTL_16
    0x00000000, // SPI_PS_INPUT_CNTL_17
    0x00000000, // SPI_PS_INPUT_CNTL_18
    0x00000000, // SPI_PS_INPUT_CNTL_19
    0x00000000, // SPI_PS_INPUT_CNTL_20
    0x00000000, // SPI_PS_INPUT_CNTL_21
    0x00000000, // SPI_PS_INPUT_CNTL_22
    0x00000000, // SPI_PS_INPUT_CNTL_23
    0x00000000, // SPI_PS_INPUT_CNTL_24
    0x00000000, // SPI_PS_INPUT_CNTL_25
    0x00000000, // SPI_PS_INPUT_CNTL_26
    0x00000000, // SPI_PS_INPUT_CNTL_27
    0x00000000, // SPI_PS_INPUT_CNTL_28
    0x00000000, // SPI_PS_INPUT_CNTL_29
    0x00000000, // SPI_PS_INPUT_CNTL_30
    0x00000000, // SPI_PS_INPUT_CNTL_31
    0x00000000, // SPI_VS_OUT_CONFIG
    0, // HOLE
    0x00000000, // SPI_PS_INPUT_ENA
    0x00000000, // SPI_PS_INPUT_ADDR
    0x00000000, // SPI_INTERP_CONTROL_0
    0x00000002, // SPI_PS_IN_CONTROL
    0, // HOLE
    0x00000000, // SPI_BARYC_CNTL
    0, // HOLE
    0x00000000, // SPI_TMPRING_SIZE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // SPI_SHADER_POS_FORMAT
    0x00000000, // SPI_SHADER_Z_FORMAT
    0x00000000, // SPI_SHADER_COL_FORMAT
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_BLEND0_CONTROL
    0x00000000, // CB_BLEND1_CONTROL
    0x00000000, // CB_BLEND2_CONTROL
    0x00000000, // CB_BLEND3_CONTROL
    0x00000000, // CB_BLEND4_CONTROL
    0x00000000, // CB_BLEND5_CONTROL
    0x00000000, // CB_BLEND6_CONTROL
    0x00000000, // CB_BLEND7_CONTROL
};
static const unsigned int ci_SECT_CONTEXT_def_3[] =
{
    0x00000000, // PA_CL_POINT_X_RAD
    0x00000000, // PA_CL_POINT_Y_RAD
    0x00000000, // PA_CL_POINT_SIZE
    0x00000000, // PA_CL_POINT_CULL_RAD
    0x00000000, // VGT_DMA_BASE_HI
    0x00000000, // VGT_DMA_BASE
};
static const unsigned int ci_SECT_CONTEXT_def_4[] =
{
    0x00000000, // DB_DEPTH_CONTROL
    0x00000000, // DB_EQAA
    0x00000000, // CB_COLOR_CONTROL
    0x00000000, // DB_SHADER_CONTROL
    0x00090000, // PA_CL_CLIP_CNTL
    0x00000004, // PA_SU_SC_MODE_CNTL
    0x00000000, // PA_CL_VTE_CNTL
    0x00000000, // PA_CL_VS_OUT_CNTL
    0x00000000, // PA_CL_NANINF_CNTL
    0x00000000, // PA_SU_LINE_STIPPLE_CNTL
    0x00000000, // PA_SU_LINE_STIPPLE_SCALE
    0x00000000, // PA_SU_PRIM_FILTER_CNTL
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // PA_SU_POINT_SIZE
    0x00000000, // PA_SU_POINT_MINMAX
    0x00000000, // PA_SU_LINE_CNTL
    0x00000000, // PA_SC_LINE_STIPPLE
    0x00000000, // VGT_OUTPUT_PATH_CNTL
    0x00000000, // VGT_HOS_CNTL
    0x00000000, // VGT_HOS_MAX_TESS_LEVEL
    0x00000000, // VGT_HOS_MIN_TESS_LEVEL
    0x00000000, // VGT_HOS_REUSE_DEPTH
    0x00000000, // VGT_GROUP_PRIM_TYPE
    0x00000000, // VGT_GROUP_FIRST_DECR
    0x00000000, // VGT_GROUP_DECR
    0x00000000, // VGT_GROUP_VECT_0_CNTL
    0x00000000, // VGT_GROUP_VECT_1_CNTL
    0x00000000, // VGT_GROUP_VECT_0_FMT_CNTL
    0x00000000, // VGT_GROUP_VECT_1_FMT_CNTL
    0x00000000, // VGT_GS_MODE
    0x00000000, // VGT_GS_ONCHIP_CNTL
    0x00000000, // PA_SC_MODE_CNTL_0
    0x00000000, // PA_SC_MODE_CNTL_1
    0x00000000, // VGT_ENHANCE
    0x00000100, // VGT_GS_PER_ES
    0x00000080, // VGT_ES_PER_GS
    0x00000002, // VGT_GS_PER_VS
    0x00000000, // VGT_GSVS_RING_OFFSET_1
    0x00000000, // VGT_GSVS_RING_OFFSET_2
    0x00000000, // VGT_GSVS_RING_OFFSET_3
    0x00000000, // VGT_GS_OUT_PRIM_TYPE
    0x00000000, // IA_ENHANCE
};
static const unsigned int ci_SECT_CONTEXT_def_5[] =
{
    0x00000000, // WD_ENHANCE
    0x00000000, // VGT_PRIMITIVEID_EN
};
static const unsigned int ci_SECT_CONTEXT_def_6[] =
{
    0x00000000, // VGT_PRIMITIVEID_RESET
};
static const unsigned int ci_SECT_CONTEXT_def_7[] =
{
    0x00000000, // VGT_MULTI_PRIM_IB_RESET_EN
    0, // HOLE
    0, // HOLE
    0x00000000, // VGT_INSTANCE_STEP_RATE_0
    0x00000000, // VGT_INSTANCE_STEP_RATE_1
    0x000000ff, // IA_MULTI_VGT_PARAM
    0x00000000, // VGT_ESGS_RING_ITEMSIZE
    0x00000000, // VGT_GSVS_RING_ITEMSIZE
    0x00000000, // VGT_REUSE_OFF
    0x00000000, // VGT_VTX_CNT_EN
    0x00000000, // DB_HTILE_SURFACE
    0x00000000, // DB_SRESULTS_COMPARE_STATE0
    0x00000000, // DB_SRESULTS_COMPARE_STATE1
    0x00000000, // DB_PRELOAD_CONTROL
    0, // HOLE
    0x00000000, // VGT_STRMOUT_BUFFER_SIZE_0
    0x00000000, // VGT_STRMOUT_VTX_STRIDE_0
    0, // HOLE
    0x00000000, // VGT_STRMOUT_BUFFER_OFFSET_0
    0x00000000, // VGT_STRMOUT_BUFFER_SIZE_1
    0x00000000, // VGT_STRMOUT_VTX_STRIDE_1
    0, // HOLE
    0x00000000, // VGT_STRMOUT_BUFFER_OFFSET_1
    0x00000000, // VGT_STRMOUT_BUFFER_SIZE_2
    0x00000000, // VGT_STRMOUT_VTX_STRIDE_2
    0, // HOLE
    0x00000000, // VGT_STRMOUT_BUFFER_OFFSET_2
    0x00000000, // VGT_STRMOUT_BUFFER_SIZE_3
    0x00000000, // VGT_STRMOUT_VTX_STRIDE_3
    0, // HOLE
    0x00000000, // VGT_STRMOUT_BUFFER_OFFSET_3
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // VGT_STRMOUT_DRAW_OPAQUE_OFFSET
    0x00000000, // VGT_STRMOUT_DRAW_OPAQUE_BUFFER_FILLED_SIZE
    0x00000000, // VGT_STRMOUT_DRAW_OPAQUE_VERTEX_STRIDE
    0, // HOLE
    0x00000000, // VGT_GS_MAX_VERT_OUT
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // VGT_SHADER_STAGES_EN
    0x00000000, // VGT_LS_HS_CONFIG
    0x00000000, // VGT_GS_VERT_ITEMSIZE
    0x00000000, // VGT_GS_VERT_ITEMSIZE_1
    0x00000000, // VGT_GS_VERT_ITEMSIZE_2
    0x00000000, // VGT_GS_VERT_ITEMSIZE_3
    0x00000000, // VGT_TF_PARAM
    0x00000000, // DB_ALPHA_TO_MASK
    0, // HOLE
    0x00000000, // PA_SU_POLY_OFFSET_DB_FMT_CNTL
    0x00000000, // PA_SU_POLY_OFFSET_CLAMP
    0x00000000, // PA_SU_POLY_OFFSET_FRONT_SCALE
    0x00000000, // PA_SU_POLY_OFFSET_FRONT_OFFSET
    0x00000000, // PA_SU_POLY_OFFSET_BACK_SCALE
    0x00000000, // PA_SU_POLY_OFFSET_BACK_OFFSET
    0x00000000, // VGT_GS_INSTANCE_CNT
    0x00000000, // VGT_STRMOUT_CONFIG
    0x00000000, // VGT_STRMOUT_BUFFER_CONFIG
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x00000000, // PA_SC_CENTROID_PRIORITY_0
    0x00000000, // PA_SC_CENTROID_PRIORITY_1
    0x00001000, // PA_SC_LINE_CNTL
    0x00000000, // PA_SC_AA_CONFIG
    0x00000005, // PA_SU_VTX_CNTL
    0x3f800000, // PA_CL_GB_VERT_CLIP_ADJ
    0x3f800000, // PA_CL_GB_VERT_DISC_ADJ
    0x3f800000, // PA_CL_GB_HORZ_CLIP_ADJ
    0x3f800000, // PA_CL_GB_HORZ_DISC_ADJ
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_0
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_1
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_2
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_0
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_1
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_2
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y0_3
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_0
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_1
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_2
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y1_3
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_0
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_1
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_2
    0x00000000, // PA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3
    0xffffffff, // PA_SC_AA_MASK_X0Y0_X1Y0
    0xffffffff, // PA_SC_AA_MASK_X0Y1_X1Y1
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0, // HOLE
    0x0000000e, // VGT_VERTEX_REUSE_BLOCK_CNTL
    0x00000010, // VGT_OUT_DEALLOC_CNTL
    0x00000000, // CB_COLOR0_BASE
    0x00000000, // CB_COLOR0_PITCH
    0x00000000, // CB_COLOR0_SLICE
    0x00000000, // CB_COLOR0_VIEW
    0x00000000, // CB_COLOR0_INFO
    0x00000000, // CB_COLOR0_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR0_CMASK
    0x00000000, // CB_COLOR0_CMASK_SLICE
    0x00000000, // CB_COLOR0_FMASK
    0x00000000, // CB_COLOR0_FMASK_SLICE
    0x00000000, // CB_COLOR0_CLEAR_WORD0
    0x00000000, // CB_COLOR0_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR1_BASE
    0x00000000, // CB_COLOR1_PITCH
    0x00000000, // CB_COLOR1_SLICE
    0x00000000, // CB_COLOR1_VIEW
    0x00000000, // CB_COLOR1_INFO
    0x00000000, // CB_COLOR1_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR1_CMASK
    0x00000000, // CB_COLOR1_CMASK_SLICE
    0x00000000, // CB_COLOR1_FMASK
    0x00000000, // CB_COLOR1_FMASK_SLICE
    0x00000000, // CB_COLOR1_CLEAR_WORD0
    0x00000000, // CB_COLOR1_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR2_BASE
    0x00000000, // CB_COLOR2_PITCH
    0x00000000, // CB_COLOR2_SLICE
    0x00000000, // CB_COLOR2_VIEW
    0x00000000, // CB_COLOR2_INFO
    0x00000000, // CB_COLOR2_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR2_CMASK
    0x00000000, // CB_COLOR2_CMASK_SLICE
    0x00000000, // CB_COLOR2_FMASK
    0x00000000, // CB_COLOR2_FMASK_SLICE
    0x00000000, // CB_COLOR2_CLEAR_WORD0
    0x00000000, // CB_COLOR2_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR3_BASE
    0x00000000, // CB_COLOR3_PITCH
    0x00000000, // CB_COLOR3_SLICE
    0x00000000, // CB_COLOR3_VIEW
    0x00000000, // CB_COLOR3_INFO
    0x00000000, // CB_COLOR3_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR3_CMASK
    0x00000000, // CB_COLOR3_CMASK_SLICE
    0x00000000, // CB_COLOR3_FMASK
    0x00000000, // CB_COLOR3_FMASK_SLICE
    0x00000000, // CB_COLOR3_CLEAR_WORD0
    0x00000000, // CB_COLOR3_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR4_BASE
    0x00000000, // CB_COLOR4_PITCH
    0x00000000, // CB_COLOR4_SLICE
    0x00000000, // CB_COLOR4_VIEW
    0x00000000, // CB_COLOR4_INFO
    0x00000000, // CB_COLOR4_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR4_CMASK
    0x00000000, // CB_COLOR4_CMASK_SLICE
    0x00000000, // CB_COLOR4_FMASK
    0x00000000, // CB_COLOR4_FMASK_SLICE
    0x00000000, // CB_COLOR4_CLEAR_WORD0
    0x00000000, // CB_COLOR4_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR5_BASE
    0x00000000, // CB_COLOR5_PITCH
    0x00000000, // CB_COLOR5_SLICE
    0x00000000, // CB_COLOR5_VIEW
    0x00000000, // CB_COLOR5_INFO
    0x00000000, // CB_COLOR5_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR5_CMASK
    0x00000000, // CB_COLOR5_CMASK_SLICE
    0x00000000, // CB_COLOR5_FMASK
    0x00000000, // CB_COLOR5_FMASK_SLICE
    0x00000000, // CB_COLOR5_CLEAR_WORD0
    0x00000000, // CB_COLOR5_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR6_BASE
    0x00000000, // CB_COLOR6_PITCH
    0x00000000, // CB_COLOR6_SLICE
    0x00000000, // CB_COLOR6_VIEW
    0x00000000, // CB_COLOR6_INFO
    0x00000000, // CB_COLOR6_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR6_CMASK
    0x00000000, // CB_COLOR6_CMASK_SLICE
    0x00000000, // CB_COLOR6_FMASK
    0x00000000, // CB_COLOR6_FMASK_SLICE
    0x00000000, // CB_COLOR6_CLEAR_WORD0
    0x00000000, // CB_COLOR6_CLEAR_WORD1
    0, // HOLE
    0, // HOLE
    0x00000000, // CB_COLOR7_BASE
    0x00000000, // CB_COLOR7_PITCH
    0x00000000, // CB_COLOR7_SLICE
    0x00000000, // CB_COLOR7_VIEW
    0x00000000, // CB_COLOR7_INFO
    0x00000000, // CB_COLOR7_ATTRIB
    0, // HOLE
    0x00000000, // CB_COLOR7_CMASK
    0x00000000, // CB_COLOR7_CMASK_SLICE
    0x00000000, // CB_COLOR7_FMASK
    0x00000000, // CB_COLOR7_FMASK_SLICE
    0x00000000, // CB_COLOR7_CLEAR_WORD0
    0x00000000, // CB_COLOR7_CLEAR_WORD1
};
static const struct cs_extent_def ci_SECT_CONTEXT_defs[] =
{
    {ci_SECT_CONTEXT_def_1, 0x0000a000, 212 },
    {ci_SECT_CONTEXT_def_2, 0x0000a0d6, 274 },
    {ci_SECT_CONTEXT_def_3, 0x0000a1f5, 6 },
    {ci_SECT_CONTEXT_def_4, 0x0000a200, 157 },
    {ci_SECT_CONTEXT_def_5, 0x0000a2a0, 2 },
    {ci_SECT_CONTEXT_def_6, 0x0000a2a3, 1 },
    {ci_SECT_CONTEXT_def_7, 0x0000a2a5, 233 },
    { 0, 0, 0 }
};
static const struct cs_section_def ci_cs_data[] = {
    { ci_SECT_CONTEXT_defs, SECT_CONTEXT },
    { 0, SECT_NONE }
};
