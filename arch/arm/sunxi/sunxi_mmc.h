/* $NetBSD: sunxi_mmc.h,v 1.3 2017/09/11 22:00:05 jmcneill Exp $ */

/*-
 * Copyright (c) 2017 Jared McNeill <jmcneill@invisible.ca>
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

#ifndef _ARM_SUNXI_MMC_H
#define _ARM_SUNXI_MMC_H

#define SUNXI_MMC_GCTRL			0x0000
#define SUNXI_MMC_CLKCR			0x0004
#define SUNXI_MMC_TIMEOUT		0x0008
#define SUNXI_MMC_WIDTH			0x000C
#define SUNXI_MMC_BLKSZ			0x0010
#define SUNXI_MMC_BYTECNT		0x0014
#define SUNXI_MMC_CMD			0x0018
#define SUNXI_MMC_ARG			0x001C
#define SUNXI_MMC_RESP0			0x0020
#define SUNXI_MMC_RESP1			0x0024
#define SUNXI_MMC_RESP2			0x0028
#define SUNXI_MMC_RESP3			0x002C
#define SUNXI_MMC_IMASK			0x0030
#define SUNXI_MMC_MINT			0x0034
#define SUNXI_MMC_RINT			0x0038
#define SUNXI_MMC_STATUS		0x003C
#define SUNXI_MMC_FTRGLEVEL		0x0040
#define SUNXI_MMC_FUNCSEL		0x0044
#define SUNXI_MMC_CBCR			0x0048
#define SUNXI_MMC_BBCR			0x004C
#define SUNXI_MMC_DBGC			0x0050
#define SUNXI_MMC_A12A			0x0058		/* A80 */
#define SUNXI_MMC_NTSR			0x005C
#define SUNXI_MMC_HWRST			0x0078		/* A80 */
#define SUNXI_MMC_DMAC			0x0080
#define SUNXI_MMC_DLBA			0x0084
#define SUNXI_MMC_IDST			0x0088
#define SUNXI_MMC_IDIE			0x008C
#define SUNXI_MMC_CHDA			0x0090
#define SUNXI_MMC_CBDA			0x0094
#define	SUNXI_MMC_SAMP_DL		0x0144

#define SUNXI_MMC_GCTRL_ACCESS_BY_AHB	__BIT(31)
#define SUNXI_MMC_GCTRL_WAIT_MEM_ACCESS_DONE __BIT(30)
#define SUNXI_MMC_GCTRL_DDR_MODE	__BIT(10)
#define SUNXI_MMC_GCTRL_DEBOUNCEEN	__BIT(8)
#define SUNXI_MMC_GCTRL_DMAEN		__BIT(5)
#define SUNXI_MMC_GCTRL_INTEN		__BIT(4)
#define SUNXI_MMC_GCTRL_DMARESET	__BIT(2)
#define SUNXI_MMC_GCTRL_FIFORESET	__BIT(1)
#define SUNXI_MMC_GCTRL_SOFTRESET	__BIT(0)
#define SUNXI_MMC_GCTRL_RESET \
	(SUNXI_MMC_GCTRL_SOFTRESET | SUNXI_MMC_GCTRL_FIFORESET | \
	 SUNXI_MMC_GCTRL_DMARESET)
