// C++ Code
//

int animationSpeed = 0;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() 
{
  animationSpeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationSpeed);  
  animationSpeed = 400;
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationSpeed);
  animationSpeed = 400;
  digitalWrite(12, HIGH);
  delay(animationSpeed);
  animationSpeed = 400;
  digitalWrite(12, LOW);
  delay(animationSpeed);
  animationSpeed = 400;
  digitalWrite(11, HIGH);
  delay(animationSpeed);
  animationSpeed = 400;
  digitalWrite(11, LOW);
  delay(animationSpeed);
}
