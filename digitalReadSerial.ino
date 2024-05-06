int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(2);
  Serial.println(buttonState);
  delay(10); 
}