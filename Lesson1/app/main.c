/*
* IoT Hub Raspberry Pi C Blink - Microsoft Sample Code - Copyright (c) 2016 - Licensed MIT
*/

#include <stdio.h>
#include <stdbool.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>

#define RED_LED_PIN 7

int main(int argc, char *argv[])
{
    int blinkNumber = 0;
    
    wiringPiSetup();

    while (20 > blinkNumber++)
    {
        printf("[Device] #%d Blink LED \n", blinkNumber);
        digitalWrite(RED_LED_PIN, HIGH);
        delay(100);
        digitalWrite(RED_LED_PIN, LOW);
        delay(2000);
    }
}
