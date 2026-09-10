void posicion1velocidad200() {
  float distancia = obtenerDistanciaCm();
  if (distancia >= 0 && distancia <= 22.56) {
    controlarServoIMU(); controlarMotor200();
    modoCentradoActivo = false; setpoint = 0; // Recta inicial
  } else if (distancia >= 22.56 && distancia <= 48.21) {
    controlarServoIMU(); controlarMotor200();
    modoCentradoActivo = false; setpoint = 180; // Curva
  } else if (distancia >= 48.21 && distancia <= 70.77) {
    controlarServoIMU(); controlarMotor200();
    modoCentradoActivo = true; setpoint = 180; // Curva centrando
  }
  // ... (Resto de intervalos hasta llegar a ~490 cm)
}