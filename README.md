# YD-RP2040 WS2812B LED Driver (Arduino / PlatformIO)

This project controls the onboard WS2812B (NeoPixel) LED of the **YD-RP2040** board using the Arduino framework under PlatformIO.  
The LED logic is encapsulated in a custom C++ driver located in `lib/NeoPixelDriver`.

## Features

- Arduino (earlephilhower core) on RP2040 (YD-RP2040)
- Controls the built-in WS2812B LED (no wiring required)
- Adafruit NeoPixel library integration
- Clean C++ wrapper for LED control
- CMSIS-DAP support for flashing and debugging
- USB serial output via TinyUSB
- PlatformIO project structure
- Compatible with 16MB flash layout (1MB sketch, 15MB filesystem)
