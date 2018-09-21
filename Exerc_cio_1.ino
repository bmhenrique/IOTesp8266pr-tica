// CURSO IOT NA PRÁTICA ESP8266 - Exercício proposto

int led = D4;
int buttonOff = D1;
int buttonOn = D3;

int buttonStateOff = 0;
int buttonStateOn = 0;

void setup() {

pinMode(led,OUTPUT);
pinMode(buttonOff,INPUT_PULLUP); 
pinMode(buttonOn,INPUT_PULLUP); 

digitalWrite(led,LOW);
}

void loop() {

buttonStateOff = digitalRead(buttonOff);
buttonStateOn = digitalRead(buttonOn);

if (buttonStateOn == LOW) {
  digitalWrite(led,HIGH);
}
if (buttonStateOff == LOW){
  digitalWrite(led,LOW);
}
}
