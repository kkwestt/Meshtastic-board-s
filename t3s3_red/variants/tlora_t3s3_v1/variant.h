#define GPS_RX_PIN 42
#define GPS_TX_PIN 46
#define GPS_1PPS_PIN 9              // red board
// #define GPS_1PPS_PIN 39          // ttgo lora t3s3 board + case 

#define EXT_NOTIFY_OUT 45           // динамик и светодиод

// PCF8563 RTC Module
#define PCF8563_RTC 0x51            // Putting definitions in variant. h does not compile correctly
#define HAS_RTC 1                   // обязательно нужно да


// ---------------------

#define HAS_SDCARD 1
#define SDCARD_USE_SPI1

#define USE_SSD1306

#define BATTERY_PIN 1 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// ratio of voltage divider = 2.0 (R42=100k, R43=100k)
#define ADC_MULTIPLIER 2.11 //2.105 // 2.0 + 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

#define I2C_SDA 18 // I2C pins for this board
#define I2C_SCL 17

// plug i2c
// #define I2C_SDA1 43
// #define I2C_SCL1 44

#define LED_PIN 37   // If defined we will blink this LED
#define BUTTON_PIN 0 // If defined, this will be used for user button presses,

#define BUTTON_NEED_PULLUP

// TTGO uses a common pinout for their SX1262 vs RF95 modules - both can be enabled and we will probe at runtime for RF95 and if
// not found then probe for SX1262
// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
#define USE_SX1268
// #define USE_SX1280

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8

// per SX1276_Receive_Interrupt/utilities.h
#define LORA_DIO0 9
#define LORA_DIO1 33 // TCXO_EN ?
#define LORA_DIO2 34
#define LORA_RXEN 21
#define LORA_TXEN 10

// per SX1262_Receive_Interrupt/utilities.h
// #ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 33
#define SX126X_BUSY 34
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V
// #endif