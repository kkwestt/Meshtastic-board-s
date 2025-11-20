#define USE_SSD1106

#define I2C_SDA 5
#define I2C_SCL 6

#define LED_PIN 21
#define LED_STATE_ON 0 // State when LED is lit

// #define BUTTON_PIN 0
#define BUTTON_PIN 43
#define BUTTON_NEED_PULLUP

// #define USE_SX1262
#define USE_SX1268

#define LORA_SCK 7
#define LORA_MISO 8
#define LORA_MOSI 9
#define LORA_CS 1    // SX1262 NSS os CS
#define LORA_DIO1 2  // IRQ for SX1262/SX1268
#define LORA_DIO2 3  // BUSY for SX1262/SX1268
#define LORA_RESET 4 // RST for SX1276, and for SX1262/SX1268

#define SX126X_TXEN RADIOLIB_NC // Assuming that DIO2 is connected to TXEN pin. If not, TXEN must be connected.
#define SX126X_RXEN 44

#define SX126X_CS 1
#define SX126X_DIO1 2
#define SX126X_BUSY 3
#define SX126X_RESET 4

#define SX126X_MAX_POWER 22
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL - ЭТО ВАЖНО

// #define GPS_RX_PIN (-1)
// #define GPS_TX_PIN (-1)

// #define PIN_BUZZER 43
// #define EXT_NOTIFY_OUT 43

// #define BATTERY_PIN -1
// #define ADC_CHANNEL ADC1_GPIO1_CHANNEL
// #define BATTERY_SENSE_RESOLUTION_BITS 12