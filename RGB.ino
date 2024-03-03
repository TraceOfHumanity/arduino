// mega 2560
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
    analogWrite(13, 255); // червоний
    analogWrite(12, 0);   // зелений
    analogWrite(11, 0);   // синій
    delay(1000);          // чекаємо 1 секунду

    analogWrite(13, 0);   // червоний
    analogWrite(12, 255); // зелений
    analogWrite(11, 0);   // синій
    delay(1000);          // чекаємо 1 секунду

    analogWrite(13, 0);   // червоний
    analogWrite(12, 0);   // зелений
    analogWrite(11, 255); // синій
    delay(1000);          // чекаємо 1 секунду
}
