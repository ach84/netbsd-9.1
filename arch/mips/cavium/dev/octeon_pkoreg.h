/*	$NetBSD: octeon_pkoreg.h,v 1.1 2015/04/29 08:32:01 hikaru Exp $	*/

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
 * PKO Registers
 */

#ifndef _OCTEON_PKOREG_H_
#define _OCTEON_PKOREG_H_

#define	PKO_REG_FLAGS				0x0001180050000000ULL
#define	PKO_REG_READ_IDX			0x0001180050000008ULL
#define	PKO_REG_CMD_BUF				0x0001180050000010ULL
#define	PKO_REG_GMX_PORT_MODE			0x0001180050000018ULL
#define	PKO_REG_QUEUE_MODE			0x0001180050000048ULL
#define	PKO_REG_BIST_RESULT			0x0001180050000050ULL
#define	PKO_REG_ERROR				0x0001180050000058ULL
#define	PKO_REG_INT_MASK			0x0001180050000090ULL
#define	PKO_REG_DEBUG0				0x0001180050000098ULL
#define	PKO_MEM_QUEUE_PTRS			0x0001180050001000ULL
#define	PKO_MEM_QUEUE_QOS			0x0001180050001008ULL
#define	PKO_MEM_COUNT0				0x0001180050001080ULL
#define	PKO_MEM_COUNT1				0x0001180050001088ULL
#define	PKO_DEBUG0				0x0001180050001100ULL
#define	PKO_DEBUG1				0x0001180050001108ULL
#define	PKO_DEBUG2				0x0001180050001110ULL
#define	PKO_DEBUG3				0x0001180050001118ULL
#define	PKO_DEBUG4				0x0001180050001120ULL
#define	PKO_DEBUG5				0x0001180050001128ULL
#define	PKO_DEBUG6				0x0001180050001130ULL
#define	PKO_DEBUG7				0x0001180050001138ULL
#define	PKO_DEBUG8				0x0001180050001140ULL
#define	PKO_DEBUG9				0x0001180050001148ULL
#define	PKO_DEBUG10				0x0001180050001150ULL
#define	PKO_DEBUG11				0x0001180050001158ULL
#define	PKO_DEBUG12				0x0001180050001160ULL
#define	PKO_DEBUG13				0x0001180050001168ULL
#define	PKO_DEBUG14				0x0001180050001170ULL

#define PKO_BASE				0x0001180050000000ULL
#define	PKO_SIZE				0x01178ULL

#define PKO_REG_FLAGS_OFFSET			0x00000ULL
#define PKO_REG_READ_IDX_OFFSET			0x00008ULL
#define	PKO_REG_CMD_BUF_OFFSET			0x00010ULL
#define	PKO_REG_GMX_PORT_MODE_OFFSET		0x00018ULL
#define	PKO_REG_QUEUE_MODE_OFFSET		0x00048ULL
#define	PKO_REG_BIST_RESULT_OFFSET		0x00080ULL
#define	PKO_REG_ERROR_OFFSET			0x00088ULL
#define	PKO_REG_INT_MASK_OFFSET			0x00090ULL
#define	PKO_REG_DEBUG0_OFFSET			0x00098ULL
#define	PKO_MEM_QUEUE_PTRS_OFFSET		0x01000ULL
#define	PKO_MEM_QUEUE_QOS_OFFSET		0x01008ULL
#define	PKO_MEM_COUNT0_OFFSET			0x01080ULL
#define	PKO_MEM_COUNT1_OFFSET			0x01088ULL
#define	PKO_MEM_DEBUG0_OFFSET			0x01100ULL
#define	PKO_MEM_DEBUG1_OFFSET			0x01108ULL
#define	PKO_MEM_DEBUG2_OFFSET			0x01110ULL
#define	PKO_MEM_DEBUG3_OFFSET			0x01118ULL
#define	PKO_MEM_DEBUG4_OFFSET			0x01120ULL
#define	PKO_MEM_DEBUG5_OFFSET			0x01128ULL
#define	PKO_MEM_DEBUG6_OFFSET			0x01130ULL
#define	PKO_MEM_DEBUG7_OFFSET			0x01138ULL
#define	PKO_MEM_DEBUG8_OFFSET			0x01140ULL
#define	PKO_MEM_DEBUG9_OFFSET			0x01148ULL
#define	PKO_MEM_DEBUG10_OFFSET			0x01150ULL
#define	PKO_MEM_DEBUG11_OFFSET			0x01158ULL
#define	PKO_MEM_DEBUG12_OFFSET			0x01160ULL
#define	PKO_MEM_DEBUG13_OFFSET			0x01168ULL
#define	PKO_MEM_DEBUG14_OFFSET			0x01170ULL

