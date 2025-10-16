void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Enciende el LED
  delay(1000);                     // Espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);  // Apaga el LED
  delay(1000);                     // Espera 1 segundo
}
