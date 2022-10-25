/***********************************************************************
 * Project      :     Example_SchneiderPM2xxx_getFrequency
 * Description  :     Get Frequency value from Schneider digital Power meter
 * Hardware     :     tiny32
 * Author       :     Tenergy Innovation Co., Ltd.
 * Date         :     19/09/2022
 * Revision     :     1.0
 * website      :     http://www.tenergyinnovation.co.th
 * Email        :     admin@innovation.co.th
 * TEL          :     +66 82-308-3299
 ***********************************************************************/
#include <Arduino.h>
#include <tiny32_v3.h>

tiny32_v3 mcu; // define object

uint8_t id = 1; // Address of Schneider digital Power Meter here, You can change here if it differance
float freq;     // Variable get frequency from Schneider digital power meter

void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example_SchneiderPM2xxx Get Frequency ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2, TXD2);
  mcu.buzzer_beep(2); // buzzer 2 beeps
}

void loop()
{
  // PowerFactor A
  freq = mcu.SchneiderPM2xxx_Freq(id);
  Serial.printf("Frequency  => %.3f (Hz)\r\n", freq);
  vTaskDelay(1000);



 


  Serial.println("-----------------------------------------\r\n\r\n");
  
}