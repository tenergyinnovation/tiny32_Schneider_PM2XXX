/***********************************************************************
 * Project      :     Example_tiny32_SchneiderPM2xxx_SearchAddress
 * Description  :     Search Address from SchneiderPM2xxx digital Power Meter
 * Hardware     :     tiny32         
 * Author       :     Tenergy Innovation Co., Ltd.
 * Date         :     7/10/2022
 * Revision     :     1.0
 * website      :     http://www.tenergyinnovation.co.th
 * Email        :     admin@innovation.co.th
 * TEL          :     +66 82-308-3299
 ***********************************************************************/
#include <Arduino.h>
#include <tiny32_v3.h>

tiny32_v3 mcu; //define object


void setup()
{
  Serial.begin(115200);
  Serial.printf("\r\n**** Example_tiny32_Schneider PM2xxx SearchAddress [1-255] ****\r\n");
  mcu.library_version();
  mcu.SchneiderPM2xxx_begin(RXD2,TXD2);
  mcu.buzzer_beep(2); //buzzer 2 beeps
}

void loop()
{
   int8_t _id;
  
  _id = mcu.SchneiderPM2xxx_searchAddress();

  /* check result status */
  if(_id != -1)
  {
    Serial.printf("\r\nInfo: Address => %d\r\n",_id);
  }
  else
  {
    Serial.printf("\r\nError: Can't search address\r\n");
  }

  while(1);
}