# QMK Firmware for QK65 R2 Wired White PCB

R2 wired white PCB is not officially supported by QMK.

Owlab(QK) actually has a working [repo](https://github.com/owlab-git/qmk_firmware/) where R2 is added, with some minor fixes I can actually get a working `bin` for the R2 hotswap PCB on latest QMK repo dev branch.

QMK toolbox have no driver for that bootloader bacause it is not merged to upstream yet, therefore you will probably need `zadig` to install the driver for windows. QK suggested the `WinUSB` drive while after I flashed it with QMK it seems I can just use `libusb-win32` for it instead. For Linux, add this line to udev rules(e.g. /etc/udev/rules.d/60-dfuse-rules or /usr/lib/udev/rules.d/60-dfuse-rules).

```ACTION=="add", SUBSYSTEM=="usb", ATTRS{idVendor}=="1688", ATTRS{idProduct}=="2200", TAG+="uaccess"```

A `bat` script for using purely `dfu-util` is included for flashing just in case.


## R2 Wired White PCB Flash Guide

1. Hold `B` and plug the board in
2. Use QMK CLI to flash the board, or compile the firmware then use included `bat` to flash compiled QMK firmware. Make sure `bat` and firmware are in the same folder with `dfu-util`. Change the firmware name in the `bat` script accordingly.

### QMK CLI
`qmk compile -kb qwertykeys/qk65/r2 -km shigure -j 32`

`qmk flash -kb qwertykeys/qk65/r2 -km shigure -j 32`