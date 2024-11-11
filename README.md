# [Meshtastic boards](https://meshtastic.org/)


Hello!
Sometimes, and lately often, I make boards for meshtastic, and in search of the optimal solution for this project, a large number of their variations have accumulated. So I decided to post them. They will all be here. Appearance of the board, diagram and file for assembling the firmware and possibly the firmware itself.

## Version's list
- DIY_V1 (green)
- DIY_V1 (blue)
- t3s3 (white) LILYGO T3S3 V1.0 + Case + GPS ATGM336H
- t3s3 (red) based on LILYGO T3S3 V1.0
- t3s3 (blue) based on LILYGO T3S3 V1.0
- NRF52840 based on E-Byte E104-BT5040U 



### DIY_V1 (green) 
The very first board wired for Mestastic. There are several errors.

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/diy_v1_green/diy_v1_green.jpg)

- E22 LORA module (22 or 30dbm) 868 or 433 (22-30-33 dbm) 
- Notify LED + Buzzer


### DIY_V1 (blue) 
Second board wired for Mestastic. There are several errors.


![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/diy_v1_blue/diy_v1_blue.jpg)

- E22 LORA module (22 or 30dbm) 868 or 433 (22-30-33 dbm) 
- Notify LED + Buzzer


### t3s3 (white) 
Just LILYGO T3S3 V1.0 + nice case

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/t3s3_white/t3s3_white.jpg)

- LILYGO T3S3 V1.0
- GPS ATGM336H
- Notify bright LED
- 18650 + BMS 
- LORA_T3S3.3mf Case 3D printed
- LORA_T3S3.svg file for laser cut


### t3s3 (red) 

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/t3s3_red/t3s3_red2.JPG)

- LILYGO T3S3 V1.0 with E22 LORA module (22 or 30dbm) 868 or 433 (22-30-33 dbm) 
- GPS ATGM336H Module
- 18650 2pcs holder
- Li-Ion charger 1A + Temperature battery protection
- BMS 1S (overcharge and over discharge)
- SD card
- UPS 5v (dc-dc buck boost)
- Notify LED + Buzzer (+ Vibro)
- Temp Sensor BME280 or SHT31 (recomended)
- Clock PCF8563
- Powered in the range 5-26V

Added a 3D model of the case for printing on a printer


### t3s3 (blue) 

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/t3s3_blue/t3s3_blue.jpg)

- LILYGO T3S3 V1.0 with E22 LORA module 22dbm
- GPS ATGM336H Module
- Temp Sensor BME280 or SHT31 (recomended)
- Powered in the range 5-26V




### NRF52840 based on E-Byte E104-BT5040U
Best power consumption. E-Byte E104-BT5040U + E22-900M22S on 22dBm Rx 0.7W and Tx 0.33W
Also tested and worked on nRF52840 Dongle, but to hard for soldering analog pin P0.04

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/nrf52840/nrf52840.png)
 
- E-Byte E104-BT5040U CPU nrf52840  
- E22 LORA module (22 or 30dbm) 868 or 433 (22-30-33 dbm) 
- On-board QSPI Flash MX25R1635F
- Temp Sensor BME280 or SHT31 (recomended)
- Pin's for i2c OLED 
- GPS ATGM336H Module + wake pin's hack
- 5V Power
- Battery voltage detector pin's


Gerber-NRF52840.zip - gerber files for production


### XIAO BLE and E-Byte E22 1W board
I think this is the best price for the complexity of soldering, output power and electricity consumption.

- Read README inside of project
- Seeed Studio XIAO nRF52840 + E22-900M30S 1W or E22-900M22S 0.14W or E22-900M33S 2W!
- GPS ATGM336H Module
- Temp Sensor SHT31
- Powered in the range 5V only

![](https://github.com/kkwestt/Meshtastic-board-s/blob/main/xiao_ble/xiao_ble.jpg)
