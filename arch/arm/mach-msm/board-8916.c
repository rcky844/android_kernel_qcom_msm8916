/* Copyright (c) 2013-2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/kernel.h>
#include <asm/mach/map.h>
#include <asm/mach/arch.h>
#include "board-dt.h"
#include "platsmp.h"

static const char *msm8916_dt_match[] __initconst = {
	"qcom,msm8916",
	"qcom,apq8016",
	NULL
};

static const char *msm8936_dt_match[] __initconst = {
	"qcom,msm8936",
	NULL
};

static const char *msm8939_dt_match[] __initconst = {
	"qcom,msm8939",
	NULL
};

static const char *msm8929_dt_match[] __initconst = {
	"qcom,msm8929",
	NULL
};

static void __init msm8916_init(void)
{
	board_dt_populate(NULL);
}

DT_MACHINE_START(MSM8916_DT,
		"Qualcomm Technologies, Inc. MSM 8916 (Flattened Device Tree)")
	.init_machine = msm8916_init,
	.dt_compat = msm8916_dt_match,
	.smp = &msm8916_smp_ops,
MACHINE_END

DT_MACHINE_START(MSM8939_DT,
		"Qualcomm Technologies, Inc. MSM 8939 (Flattened Device Tree)")
	.init_machine = msm8916_init,
	.dt_compat = msm8939_dt_match,
	.smp = &msm8936_smp_ops,
MACHINE_END

DT_MACHINE_START(MSM8936_DT,
		"Qualcomm Technologies, Inc. MSM 8936 (Flattened Device Tree)")
	.init_machine = msm8916_init,
	.dt_compat = msm8936_dt_match,
	.smp = &msm8936_smp_ops,
MACHINE_END

DT_MACHINE_START(MSM8929_DT,
	"Qualcomm Technologies, Inc. MSM 8929 (Flattened Device Tree)")
	.init_machine = msm8916_init,
	.dt_compat = msm8929_dt_match,
	.smp = &msm8936_smp_ops,
MACHINE_END
