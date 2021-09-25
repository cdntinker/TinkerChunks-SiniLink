# TinkerChunks-SmartSwitch

- [Overview](#overview)
- [Required Libraries](#required-libraries)
- Usage:
  - [With PlatformIO](#platformio)
  - [With Arduino IDE](#arduino-ide)
- [The Functions](#the-functions)
- [An Example](#an-example)

## Overview
Smart Switch Handling library (For use with AustinOTA)

It will cover:
* SiniLink XY-WFUSB USB switch
* Sonoff Basic Smart Switch
* Sonoff Dual Smart Switch
* Sonoff S31 Smart plug (Control & status only)
* Sonoff S2x Smart plug
* Sonoff TX Smart Wall Touch Switches
* Sonoff IW100/101 Wall Switch / Outlet (Control & status only)

(Probably damn near all of the Sonoff range...)

## Required Libraries:

This library uses [my DEBUG library](https://github.com/cdntinker/TinkerLibs-DEBUG).

## Usage

This is a sketchy outline that's being worked on...

### PlatformIO
In `platformio.ini`, add https://github.com/cdntinker/TinkerChunks-SmartSwitch to your `lib-deps` for the project:

```
lib_deps =
   Some Library
   https://github.com/cdntinker/TinkerLibs-DEBUG
   https://github.com/cdntinker/TinkerChunks-SmartSwitch
   Some Other Library
```

Also, in `platformio.ini`, You can define the GPIO pins (Current defaults are for the Sinilink XY-WFUSB):

```
build_flags =
    -D SmartSwitch_RELAY01=5
    -D SmartSwitch_BUTTN01=4
    -D SmartSwitch_LED01=14
    -D SmartSwitch_LED02=16
```

Then add `#include <Tinker_SmartSwitch.h>` to any source file you want to reference these functions in.

### Arduino IDE
To install this library in Arduino, You'll have to do it manually.

In your default sketch folder (`~/Arduino` on Linux), you'll find a folder named libraries.

Create a subfolder in there for this library.  (I named it `TinkerChunks-SmartSwitch` here.)

Download and copy the content of the `src` & `include` folders there.

## The Functions
These are all declared in **Tinker_SmartSwitch.h**

### `void SmartSwitch_init()`

### `void SmartSwitch_Button()`
### `void SmartSwitch_Relay(bool OnOff)`
### `void SmartSwitch_Toggle()`

### `void SmartSwitch_LED(bool OnOff)`
### `void SmartSwitch_LINKLED(bool OnOff)`

### `void MQTT_HandleMessages(const char *Topic, const char *Message)`

## An Example
Sorry...  Not yet.
