/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos9610 clock controller.
*/

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_9610_H
#define _DT_BINDINGS_CLOCK_EXYNOS_9610_H

#define NONE                                    (0 + 0)
#define OSCCLK                                  (0 + 1)

/* NUMBER FOR APM DRIVER STARTS FROM 10 */
#define CLK_APM_BASE				(10)
#define	UMUX_CLKCMU_APM_BUS			(CLK_APM_BASE + 0)
#define	GATE_GREBEINTEGRATION_QCH_GREBE		(CLK_APM_BASE + 1)
#define	GATE_GREBEINTEGRATION_QCH_DBG		(CLK_APM_BASE + 2)
#define	GATE_INTMEM_QCH				(CLK_APM_BASE + 3)
#define	GATE_MAILBOX_AP2CP_QCH			(CLK_APM_BASE + 4)
#define	GATE_MAILBOX_AP2CP_S_QCH		(CLK_APM_BASE + 5)
#define	GATE_MAILBOX_AP2GNSS_QCH		(CLK_APM_BASE + 6)
#define	GATE_MAILBOX_AP2SHUB_QCH		(CLK_APM_BASE + 7)
#define	GATE_MAILBOX_AP2WLBT_QCH		(CLK_APM_BASE + 8)
#define	GATE_MAILBOX_APM2AP_QCH			(CLK_APM_BASE + 9)
#define	GATE_MAILBOX_APM2CP_QCH			(CLK_APM_BASE + 10)
#define	GATE_MAILBOX_APM2GNSS_QCH		(CLK_APM_BASE + 11)
#define	GATE_MAILBOX_APM2SHUB_QCH		(CLK_APM_BASE + 12)
#define	GATE_MAILBOX_APM2WLBT_QCH		(CLK_APM_BASE + 13)
#define	GATE_MAILBOX_CP2GNSS_QCH		(CLK_APM_BASE + 14)
#define	GATE_MAILBOX_CP2SHUB_QCH		(CLK_APM_BASE + 15)
#define	GATE_MAILBOX_CP2WLBT_QCH		(CLK_APM_BASE + 16)
#define	GATE_MAILBOX_SHUB2GNSS_QCH		(CLK_APM_BASE + 17)
#define	GATE_MAILBOX_SHUB2WLBT_QCH		(CLK_APM_BASE + 18)
#define	GATE_MAILBOX_WLBT2ABOX_QCH		(CLK_APM_BASE + 19)
#define	GATE_MAILBOX_WLBT2GNSS_QCH		(CLK_APM_BASE + 20)
#define	GATE_PEM_QCH				(CLK_APM_BASE + 21)
#define	GATE_SPEEDY_APM_QCH			(CLK_APM_BASE + 22)
#define	GATE_SYSREG_APM_QCH			(CLK_APM_BASE + 23)
#define	GATE_WDT_APM_QCH			(CLK_APM_BASE + 24)

/* NUMBER FOR CAM DRIVER STARTS FROM 40 */
#define CLK_CAM_BASE				(40)
#define	UMUX_CLKCMU_CAM_BUS			(CLK_CAM_BASE + 0)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_CSIS0	(CLK_CAM_BASE + 1)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_CSIS1	(CLK_CAM_BASE + 2)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_CSIS2	(CLK_CAM_BASE + 3)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_CSIS3	(CLK_CAM_BASE + 4)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_3AA		(CLK_CAM_BASE + 5)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_SMMU	(CLK_CAM_BASE + 6)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_PDP_CORE	(CLK_CAM_BASE + 7)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_PDP_DMA	(CLK_CAM_BASE + 8)
#define	GATE_IS6P10P0_CAM_QCH_S_CAM_RDMA	(CLK_CAM_BASE + 9)

