#define BUZZER 12

void setup() {
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  // Pitar 3 veces
  for (int i = 0;i < 3; i++) {
    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);
    delay(200);
  }
  
  // Pausa antes de repetir
  delay(2000);
}
