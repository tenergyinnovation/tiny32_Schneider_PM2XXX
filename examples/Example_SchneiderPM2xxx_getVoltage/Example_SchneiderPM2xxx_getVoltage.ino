/***********************************************************************
 * Project      :     Example_SchneiderPM2xxx_getVoltage
 * Description  :     Get Voltage value from Schneider digital Power meter
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
float volt;     // Variable get voltage from Schneider digital power meter

void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example SchneiderPM2xxx get Voltage ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2, TXD2);
  mcu.buzzer_beep(2); // buzzer 2 beeps
}

void loop()
{
  // Voltage A-B
  volt = mcu.SchneiderPM2xxx_Voltage_AB(id);
  Serial.printf("Voltage A-B => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage B-C
  volt = mcu.SchneiderPM2xxx_Voltage_BC(id);
  Serial.printf("Voltage B-C => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage C-A
  volt = mcu.SchneiderPM2xxx_Voltage_CA(id);
  Serial.printf("Voltage C-A => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage L-L Avg
  volt = mcu.SchneiderPM2xxx_Voltage_LL_Avg(id);
  Serial.printf("Voltage L-L Avg => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage A-N
  volt = mcu.SchneiderPM2xxx_Voltage_AN(id);
  Serial.printf("Voltage A-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage B-N
  volt = mcu.SchneiderPM2xxx_Voltage_BN(id);
  Serial.printf("Voltage B-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage C-N
  volt = mcu.SchneiderPM2xxx_Voltage_CN(id);
  Serial.printf("Voltage C-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage L-N Avg
  volt = mcu.SchneiderPM2xxx_Voltage_LN_Avg(id);
  Serial.printf("Voltage L-N Avg => %.1f V\r\n", volt);
  vTaskDelay(1000);


  // Voltage Unbalance A-B
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_AB(id);
  Serial.printf("Voltage Unbalance A-B => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance B-C
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_BC(id);
  Serial.printf("Voltage Unbalance B-C => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance C-A
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_CA(id);
  Serial.printf("Voltage Unbalance C-A => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance L-L Avg
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_LL_Worst(id);
  Serial.printf("Voltage Unbalance L-L Worst => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance A-N
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_AN(id);
  Serial.printf("Voltage Unbalance A-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance B-N
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_BN(id);
  Serial.printf("Voltage Unbalance B-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance C-N
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_CN(id);
  Serial.printf("Voltage Unbalance C-N => %.1f V\r\n", volt);
  vTaskDelay(1000);

  // Voltage Unbalance L-N Avg
  volt = mcu.SchneiderPM2xxx_VoltageUnblance_LN_Worst(id);
  Serial.printf("Voltage Unbalance L-N Worst => %.1f V\r\n", volt);
  vTaskDelay(1000);

  Serial.println("-----------------------------------------\r\n\r\n");
  
}