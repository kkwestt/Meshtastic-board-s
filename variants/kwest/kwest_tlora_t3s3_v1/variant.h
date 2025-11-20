#define GPS_RX_PIN 42
#define GPS_TX_PIN 46

#define SX126X_MAX_POWER 22
#define USE_SX1268 // e22-400m30s 433mhz

#define TCXO_OPTIONAL     // make it so that the firmware can try both TCXO and XTAL
extern float tcxoVoltage; // make this available everywhere

// ----------------------------------------------------------------

#define USE_SSD1306

#define BATTERY_PIN 1
#define ADC_MULTIPLIER 2.06 // 2.11 // 2.0 (R42=100k, R43=100k)+ 10% for correction of display undervoltage.
#define ADC_CHANNEL ADC1_GPIO1_CHANNEL

#define BATTERY_SENSE_SAMPLES 10

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
// #define USE_LR1121

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8

// per SX1276_Receive_Interrupt/utilities.h
#define LORA_DIO0 9
#define LORA_DIO1 33 // pin_dio ?
// #define LORA_DIO2 34 // pin_busy
// #define LORA_RXEN 21
// #define LORA_TXEN 10

// per SX1262_Receive_Interrupt/utilities.h
#define SX126X_CS LORA_CS
#define SX126X_DIO1 33
#define SX126X_BUSY 34
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// per SX128x_Receive_Interrupt/utilities.h
// #ifdef USE_SX1280
// #define SX128X_CS LORA_CS
// #define SX128X_DIO1 9
// #define SX128X_DIO2 33
// #define SX128X_DIO3 34
// #define SX128X_BUSY 36
// #define SX128X_RESET LORA_RESET
// #define SX128X_RXEN 21
// #define SX128X_TXEN 10
// #define SX128X_MAX_POWER 3
// #endif

// LR1121
// #ifdef USE_LR1121
// #define LR1121_IRQ_PIN 36
// #define LR1121_NRESET_PIN LORA_RESET
// #define LR1121_BUSY_PIN LORA_DIO2
// #define LR1121_SPI_NSS_PIN LORA_CS
// #define LR1121_SPI_SCK_PIN LORA_SCK
// #define LR1121_SPI_MOSI_PIN LORA_MOSI
// #define LR1121_SPI_MISO_PIN LORA_MISO
// #define LR11X0_DIO3_TCXO_VOLTAGE 3.0
// #define LR11X0_DIO_AS_RF_SWITCH
// #endif

// ----------------------------------------------------------------
// ----------------------------------------------------------------
// E22 Tx/Rx control options:

// 1. Let the E22 control Tx and Rx automagically via DIO2.

//  * The E22's TXEN and DIO2 pins are connected to each other, but not to the MCU.
//  * The E22's RXEN pin *is* connected to the MCU.
//  * E22_TXEN_CONNECTED_TO_DIO2 is defined so the logic in SX126XInterface.cpp handles this configuration correctly.

// #define SX126X_TXEN LORA_TXEN // need to connect to dio2
// #define SX126X_RXEN LORA_RXEN

#define LORA_TXEN RADIOLIB_NC // 10 // спаять вместе контакты не забудь
#define LORA_RXEN 21

// ------------------------------ OR ------------------------------

// 2. Control Tx and Rx manually.

//  * The E22's TXEN and RXEN pins are both connected to the MCU.

// #define SX126X_TXEN LORA_TXEN  // need to connect to dio2
// #define SX126X_RXEN LORA_RXEN

// #define LORA_TXEN   10
// #define LORA_RXEN   21

// ----------------------------------------------------------------