// EByte nRF52840 Dongle pinout

// SW1 Button P1.06
// SW2 Reset P0.181
// LD1 Green P0.06
// LD2 Red P0.08
// LD2 Green P1.09
// LD2 Blue P0.12

#ifndef _VARIANT_NORDIC_PCA10059_
#define _VARIANT_NORDIC_PCA10059_

// #ifndef _VARIANT_TTGO_EINK_V1_0_
// #define _VARIANT_TTGO_EINK_V1_0_

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)

#define PCA10059
// #define PROMICRO_DIY_TCXO


#define USE_LFXO // Board uses 32khz crystal for LF
// #define USE_LFRC // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT (48)
#define NUM_DIGITAL_PINS (48)
#define NUM_ANALOG_INPUTS (1)
#define NUM_ANALOG_OUTPUTS (0)

// LEDs
#define PIN_LED1 (0 + 6)      // Built in LD1 RED P0.06

// #define PIN_LED2 (0 + 8)   // Built in LD2 Red  P0.08
// // #define PIN_LED1 (32 + 6)     // Built in LD2 Green  P1.09
#define PIN_LED3 (0 + 12)     // Built in LD2 Blue  P0.12

// #define LED_RED PIN_LED3
#define LED_BLUE PIN_LED1
// #define LED_GREEN PIN_LED2

#define LED_BUILTIN LED_BLUE
// #define LED_CONN PIN_LED2

#define LED_STATE_ON 0 // State when LED is lit
#define LED_INVERTED 1


/*
 * Buttons
 */
#define PIN_BUTTON1 (32 + 6) // P1.06 Built in button
#define BUTTON_CLICK_MS 400


/*
 * Analog pins
 */
#define PIN_A0 (0 + 4) // Battery ADC P0.04 только этот пин, их вообще мало

#define BATTERY_PIN PIN_A0

static const uint8_t A0 = PIN_A0;

#define ADC_RESOLUTION 14


/*
 * Serial interfaces
 */
//--------------
// #define PIN_SERIAL1_RX (-1)
// #define PIN_SERIAL1_TX (-1)

// #define PIN_GPS_EN (-1)
// #define PIN_GPS_PPS (-1) // Pulse per second input from the GPS

// #define GPS_RX_PIN PIN_SERIAL1_RX
// #define GPS_TX_PIN PIN_SERIAL1_TX
//--------------
#define PIN_SERIAL1_RX (32 + 4)
#define PIN_SERIAL1_TX (32 + 2)
// #define PIN_GPS_PPS (32 + 0) // Pulse per second input from the GPS // а нужно оно вообще?
// #define PIN_GPS_EN (32 + 7) // An output to wake GPS, low means allow sleep, high means force wake
// #define PIN_GPS_STANDBY (32 + 7)  // An output to wake GPS, low means allow sleep, high means force wake ?? PIN_GPS_STANDBY_INVERTED ??

#define GPS_RX_PIN PIN_SERIAL1_RX
#define GPS_TX_PIN PIN_SERIAL1_TX

#define GPS_THREAD_INTERVAL 50
//--------------

// Connected to Jlink CDC
#define PIN_SERIAL2_RX (-1)
#define PIN_SERIAL2_TX (-1)


/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

// #define PIN_SPI_MISO (0 + 17)           // MISO      P0.17
// #define PIN_SPI_MOSI (0 + 15)           // MOSI      P0.15
// #define PIN_SPI_SCK (0 + 13)            // SCK       P0.13

// static const uint8_t SS = (0 + 31);     // LORA_CS   P0.31
// static const uint8_t MOSI = PIN_SPI_MOSI;
// static const uint8_t MISO = PIN_SPI_MISO;
// static const uint8_t SCK = PIN_SPI_SCK;


#define PIN_SPI_MISO (0 + 17)    // P0.02
#define PIN_SPI_MOSI (0 + 15)    // P1.15
#define PIN_SPI_SCK (0 + 13)     // P1.11

#define LORA_MISO PIN_SPI_MISO
#define LORA_MOSI PIN_SPI_MOSI
#define LORA_SCK PIN_SPI_SCK
#define LORA_CS (0 + 31) 

/*
External serial flash WP25R1635FZUIL0
*/

