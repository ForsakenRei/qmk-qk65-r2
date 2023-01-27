# QMK Firmware for QK65 R2 Wired White PCB

R2 wired white PCB is not officially supported by QMK.

Owlab actually has a working [repo](https://github.com/owlab-git/qmk_firmware/) where R2 is added, with some minor fixes I can actually get a working `bin` for the R2 hotswap PCB. Don't try it with latest QMK though.
And QMK toolbox still have no driver for that bootloader probably bacause it is not merged to upstream yet, you will need `zadig` to install the driver and `dfu-util` to flash the firmware. 
A `bat` file is included for flashing.


## R1 Wired Orange PCB Flash Guide

1. Hold `B` and plug the board in
2. Use included `bat` to flash compiled QMK firmware. Make sure `bat` and firmware are in the same folder with `dfu-util`. 

### Or use QMK CLI to flash
`qmk compile -kb qwertykeys/qk65/r2 -km shigure -j 32`

`qmk flash -kb qwertykeys/qk65/r2 -km shigure -j 32`