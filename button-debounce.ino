// #define BUTTON_PIN 2

// byte buttonState = LOW;

// void setup() {
//     Serial.begin(9600);
//     pinMode(BUTTON_PIN, INPUT);
// }

// void loop() {
//     byte newState = digitalRead(BUTTON_PIN);

//     if (newState != buttonState) {
//         buttonState = newState;
//         if (buttonState == HIGH) {
//             Serial.println("Button pressed");
//         } else {
//             Serial.println("Button released");
//         }
//     }
// }

// ------------------------------------------------------------

#define LED_1_PIN 12
#define LED_2_PIN 11
#define LED_3_PIN 10

#define BUTTON_PIN 2

unsigned long lastTimeLED1Blinked = millis();
unsigned long blinkDelayLED1 = 1000;
byte LED1State = LOW;

unsigned long lastTimeButtonChanged = millis();
unsigned long debounceDelay = 50;
byte buttonState = LOW;

int toggleLEDState = 1;

void setup() {
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);

  pinMode(BUTTON_PIN, INPUT);
  buttonState = digitalRead(BUTTON_PIN);
}

void blinkLED1()
{
  if (LED1State == HIGH) {
    LED1State = LOW;
  }
  else {
    LED1State = HIGH;
  }
  digitalWrite(LED_1_PIN, LED1State);  
}

void toggleOtherLEDs()
{
  if (toggleLEDState == 1) {
    toggleLEDState = 2;
    digitalWrite(LED_2_PIN, LOW);
    digitalWrite(LED_3_PIN, HIGH);
  }
  else {
    toggleLEDState = 1;
    digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, LOW);
  }  
}

void loop() {
  unsigned long timeNow = millis();

  if (timeNow - lastTimeLED1Blinked > blinkDelayLED1) {
    lastTimeLED1Blinked += blinkDelayLED1;
    blinkLED1();
  }

  if (timeNow - lastTimeButtonChanged > debounceDelay) {
    byte newButtonState = digitalRead(BUTTON_PIN);
    if (newButtonState != buttonState) {
      lastTimeButtonChanged = timeNow;
      buttonState = newButtonState;
      if (buttonState == HIGH) {
        toggleOtherLEDs();
      }
    }
  }
}
