# Introduction

This repository contains a simple "blinky" program intended to be run on an STM32L432 microcontroller. The program is made in C, using no previously made libraries for interacting with the peripherals on the microcontroller. The goal of this project was to teach myself the basics of uploading a program to a microcontroller without the use of an IDE which tends to simplify the process, this means coding everything from scratch only using manuals, and online articles as resources.

# Dependencies

The following tools need to be installed to successfully compile and flash the program to the microcontroller:
    - ARM-gcc toolchain
    - GNU make
    - ST-link

For ubuntu these can be installed with the following command:

``` bash
sudo apt install gcc-arm-none-eabi make stlink-tools
```


# How to use

1. Connect your STM32L4KC microcontroller to your computer via USB cable.

2. Clone the bare metal blinky program to your computer using the following command:

``` bash
git clone git@github.com:DrakBoul/bare-metal-blinky.git
```

3. Next, change directories to the bare metal blinky folder and run the make command:

``` bash
cd bare-metal-blinky
make
```

__Note__: This make command will automatically compile, link, and upload the program to your microcontroller. Check the MakeFile for other commands.

