#define FIRST_LED_PIN 2
#define LAST_LED_PIN 11

void setup()
{
    for (int pin = FIRST_LED_PIN; pin <= LAST_LED_PIN; ++pin) {
        pinMode(pin, OUTPUT);
    }
}

void loop()
{
    // get time from turning microcontroller on in milliseconds
    unsigned long int ms = millis();

    // calculate which pin should be on at the moment
    int pin = FIRST_LED_PIN + (ms / 120) % 10;

    // turn this diode on and then off
    digitalWrite(pin, HIGH);
    delay(10);
    digitalWrite(pin, LOW);
}