/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/Labs/Lab_4_final/src/DigitalImputs.ino"
void setup();
void loop();
#line 1 "d:/Labs/Lab_4_final/src/DigitalImputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D6, OUTPUT);
  pinMode(D7, INPUT_PULLDOWN);
}

void loop()
{
  // turns the LED on once the button is pushed. 
  if(digitalRead(D7) == HIGH) {
    digitalWrite(D6, HIGH);          // if the button is pushed, the light is set to on
    } else 
    {
    digitalWrite(D6, LOW);           // if the button is not pushed, the circut isnt completed so the light is kept on. 
  }
}