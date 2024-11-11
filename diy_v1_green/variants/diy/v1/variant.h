// For OLED LCD
#define I2C_SDA 21
#define I2C_SCL 22

// GPS
// #define GPS_RX_PIN 12
// #define GPS_TX_PIN 15

#define BUTTON_PIN 0            // The middle button GPIO on the T-Beam
#define BATTERY_PIN 35          // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_MULTIPLIER 1.85     // (R1 = 470k, R2 = 680k)
#define BATTERY_SENSE_SAMPLES 10 

// Default Li-Ion  4190, 4050, 3990, 3890, 3800, 3720, 3630, 3530, 3420, 3300, 3100
// Li-FePo4 3400, 3350, 3320, 3290, 3270, 3260, 3250, 3230, 3200, 3120, 3000
#define CELL_TYPE_LIFEPO4       // curve for Li-FePo4 

#define LED_PIN 2               // add status LED (compatible with core-pcb and DIY targets)

#define LORA_RESET 23           // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 33            // IRQ for SX1262/SX1268
#define LORA_DIO2 32            // BUSY for SX1262/SX1268

#define LORA_SCK 5
#define LORA_MISO 19
#define LORA_MOSI 27
#define LORA_CS 18

// supported modules list
#define USE_SX1262
#define USE_SX1268

// common pinouts for SX126X modules
#define SX126X_CS 18            // NSS for SX126X
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN 14          // 14pin  Defining the RXEN ruins RFSwitching for the E22 900M30S in RadioLib
#define SX126X_TXEN RADIOLIB_NC // 13pin

#define SX126X_MAX_POWER 22

#define SX126X_DIO2_AS_RF_SWITCH 
#define SX126X_DIO3_TCXO_VOLTAGE 1.8