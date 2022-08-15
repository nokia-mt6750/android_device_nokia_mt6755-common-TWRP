# TWRP Common device tree for Nokia MT6750 devices

```
#
# Copyright (C) 2022 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#
```
# Working features

## Blocking checks
- [X] Correct screen/recovery size
- [X] Working Touch, screen
- [X] Backup to internal/microSD
- [X] Restore from internal/microSD
- [X] reboot to system
- [X] ADB

## Medium checks
- [X] update.zip sideload
- [X] UI colors (red/blue inversions)
- [X] Screen goes off and on
- [X] F2FS/EXT4 Support, exFAT/NTFS where supported
- [X] all important partitions listed in mount/backup lists
- [X] backup/restore to/from external (USB-OTG) storage
- [X] backup/restore to/from adb (https://gerrit.omnirom.org/#/c/15943/)
- [X] decrypt /data
- [X] Correct date

## Minor checks
- [ ] MTP export
- [X] reboot to bootloader
- [X] reboot to recovery
- [X] poweroff
- [ ] battery level
- [X] temperature
- [ ] encrypted backups (no option)
- [X] input devices via USB (USB-OTG) - keyboard, mouse and disks
- [ ] USB mass storage export
- [X] set brightness
- [X] vibrate
- [X] screenshot
- [X] partition SD card

# Works partially

## Battery Level
Often shows 50%. Sometimes shows a real charge. I do not know why it is so.

# Decrypt /data
Works fine, but the user data located in the /date/media/ folder instead /data/media/0 ([My Github issue](https://github.com/TeamWin/android_bootable_recovery/issues/255))