/* NUMBER FOR CMGP DRIVER STARTS FROM 100 */
#define CLK_CMGP_BASE				(100)
#define	MUX_CMGP_ADC			(CLK_CMGP_BASE + 0)
#define	MUX_CMGP_I2C			(CLK_CMGP_BASE + 1)
#define	MUX_CMGP_USI00			(CLK_CMGP_BASE + 2)
#define	MUX_CMGP_USI01			(CLK_CMGP_BASE + 3)
#define	MUX_CMGP_USI02			(CLK_CMGP_BASE + 4)
#define	MUX_CMGP_USI03			(CLK_CMGP_BASE + 5)
#define	MUX_CMGP_USI04			(CLK_CMGP_BASE + 6)
#define	GATE_ADC_CMGP_QCH_S0			(CLK_CMGP_BASE + 7)
#define	GATE_ADC_CMGP_QCH_S1			(CLK_CMGP_BASE + 8)
#define	GATE_ADC_CMGP_QCH_ADC			(CLK_CMGP_BASE + 9)
#define	GATE_I2C_CMGP00_QCH			(CLK_CMGP_BASE + 10)
#define	GATE_I2C_CMGP01_QCH			(CLK_CMGP_BASE + 11)
#define	GATE_I2C_CMGP02_QCH			(CLK_CMGP_BASE + 12)
#define	GATE_I2C_CMGP03_QCH			(CLK_CMGP_BASE + 13)
#define	GATE_I2C_CMGP04_QCH			(CLK_CMGP_BASE + 14)
#define	GATE_USI_CMGP00_QCH			(CLK_CMGP_BASE + 15)
#define	GATE_USI_CMGP01_QCH			(CLK_CMGP_BASE + 16)
#define	GATE_USI_CMGP02_QCH			(CLK_CMGP_BASE + 17)
#define	GATE_USI_CMGP03_QCH			(CLK_CMGP_BASE + 18)
#define	GATE_USI_CMGP04_QCH			(CLK_CMGP_BASE + 19)
#define	CMGP00_USI				(CLK_CMGP_BASE + 20)
#define	CMGP01_USI				(CLK_CMGP_BASE + 21)
#define	CMGP02_USI				(CLK_CMGP_BASE + 22)
#define	CMGP03_USI				(CLK_CMGP_BASE + 23)
#define	CMGP04_USI				(CLK_CMGP_BASE + 24)
#define	CMGP_I2C				(CLK_CMGP_BASE + 25)
#define	CMGP_ADC				(CLK_CMGP_BASE + 26)

/* NUMBER FOR TOP DRIVER STARTS FROM 150 */
#define CLK_TOP_BASE				(150)
#define	GATE_DFTMUX_TOP_QCH_CLK_CSIS0		(CLK_TOP_BASE + 0)
#define	GATE_DFTMUX_TOP_QCH_CLK_CSIS1		(CLK_TOP_BASE + 1)
#define	GATE_DFTMUX_TOP_QCH_CLK_CSIS2		(CLK_TOP_BASE + 2)
#define	GATE_DFTMUX_TOP_QCH_CLK_CSIS3		(CLK_TOP_BASE + 3)
#define	GATE_OTP_QCH				(CLK_TOP_BASE + 4)
#define	CIS_CLK0				(CLK_TOP_BASE + 5)
#define	CIS_CLK1				(CLK_TOP_BASE + 6)
#define	CIS_CLK2				(CLK_TOP_BASE + 7)
#define	CIS_CLK3				(CLK_TOP_BASE + 8)

/* NUMBER FOR CORE DRIVER STARTS FROM 200 */
#define CLK_CORE_BASE				(200)
#define	MUX_CORE_GIC			(CLK_CORE_BASE + 0)
#define	GATE_GIC400_AIHWACG_QCH			(CLK_CORE_BASE + 1)
#define	GATE_PDMA_CORE_QCH			(CLK_CORE_BASE + 2)
#define	GATE_PPFW_CORE_MEM0_QCH			(CLK_CORE_BASE + 3)
#define	GATE_PPFW_CORE_MEM1_QCH			(CLK_CORE_BASE + 4)
#define	GATE_PPFW_CORE_PERI_QCH			(CLK_CORE_BASE + 5)
#define	GATE_SIREX_QCH				(CLK_CORE_BASE + 6)
#define	GATE_SPDMA_CORE_QCH			(CLK_CORE_BASE + 7)
#define	GATE_TREX_D_CORE_QCH			(CLK_CORE_BASE + 8)
#define	GATE_TREX_D_NRT_QCH			(CLK_CORE_BASE + 9)
#define	GATE_TREX_P_CORE_QCH			(CLK_CORE_BASE + 10)

