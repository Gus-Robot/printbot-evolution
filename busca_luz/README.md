# Busca Luz

El robot detecta de qué lado viene más luz y se dirige hacia ella usando los sensores LDR.

## Qué aprendes
- Lógica inversa al huye_luz
- Importancia de calibrar los pines correctamente
- Umbral de tolerancia para evitar movimiento errático
- Los LDR tienen limitaciones de precisión con luz ambiente

## Cómo funciona
- Más luz izquierda → gira izquierda para buscarla
- Más luz derecha → gira derecha para buscarla
- Misma luz → avanza hacia la luz

## Pines usados
- Pin A3 → sensor LDR izquierdo
- Pin A2 → sensor LDR derecho
- Pin 8 → servo rueda izquierda
- Pin 9 → servo rueda derecha
