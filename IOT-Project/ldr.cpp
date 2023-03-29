#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
void brightness_control(void)
{
  unsigned int inputVal;
  inputVal = analogRead(LDR_SENSOR);
  inputVal = inputVal/4;
  inputVal = 255 - inputVal;
  
  analogWrite (GARDEN_LIGHT, inputVal);
  delay(100);
}
