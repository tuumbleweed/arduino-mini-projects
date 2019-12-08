#define LED_PIN 11

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // give partial voltage on LED_PIN
    // or, in other words, pulse-width modulation (PWM signal)
    // microcontroller translates number from 0 to 255 to
    // voltage (0V to 5V). For example 85 is 1/3 of 255, so it will
    // result in 1.66V output on LED_PIN
    analogWrite(LED_PIN, 85);
    // hold it for 250 milliseconds
    delay(1000);

    // output 170 or 2/3 out of 255, in other words 3.33V
    analogWrite(LED_PIN, 170);
    delay(1000);

    // output 5V
    analogWrite(LED_PIN, 255);
    delay(1000);

    // try digitalWrite
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
}