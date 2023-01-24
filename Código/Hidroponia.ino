//Bibliotecas
#include <DHT.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

//Definición DHT11
#define DHTPIN 2
#define DHTTYPE DHT11

//Objetos
DHT dht(DHTPIN, DHTTYPE);
WiFiClient espClient;
PubSubClient client(espClient);

//Conexión a Internet
char ssid[] = "********"; //Nombre (SSID)
char password[] = "********"; //Contraseña

//Mosquitto
IPAddress server(192, 168, 100, 10); //Host
const char* topic = "PILARES/Hidroponia"; //Tema

//Inicia Void Setup
void setup() {

  //Configurar PIN D1, D2 y D2 a Salidas Digitales
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D7, OUTPUT);

  //Monitor Serial a 115200 Baudios
  Serial.begin(115200);
  
  //Iniciar el Sensor DHT11
  dht.begin();
  
  //Iniciar Conexión a Internet
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a WiFi...");
  }
  Serial.println("Conectado a WiFi");

  //Servidor Mosquitto
  client.setServer(server, 1883);
  client.connect("Lechuga");
  
}
//Termina Void Setup

//Inicia Void Loop
void loop() {

  //DHT11
  float Humedad = dht.readHumidity(); //Leer Valor de Humedad
  float Temperatura = dht.readTemperature(); //Leer Valor de Temperatura
  float pH = random(55, 60) / 10.0; //Valor Aleatorio de pH (Etapa 02).

  //Mosquitto (JSON)
  String payload = "{\"Nombre\":\"Lechuga\",\"Humedad\":" + String(Humedad) + ",\"Temperatura\":" + String(Temperatura) + ",\"pH\":" + String(pH) + "}";
  client.publish(topic, payload.c_str());

  //Bomba de Agua Encendida
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D7, HIGH);
  delay(5000); //5 Segundos

  //Bomba de Agua Apagada
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D7, LOW);
  delay(5000); //5 Segundos
  
}
//Termina Void Loop