#define	SUNXI_MMC_CLKCR_MASK_DATA0	__BIT(31)
#define SUNXI_MMC_CLKCR_LOWPOWERON	__BIT(17)
#define SUNXI_MMC_CLKCR_CARDCLKON	__BIT(16)
#define SUNXI_MMC_CLKCR_DIV		__BITS(7,0)
#define SUNXI_MMC_WIDTH_1		0
#define SUNXI_MMC_WIDTH_4		1
#define SUNXI_MMC_WIDTH_8		2
#define SUNXI_MMC_CMD_START		__BIT(31)
#define SUNXI_MMC_CMD_USE_HOLD_REG	__BIT(29)
#define SUNXI_MMC_CMD_VOL_SWITCH	__BIT(28)
#define SUNXI_MMC_CMD_BOOT_ABORT	__BIT(27)
#define SUNXI_MMC_CMD_BOOT_ACK_EXP	__BIT(26)
#define SUNXI_MMC_CMD_ALT_BOOT_OPT	__BIT(25)
#define SUNXI_MMC_CMD_ENBOOT		__BIT(24)
#define SUNXI_MMC_CMD_CCS_EXP		__BIT(23)
#define SUNXI_MMC_CMD_RD_CEATA_DEV	__BIT(22)
#define SUNXI_MMC_CMD_UPCLK_ONLY	__BIT(21)
#define SUNXI_MMC_CMD_SEND_INIT_SEQ	__BIT(15)
#define SUNXI_MMC_CMD_STOP_ABORT_CMD	__BIT(14)
#define SUNXI_MMC_CMD_WAIT_PRE_OVER	__BIT(13)
#define SUNXI_MMC_CMD_SEND_AUTO_STOP	__BIT(12)
#define SUNXI_MMC_CMD_SEQMOD		__BIT(11)
#define SUNXI_MMC_CMD_WRITE		__BIT(10)
#define SUNXI_MMC_CMD_DATA_EXP		__BIT(9)
#define SUNXI_MMC_CMD_CHECK_RSP_CRC	__BIT(8)
#define SUNXI_MMC_CMD_LONG_RSP		__BIT(7)
#define SUNXI_MMC_CMD_RSP_EXP		__BIT(6)
#define SUNXI_MMC_INT_CARD_REMOVE	__BIT(31)
#define SUNXI_MMC_INT_CARD_INSERT	__BIT(30)
#define SUNXI_MMC_INT_SDIO_INT		__BIT(16)
#define SUNXI_MMC_INT_END_BIT_ERR	__BIT(15)
#define SUNXI_MMC_INT_AUTO_CMD_DONE	__BIT(14)
#define SUNXI_MMC_INT_START_BIT_ERR	__BIT(13)
#define SUNXI_MMC_INT_HW_LOCKED		__BIT(12)
#define SUNXI_MMC_INT_FIFO_RUN_ERR	__BIT(11)
#define SUNXI_MMC_INT_VOL_CHG_DONE	__BIT(10)
#define SUNXI_MMC_INT_DATA_STARVE	__BIT(10)
#define SUNXI_MMC_INT_BOOT_START	__BIT(9)
#define SUNXI_MMC_INT_DATA_TIMEOUT	__BIT(9)
#define SUNXI_MMC_INT_ACK_RCV		__BIT(8)
#define SUNXI_MMC_INT_RESP_TIMEOUT	__BIT(8)
#define SUNXI_MMC_INT_DATA_CRC_ERR	__BIT(7)
#define SUNXI_MMC_INT_RESP_CRC_ERR	__BIT(6)
#define SUNXI_MMC_INT_RX_DATA_REQ	__BIT(5)
#define SUNXI_MMC_INT_TX_DATA_REQ	__BIT(4)
#define SUNXI_MMC_INT_DATA_OVER		__BIT(3)
#define SUNXI_MMC_INT_CMD_DONE		__BIT(2)
#define SUNXI_MMC_INT_RESP_ERR		__BIT(1)
#define SUNXI_MMC_INT_ERROR \
	(SUNXI_MMC_INT_RESP_ERR | SUNXI_MMC_INT_RESP_CRC_ERR | \
	 SUNXI_MMC_INT_DATA_CRC_ERR | SUNXI_MMC_INT_RESP_TIMEOUT | \
	 SUNXI_MMC_INT_FIFO_RUN_ERR | SUNXI_MMC_INT_HW_LOCKED | \
	 SUNXI_MMC_INT_START_BIT_ERR  | SUNXI_MMC_INT_END_BIT_ERR)
