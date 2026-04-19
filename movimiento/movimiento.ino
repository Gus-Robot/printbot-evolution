#include <Servo.h>

Servo ruedaIzquierda;
Servo ruedaDerecha;

void setup() {
  ruedaIzquierda.attach(8);
  ruedaDerecha.attach(9);
}

void loop() {
// Adelante 2 segundos
ruedaIzquierda.write(180);
ruedaDerecha.write(0);
delay(2000);

// Parar 1 segundo
ruedaIzquierda.write(90);
ruedaDerecha.write(90);
delay(1000);
}
