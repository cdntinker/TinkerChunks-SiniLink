# TinkerChunks-SmartSwitch

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

## Usage

This is a sketchy outline that's being worked on...

### Required Libraries:

This library uses [my DEBUG library](https://github.com/cdntinker/TinkerLibs-DEBUG).

### PlatformIO
In `platformio.ini`, add https://github.com/cdntinker/TinkerChunks-SmartSwitch to your `lib-deps` for the project.

```
lib_deps =
   Some Library
   https://github.com/cdntinker/TinkerChunks-SmartSwitch
   Some Other Library
```

Then add `#include <Tinker_SmartSwitch.h>` to any source file you want to reference these functions in.

### Arduino IDE
To install this library in Arduino, You'll have to do it manually.

In your default sketch folder (`~/Arduino` on Linux), you'll find a folder named libraries.

Create a subfolder in there for this library.  (I named it `TinkerChunks-SmartSwitch` here.)

Download and copy the content of the `src` & `include` folders there.
