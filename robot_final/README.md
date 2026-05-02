# Robot Final

Proyecto final del Printbot Evolution — combina todos los sketches anteriores en un único programa con control Bluetooth y modos autónomos.

## Modos
Cambiar modo enviando el número desde el Terminal de la app:
- `1` → Manual — control con Car Controller (F/B/L/R/S)
- `2` → Busca luz — el robot busca la fuente de luz con sensores LDR
- `3` → Esquiva obstáculos — evita obstáculos con ultrasonido y microservo (pendiente HC-SR04 y SG90)
- `4` → Sigue líneas — sigue una línea negra con sensores IR (pendiente TCRT5000)

## Qué aprendes
- Organizar código en funciones reutilizables
- Máquina de estados con variable modo
- Combinar sensores y actuadores en un mismo programa
- Separar lógica de cada modo en funciones independientes

## Hardware necesario
### Funcionando
- ZUM BT-328
- Servos ruedas (pines 8/9)
- Sensores LDR (pines A2/A3)
- Zumbador (pin 12)
- Bluetooth integrado

### Pendiente de reemplazar
- Sensor ultrasonido → HC-SR04 (pines 4/5)
- Sensores IR → TCRT5000 (pines 2/3)
- Microservo cabeza → SG90 (pin 11)

## App
Arduino Bluetooth Controller → Car Controller para modo manual, Terminal para cambiar modos
