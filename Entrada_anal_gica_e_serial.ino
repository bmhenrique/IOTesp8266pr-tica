//IOT na prática com o ESP8266
//Entrada analógica e display serial


int sensorPin = A0; // Definições dos pinos de Entrada e Saída
int analogValue = 0; // Definição das variáveis   

void setup() {
  Serial.begin(115200);
}

void loop() {
 
  analogValue = analogRead(sensorPin);
 // Serial.print("Entrada Analógica=");    
 //Serial.println(analogValue/1023.0*1.0);    

Serial.println(analogValue/1023.0*100.0);

  delay(500);
}
