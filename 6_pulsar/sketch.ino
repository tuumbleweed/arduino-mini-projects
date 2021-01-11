#define CONTROL_PIN 9

int brightness = 0;

void setup()
{
    pinMode(CONTROL_PIN, OUTPUT);
}

void loop()
{
    // increase brightness by 1 but not more than 255
    brightness = (brightness + 1) % 256;

    // send signal with set brightness to the transistor's base
    analogWrite(CONTROL_PIN, brightness);

    // wait for 10 milliseconds
    delay(10000);
}