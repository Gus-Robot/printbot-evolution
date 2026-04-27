#include <Servo.h>

Servo cabeza;

void setup() {
  cabeza.attach(11);
}

void loop() {
  cabeza.write(0);
  delay(1000);
  cabeza.write(90);
  delay(1000);
  cabeza.write(180);
  delay(1000);
  cabeza.write(90);
  delay(1000);
}