/*
 * PKO_REG_FLAGS
 */
#define PKO_REG_FLAGS_63_7		UINT64_C(0xfffffffffffffff0)
#define PKO_REG_FLAGS_RESET		UINT64_C(0x0000000000000008)
#define PKO_REG_FLAGS_STORE_BE		UINT64_C(0x0000000000000004)
#define PKO_REG_FLAGS_ENA_DWB		UINT64_C(0x0000000000000002)
#define PKO_REG_FLAGS_ENA_PKO		UINT64_C(0x0000000000000001)

/*
 * PKO_REG_READ_IDX
 */
#define PKO_REG_READ_IDX_63_16		UINT64_C(0xffffffffffff0000)
#define PKO_REG_READ_IDX_INC		UINT64_C(0x000000000000ff00)
#define PKO_REG_READ_IDX_IDX		UINT64_C(0x00000000000000ff)

/*
 * PKO_REG_CMD_BUF
 */
#define PKO_REG_CMD_BUF_63_23		UINT64_C(0xffffffffff800000)
#define PKO_REG_CMD_BUF_POOL		UINT64_C(0x0000000000700000)
#define PKO_REG_CMD_BUF_19_13		UINT64_C(0x00000000000fe000)
#define PKO_REG_CMD_BUF_SIZE		UINT64_C(0x0000000000001fff)

/*
 * PKO_REG_GMX_PORT_MODE
 */
#define PKO_REG_GMX_PORT_MODE_63_6	UINT64_C(0xffffffffffffffc0)
#define PKO_REG_GMX_PORT_MODE_MODE1	UINT64_C(0x0000000000000038)
#define PKO_REG_GMX_PORT_MODE_MODE0	UINT64_C(0x0000000000000007)

/*
 * PKO_REG_QUEUE_MODE
 */
#define PKO_REG_QUEUE_MODE_63_6		UINT64_C(0xfffffffffffffffc)
#define PKO_REG_QUEUE_MODE_MODE		UINT64_C(0x000000000000000e)

/*
 * PKO_REG_BIST_RESULT
 */
#define PKO_REG_BIST_RESULT_63_27	UINT64_C(0xfffffffff8000000)
#define PKO_REG_BIST_RESULT_PSB2	UINT64_C(0x0000000007c00000)
#define PKO_REG_BIST_RESULT_COUNT	UINT64_C(0x0000000000200000)
#define PKO_REG_BIST_RESULT_RIF		UINT64_C(0x0000000000100000)
#define PKO_REG_BIST_RESULT_WIF		UINT64_C(0x0000000000080000)
#define PKO_REG_BIST_RESULT_NCB		UINT64_C(0x0000000000040000)
#define PKO_REG_BIST_RESULT_OUT		UINT64_C(0x0000000000020000)
#define PKO_REG_BIST_RESULT_CRC		UINT64_C(0x0000000000010000)
#define PKO_REG_BIST_RESULT_CHK		UINT64_C(0x0000000000008000)
#define PKO_REG_BIST_RESULT_QSB		UINT64_C(0x0000000000006000)
#define PKO_REG_BIST_RESULT_QCB		UINT64_C(0x0000000000001800)
#define PKO_REG_BIST_RESULT_PDB		UINT64_C(0x0000000000000780)
#define PKO_REG_BIST_RESULT_PSB		UINT64_C(0x000000000000007f)

