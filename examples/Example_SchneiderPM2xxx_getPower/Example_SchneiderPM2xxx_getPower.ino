/***********************************************************************
 * Project      :     Example_SchneiderPM2xxx_getPower
 * Description  :     Get Power value from Schneider digital Power meter
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
float power;     // Variable get power from Schneider digital power meter

void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example SchneiderPM2xxx get Power ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2, TXD2);
  mcu.buzzer_beep(2); // buzzer 2 beeps
}

void loop()
{
  // Active Power A
  power = mcu.SchneiderPM2xxx_ActivePowerA(id);
  Serial.printf("Active Power A => %.3f kW\r\n", power);
  vTaskDelay(1000);

  // Active Power B
  power = mcu.SchneiderPM2xxx_ActivePowerB(id);
  Serial.printf("Active Power B => %.3f kW\r\n", power);
  vTaskDelay(1000);

  // Active Power C
  power = mcu.SchneiderPM2xxx_ActivePowerC(id);
  Serial.printf("Active Power C => %.3f kW\r\n", power);
  vTaskDelay(1000);

  // Active Power Total
  power = mcu.SchneiderPM2xxx_ActivePowerTotal(id);
  Serial.printf("Active Power Total => %.3f kW\r\n", power);
  vTaskDelay(1000);

  // Reactive Power A
  power = mcu.SchneiderPM2xxx_ReactivePowerA(id);
  Serial.printf("Reactive Power A => %.3f kVAR\r\n", power);
  vTaskDelay(1000);

  // Reactive Power B
  power = mcu.SchneiderPM2xxx_ReactivePowerB(id);
  Serial.printf("Reactive Power B => %.3f kVAR\r\n", power);
  vTaskDelay(1000);

  // Reactive Power C
  power = mcu.SchneiderPM2xxx_ReactivePowerC(id);
  Serial.printf("Reactive Power C => %.3f kVAR\r\n", power);
  vTaskDelay(1000);

  // Reactive Power Total
  power = mcu.SchneiderPM2xxx_ReactivePowerTotal(id);
  Serial.printf("Reactive Power Total => %.3f kVAR\r\n", power);
  vTaskDelay(1000);

    // Apparent Power A
  power = mcu.SchneiderPM2xxx_ApparentPowerA(id);
  Serial.printf("Apparent Power A => %.3f kVA\r\n", power);
  vTaskDelay(1000);

  // Apparent Power B
  power = mcu.SchneiderPM2xxx_ApparentPowerB(id);
  Serial.printf("Apparent Power B => %.3f kVA\r\n", power);
  vTaskDelay(1000);

  // Apparent Power C
  power = mcu.SchneiderPM2xxx_ApparentPowerC(id);
  Serial.printf("Apparent Power C => %.3f kVA\r\n", power);
  vTaskDelay(1000);

  // Apparent Power Total
  power = mcu.SchneiderPM2xxx_ApparentPowerTotal(id);
  Serial.printf("Apparent Power Total => %.3f kVA\r\n", power);
  vTaskDelay(1000);


  Serial.println("-----------------------------------------\r\n\r\n");
  
}