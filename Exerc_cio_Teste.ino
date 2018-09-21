// CURSO IOT NA PRÁTICA ESP8266 - Teste 1 
//Blink Led 

int LED = D4;

void setup() {

pinMode(D4,OUTPUT);
pinMode(D1,INPUT_PULLUP); // Inicializa o D1 como entrada PullUp
}

void loop() {

digitalWrite(LED,LOW);
delay(1000);   
digitalWrite(LED,HIGH);
delay(1000); 
}

// CURSO IOT NA PRÁTICA ESP8266 - Botão
//Estão no mesmo programa para demonstração do teste 1 

int led = D4;
int button = D3;

int buttonState = 0;

void setup() {

pinMode(led,OUTPUT);
pinMode(button,INPUT_PULLUP); // Inicializa o D1 como entrada PullUp
}

void loop() {

buttonState = digitalRead(button);

if (buttonState == HIGH) {
  digitalWrite(led,HIGH);
}
else {
  digitalWrite(led,LOW);
}
}
