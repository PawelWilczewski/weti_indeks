// initialize constant variables
const static unsigned short LED_PIN = 0;

void setup()
{
  // initialize digital led pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait half a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait half a second
}
