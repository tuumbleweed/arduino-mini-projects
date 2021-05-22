#define BUZZER_PIN 12
#define PLAYER_COUNT 2
int buttonPins[PLAYER_COUNT] = {2, 13};
int ledPins[PLAYER_COUNT] = {9, 11};

void setup()
{
    pinMode(BUZZER_PIN, OUTPUT);
    for (int player = 0; player < PLAYER_COUNT; ++player)
    {
        pinMode(ledPins[player], OUTPUT);
        pinMode(buttonPins[player], INPUT_PULLUP);
    }
}

void loop()
{
    delay(random(2000, 7000));   // wait from 2 to 7 seconds
    tone(BUZZER_PIN, 3000, 250); // start signal, 3KHz, 250 ms
    // infinitely loop through players
    for (int player = 0;; player = (player + 1) % PLAYER_COUNT)
    {
        if (!digitalRead(buttonPins[player]))
        {
            digitalWrite(ledPins[player], HIGH); // turn on winner player led
            tone(BUZZER_PIN, 4000, 1000); // win signal, 4KHz, 1 second
            delay(1000);
            digitalWrite(ledPins[player], LOW); // turn off led
            break; // winner found, start again
        }
    }
}