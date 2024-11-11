#define GPS_RX_PIN 42
#define GPS_TX_PIN 46
#define GPS_1PPS_PIN 9              // red board
#define PIN_GPS_STANDBY 39          // An output to wake GPS, low means allow sleep, high means force wake STANDBY
// #define PIN_GPS_EN 39

#define EXT_NOTIFY_OUT 45           // динамик и светодиод

#define PCF8563_RTC 0x51            // Putting definitions in variant. h does not compile correctly
#define HAS_RTC 1                   // обязательно нужно да

#define SX126X_MAX_POWER 22         // Set lora.tx_power to 13 for Hydra or other E22 900M30S target due to PA
#define USE_SX1268                  // e22-400mXXs 433mhz

// ---------------------

#define HAS_SDCARD
#define SDCARD_USE_SPI1

#define USE_SSD1306

#define BATTERY_PIN 1        // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
                            // ratio of voltage divider = 2.0 (R42=100k, R43=100k)
#define ADC_MULTIPLIER 2.11  // 2.0 + 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

#define I2C_SDA 18 // I2C pins for this board
#define I2C_SCL 17

// #define I2C_SDA1 43
// #define I2C_SCL1 44

#define LED_PIN 37   // If defined we will blink this LED
#define BUTTON_PIN 0 // If defined, this will be used for user button presses,

#define BUTTON_NEED_PULLUP

// TTGO uses a common pinout for their SX1262 vs RF95 modules - both can be enabled and we will probe at runtime for RF95 and if
// not found then probe for SX1262
// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1280

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8

// per SX1276_Receive_Interrupt/utilities.h
// #define LORA_DIO0 9
#define LORA_DIO1 33
#define LORA_DIO2 34 


// ----------------------------------------------------------------
// E22 Tx/Rx control options:

// 1. Let the E22 control Tx and Rx automagically via DIO2.

//  * The E22's TXEN and DIO2 pins are connected to each other, but not to the MCU.
//  * The E22's RXEN pin *is* connected to the MCU.
//  * E22_TXEN_CONNECTED_TO_DIO2 is defined so the logic in SX126XInterface.cpp handles this configuration correctly.


#define SX126X_TXEN LORA_TXEN  // need to connect to dio2
#define SX126X_RXEN LORA_RXEN     

#define LORA_TXEN RADIOLIB_NC // 10 // спаять вместе контакты не забудь
#define LORA_RXEN 21

// ------------------------------ OR ------------------------------

// 2. Control Tx and Rx manually.

//  * The E22's TXEN and RXEN pins are both connected to the MCU.

// #define SX126X_TXEN (32 + 13)
// #define SX126X_RXEN (32 + 10)

// ----------------------------------------------------------------


// per SX1262_Receive_Interrupt/utilities.h
#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH // DIO2 controlls an antenna switch (and the TCXO voltage is controlled by DIO3)
// All switching is performed with DIO2, it is automatically inverted using circuitry.
// CDEBYTE EoRa-S3 uses an XTAL, thus we do not need DIO3 as TCXO voltage reference. 
// Don't define SX126X_DIO3_TCXO_VOLTAGE for simplicity rather than defining it as 0.
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#endif

// per SX128x_Receive_Interrupt/utilities.h
#ifdef USE_SX1280
#define SX128X_CS LORA_CS
#define SX128X_DIO1 9
#define SX128X_DIO2 33
#define SX128X_DIO3 34
#define SX128X_BUSY 36
#define SX128X_RESET LORA_RESET
#define SX128X_RXEN 21
#define SX128X_TXEN 10
#define SX128X_MAX_POWER 3
#endif