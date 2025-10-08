#define button 1
#define led_pin 2
int buttonstate = 0;

void setup()
{
  pinMode(button, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  buttonstate = digitalRead(button);
  if(buttonstate == HIGH){
  	digitalWrite(led_pin, HIGH);  
  }
  else{
  	digitalWrite(led_pin, LOW);
  }
  
}