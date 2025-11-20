#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x2886
#define USB_PID 0x0059

// GPIO48 Reference: https://github.com/espressif/arduino-esp32/pull/8600

static const uint8_t SDA = 5;
static const uint8_t SCL = 6;

static const uint8_t MISO = 8;
static const uint8_t SCK = 7;
static const uint8_t MOSI = 9;
static const uint8_t SS = 1; // was 41;

#endif /* Pins_Arduino_h */