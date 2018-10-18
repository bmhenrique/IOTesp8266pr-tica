//IOT na prática com o ESP8266
//Exercicio 2


//#define Noite 500
//#define Dia 700

int led = D4;
int sensorPin = A0; // Definições dos pinos de Entrada e Saída
int analogValue = 0; // Definição das variáveis   

void setup() {
 
  pinMode(led,OUTPUT);
  Serial.begin(115200);

}

void loop() {
 
analogValue = analogRead(sensorPin);

// Dia = 45.00
// Noite = 10.00
if (analogValue >= 500) {
  digitalWrite(led,HIGH);
}
if (analogValue <= 700){
  digitalWrite(led,LOW);
  delay(500);
}

Serial.print("Valor LDR=");   //Print Valor LDR na Serial
Serial.println(analogValue);  //Print Valor Entrada Analógica na Serial   
delay(100);
}


