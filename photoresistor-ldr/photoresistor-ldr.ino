#define LDR A5
#define LED 13


void setup()
{
    Serial.begin(9600);

    pinMode(LDR, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{   
    digitalWrite(LED, (analogRead(LDR) < 400));
    delay(1000);
}