# QMK Firmware for QK65 R2 Wired White PCB

Unfortunately the R2 wired white PCB has a special bootloader, even it is powered by QMK user cannot really flash their own firmware.

The only way to highly customize the firmware is flash the Vail compatible firmware then do everything in Vial (https://get.vial.today/).

## R1 Wired Orange PCB Flash Guide

1. Hold `ESC` and plug the board in
2. Clear EEPROM in QMK Toolbox
3. Flash the firmware

### Or use QMK CLI to flash
`qmk compile -kb qwertykeys/qk65/hotswap -km shigure -j 32`

`qmk flash -kb qwertykeys/qk65/hotswap -km shigure -j 32`