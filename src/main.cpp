// File: main.cpp
// Description: Minimal example using Adafruit NeoPixel to control a WS2812B LED on YD-RP2040
// Framework: Arduino (earlephilhower core), PlatformIO, RP2040

#include "Adafruit_NeoPixel.h"

// ---------------- Configuration ----------------
#define LED_PIN     23       // GPIO used for WS2812B data
#define LED_SYS     25       // GPIO user by Led system
#define NUM_LEDS    1        // Number of LEDs in the strip
#define BRIGHTNESS  50      // Brightness (0 to 255)

// Create NeoPixel instance (GRB format, 800kHz signal)
Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

// ---------------- Arduino Setup ----------------
void setup() {
  strip.begin();            // Initialize the NeoPixel library
  strip.setBrightness(BRIGHTNESS);
  strip.show();             // Initialize all pixels to 'off'

  pinMode(LED_SYS, OUTPUT);

}

// ---------------- Arduino Loop ----------------
void loop() {
  // Red
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.show();
  digitalWrite(LED_SYS, HIGH);
  delay(500);

  // Green
  strip.setPixelColor(0, strip.Color(0, 255, 0));
  strip.show();
  digitalWrite(LED_SYS, LOW);
  delay(500);

  // Blue
  strip.setPixelColor(0, strip.Color(0, 0, 255));
  strip.show();
  digitalWrite(LED_SYS, HIGH);
  delay(500);

  // White
  strip.setPixelColor(0, strip.Color(255, 255, 255));
  strip.show();
  digitalWrite(LED_SYS, LOW);
  delay(500);

}
