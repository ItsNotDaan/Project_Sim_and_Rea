/*
  Name: Kluis
  Date: 14-01-2022
  Author: Daan Heetkamp, Bram Geerdink

  Description: Een kluis die dicht en open kan gaan.

  Revision: 1.4

*/

// ----- include libraries -----
#include <Wire.h> 
#include <Servo.h>
#include <EEPROM.h>

// ----- Declare Constants -----

// ----- Declare Objects -----

// ----- Declare subroutines and/or functions -----

// ----- Declare Global Variables -----
int sensorVolt = A1;

// Setup
void setup()
{
  Serial.begin(9600);
  pinMode(sensorVolt, INPUT);
}

// Main loop
void loop()
{
    int sensorValue = analogRead(sensorVolt);
    Serial.println(sensorValue);
    float Voltage = sensorValue * 0.0625; 
    //Cannot use equation right now because there is a float rounding problem.
    Serial.println(Voltage);
    Serial.print("\n\n");
    //480 = 30V
    //(30/480)*sensorValue
    delay(1000);
}

