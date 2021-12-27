bool s[] = {true, true, true};
bool o[] = {false, false, false};

const int pin = 13;

const int time_interval = 150;
const int dot_interval = time_interval;
const int dash_interval = time_interval * 3;
const int symbol_pause = time_interval;
const int letter_pause = time_interval * 3;
const int word_pause = time_interval * 7;

void setup_()
{
    pinMode(pin, OUTPUT);
}

void loop_()
{
    //S
    blink_letter(s);
    //O
    blink_letter(o);
    //S
    blink_letter(s);

    delay(word_pause);
}

void blink_letter(bool sequence[])
{
    for (int i = 0; i <= sizeof(sequence); i++)
    {
        digitalWrite(pin, HIGH);
        //Wait for either a dot or dash time
        delay(sequence[i] ? dot_interval : dash_interval);

        digitalWrite(pin, LOW);
        delay(symbol_pause);
    }
    delay(letter_pause);
}
