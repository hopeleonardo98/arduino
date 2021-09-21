#define BUTTON1 13
#define BUTTON2 12
#define BUTTON3 11
#define BUTTON4 10
#define BUZZER 9


void playANote(int button, int buzzer, unsigned int frequency); 

  
unsigned int frequency[4] = {262, 294, 330, 349};


void setup()
{
	pinMode(BUTTON1, INPUT);
  	pinMode(BUTTON2, INPUT);
  	pinMode(BUTTON3, INPUT);
 	pinMode(BUTTON4, INPUT);
    pinMode(BUZZER, OUTPUT);
}

void loop()
{
    playANote(BUTTON1, BUZZER, frequency[0]);
    playANote(BUTTON2, BUZZER, frequency[1]);
    playANote(BUTTON3, BUZZER, frequency[2]);
    playANote(BUTTON4, BUZZER, frequency[4]);
}


void playANote(int button, int buzzer, unsigned int frequency) 
{
  	if (digitalRead(button))
    {
    	tone(buzzer, frequency);
 		delay(300);
      	noTone(buzzer);
    }
}