/* NUMBER FOR DISPAUD DRIVER STARTS FROM 250 */
#define CLK_DISPAUD_BASE			(250)
#define	MUX_AUD_FM				(CLK_DISPAUD_BASE + 0)
#define	UMUX_CLKCMU_DISPAUD_BUS			(CLK_DISPAUD_BASE + 1)
#define	GATE_ABOX_QCH_CPU			(CLK_DISPAUD_BASE + 2)
#define	GATE_ABOX_QCH_S_ACLK			(CLK_DISPAUD_BASE + 3)
#define	GATE_ABOX_QCH_S_BCLK0			(CLK_DISPAUD_BASE + 4)
#define	GATE_ABOX_QCH_S_BCLK2			(CLK_DISPAUD_BASE + 5)
#define	GATE_ABOX_QCH_S_BCLK1			(CLK_DISPAUD_BASE + 6)
#define	GATE_ABOX_QCH_FM			(CLK_DISPAUD_BASE + 7)
#define	GATE_ABOX_QCH_S_BCLK_DSIF		(CLK_DISPAUD_BASE + 8)
#define	GATE_DPU_QCH_S_DPP			(CLK_DISPAUD_BASE + 9)
#define	GATE_DPU_QCH_S_DMA			(CLK_DISPAUD_BASE + 10)
#define	GATE_DPU_QCH_S_DECON			(CLK_DISPAUD_BASE + 11)
#define	GATE_SMMU_ABOX_QCH			(CLK_DISPAUD_BASE + 12)
#define	GATE_SMMU_DPU_QCH			(CLK_DISPAUD_BASE + 13)
#define	GATE_WDT_AUD_QCH			(CLK_DISPAUD_BASE + 14)
#define	DOUT_CLK_AUD_ACLK			(CLK_DISPAUD_BASE + 15)
#define	DOUT_CLK_AUD_AUDIF			(CLK_DISPAUD_BASE + 16)
#define	DOUT_CLK_AUD_DSIF			(CLK_DISPAUD_BASE + 17)
#define	DOUT_CLK_AUD_UAIF0			(CLK_DISPAUD_BASE + 18)
#define	DOUT_CLK_AUD_UAIF1			(CLK_DISPAUD_BASE + 19)
#define	DOUT_CLK_AUD_UAIF2			(CLK_DISPAUD_BASE + 20)
#define	PLL_OUT_AUD				(CLK_DISPAUD_BASE + 21)
#define DOUT_CLK_AUD_FM				(CLK_DISPAUD_BASE + 22)

/* NUMBER FOR FSYS DRIVER STARTS FROM 300 */
#define CLK_FSYS_BASE				(300)
#define	UMUX_CLKCMU_FSYS_BUS			(CLK_FSYS_BASE + 0)
#define	UMUX_CLKCMU_FSYS_MMC_EMBD		(CLK_FSYS_BASE + 1)
#define	UMUX_CLKCMU_FSYS_MMC_CARD		(CLK_FSYS_BASE + 2)
#define	UMUX_CLKCMU_FSYS_UFS_EMBD		(CLK_FSYS_BASE + 3)
#define	GATE_MMC_CARD_QCH			(CLK_FSYS_BASE + 4)
#define	GATE_MMC_EMBD_QCH			(CLK_FSYS_BASE + 5)
#define	GATE_RTIC_QCH				(CLK_FSYS_BASE + 6)
#define	GATE_SSS_QCH				(CLK_FSYS_BASE + 7)
#define	GATE_UFS_EMBD_QCH_UFS			(CLK_FSYS_BASE + 8)
#define	GATE_UFS_EMBD_QCH_FMP			(CLK_FSYS_BASE + 9)
#define	MMC_EMBD				(CLK_FSYS_BASE + 10)
#define	MMC_CARD				(CLK_FSYS_BASE + 11)
#define	UFS_EMBD				(CLK_FSYS_BASE + 12)

/* NUMBER FOR G2D DRIVER STARTS FROM 350 */
#define CLK_G2D_BASE				(350)
#define	UMUX_CLKCMU_G2D_G2D			(CLK_G2D_BASE + 0)
#define	UMUX_CLKCMU_G2D_MSCL			(CLK_G2D_BASE + 1)
#define	GATE_G2D_QCH				(CLK_G2D_BASE + 2)
#define	GATE_JPEG_QCH				(CLK_G2D_BASE + 3)
#define	GATE_MSCL_QCH				(CLK_G2D_BASE + 4)
#define	GATE_SYSMMU_G2D_QCH			(CLK_G2D_BASE + 5)

/* NUMBER FOR G3D DRIVER STARTS FROM 400 */
#define CLK_G3D_BASE				(400)
#define	GATE_G3D_QCH				(CLK_G3D_BASE + 0)

