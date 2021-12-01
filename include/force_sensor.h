/*
 * Remote Feelings: Adam Curtis, Aymeric Wang, Xinying Hu
 * 11/30/21
 * Prototype version. Author: Aymeric Wang
 */

#ifndef FORCE_SENSOR_H
#define FORCE_SENSOR_H

#include <Arduino.h>


#define FORCE_SENSOR_PIN 36
#define RESISTANCE 43000.00
#define VOLTAGE_INPUT_ESP32 3.0
#define ESP32_ADC_RANGE 4095


/* * * * * * * * * * * * * * * * * *
* Recommended settings of void setup()
* 
* @setup 
* void setup() {
*   Serial.begin(115200);
* }
* 
* @loop
* void loop(){
*     uint16_t analogReading = analogRead(FORCE_SENSOR_PIN);
*     float resistance = bridgeDivider(RESISTANCE,analogReading);
*     Serial.print("ADC:\t");
*     Serial.print(analogReading);
*     Serial.print("\t\tResistance:\t");
*     Serial.println(resistance);
*     delay(500);
* }
* * * * * * * * * * * * * * * * * * * */


float bridgeDivider(float resistance, uint16_t ADC_measurement){
    float voltage_measurement = (float) ADC_measurement/ESP32_ADC_RANGE*VOLTAGE_INPUT_ESP32;
    return voltage_measurement*resistance/(VOLTAGE_INPUT_ESP32-voltage_measurement);
}


void sending() {
  Serial.print("Are you listening?");
  delay(200);
}

#endif