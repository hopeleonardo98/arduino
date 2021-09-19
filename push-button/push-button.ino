#define LED 13
#define BUTTON 12


void turnOn(int button, int led);


void setup()
{
	pinMode(LED, OUTPUT);
  	pinMode(BUTTON, INPUT);
}

void loop()
{
	turnOn(BUTTON, LED);  
}


void turnOn(int button, int led)
{
  	if (digitalRead(button))
  		digitalWrite(led, HIGH);	
    else
      	digitalWrite(led, LOW);
}