/* NUMBER FOR ISP DRIVER STARTS FROM 450 */
#define CLK_ISP_BASE				(450)
#define	UMUX_CLKCMU_ISP_BUS			(CLK_ISP_BASE + 0)
#define	UMUX_CLKCMU_ISP_GDC			(CLK_ISP_BASE + 1)
#define	UMUX_CLKCMU_ISP_VRA			(CLK_ISP_BASE + 2)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_ISP		(CLK_ISP_BASE + 3)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_MCSC	(CLK_ISP_BASE + 4)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_VRA		(CLK_ISP_BASE + 5)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_GDC		(CLK_ISP_BASE + 6)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_SMMU_ISP0	(CLK_ISP_BASE + 7)
#define	GATE_IS6P10P0_ISP_QCH_S_ISP_SMMU_ISP1	(CLK_ISP_BASE + 8)

/* NUMBER FOR MFC DRIVER STARTS FROM 500 */
#define CLK_MFC_BASE				(500)
#define	UMUX_CLKCMU_MFC_MFC			(CLK_MFC_BASE + 0)
#define	UMUX_CLKCMU_MFC_WFD			(CLK_MFC_BASE + 1)
#define	GATE_MFC_QCH				(CLK_MFC_BASE + 2)
#define	GATE_SYSMMU_MFCD0_QCH			(CLK_MFC_BASE + 3)
#define	GATE_SYSMMU_MFCD1_QCH			(CLK_MFC_BASE + 4)
#define	GATE_WFD_QCH				(CLK_MFC_BASE + 5)

/* NUMBER FOR PERI DRIVER STARTS FROM 550 */
#define CLK_PERI_BASE				(550)
#define	UMUX_CLKCMU_PERI_UART			(CLK_PERI_BASE + 0)
#define	GATE_CAMI2C_0_QCH			(CLK_PERI_BASE + 1)
#define	GATE_CAMI2C_1_QCH			(CLK_PERI_BASE + 2)
#define	GATE_CAMI2C_2_QCH			(CLK_PERI_BASE + 3)
#define	GATE_CAMI2C_3_QCH			(CLK_PERI_BASE + 4)
#define	GATE_I2C_0_QCH				(CLK_PERI_BASE + 5)
#define	GATE_I2C_1_QCH				(CLK_PERI_BASE + 6)
#define	GATE_I2C_2_QCH				(CLK_PERI_BASE + 7)
#define	GATE_I2C_3_QCH				(CLK_PERI_BASE + 8)
#define	GATE_I2C_4_QCH				(CLK_PERI_BASE + 9)
#define	GATE_I2C_5_QCH				(CLK_PERI_BASE + 10)
#define	GATE_I2C_6_QCH				(CLK_PERI_BASE + 11)
#define	GATE_MCT_QCH				(CLK_PERI_BASE + 12)
#define	GATE_OTP_CON_TOP_QCH			(CLK_PERI_BASE + 13)
#define	GATE_PWM_MOTOR_QCH			(CLK_PERI_BASE + 14)
#define	GATE_SPI_0_QCH				(CLK_PERI_BASE + 15)
#define	GATE_SPI_1_QCH				(CLK_PERI_BASE + 16)
#define	GATE_SPI_2_QCH				(CLK_PERI_BASE + 17)
#define	GATE_UART_QCH				(CLK_PERI_BASE + 18)
#define	GATE_USI00_I2C_QCH			(CLK_PERI_BASE + 19)
#define	GATE_USI00_USI_QCH			(CLK_PERI_BASE + 20)
#define	GATE_WDT_CLUSTER0_QCH			(CLK_PERI_BASE + 21)
#define	GATE_WDT_CLUSTER1_QCH			(CLK_PERI_BASE + 22)
#define UART					(CLK_PERI_BASE + 23)
#define	I2C					(CLK_PERI_BASE + 24)
#define	SPI0					(CLK_PERI_BASE + 25)
#define	SPI1					(CLK_PERI_BASE + 26)
#define	SPI2					(CLK_PERI_BASE + 27)
#define	USI_I2C					(CLK_PERI_BASE + 28)
#define	USI_USI					(CLK_PERI_BASE + 29)
#define	UMUX_CLKCMU_PERI_BUS			(CLK_PERI_BASE + 30)

