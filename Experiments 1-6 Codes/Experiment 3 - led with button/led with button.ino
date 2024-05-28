// C++ Code
//

int ledpin = 13;
int btnpin = 2;

volatile int state = LOW;

void setup() 
{
  pinMode(ledpin, OUTPUT);
  pinMode(btnpin, INPUT);
}

void loop() 
{
  if(digitalRead(btnpin)==LOW)
  {
    delay(10);
    if(digitalRead(btnpn)==LOW)
    {
      while(digtalRead(btnpin)==LOW)
      delay(10);
      while(digtalRead(btnpin)==LOW);
      state = !state;
      digitalWrite(ledpin, state);
    }
  }
}
