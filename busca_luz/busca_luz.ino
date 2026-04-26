#include <Servo.h>

#define LDR_IZQUIERDA A3
#define LDR_DERECHA A2

Servo ruedaIzquierda;
Servo ruedaDerecha;

void setup() {
    ruedaIzquierda.attach(8);
    ruedaDerecha.attach(9);
    Serial.begin(9600);
}

void loop() {
  int luzIzquierda = analogRead(LDR_IZQUIERDA);
  int luzDerecha = analogRead(LDR_DERECHA);

  int diferencia = luzIzquierda - luzDerecha;

  Serial.print("Izq: ");
  Serial.print(luzIzquierda);
  Serial.print(" | Der: ");
  Serial.print(luzDerecha);
  Serial.print(" | Diferencia: ");
  Serial.println(diferencia);
  

  if (diferencia > 10) {
    // mas luz a la izquierda, girar izquierda para buscarla
    ruedaIzquierda.write(0);
    ruedaDerecha.write(0);
  } else if (diferencia < -10) {
    // mas luz a la derecha, girar derecha para buscarla
    ruedaIzquierda.write(180);
    ruedaDerecha.write(180);
  } else {
    // misma luz, avanzar
    ruedaIzquierda.write(180);
    ruedaDerecha.write(0);
  }

  delay(100);
}
