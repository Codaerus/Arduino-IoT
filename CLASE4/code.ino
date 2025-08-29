char msg[30];

void setup() {
  Serial.begin(9600);
}

void loop() {
  uint16_t pot1 = analogRead(32);
  uint16_t pot2 = analogRead(35);
  snprintf(msg,30,"POT1: %d  POT2: %d",pot1,pot2);
  Serial.println(msg);
  delay(2000);
}
