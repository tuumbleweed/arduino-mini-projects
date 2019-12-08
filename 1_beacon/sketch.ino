const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // send a "high" signal on ledPin's pin (5V)
  // this turns the led on
  digitalWrite(ledPin, HIGH);
  // delay microcontroller in this state for 100 milliseconds
  delay(100);
  // send a "low" signal on ledPin's pin (0V)
  // in other words ledPin is equall ground now
  // this will turn the led off
  digitalWrite(ledPin, LOW);
  // delay microcontroller in this state for 900 milliseconds
  delay(900);
}
