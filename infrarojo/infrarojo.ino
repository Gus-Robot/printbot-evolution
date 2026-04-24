#define IR_IZQUIERDA 2
#define IR_DERECHA 3

void setup() {
  Serial.begin(9600);
  pinMode(IR_IZQUIERDA, INPUT);
  pinMode(IR_DERECHA, INPUT);

}

void loop() {
  int irIzquierda = digitalRead(IR_IZQUIERDA);
  int irDerecha = digitalRead(IR_DERECHA);

  Serial.print("IR izquierda: ");
  Serial.println(irIzquierda);
  Serial.print("IR derecha: ");
  Serial.println(irDerecha);

  delay(500);
}
