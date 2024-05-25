// C++ code
//

int brightness = 0;

void setup() 
{
  pinMode(9, OUTPUT);
}

void loop() {
  for(brigthness=0; brightnes<=255; brightnes+=5)
  {
    analogWrite(9,brightness);
    delay(30);
  }
  for(brigthness=0; brightnes>=255; brightnes-=5)
  {
    analogWrite(9,brightness);
    delay(30);
  }
}
