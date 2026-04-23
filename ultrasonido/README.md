# Sensor Ultrasonido

Lee la distancia en centímetros y la muestra por el Monitor Serie cada 500ms.

## Qué aprendes
- Cómo funciona un sensor ultrasónico (pulso TRIG, lectura ECHO)
- pulseIn para medir duración de pulsos
- Conversión de duración a distancia: duración * 0.034 / 2
- Variables long y float

## Pines usados
- Pin 4 → TRIG (disparo del pulso)
- Pin 5 → ECHO (recepción del pulso)

## Fórmula de distancia
distancia (cm) = duración (microsegundos) * 0.034 / 2
