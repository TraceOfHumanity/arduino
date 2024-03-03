// mega 2560

// pir sensor

int ledPin = 13;   // choose the pin for the LED
int inputPin = A0; // choose the input pin (for PIR sensor)

void setup()
{
  pinMode(ledPin, OUTPUT);  // declare LED as output
  pinMode(inputPin, INPUT); // declare sensor as input
  Serial.begin(9600);
}

void loop()
{
  int val = digitalRead(inputPin); // read input value
  if (val == HIGH)
  {                             // check if the input is HIGH
    digitalWrite(ledPin, HIGH); // turn LED ON
    Serial.println("Motion detected!");
  }
  else
  {
    digitalWrite(ledPin, LOW); // turn LED OFF
    Serial.println("Motion absent!");
  }
  delay(100);
}
