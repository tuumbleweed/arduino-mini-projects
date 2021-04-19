#define MOTOR_PIN 9
#define FIRST_BUTTON_PIN 5
#define BUTTON_COUNT 3
#define SPEED_STEP (255 / (BUTTON_COUNT - 1))

void setup()
{
    pinMode(MOTOR_PIN, OUTPUT);
    for (int i = 0; i < BUTTON_COUNT; ++i)
    {
        pinMode(i + FIRST_BUTTON_PIN, INPUT_PULLUP);
    }
}

void loop()
{
    for (int i = 0; i < BUTTON_COUNT; ++i)
    {
        // do nothing if button is not pressed
        if (digitalRead(i + FIRST_BUTTON_PIN))
            continue;
        // if pressed - set the right motor speed
        int speed = i * SPEED_STEP;
        analogWrite(MOTOR_PIN, speed);
    }
}