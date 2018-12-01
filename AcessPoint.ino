/*
  Conexão AP - WebServer
  IOT na prática com o ESP8266
  https://github.com/esp8266/Arduino/tree/master/doc/esp8266wifi
  http://tomeko.net/online_tools/cpp_text_escape.php?lang=en
*/

#include <ESP8266WiFi.h>

const char *ssid = "Aula_Teste"; //Node do SSID a ser transmitido
const char *password = "12345678"; //Senha

WiFiServer servidor(80);

/* AP Endereço http://192.168.4.1 
*/


void setup() {
  
  Serial.begin(115200);
  Serial.println();
  Serial.println("Configurando o AP ...");
  
  /* Start do AP*/
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  IPAddress MeuIP = WiFi.softAPIP();
  
  Serial.print("Endereço AP : ");
  Serial.println(MeuIP);

  /*Start WebServer*/
  servidor.begin();

}

void loop() {

  WiFiClient client = servidor.available();
  
  if (client){
    
      Serial.println("Novo Cliente");
     
      String pagina = "";
    
      /* Página HTML */
 
      pagina += "<!doctype html>\n<html lang=\"pt-BR\">\n    <head>\n        <meta charset=\"utf-8\">\n        <title>Curso ESP8266 na Prática</title>\n    </head>\n\n    <body>\n        <h1>Parabéns</h1>\n\t\t<h2>Você está conectado no webserver do ESP8266 </h2>\n\t\t<h2>ESP8266 no modo AP<h2>\n    </body>\n</html>";

      // Envia a página para o browser
      client.print(pagina);
  }
  
}
