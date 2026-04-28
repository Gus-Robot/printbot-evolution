#include <Servo.h>

Servo ruedaIzquierda;
Servo ruedaDerecha;

void setup() {
  ruedaIzquierda.attach(8);
  ruedaDerecha.attach(9);
  Serial.begin(19200);
  }

void loop() {
  if (Serial.available()) {
    char comando = Serial.read();

    if (comando == 'U') {
      // Adelante
      ruedaIzquierda.write(180);
      ruedaDerecha.write(0);
    }
    else if (comando == 'D') {
      // Atras
      ruedaIzquierda.write(0);
      ruedaDerecha.write(180);
    }
    else if (comando == 'L') {
      // Izquierda
      ruedaIzquierda.write(0);
      ruedaDerecha.write(0);
    }
    else if (comando == 'R') {
      // Derecha
      ruedaIzquierda.write(180);
      ruedaDerecha.write(180);
    }
    else if (comando == 'S') {
      // Parar
      ruedaIzquierda.write(90);
      ruedaDerecha.write(90);    
    }
  }
}
