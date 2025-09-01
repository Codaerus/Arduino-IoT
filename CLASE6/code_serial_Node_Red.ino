char msg[30];
unsigned long t = 0;
void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop() {
  //Recepción
  if(Serial.available()>0){//hay datos para leer? (buffer)

    char x = Serial.read();
    if (x == 'a'){digitalWrite(4,HIGH);}
    if (x == 'b'){digitalWrite(4,LOW);}
  }
  
  //Enviar
  if(millis()-t >= 5000){
      uint16_t pot1 = analogRead(32);
      uint16_t pot2 = analogRead(35);
      snprintf(msg,30,"%d,%d",pot1,pot2);
      Serial.println(msg);
      t = millis();
    }
}