/*
 * PKO_REG_ERROR
 */
#define PKO_REG_ERROR_63_2		UINT64_C(0xfffffffffffffffc)
#define PKO_REG_ERROR_DOORBELL		UINT64_C(0x0000000000000002)
#define PKO_REG_ERROR_PARITY		UINT64_C(0x0000000000000001)

/*
 * PKO_REG_INT_MASK
 */
#define PKO_REG_INT_MASK_63_2		UINT64_C(0xfffffffffffffffc)
#define PKO_REG_INT_MASK_DOORBELL	UINT64_C(0x0000000000000002)
#define PKO_REG_INT_MASK_PARITY		UINT64_C(0x0000000000000001)

/*
 * PKO_REG_DEBUG0
 */
#define PKO_REG_DEBUG0_63_17		UINT64_C(0xfffffffffffe0000)
#define PKO_REG_DEBUG0_ASSERTS		UINT64_C(0x000000000001ffff)

/*
 * PKO_MEM_QUEUE_PTRS
 */
#define PKO_MEM_QUEUE_PTRS_S_TAIL	UINT64_C(0x8000000000000000)
#define PKO_MEM_QUEUE_PTRS_STATIC_P	UINT64_C(0x4000000000000000)
#define PKO_MEM_QUEUE_PTRS_STATIC_Q	UINT64_C(0x2000000000000000)
#define PKO_MEM_QUEUE_PTRS_QOS_MASK	UINT64_C(0x1fe0000000000000)
#define PKO_MEM_QUEUE_PTRS_BUF_PTR	UINT64_C(0x001ffffffffe0000)
#define PKO_MEM_QUEUE_PTRS_TAIL		UINT64_C(0x0000000000010000)
#define PKO_MEM_QUEUE_PTRS_IDX		UINT64_C(0x000000000000e000)
#define PKO_MEM_QUEUE_PTRS_PID		UINT64_C(0x0000000000001f80)
#define PKO_MEM_QUEUE_PTRS_QID		UINT64_C(0x000000000000007f)

/*
 * PKO_MEM_QUEUE_QOS
 */
#define PKO_MEM_QUEUE_QOS_63_61		UINT64_C(0xe000000000000000)
#define PKO_MEM_QUEUE_QOS_QOS_MASK	UINT64_C(0x1fe0000000000000)
#define PKO_MEM_QUEUE_QOS_52_13		UINT64_C(0x001fffffffffe000)
#define PKO_MEM_QUEUE_QOS_PID		UINT64_C(0x0000000000001f80)
#define PKO_MEM_QUEUE_QOS_QID		UINT64_C(0x000000000000007f)

/*
 * PKO_MEM_COUNT0
 */
#define PKO_MEM_COUNT0_63_32		UINT64_C(0xffffffff00000000)
#define PKO_MEM_COUNT0_COUNT		UINT64_C(0x00000000ffffffff)

/*
 * PKO_MEM_COUNT1
 */
#define PKO_MEM_COUNT1_63_48		UINT64_C(0xffff000000000000)
#define PKO_MEM_COUNT1_COUNT		UINT64_C(0x0000ffffffffffff)

/*
 * PKO_MEM_DEBUG0
 */
#define PKO_MEM_DEBUG0_FAU		UINT64_C(0xfffffff000000000)
#define PKO_MEM_DEBUG0_CMD		UINT64_C(0x0000000fffc00000)
#define PKO_MEM_DEBUG0_SEGS		UINT64_C(0x00000000003f0000)
#define PKO_MEM_DEBUG0_SIZE		UINT64_C(0x000000000000ffff)

