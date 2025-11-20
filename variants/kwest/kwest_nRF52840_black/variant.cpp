#include "variant.h"
#include "nrf.h"
#include "wiring_constants.h"
#include "wiring_digital.h"

const uint32_t g_ADigitalPinMap[] = {
    // P0
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,

    // P1
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};

void initVariant()
{
    // LED1
    pinMode(PIN_LED1, OUTPUT);
    ledOff(PIN_LED1);

    // pinMode(PIN_LED2, OUTPUT);
    // ledOff(PIN_LED2);
    
    pinMode(12, OUTPUT);
    ledOff(12);
}

// EByte nRF52840 Dongle pinout
// SW1 Button P1.06
// SW2 Reset P0.181
// LD1 Green P0.06
// LD2 Red P0.08
// LD2 Green P1.09
// LD2 Blue P0.12