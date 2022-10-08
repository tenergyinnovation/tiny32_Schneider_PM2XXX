/***********************************************************************
 * Project      :     Example_SchneiderPM2xxx_getCurrent
 * Description  :     Get Current value from Schneider digital Power meter
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
float current;     // Variable get current from Schneider digital power meter

void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example SchneiderPM2xxx get Current ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2, TXD2);
  mcu.buzzer_beep(2); // buzzer 2 beeps
}

void loop()
{
  // Current A
  current = mcu.SchneiderPM2xxx_CurrentA(id);
  Serial.printf("Current A => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current B
  current = mcu.SchneiderPM2xxx_CurrentB(id);
  Serial.printf("Current B => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current C
  current = mcu.SchneiderPM2xxx_CurrentC(id);
  Serial.printf("Current C => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current N
  current = mcu.SchneiderPM2xxx_CurrentN(id);
  Serial.printf("Current N => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current G
  current = mcu.SchneiderPM2xxx_CurrentG(id);
  Serial.printf("Current G => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current Avg
  current = mcu.SchneiderPM2xxx_CurrentAvg(id);
  Serial.printf("Current Avg => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current Unbalance A
  current = mcu.SchneiderPM2xxx_CurrentUnblanceA(id);
  Serial.printf("Current Unbalance A => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current Unbalance B
  current = mcu.SchneiderPM2xxx_CurrentUnblanceB(id);
  Serial.printf("Current Unbalance B => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current Unbalance C
  current = mcu.SchneiderPM2xxx_CurrentUnblanceC(id);
  Serial.printf("Current Unbalance C => %.1f A\r\n", current);
  vTaskDelay(1000);

  // Current Unbalance Worst
  current = mcu.SchneiderPM2xxx_CurrentUnblanceWorst(id);
  Serial.printf("Current Unbalance Worst => %.1f A\r\n", current);
  vTaskDelay(1000);

  Serial.println("-----------------------------------------\r\n\r\n");
  
}