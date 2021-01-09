#define LED_PIN 2
#define LDR_PIN A0
#define POT_PIN A1

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    // read the illumination level from LDR_PIN
    int lightness = analogRead(LDR_PIN);

    // read potentiometer's value with which we regulate threshold
    // between nominal light and darkness
    int threshold = analogRead(POT_PIN);

    // check if it's too dark in the room
    boolean tooDark = (lightness < threshold);

    if (tooDark)
    {
        // turn on the light
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        // turn off the light
        digitalWrite(LED_PIN, LOW);
    }
}