/* NUMBER FOR SHUB DRIVER STARTS FROM 600 */
#define CLK_SHUB_BASE				(600)
#define	UMUX_CLKCMU_SHUB_BUS			(CLK_SHUB_BASE + 0)
#define	MUX_SHUB_I2C			(CLK_SHUB_BASE + 1)
#define	MUX_SHUB_USI00			(CLK_SHUB_BASE + 2)
#define	MUX_SHUB_USI01			(CLK_SHUB_BASE + 3)
#define	GATE_CM4_SHUB_QCH			(CLK_SHUB_BASE + 4)
#define	GATE_I2C_SHUB00_QCH			(CLK_SHUB_BASE + 5)
#define	GATE_PDMA_SHUB_QCH			(CLK_SHUB_BASE + 6)
#define	GATE_PWM_SHUB_QCH			(CLK_SHUB_BASE + 7)
#define	GATE_TIMER_SHUB_QCH			(CLK_SHUB_BASE + 8)
#define	GATE_USI_SHUB00_QCH			(CLK_SHUB_BASE + 9)
#define	GATE_WDT_SHUB_QCH			(CLK_SHUB_BASE + 10)

/* NUMBER FOR USB DRIVER STARTS FROM 650 */
#define CLK_USB_BASE				(650)
#define	UMUX_CLKCMU_USB_USBDRD30		(CLK_USB_BASE + 0)
#define	UMUX_CLKCMU_USB_DPGTC			(CLK_USB_BASE + 1)
#define	GATE_DP_LINK_QCH_DP			(CLK_USB_BASE + 2)
#define	GATE_DP_LINK_QCH_GTC			(CLK_USB_BASE + 3)
#define	GATE_USB30DRD_QCH_USB30			(CLK_USB_BASE + 4)
#define	GATE_USB30DRD_QCH_USBPHY_30CTRL_0	(CLK_USB_BASE + 5)
#define	GATE_USB30DRD_QCH_USBPHY_30CTRL_1	(CLK_USB_BASE + 6)
#define	GATE_USB30DRD_QCH_USBPHY_20CTRL		(CLK_USB_BASE + 7)
#define	USB30DRD				(CLK_USB_BASE + 8)
#define	DP_LINK					(CLK_USB_BASE + 9)

/* NUMBER FOR VIPX1 DRIVER STARTS FROM 700 */
#define CLK_VIPX1_BASE				(700)
#define	UMUX_CLKCMU_VIPX1_BUS			(CLK_VIPX1_BASE + 0)
#define	GATE_SMMU_D_VIPX1_QCH			(CLK_VIPX1_BASE + 1)
#define	GATE_VIPX1_QCH				(CLK_VIPX1_BASE + 2)

/* NUMBER FOR VIPX2 DRIVER STARTS FROM 750 */
#define CLK_VIPX2_BASE				(750)
#define	UMUX_CLKCMU_VIPX2_BUS			(CLK_VIPX2_BASE + 0)
#define	GATE_SMMU_D_VIPX2_QCH			(CLK_VIPX2_BASE + 1)
#define	GATE_VIPX2_QCH				(CLK_VIPX2_BASE + 2)
#define	GATE_VIPX2_QCH_LOCAL			(CLK_VIPX2_BASE + 3)

/* NUMBER FOR CLKOUT DRIVER STARTS FROM 800 */
#define CLK_CLKOUT_BASE				(800)
#define	OSC_NFC					(CLK_CLKOUT_BASE + 0)
#define	OSC_AUD					(CLK_CLKOUT_BASE + 1)

/* must be greater than maximal clock id */
#define CLK_NR_CLKS                             (820 + 1)

#define ACPM_DVFS_MIF				(0x0B040000)
#define ACPM_DVFS_INT				(0x0B040001)
#define ACPM_DVFS_CPUCL0			(0x0B040002)
#define ACPM_DVFS_CPUCL1			(0x0B040003)
#define ACPM_DVFS_G3D				(0x0B040004)
#define ACPM_DVFS_INTCAM			(0x0B040005)
#define ACPM_DVFS_CAM				(0x0B040006)
#define ACPM_DVFS_DISP				(0x0B040007)
#define ACPM_DVFS_AUD				(0x0B040008)
#define ACPM_DVFS_CP				(0x0B040009)

#endif	/* _DT_BINDINGS_CLOCK_EXYNOS_9610_H */
