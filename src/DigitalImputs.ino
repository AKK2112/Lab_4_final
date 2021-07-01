SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D6, OUTPUT);               // sets pin as output
  pinMode(D7, INPUT_PULLDOWN);    // sets pin as input
}

void loop()
{
  // blink the LED as long as the button is pressed
  if(digitalRead(D7) == HIGH) {
    digitalWrite(D6, LOW);          // sets the LED on
    } else {
    digitalWrite(D6, HIGH);           // sets the LED off
  }
}