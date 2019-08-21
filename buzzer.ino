#define PIN_BUZZER 7

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  tone(PIN_BUZZER, 420);
  delay(500);
  noTone(PIN_BUZZER);
  delay(500);
}

void loop() {
  tone(PIN_BUZZER, 660);
  delay(200);
  noTone(PIN_BUZZER);
  delay(200);
}
