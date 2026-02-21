# Service kanata

```
systemctl --user start kanata.service
```

# QMK

## Installation

```
$ sudo apt update
$ sudo apt install -y \
    avr-libc \
    avrdude \
    binutils-arm-none-eabi \
    binutils-avr \
    build-essential \
    dfu-programmer \
    dfu-util \
    dos2unix \
    gcc \
    gcc-arm-none-eabi \
    gcc-avr \
    git \
    libnewlib-arm-none-eabi \
    pipx \
    python3-full \
    python3-pip \
    python3-venv \
    unzip \
    zip
$ pipx install qmk
$ qmk setup
$ sudo cp ~/qmk_firmware/util/udev/50-qmk.rules /etc/udev/rules.d/
$ sudo udevadm control --reload-rules
$ sudo udevadm trigger
$ sudo systemctl disable ModemManager
$ sudo systemctl stop ModemManager
```

## Générer un keymap

```
$ qmk new-keymap -kb crkbd -km [toto]
```

## Compilation keymap

```shell
$ cd ~/qmk_firmware/keyboards/crkbd/keymaps/[toto]
$ qmk compile -kb crkbd/rev1 -km [toto]
```

## Flash gauche

```shell
qmk flash -kb crkbd/rev1 -km [toto] -bl dfu
```

## Flash droite

```shell
qmk flash -kb crkbd/rev1 -km [toto]
```