/*
 * PKO_MEM_DEBUG1
 */
#define PKO_MEM_DEBUG1_I		UINT64_C(0x8000000000000000)
#define PKO_MEM_DEBUG1_BACK		UINT64_C(0x7800000000000000)
#define PKO_MEM_DEBUG1_POOL		UINT64_C(0x0700000000000000)
#define PKO_MEM_DEBUG1_SIZE		UINT64_C(0x00ffff0000000000)
#define PKO_MEM_DEBUG1_PTR		UINT64_C(0x000000ffffffffff)

/*
 * PKO_MEM_DEBUG2
 */
#define PKO_MEM_DEBUG2_I		UINT64_C(0x8000000000000000)
#define PKO_MEM_DEBUG2_BACK		UINT64_C(0x7800000000000000)
#define PKO_MEM_DEBUG2_POOL		UINT64_C(0x0700000000000000)
#define PKO_MEM_DEBUG2_SIZE		UINT64_C(0x00ffff0000000000)
#define PKO_MEM_DEBUG2_PTR		UINT64_C(0x000000ffffffffff)

/*
 * PKO_MEM_DEBUG3
 */
#define PKO_MEM_DEBUG3_I		UINT64_C(0x8000000000000000)
#define PKO_MEM_DEBUG3_BACK		UINT64_C(0x7800000000000000)
#define PKO_MEM_DEBUG3_POOL		UINT64_C(0x0700000000000000)
#define PKO_MEM_DEBUG3_SIZE		UINT64_C(0x00ffff0000000000)
#define PKO_MEM_DEBUG3_PTR		UINT64_C(0x000000ffffffffff)

/*
 * PKO_MEM_DEBUG4
 */
#define PKO_MEM_DEBUG4_DATA		UINT64_C(0xffffffffffffffff)

/*
 * PKO_MEM_DEBUG5
 */
#define PKO_MEM_DEBUG5_DWRI_MOD			UINT64_C(0x8000000000000000)
#define PKO_MEM_DEBUG5_DWRI_SOP			UINT64_C(0x4000000000000000)
#define PKO_MEM_DEBUG5_DWRI_LEN			UINT64_C(0x2000000000000000)
#define PKO_MEM_DEBUG5_DWRI_CNT			UINT64_C(0x1fff000000000000)
#define PKO_MEM_DEBUG5_CMND_SIZ			UINT64_C(0x0000ffff00000000)
#define PKO_MEM_DEBUG5_UID			UINT64_C(0x0000000080000000)
#define PKO_MEM_DEBUG5_XFER_WOR			UINT64_C(0x0000000040000000)
#define PKO_MEM_DEBUG5_XFER_DWR			UINT64_C(0x0000000020000000)
#define PKO_MEM_DEBUG5_CBUF_FRE			UINT64_C(0x0000000010000000)
#define PKO_MEM_DEBUG5_27			UINT64_C(0x0000000008000000)
#define PKO_MEM_DEBUG5_CHK_MODE			UINT64_C(0x0000000004000000)
#define PKO_MEM_DEBUG5_ACTIVE			UINT64_C(0x0000000002000000)
#define PKO_MEM_DEBUG5_QOS			UINT64_C(0x0000000001c00000)
#define PKO_MEM_DEBUG5_QCB_RIDX			UINT64_C(0x00000000003e0000)
#define PKO_MEM_DEBUG5_QID_OFF			UINT64_C(0x000000000001c000)
#define PKO_MEM_DEBUG5_QID_BASE			UINT64_C(0x0000000000003f80)
#define PKO_MEM_DEBUG5_WAIT			UINT64_C(0x0000000000000040)
#define PKO_MEM_DEBUG5_MINOR			UINT64_C(0x0000000000000030)
#define PKO_MEM_DEBUG5_MAJOR			UINT64_C(0x000000000000000f)

/*
 * PKO_MEM_DEBUG6
 */
