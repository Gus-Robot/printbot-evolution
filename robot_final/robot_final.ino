#include <Servo.h>

#define LDR_IZQUIERDA A3
#define LDR_DERECHA A2
#define BUZZER 12
#define TRIG 4
#define ECHO 5
#define IR_IZQUIERDA 2
#define IR_DERECHA 3

Servo ruedaIzquierda;
Servo ruedaDerecha;
Servo cabeza;

char modo = '1';

void adelante() {
  ruedaIzquierda.write(180);
  ruedaDerecha.write(0);
}

void atras() {
  ruedaIzquierda.write(0);
  ruedaDerecha.write(180);
}

void derecha() {
  ruedaIzquierda.write(0);
  ruedaDerecha.write(0);
}

void izquierda() {
  ruedaIzquierda.write(180);
  ruedaDerecha.write(180);
}

void parar() {
  ruedaIzquierda.write(90);
  ruedaDerecha.write(90);  
}

void pitar() {
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
}

float leerDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duracion = pulseIn(ECHO, HIGH, 30000);
  return duracion * 0.034 / 2;
}

void modoManual(char comando) {
  if (comando == 'F') adelante();
  else if (comando == 'B') atras();
  else if (comando == 'L') izquierda();
  else if (comando == 'R') derecha();
  else if (comando == 'S') parar();
}

void modoBuscaLuz() {
  int luzIzquierda = analogRead(LDR_IZQUIERDA);
  int luzDerecha = analogRead(LDR_DERECHA);
  int diferencia = luzIzquierda - luzDerecha;

  if (diferencia > 25) {
    izquierda();
  } else if (diferencia < -25) {
    derecha();
  } else {
    adelante();
  }
}

void modoEsquiva() {
  float distancia = leerDistancia();
  if (distancia > 0 && distancia < 20) {
    atras();
    delay(500);
    cabeza.write(0);
    delay(500);
    float distanciaIzquierda = leerDistancia();
    cabeza.write(180);
    delay(500);
    float distanciaDerecha = leerDistancia();
    cabeza.write(90);
    delay(300);
    if (distanciaIzquierda > distanciaDerecha) {
      izquierda();
    } else {
      derecha();
    }
    delay(500);
  } else {
    adelante();
  }
}

void modoSigueLineas() {
  int irIzquierda = digitalRead(IR_IZQUIERDA);
  int irDerecha = digitalRead(IR_DERECHA);

  if (irIzquierda == 1 && irDerecha == 1) {
    adelante();
  } else if (irIzquierda == 0 && irDerecha == 1) {
    izquierda();
  } else if (irIzquierda == 1 && irDerecha == 0) {
    derecha();
  } else {
    parar();
  }
}

void setup() {
  ruedaIzquierda.attach(8);
  ruedaDerecha.attach(9);
  cabeza.attach(11);
  pinMode(BUZZER, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(IR_IZQUIERDA, INPUT);
  pinMode(IR_DERECHA, INPUT);
  Serial.begin(19200);
  cabeza.write(90);
  pitar();
}

void loop() {
  if (Serial.available()) {
    char comando = Serial.read();

    if (comando == '1') {
      modo = '1';
      parar();
      pitar();
    }
    else if (comando == '2') {
      modo = '2';
      pitar();
    }
    else if (comando == '3') {
      modo = '3';
      pitar();
    }
    else if (comando == '4') {
      modo = '4';
      pitar();
    }
    else if (modo == '1') {
      modoManual(comando);
    }
  }


  if (modo == '2') modoBuscaLuz();
  else if (modo == '3') modoEsquiva();
  else if (modo == '4') modoSigueLineas();
  
  delay(100);
}
