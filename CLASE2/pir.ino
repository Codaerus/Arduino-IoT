void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(4,OUTPUT);
}


void loop() {
  int value = digitalRead(2);
  if(value == 1){
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}