#define PKO_MEM_DEBUG6_63_11		UINT64_C(0xfffffffffffff800)
#define PKO_MEM_DEBUG6_QID_OFFM		UINT64_C(0x0000000000000700)
#define PKO_MEM_DEBUG6_STATIC_P		UINT64_C(0x0000000000000080)
#define PKO_MEM_DEBUG6_WORK_MIN		UINT64_C(0x0000000000000070)
#define PKO_MEM_DEBUG6_DWRI_CHK		UINT64_C(0x0000000000000008)
#define PKO_MEM_DEBUG6_DWRI_UID		UINT64_C(0x0000000000000004)
#define PKO_MEM_DEBUG6_DWRI_MOD		UINT64_C(0x0000000000000003)

/*
 * PKO_MEM_DEBUG7
 */
#define PKO_MEM_DEBUG7_63_58		UINT64_C(0xfc00000000000000)
#define PKO_MEM_DEBUG7_DWB		UINT64_C(0x03fe000000000000)
#define PKO_MEM_DEBUG7_START		UINT64_C(0x0001ffffffff0000)
#define PKO_MEM_DEBUG7_SIZE		UINT64_C(0x000000000000ffff)

/*
 * PKO_MEM_DEBUG8
 */
#define PKO_MEM_DEBUG8_QOS		UINT64_C(0xf800000000000000)
#define PKO_MEM_DEBUG8_TAIL		UINT64_C(0x0400000000000000)
#define PKO_MEM_DEBUG8_BUF_SIZ		UINT64_C(0x03ffe00000000000)
#define PKO_MEM_DEBUG8_BUF_PTR		UINT64_C(0x00001ffffffff000)
#define PKO_MEM_DEBUG8_QCB_WIDX		UINT64_C(0x0000000000000fc0)
#define PKO_MEM_DEBUG8_QCB_RIDX		UINT64_C(0x000000000000003f)

/*
 * PKO_MEM_DEBUG9
 */
#define PKO_MEM_DEBUG9_63_28		UINT64_C(0xfffffffff0000000)
#define PKO_MEM_DEBUG9_DOORBELL		UINT64_C(0x000000000fffff00)
#define PKO_MEM_DEBUG9_7_5		UINT64_C(0x00000000000000e0)
#define PKO_MEM_DEBUG9_S_TAIL		UINT64_C(0x0000000000000010)
#define PKO_MEM_DEBUG9_STATIC_Q		UINT64_C(0x0000000000000008)
#define PKO_MEM_DEBUG9_QOOS		UINT64_C(0x0000000000000007)

/*
 * PKO_MEM_DEBUG10
 */
#define PKO_MEM_DEBUG10_FAU		UINT64_C(0xfffffff000000000)
#define PKO_MEM_DEBUG10_CMD		UINT64_C(0x0000000fffc00000)
#define PKO_MEM_DEBUG10_SEGS		UINT64_C(0x00000000003f0000)
#define PKO_MEM_DEBUG10_SIZE		UINT64_C(0x000000000000ffff)

/*
 * PKO_MEM_DEBUG11
 */
#define PKO_MEM_DEBUG11_I		UINT64_C(0x8000000000000000)
#define PKO_MEM_DEBUG11_BACK		UINT64_C(0x7800000000000000)
#define PKO_MEM_DEBUG11_POOL		UINT64_C(0x0700000000000000)
#define PKO_MEM_DEBUG11_SIZE		UINT64_C(0x00ffff0000000000)
#define PKO_MEM_DEBUG11_PTR		UINT64_C(0x000000ffffffffff)

/*
 * PKO_MEM_DEBUG12
 */
#define PKO_MEM_DEBUG12_DATA		UINT64_C(0xffffffffffffffff)

/*
 * PKO_MEM_DEBUG13
 */
