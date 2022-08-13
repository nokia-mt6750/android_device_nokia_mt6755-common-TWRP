#pragma once

#include <string>
#include <android/hardware/boot/1.0/IBootControl.h>

//using MergeStatus = ::android::hardware::boot::V1_1::MergeStatus;

// IBootControl 1.0 methods
bool bootcontrol_init();
unsigned get_number_slots();
unsigned get_current_slot();
int mark_boot_successful();
int set_active_boot_slot(unsigned slot);
int set_slot_as_unbootable(unsigned slot);
int is_slot_bootable(unsigned slot);
int is_slot_marked_successful(unsigned slot);
const char* get_suffix(unsigned slot);

// IBootControl 1.1 methods
//bool set_snapshot_merge_status(MergeStatus status);
//MergeStatus get_snapshot_merge_status();
