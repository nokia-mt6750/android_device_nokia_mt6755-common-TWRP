
# Copyright (C) 2022 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#

LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_DEVICE),ES2 CO2)
include $(call all-subdir-makefiles,$(LOCAL_PATH))
endif
