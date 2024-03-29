#define I2C_SDA 21 // For OLED
#define I2C_SCL 22

#define GPS_UBLOX // GPS 
#define GPS_RX_PIN 15 // broken pins
#define GPS_TX_PIN 12

// #define BUTTON_PIN 36 
// #define BUTTON_NEED_PULLUP
#define BUTTON_PIN 0 // Button on all boards


#define BATTERY_PIN 35 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_MULTIPLIER 2.11         // ratio of voltage divider = 2.0 (R42=100k, R43=100k)
                                    // (R1 = 470k, R2 = 680k) ????
// #define BATTERY_SENSE_SAMPLES 30 // Set the number of samples, It has an effect of increasing sensitivity.
// #define BAT_FULLVOLT 7150        // 3.6v x2
// #define BAT_EMPTYVOLT 5900       // 2.9v x2
// #define BAT_CHARGINGVOLT 7200
// #define BAT_NOBATVOLT 3900

#define EXT_PWR_DETECT 4 // Pin to detect connected external power source for LILYGO® TTGO T-Energy T18 and other DIY boards
#define EXT_NOTIFY_OUT 25 // Overridden default pin to use for Ext Notify Module (#975).
#define LED_PIN 2 // add status LED (compatible with core-pcb and DIY targets)

#define LORA_DIO0 26  // a No connect on the SX1262/SX1268 module
#define LORA_RESET 23 // RST for SX1276, and for SX1262/SX1268
#define LORA_DIO1 33  // IRQ for SX1262/SX1268
#define LORA_DIO2 32  // BUSY for SX1262/SX1268
#define LORA_DIO3     // Not connected on PCB, but internally on the TTGO SX1262/SX1268, if DIO3 is high the TXCO is enabled

#define LORA_SCK 5
#define LORA_MISO 19
#define LORA_MOSI 27
#define LORA_CS 18

// supported modules list
// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
#define USE_SX1268
// #define USE_LLCC68

// common pinouts for SX126X modules
#define SX126X_CS LORA_CS // NSS for SX126X
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN 14 //RADIOLIB_NC // Defining the RXEN ruins RFSwitching for the E22 900M30S in RadioLib
#define SX126X_TXEN 13

// Set lora.tx_power to 13 for Hydra or other E22 900M30S target due to PA
#define SX126X_MAX_POWER 22
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // E22 series TCXO reference voltage is 1.8V