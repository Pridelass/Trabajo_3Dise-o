#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_INA219.h>

// Define the pins for the TTGO ESP32
#define SDA 21
#define SCL 22


Adafruit_INA219 ina219;

void setup() {
 
  Serial.begin(115200);
  
  Wire.begin(SDA, SCL);
  
  ina219.begin();
}

void loop() {

  float current_mA = ina219.getCurrent_mA();


  Serial.print("Current: ");
  Serial.print(current_mA);
  Serial.println(" mA");

  delay(1000);
}
