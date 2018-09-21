#include <Bounce2.h>

#define BUTTON_PIN D3
#define LED_PIN D4 

int ledState = LOW; // PARTE 2

Bounce debouncer = Bounce(); 

void setup() {

  pinMode(BUTTON_PIN,INPUT_PULLUP);

  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); 

  pinMode(LED_PIN,OUTPUT);

  Serial.begin(115200);
}

void loop() {
 
  debouncer.update();

  int value = debouncer.read();

  if (value == LOW) {
     digitalWrite(LED_PIN,HIGH);
  }
  else {
     digitalWrite(LED_PIN,LOW);

      Serial.println(value);
}
}

//PARTE 2

void loop() {
  debouncer.update();

  int value = debouncer.read();

  Serial.println(value);

  if (debouncer.fell()){
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);
     
  }

}


