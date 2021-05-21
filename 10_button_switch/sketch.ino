#define BUTTON_PIN 3
#define LED_PIN 13

boolean buttonWasUp = true; // is button up?
boolean ledEnabled = false;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
    // to detect "click" moment we should first determine if button is pressed
    // (false) or not (true) right now.
    boolean buttonIsUp = digitalRead(BUTTON_PIN);
    // if button was up and is pressed right now
    if (buttonWasUp && !buttonIsUp) {
        // it might be a click or it might be a false positive
        // let's wait for 10 ms to make sure it's not latter
        delay(10);
        // read button pin again
        buttonIsUp = digitalRead(BUTTON_PIN);
        // if button is still pressed
        if (!buttonIsUp) {
            ledEnabled = !ledEnabled;
            digitalWrite(LED_PIN, ledEnabled);
        }
    }
    // rename last button state for the new iteration
    buttonWasUp = buttonIsUp;
}