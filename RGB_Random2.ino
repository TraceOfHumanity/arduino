// mega 2560
// rgb pins

int redPin = 13;
int greenPin = 12;
int bluePin = 11;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  // Generate random values for each color
  int redValue = random(0, 256);
  int greenValue = random(0, 256);
  int blueValue = random(0, 256);

  // Gradually change the LED to the random color
  int i = 0;
  while (i <= 255)
  {
    analogWrite(redPin, map(i, 0, 255, 0, redValue));
    analogWrite(greenPin, map(i, 0, 255, 0, greenValue));
    analogWrite(bluePin, map(i, 0, 255, 0, blueValue));
    delay(20); // increase delay time for smoother color transitions
    i++;
  }

  // Wait for one second
  delay(1000);
}
