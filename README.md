# Tian's Playground

## Overview
This repo is a Mynewt playground meant for development of Ambiq Apollo 3 support. It pulls in my custom mynewt-core and mynewt-nimble forks located at t3zeng/mynewt-core and t3zeng/mynewt-nimble respectively. An Apollo3 EVB is required to run the targets in this repo.

## Setup
Setting this repo up is very standard for a Mynewt repo. Run `newt upgrade` to pull in all of the necessary repos to run the applications. 

## Bootloader
The bootloader target is named `my_blinky_boot`. You may build it using `newt build my_blinky_boot` and load it using `newt load my_blinky_boot`. The Ambiq Apollo3 Secure Bootloader located at 0x0000 cannot be modified and the memory is protected all the way up until 0xc0000. The Secure Bootloader will run code starting at 0xc000 so mcuboot is placed at this address.

## Apps
The main app used to validate Ambiq Apollo3 support on mynewt-core is called `my_blinky`. This app can test GPIOs, LEDs, I2C, SPI, UART and the ADC. There are also a couple of nimBLE apps brought into this repo to test Bluetooth. These are the `bleprph` and `btshell` example apps which can be run using the target `ble_test_target`. Currently I am switching between the apps by changing the app in `target.yml`.

## mynewt-core and mynewt-nimble branches
The Apollo 3 work for mynewt-core is ready for review to go upstream into `apache-mynewt-core` so you can use the `master` branch of `t3zeng/mynewt-core` fork. The nimBLE stack is still a WIP so instead of using `master` branch in `t3zeng/mynewt-nimble`, use the branch `tian-playground`.