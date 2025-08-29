int ledPin = 2;
int freq = 500;
int resol = 8;

void setup() {
  ledcAttach(ledPin,freq,resol);
}

void loop() {
  for(int duty = 0; duty <= 255; duty++){
    ledcWrite(ledPin,duty);
    delay(10);
  }
}
