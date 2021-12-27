/*

    Make rgb LED blink.
        Red: short blink 5x
        Green: Medium blink 10x
        Blue: Long blink 15x

*/

int red = 7;
int green = 6;
int blue = 5;

void setup()
{
    Serial.begin(9600);
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
}

void loop()
{
    blink(red, 5, 125);
    blink(green, 10, 250);
    blink(blue, 15, 500);
}

void blink(int pin, int count, int delayTime)
{
    String test = "Blinking pin " + String(pin);
    Serial.println(test);
    for (size_t i = 0; i < count; i++)
    {
        digitalWrite(pin, LOW);
        delay(delayTime);
        digitalWrite(pin, HIGH);
        delay(75);
    }

}