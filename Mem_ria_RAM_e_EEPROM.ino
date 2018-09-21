//IOT na prática com o ESP8266
// RAM

/*1,x = inserir valor x
  2   = ler memória
*/

byte memoria;
int comando;

void setup() {
  Serial.begin(115200);
}

void loop() {

  if (Serial.available()>0)
  {

    comando = Serial.parseInt();

    if (comando==1) memoria = Serial.parseInt();
    if (comando==2) Serial.println(memoria);
    
  }
}
//EEPROM

#include <EEPROM.h>

byte memoria;
int comando;

void setup() {
  Serial.begin(115200);
  EEPROM.begin(1);
}

void loop() {

  if (Serial.available()>0)
  {
    comando = Serial.parseInt();

    if (comando==1)
    {
      memoria = Serial.parseInt();
      EEPROM.write(0, memoria);
      EEPROM.commit();
    }
    if (comando==2){
      memoria = EEPROM.read(0);
      Serial.println(memoria);
    }
    
  }

}

