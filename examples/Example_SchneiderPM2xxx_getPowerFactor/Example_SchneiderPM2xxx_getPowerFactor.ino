/***********************************************************************
 * Project      :     Example_SchneiderPM2xxx_getPowerFactor
 * Description  :     Get PowerFactor value from Schneider digital Power meter
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
float powerfactor;     // Variable get powerfactor from Schneider digital power meter

void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example SchneiderPM2xxx get PowerFactor ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2, TXD2);
  mcu.buzzer_beep(2); // buzzer 2 beeps
}

void loop()
{
  // PowerFactor A
  powerfactor = mcu.SchneiderPM2xxx_PowerFactorA(id);
  Serial.printf("PowerFactor A => %.1f \r\n", powerfactor);
  vTaskDelay(1000);

  // PowerFactor B
  powerfactor = mcu.SchneiderPM2xxx_PowerFactorB(id);
  Serial.printf("PowerFactor B => %.1f \r\n", powerfactor);
  vTaskDelay(1000);

  // PowerFactor C
  powerfactor = mcu.SchneiderPM2xxx_PowerFactorC(id);
  Serial.printf("PowerFactor C => %.1f \r\n", powerfactor);
  vTaskDelay(1000);

  // PowerFactor Total
  powerfactor = mcu.SchneiderPM2xxx_PowerFactorTotal(id);
  Serial.printf("PowerFactor Total => %.1f \r\n", powerfactor);
  vTaskDelay(1000);


  Serial.println("-----------------------------------------\r\n\r\n");
  
}