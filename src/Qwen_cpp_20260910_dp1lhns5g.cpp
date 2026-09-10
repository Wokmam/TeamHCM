void loop() {
  if (pulldowm == 1) {
    if (estadoposinverso == 1) posicion1inverso();
    // ...
  } else {
    if (estadopos == 1) posicion1velocidad200();
    // ...
  }
}

void posicion1inverso() {
  float distancia = obtenerDistanciaCm();
  if (distancia >= 22.56 && distancia <= 48.21) {
    setpoint = -180; // ¡Giro en sentido contrario!
  }
}