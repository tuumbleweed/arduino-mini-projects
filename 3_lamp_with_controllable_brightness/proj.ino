#define LED_PIN 11
#define POT_PIN A0

void setup() {
    // light-emitting diode pin out, as in projects 1 and 2
    pinMode(LED_PIN, OUTPUT);

    // potentiometer pin input (because we want to use it's readings)
    pinMode(POT_PIN, INPUT);
}

void loop() {

    // declare 2 integer variables for rotation and brightness
    int rotation, brightness;

    // read rotation from potentiometer, it will
    // return a number from 0 to 1023 proportional to
    // handle turn angle
    rotation = analogRead(POT_PIN);

    // calculate brightness since we need a number between 0 and 255,
    // not 0 and 1023
    brightness = rotation / 4;

    // return resulting brightness to light-emitting diode
    analogWrite(LED_PIN, brightness);
}