#define SUNXI_MMC_STATUS_DMAREQ		__BIT(31)
#define SUNXI_MMC_STATUS_DATA_FSM_BUSY	__BIT(10)
#define SUNXI_MMC_STATUS_CARD_DATA_BUSY	__BIT(9)
#define SUNXI_MMC_STATUS_CARD_PRESENT	__BIT(8)
#define SUNXI_MMC_STATUS_FIFO_FULL	__BIT(3)
#define SUNXI_MMC_STATUS_FIFO_EMPTY	__BIT(2)
#define SUNXI_MMC_STATUS_TXWL_FLAG	__BIT(1)
#define SUNXI_MMC_STATUS_RXWL_FLAG	__BIT(0)
#define SUNXI_MMC_FUNCSEL_CEATA_DEV_INTEN __BIT(10)
#define SUNXI_MMC_FUNCSEL_SEND_AUTO_STOP_CCSD __BIT(9)
#define SUNXI_MMC_FUNCSEL_SEND_CCSD	__BIT(8)
#define SUNXI_MMC_FUNCSEL_ABT_RD_DATA	__BIT(2)
#define SUNXI_MMC_FUNCSEL_SDIO_RD_WAIT	__BIT(1)
#define SUNXI_MMC_FUNCSEL_SEND_IRQ_RSP	__BIT(0)
#define SUNXI_MMC_NTSR_MODE_SELECT	__BIT(31)
#define SUNXI_MMC_NTSR_SAMPLE_PHASE	__BITS(30,6)
#define SUNXI_MMC_NTSR_OUTPUT_PHASE	__BITS(1,0)
#define SUNXI_MMC_DMAC_REFETCH_DES	__BIT(31)
#define SUNXI_MMC_DMAC_IDMA_ON		__BIT(7)
#define SUNXI_MMC_DMAC_FIX_BURST	__BIT(1)
#define SUNXI_MMC_DMAC_SOFTRESET	__BIT(0)
#define SUNXI_MMC_IDST_HOST_ABT		__BIT(10)
#define SUNXI_MMC_IDST_ABNORMAL_INT_SUM	__BIT(9)
#define SUNXI_MMC_IDST_NORMAL_INT_SUM	__BIT(8)
#define SUNXI_MMC_IDST_CARD_ERR_SUM	__BIT(5)
#define SUNXI_MMC_IDST_DES_INVALID	__BIT(4)
#define SUNXI_MMC_IDST_FATAL_BUS_ERR	__BIT(2)
#define SUNXI_MMC_IDST_RECEIVE_INT	__BIT(1)
#define SUNXI_MMC_IDST_TRANSMIT_INT	__BIT(0)
#define SUNXI_MMC_IDST_ERROR \
	(SUNXI_MMC_IDST_ABNORMAL_INT_SUM | SUNXI_MMC_IDST_CARD_ERR_SUM | \
	 SUNXI_MMC_IDST_DES_INVALID | SUNXI_MMC_IDST_FATAL_BUS_ERR)
#define SUNXI_MMC_IDST_COMPLETE \
	(SUNXI_MMC_IDST_RECEIVE_INT | SUNXI_MMC_IDST_TRANSMIT_INT)
#define SUNXI_MMC_IDMA_CONFIG_DIC	__BIT(1)
#define SUNXI_MMC_IDMA_CONFIG_LD	__BIT(2)
#define SUNXI_MMC_IDMA_CONFIG_FD	__BIT(3)
#define SUNXI_MMC_IDMA_CONFIG_CH	__BIT(4)
#define SUNXI_MMC_IDMA_CONFIG_ER	__BIT(5)
#define SUNXI_MMC_IDMA_CONFIG_CES	__BIT(30)
#define SUNXI_MMC_IDMA_CONFIG_OWN	__BIT(31)
#define	SUNXI_MMC_SAMP_DL_SW_EN		__BIT(7)

struct sunxi_mmc_idma_descriptor {
	uint32_t        dma_config;
#define SUNXI_MMC_IDMA_CONFIG_DIC        __BIT(1)
#define SUNXI_MMC_IDMA_CONFIG_LD         __BIT(2)
#define SUNXI_MMC_IDMA_CONFIG_FD         __BIT(3)
#define SUNXI_MMC_IDMA_CONFIG_CH         __BIT(4)
#define SUNXI_MMC_IDMA_CONFIG_ER         __BIT(5)
#define SUNXI_MMC_IDMA_CONFIG_CES        __BIT(30)
#define SUNXI_MMC_IDMA_CONFIG_OWN        __BIT(31)
	uint32_t        dma_buf_size;
	uint32_t        dma_buf_addr;
	uint32_t        dma_next;
} __packed;

#endif /* _ARM_SUNXI_MMC_H */
