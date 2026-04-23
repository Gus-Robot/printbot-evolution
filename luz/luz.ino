#define LDR_IZQUIERDA A2
#define LDR_DERECHA A3

void setup() {
  Serial.begin(9600);

}

void loop() {
  int luzIzquierda = analogRead(LDR_IZQUIERDA);
  int luzDerecha = analogRead(LDR_DERECHA);

  Serial.println("luz izquierda: ");
  Serial.println(luzIzquierda);
  Serial.println("luz derecha: ");
  Serial.println(luzDerecha);

  delay(500);
}