// QSPI Pins
#define PIN_QSPI_SCK (32 + 1)
#define PIN_QSPI_CS  (32 + 11)
#define PIN_QSPI_IO0 (0 + 9)    // MOSI if using two bit interface
#define PIN_QSPI_IO1 (0 + 11)   // MISO if using two bit interface
#define PIN_QSPI_IO2 (0 + 26)   // WP if using two bit interface (i.e. not used)
#define PIN_QSPI_IO3 (0 + 20)   // HOLD if using two bit interface (i.e. not used)

#define EXTERNAL_FLASH_DEVICES MX25R1635F
#define EXTERNAL_FLASH_USE_QSPI


/*
 * Wire Interfaces
 */

#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA (0 + 22) // SDA P0.22
#define PIN_WIRE_SCL (0 + 24) // SCL P0.24

/*
 * Lora radio
 */

// ----------------------------------------------------------------
// E22 Tx/Rx control options:

// 1. Let the E22 control Tx and Rx automagically via DIO2.

//  * The E22's TXEN and DIO2 pins are connected to each other, but not to the MCU.
//  * The E22's RXEN pin *is* connected to the MCU.
//  * E22_TXEN_CONNECTED_TO_DIO2 is defined so the logic in SX126XInterface.cpp handles this configuration correctly.

// RX/TX for RFM95/SX127x

// #define RF95_TXEN RADIOLIB_NC    // Assuming that DIO2 is connected to TXEN pin. If not, TXEN must be connected.
// #define RF95_RXEN (32 + 10)      //              RXEN P1.10 

#define SX126X_TXEN RADIOLIB_NC     // (32 + 13) // TXEN P1.13 need to connect to dio2
#define SX126X_RXEN (32 + 10)       //              RXEN P1.10 

// ------------------------------ OR ------------------------------

// 2. Control Tx and Rx manually.

//  * The E22's TXEN and RXEN pins are both connected to the MCU.

// #define SX126X_TXEN (32 + 13)
// #define SX126X_RXEN (32 + 10)

// ----------------------------------------------------------------

// #define USE_LLCC68
#define USE_SX1262
// #define USE_RF95
// #define USE_SX1268
// #define USE_LR1121

// RF95 CONFIG

#define LORA_DIO0 (0 + 2)       // LORA_BUSY   P0.02
#define LORA_DIO1 (0 + 29)      // DIO1        P0.29
#define LORA_RESET (32 + 15)    // LORA_RESET  P1.15

// SX126X CONFIG

#define SX126X_CS (0 + 31)       // LORA_CS     P0.31 FIXME - we really should define LORA_CS instead
#define SX126X_DIO1 (0 + 29)     // DIO1        P0.29
#define SX126X_DIO2_AS_RF_SWITCH // Note for E22 modules: DIO2 is not attached internally to TXEN for automatic TX/RX switching,
                                // so it needs connecting externally if it is used in this way
#define SX126X_BUSY (0 + 2)      // LORA_BUSY   P0.02
#define SX126X_RESET (32 + 15)  // LORA_RESET  P1.15

#define SX126X_MAX_POWER    22  // Outputting 22dBm from SX1262 results in ~30dBm E22-900M30S output (module only uses last stage of the YP2233W PA)

/*
On the SX1262, DIO3 sets the voltage for an external TCXO, if one is present. If one is not present, then this should not be used.

Ebyte
e22-900mm22s has no TCXO
e22-900m22s has TCXO
e220-900mm22s has no TCXO, works with/without this definition, looks like DIO3 not connected at all

AI-thinker
RA-01SH does not have TCXO

Waveshare
Core1262 has TCXO

*/
// #define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL     // make it so that the firmware can try both TCXO and XTAL
extern float tcxoVoltage; // make this available everywhere

// Battery
// The battery sense is hooked to pin A0 (4)
// it is defined in the anlaolgue pin section of this file and has 12 bit resolution
#define BATTERY_SENSE_RESOLUTION_BITS 12
#define BATTERY_SENSE_RESOLUTION 4096.0
#undef AREF_VOLTAGE
#define AREF_VOLTAGE 3.0
#define VBAT_AR_INTERNAL AR_INTERNAL_3_0
#define ADC_MULTIPLIER (2.02F)

// Default Li-Ion  4190, 4050, 3990, 3890, 3800, 3720, 3630, 3530, 3420, 3300, 3100
// Li-FePo4 3400, 3350, 3320, 3290, 3270, 3260, 3250, 3230, 3200, 3120, 3000
// #define CELL_TYPE_LIFEPO4 // same curve for liion/lipo

#define BATTERY_SENSE_SAMPLES 10 

#ifdef __cplusplus
}
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/
#endif