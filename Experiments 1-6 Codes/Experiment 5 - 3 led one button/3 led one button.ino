int y ;
void setup() {
  Serial.begin(9600);
  pinMode(9 ,OUTPUT);
  pinMode(10 ,OUTPUT);
  pinMode(11 ,OUTPUT);
  pinMode(4 ,OUTPUT);
}

void loop() {
  int x = digitalRead(4);

  if(x == 0)
  {
    y++ ;
    delay(200);
  }
  Serial.printIn(y);

  if(y == 1)
  {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  else if(y == 2)
  {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
  }
  else if(y == 3)
  {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  else if(y == 4)
  {
    y = 0;
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
}