#define PKO_MEM_DEBUG13_63_51		UINT64_C(0xfff8000000000000)
#define PKO_MEM_DEBUG13_WIDX		UINT64_C(0x0007fffc00000000)
#define PKO_MEM_DEBUG13_RIDX2		UINT64_C(0x00000003fffe0000)
#define PKO_MEM_DEBUG13_WIDX2		UINT64_C(0x000000000001ffff)

/*
 * PKO_MEM_DEBUG14
 */
#define PKO_MEM_DEBUG13_63_17		UINT64_C(0xfffffffffffe0000)
#define PKO_MEM_DEBUG13_RIDX		UINT64_C(0x000000000001ffff)

/*
 * PKO_CMD_WORD0
 */
#define PKO_CMD_WORD0_SZ1		UINT64_C(0xc000000000000000)
#define PKO_CMD_WORD0_SZ0		UINT64_C(0x3000000000000000)
#define PKO_CMD_WORD0_S1		UINT64_C(0x0800000000000000)
#define PKO_CMD_WORD0_REG1		UINT64_C(0x07ff000000000000)
#define PKO_CMD_WORD0_S0		UINT64_C(0x0000800000000000)
#define PKO_CMD_WORD0_REG0		UINT64_C(0x00007ff000000000)
#define PKO_CMD_WORD0_LE		UINT64_C(0x0000000800000000)
#define PKO_CMD_WORD0_N2		UINT64_C(0x0000000400000000)
#define PKO_CMD_WORD0_Q			UINT64_C(0x0000000200000000)
#define PKO_CMD_WORD0_R			UINT64_C(0x0000000100000000)
#define PKO_CMD_WORD0_G			UINT64_C(0x0000000080000000)
#define PKO_CMD_WORD0_IPOFFP1		UINT64_C(0x000000007f000000)
#define PKO_CMD_WORD0_II		UINT64_C(0x0000000000800000)
#define PKO_CMD_WORD0_DF		UINT64_C(0x0000000000400000)
#define PKO_CMD_WORD0_SEGS		UINT64_C(0x00000000003f0000)
#define PKO_CMD_WORD0_TOTALBYTES	UINT64_C(0x000000000000ffff)

/*
 * PKO_CMD_WORD1
 */
#define PKO_CMD_WORD1_I			UINT64_C(0x8000000000000000)
#define PKO_CMD_WORD1_BACK		UINT64_C(0x7800000000000000)
#define PKO_CMD_WORD1_POOL		UINT64_C(0x0700000000000000)
#define PKO_CMD_WORD1_SIZE		UINT64_C(0x00ffff0000000000)
#define PKO_CMD_WORD1_ADDR		UINT64_C(0x000000ffffffffff)

/*
 * PKO_CMD_WORD2
 */
#define PKO_CMD_WORD2_63_36		UINT64_C(0xfffffff000000000)
#define PKO_CMD_WORD2_PTR		UINT64_C(0x0000000fffffffff)

/*
 *  DOORBELL_WRITE
 */
#define PKO_DOORBELL_WRITE_IO_BIT	UINT64_C(0x0001000000000000)
#define PKO_DOORBELL_WRITE_MAJOR_DID	UINT64_C(0x0000f80000000000)
#define PKO_DOORBELL_WRITE_SUB_DID	UINT64_C(0x0000070000000000)
#define PKO_DOORBELL_WRITE_39_16	UINT64_C(0x000000ffffff0000)
#define PKO_DOORBELL_WRITE_PID		UINT64_C(0x000000000003f000)
#define PKO_DOORBELL_WRITE_QID		UINT64_C(0x0000000000000ff8)
#define PKO_DOORBELL_WRITE_2_0		UINT64_C(0x0000000000000007)
 
#define PKO_DOORBELL_WRITE_WDC		UINT64_C(0x00000000000fffff)

/* ---- operations */

#define	CN30XXPKO_MAJORDID	0x0a
#define	CN30XXPKO_SUBDID	0x02

#endif /* _OCTEON_PKOREG_H_ */
