#define GREEN_LED 13
#define YELLOW_LED 12
#define RED_LED 11


void blink(int led, unsigned int seconds);

  
void setup()
{
	pinMode(GREEN_LED, OUTPUT);
  	pinMode(YELLOW_LED, OUTPUT);
  	pinMode(RED_LED, OUTPUT);
}

void loop()
{
  	blink(GREEN_LED, 3);
	blink(YELLOW_LED, 1.5);
  	blink(RED_LED, 3);
}


void blink(int led, unsigned int seconds)
{
	digitalWrite(led, HIGH);
  	delay(seconds * 1000);
  	digitalWrite(led, LOW);
}