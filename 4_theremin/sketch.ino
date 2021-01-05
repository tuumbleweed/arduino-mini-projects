// give names to pins
#define BUZZER_PIN 3
#define LDR_PIN A0

void setup()
{
    // set buzzer pin to output mode
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
    int val, frequency;

    // get illumination level from LDR_PIN
    val = analogRead(LDR_PIN);

    // set the frequency from 1500 to 2500 Hz based on LDR_PIN read
    frequency = map(val, 0, 1023, 1500, 2500);

    // vibrate piezoelectric speaker at given frequency for 20 milliseconds
    tone(BUZZER_PIN, frequency, 20);

    // wait so sound is not so obnoxious
    delay(900);
}