# Printbot Evolution - Sketches Arduino

Robot educativo BQ Printbot Evolution usado como plataforma de aprendizaje de C++ y programación de sistemas embebidos.


## Hardware
- Placa: ZUM BT-328 (compatible Arduino Uno, ATmega328P)
- Bluetooth integrado
- 2 servos de rotación continua (ruedas)
- 1 microservo (cabeza) — pendiente SG90
- Sensor ultrasonido — pendiente HC-SR04
- 2 sensores IR — pendiente TCRT5000
- 2 sensores de luz LDR
- Zumbador

## Sketches
- **blink** → parpadeo del LED integrado
- **movimiento** → movimiento básico con servos de ruedas
- **giro** → giro pivote izquierda y derecha
- **zumbador**  → 3 pitidos con pause usando bucle for
- **luz** → lectura de sensores LDR por Monitor Serie
- **ultrasonido** → lectura de distancia por Monitor Serie
- **infrarrojo** → lectura de sensores IR por Monitor Serie
- **huye_luz** → el robot huye de la fuente de luz con sensores LDR
- **busca_luz** → el robot busca la fuente de luz con sensores LDR
- **microservo** → mueve el microservo de la cabeza
- **bluetooth** → control manual completo desde el móvil via Bluetooth
- **robot_final** → proyecto final con todos los modos


## Herramientas
- Arduino IDE 1.8.19
- avrdude para subir sketches (baudrate 19200)
- App: Arduino Bluetooth Controller

## Estado del proyecto
✅ Funcional con sensores LDR, zumbador y Bluetooth

## Media
📸 Fotos — 
🎥 Vídeo — 
