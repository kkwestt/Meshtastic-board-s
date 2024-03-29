// nRF52840_Dongle pinout
// SW1 Button P1.06
// SW2 Reset P0.181
// LD1 Green P0.06
// LD2 Red P0.08
// LD2 Green P1.09
// LD2 Blue P0.12

#ifndef _VARIANT_NORDIC_PCA10059_
#define _VARIANT_NORDIC_PCA10059_

// #define PCA10059 // для дисплея, которого нет 

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)

#define USE_LFXO // Board uses 32khz crystal for LF

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

#define PIN_LED1 (0 + 12)     // Built in LD2 Blue  P0.12
#define PIN_LED2 (32 + 6)     // Built in LD2 Green  P1.09
// #define PIN_LED3 (0 + 8)   // Built in LD2 Red  P0.08

#define PIN_LED3 (0 + 6)      // Built in LD1 RED P0.06

#define LED_RED PIN_LED3
#define LED_BLUE PIN_LED1
#define LED_GREEN PIN_LED2

#define LED_BUILTIN LED_BLUE
#define LED_CONN о

#define LED_STATE_ON 0 // State when LED is lit
#define LED_INVERTED 1

/*
 * Buttons
 */
#define PIN_BUTTON1 (32 + 6) // BTN_DN           P1.06 Built in button

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
#define PIN_SERIAL1_RX (-1)
#define PIN_SERIAL1_TX (-1)

// Connected to Jlink CDC
#define PIN_SERIAL2_RX (-1)
#define PIN_SERIAL2_TX (-1)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO (0 + 17) // MISO      P0.17
#define PIN_SPI_MOSI (0 + 15) // MOSI      P0.15
#define PIN_SPI_SCK (0 + 13)  // SCK       P0.13


static const uint8_t SS = (0 + 31); // LORA_CS   P0.31
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK = PIN_SPI_SCK;

/*
 * eink display pins
 */

// #define PIN_SPI1_MISO (-1) //
// #define PIN_SPI1_MOSI (10) // EPD_MOSI  P0.10
// #define PIN_SPI1_SCK (9)   // EPD_SCLK  P0.09

// #define PIN_EINK_EN  (-1)
// #define PIN_EINK_EN (0 + 6) // Turn on the Green built in LED
// #define PIN_EINK_CS (32)    // EPD_CS
// #define PIN_EINK_BUSY (20)  // EPD_BUSY
// #define PIN_EINK_DC (24)    // EPD_D/C
// #define PIN_EINK_RES (-1)   // Not Connected P0.22 available
// #define PIN_EINK_SCLK (9)   // EPD_SCLK
// #define PIN_EINK_MOSI (10)  // EPD_MOSI
// #define USE_EINK

/*
 * Wire Interfaces
 */

#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA (0 + 22) // SDA P0.22
#define PIN_WIRE_SCL (0 + 24) // SCL P0.24

/*
 * Lora radio
 */

#define USE_SX1262
#define USE_SX1268

#define SX126X_CS     (0 + 31)  // LORA_CS     P0.31
#define SX126X_DIO1   (0 + 29)  // DIO1        P0.29
#define SX126X_BUSY    (0 + 2)  // LORA_BUSY   P0.02
#define SX126X_RESET (32 + 15)  // LORA_RESET  P1.15

#define SX126X_TXEN  (32 + 13)  // TXEN        P1.13 NiceRF 868 dont use
#define SX126X_RXEN  (32 + 10)  // RXEN        P1.10 NiceRF 868 dont use

#define SX126X_E22
#define SX126X_MAX_POWER    22  // Outputting 22dBm from SX1262 results in ~30dBm E22-900M30S output (module only uses last stage of the YP2233W PA)
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V

// #define GPS_RX_PIN (-1)
// #define GPS_TX_PIN (-1)
// #define PIN_GPS_EN (-1)
// #define PIN_GPS_PPS (-1) // Pulse per second input from the GPS



// Battery
// The battery sense is hooked to pin A0 (4)
// it is defined in the anlaolgue pin section of this file
// and has 12 bit resolution
#define BATTERY_SENSE_RESOLUTION_BITS 12
#define BATTERY_SENSE_RESOLUTION 4096.0
// Definition of milliVolt per LSB => 3.0V ADC range and 12-bit ADC resolution = 3000mV/4096
#define VBAT_MV_PER_LSB (0.73242188F)
// Voltage divider value => 1.5M + 1M voltage divider on VBAT = (1.5M / (1M + 1.5M))
#define VBAT_DIVIDER (0.4F)  // ? 
// Compensation factor for the VBAT divider
#define VBAT_DIVIDER_COMP (1.73) // ? 
// Fixed calculation of milliVolt from compensation value
#define REAL_VBAT_MV_PER_LSB (VBAT_DIVIDER_COMP * VBAT_MV_PER_LSB)
#undef AREF_VOLTAGE
#define AREF_VOLTAGE 3.0
#define VBAT_AR_INTERNAL AR_INTERNAL_3_0
#define ADC_MULTIPLIER VBAT_DIVIDER_COMP // REAL_VBAT_MV_PER_LSB
#define VBAT_RAW_TO_SCALED(x) (REAL_VBAT_MV_PER_LSB * x)


#define BAT_EMPTYVOLT 2500
#define BAT_FULLVOLT 3600
#define BAT_CHARGINGVOLT 3650

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
