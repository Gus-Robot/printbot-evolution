#include <Servo.h>

#define LDR_IZQUIERDA A2
#define LDR_DERECHA A3

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

  Serial.print("Izquierda: ");
  Serial.print(luzIzquierda);
  Serial.print(" | Derecha: ");
  Serial.println(luzDerecha);

  if (luzIzquierda < luzDerecha) {
    // Más luz a la izquierda, girar derecha para huir
    ruedaIzquierda.write(180);
    ruedaDerecha.write(180);
  }else if (luzDerecha < luzIzquierda) {
   // más luz a la derecha, girar izquierda para huir
   ruedaIzquierda.write(0);
   ruedaDerecha.write(0);
  } else {
    // misma luz, ir hacia atrás
    ruedaIzquierda.write(0);
    ruedaDerecha.write(180);
  }

  delay(100);
}
