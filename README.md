# Introducción

### ***Objetivo General***

Resolver la problemática de desnutrición ya que, de acuerdo con las Naciones Unidas, el objetivo de hambre cero para 2030 está lejos ser alcanzado. También trata de reducir el consumo de agua debido a que la agricultura tradicional consume excesivas cantidades de este recurso. El Banco Mundial menciona que en la agricultura se ocupa el 70% del agua que se extrae en el mundo. Se trata de que este producto y servicio lleguen a ser accesibles a nivel nacional. 

### ***Objetivos Específicos***

De manera inicial implementaré la solución dentro de mi comunidad.

En una segunda etapa, vincular la solución a diferentes proyectos para llegar a una meta a nivel estatal construyendo pequeñas redes de apoyo para llegar a tener un impacto a nivel nacional.

### ***Planteamiento del Problema***

- El hambre mundial es un problema que afecta a muchos países, haciendo a este uno de los peores problemas en el planeta.
- La pobre nutrición causa cerca de la mitad (45 por ciento) de las muertes en los niños menores de 5 años – 3.1 mil niños cada año.
- Uno de cuatro niños en el mundo sufren de retraso en el crecimiento. En los países en desarrollo, la proporción puede elevarse a uno de cada tres.
- 66 millones de niños en edad escolar primaria asisten a clases con hambre en los países en desarrollo, 23 millones solo en África.
    
    [Naciones Unidas - Objetivos de Desarrollo Sostenible (2023)](https://www.notion.so/Automatizaci-n-Riego-Vertical-d0a808cf0c624d5a82edd7ca4016f628)
    

### ***Justificación***

Generalmente, el costo de productos saludables suele ser elevado y un sistema de riego vertical automático es fácil de instalar, manipular, mantener y de un bajo costo. El proyecto de sistema de riego vertical automático apoya a reducir el costo de los productos saludables, mejora la calidad de la alimentación y reduce el consumo de agua y pesticidas.

### ***Planteamiento de la Solución***

Crear un sistema de riego vertical que permita reducir en consumo de agua excesivo actualmente presente en la agricultura tradicional y que permita generar alimentos de primera calidad a un bajo costo.

### ***Características de la solución***

Huerto vertical con sistema de riego automático de dimensiones de 1.1 m de altura, y un radio de 25 cm con monitoreo en tiempo real de temperatura y humedad a través de NodeRED y Grafana.

### ***Obstáculos de Solución***

El obstáculo principal es el espacio que se debe destinar al proyecto, que, a pesar de ser pequeño, debe estar en un lugar libre de riesgos para el crecimiento de las lechugas y se debe contar con acceso al servicio de luz, agua e internet.

- *Políticos*: NORMA OFICIAL MEXICANA NOM-065-SSA1-1993 - Especificaciones Sanitarias de los Medios de Cultivo.
- *Culturales*: Fomento al cuidado y respeto al medio ambiente.
- *Técnicos*: Fórmula de nutrientes para cada tipo de hortaliza.
- *Tecnológicos*: Desarrollar un sistema más compacto.
- *Implementación*: Marketing para dar a conocer el producto, sus ventajas y costo.

### ***Grupo de Enfoque***

***¿A quién va dirigido?***

El proyecto está dirigido a personas mayores de edad que pueden ser estudiantes, personas asalariadas y no asalariadas.

***Beneficiarios***

*Directos*: Todas las personas de la localidad donde el proyecto se implemente debido a que la calidad de nutrición, del aire y desperdicio de agua mejorarían.

*Indirectos*: Ciudades urbanas y medio ambiente.

### ***Etapas de Desarrollo***

*Etapa 01 (Actual)*: Automatización del sistema de riego vertical con monitoreo de humedad y temperatura para lechugas.

*Etapa 02*: Análisis del consumo de energía, nivel de agua, pH y nutrientes restantes para hortalizas.

*Etapa 03*: Comparación de datos medidos de acuerdo a la ubicación geográfica con acceso a la información desde cualquier dispositivo.

### ***Alcance del Proyecto***

Enviar y recibir datos a través del broker Mosquitto en formato JSON interpretado por funciones en NodeRED a una base de datos de MySQL para poder acceder a la información a través de Grafana y visualizar las gráficas generadas en un Dashboard de NodeRED.

***Características Funcionales***

- Registro de temperatura y humedad del sensor de Humedad DHT11.
- Sistema de riego automático.

***Características No Funcionales***

- Análisis del consumo de energía, nivel de agua, pH y nutrientes restantes.
- Registro de temperatura y humedad basados en ubicación geográfica.
- Acceso a la información desde cualquier dispositivo móvil.

***¿Qué etapa se desarrolla?***

La Etapa 01, permite la automatización del sistema de riego y monitoreo de humedad y temperatura a partir de un panel de control en NodeRED con paneles de Grafana.

### ***Material a Utilizar***

***Hardware***

- Fuente de poder 12 Volts (1 Pza).
- Cable del número 14 (1 Metro).
- HW 095 L298N (1 Pza).
- ESP8266 (1 Pza).
- DHT11 (1 Pza).
- Resistencia (1 Pza).
- Protoboard (1 Pza).
- Cables Jumper Macho - Hembra (5 Pza).
- Cables Jumper Macho - Macho (3 Pza).
- Tubo PVC de 10” (1 Metro).
- Cople PVC de 10” (1 Pza).
- Tapa PVC de 10” (1 Pza).

***Equipo de Cómputo***

- Máquina Virtual - Ubuntu 22.04.1 LTS

***Software***

- NodeRED
- Mosquitto
- Grafana
- Arduino IDE
- Terminal

***Bibliotecas***

- DHT
- ESP8266WiFi
- PubSubClient

# Desarrollo de Proyecto

![https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Circuito.jpg](https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Circuito.jpg)

Circuito.

***ESP8266 - HW 095***

VIN - 5 V

GND - GND

D1 - IN1

D2 - IN2

D7 - ENA

***ESP8266 - DHT11***

3 V - VIN

GND - GND

D4 - Data

![https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Panel%20de%20Control.png](https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Panel%20de%20Control.png)

Panel de Control NodeRED.

![https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Grafana.png](https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Grafana.png)

Grafana.

![https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Base%20de%20Datos.png](https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Base%20de%20Datos.png)

Base de Datos.

```arduino
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
```

### ***Diplomado | Internet de las Cosas - CódigoIoT***

[https://github.com/RaulToribio/01-Instalar-VirtualBox](https://github.com/RaulToribio/01-Instalar-VirtualBox)

[https://github.com/RaulToribio/02-Descargar-Ubuntu](https://github.com/RaulToribio/02-Descargar-Ubuntu)

[https://github.com/RaulToribio/03-Crear-Maquina-Virtual](https://github.com/RaulToribio/03-Crear-Maquina-Virtual)

[https://github.com/RaulToribio/04-Configurar-Maquina-Virtual](https://github.com/RaulToribio/04-Configurar-Maquina-Virtual)

[https://github.com/RaulToribio/05-Instalar-Ubuntu](https://github.com/RaulToribio/05-Instalar-Ubuntu)

[https://github.com/RaulToribio/06-Instalar-Guest-Additions](https://github.com/RaulToribio/06-Instalar-Guest-Additions)

[https://github.com/RaulToribio/07-Comandos-Linux](https://github.com/RaulToribio/07-Comandos-Linux)

[https://github.com/RaulToribio/08-Instalar-Visual-Studio-Code](https://github.com/RaulToribio/08-Instalar-Visual-Studio-Code)

[https://github.com/RaulToribio/09-Extensiones-Visual-Studio-Code](https://github.com/RaulToribio/09-Extensiones-Visual-Studio-Code)

[https://github.com/RaulToribio/10-Instalar-Git](https://github.com/RaulToribio/10-Instalar-Git)

[https://github.com/RaulToribio/11-Comandos-Git](https://github.com/RaulToribio/11-Comandos-Git)

[https://github.com/RaulToribio/12-Instalar-GitHub-Desktop](https://github.com/RaulToribio/12-Instalar-GitHub-Desktop)

[https://github.com/RaulToribio/13-Instalar-NodeJS](https://github.com/RaulToribio/13-Instalar-NodeJS)

[https://github.com/RaulToribio/14-GitHub-Pull-Request](https://github.com/RaulToribio/14-GitHub-Pull-Request)

[https://github.com/RaulToribio/15-Instalar-Mosquitto](https://github.com/RaulToribio/15-Instalar-Mosquitto)

[https://github.com/RaulToribio/16-Instalar-Mosquitto-Clients](https://github.com/RaulToribio/16-Instalar-Mosquitto-Clients)

[https://github.com/RaulToribio/17-Suscribirse-y-Publicar-Mosquitto](https://github.com/RaulToribio/17-Suscribirse-y-Publicar-Mosquitto)

[https://github.com/RaulToribio/18-Flujo-01](https://github.com/RaulToribio/18-Flujo-01)

[https://github.com/RaulToribio/19-Flujo-02](https://github.com/RaulToribio/19-Flujo-02)

[https://github.com/RaulToribio/20-Flujo-03](https://github.com/RaulToribio/20-Flujo-03)

[https://github.com/RaulToribio/21-Flujo-04](https://github.com/RaulToribio/21-Flujo-04)

[https://github.com/RaulToribio/22-Flujo-05](https://github.com/RaulToribio/22-Flujo-05)

[https://github.com/RaulToribio/23-Instalar-y-Configurar-Arduino-IDE](https://github.com/RaulToribio/23-Instalar-y-Configurar-Arduino-IDE)

[https://github.com/RaulToribio/24-Camera-Web-Server-ESP32](https://github.com/RaulToribio/24-Camera-Web-Server-ESP32)

[https://github.com/RaulToribio/25-Codigo-No-Bloqueante](https://github.com/RaulToribio/25-Codigo-No-Bloqueante)

[https://github.com/RaulToribio/26-Instalar-Raspberry-OS-SSH-VNC](https://github.com/RaulToribio/26-Instalar-Raspberry-OS-SSH-VNC)

[https://github.com/RaulToribio/27-MLX90614](https://github.com/RaulToribio/27-MLX90614)

[https://github.com/RaulToribio/28-MAX30105](https://github.com/RaulToribio/28-MAX30105)

[https://github.com/RaulToribio/29-ESP32CAM-MQTT-Basic](https://github.com/RaulToribio/29-ESP32CAM-MQTT-Basic)

[https://github.com/RaulToribio/30-Flujo-06](https://github.com/RaulToribio/30-Flujo-06)

[https://github.com/RaulToribio/31-Flujo-07](https://github.com/RaulToribio/31-Flujo-07)

[https://github.com/RaulToribio/32-DHT11](https://github.com/RaulToribio/32-DHT11)

[https://github.com/RaulToribio/33-Instalar-MySQL-NodeRed](https://github.com/RaulToribio/33-Instalar-MySQL-NodeRed)

[https://github.com/RaulToribio/34-Instalar-Grafana](https://github.com/RaulToribio/34-Instalar-Grafana)

[https://github.com/RaulToribio/35-Instalar-Python-Anaconda](https://github.com/RaulToribio/35-Instalar-Python-Anaconda)

[https://github.com/RaulToribio/36-Python-MLX90614](https://github.com/RaulToribio/36-Python-MLX90614)

[https://github.com/RaulToribio/37-Python-Ultrasonico](https://github.com/RaulToribio/37-Python-Ultrasonico)

[https://github.com/RaulToribio/38-Python-RFID](https://github.com/RaulToribio/38-Python-RFID)

[https://github.com/RaulToribio/39-MySQL-Python](https://github.com/RaulToribio/39-MySQL-Python)

[https://github.com/RaulToribio/40-Raspberry-Pi-MySQL](https://github.com/RaulToribio/40-Raspberry-Pi-MySQL)

[https://github.com/RaulToribio/41-Instalar-NodeJS-Raspberry-Pi](https://github.com/RaulToribio/41-Instalar-NodeJS-Raspberry-Pi)

[https://github.com/RaulToribio/42-Flujo-01-Raspberry-Pi](https://github.com/RaulToribio/42-Flujo-01-Raspberry-Pi)

[https://github.com/RaulToribio/43-RFID-MySQL](https://github.com/RaulToribio/43-RFID-MySQL)

[https://github.com/RaulToribio/44-Instalar-OpenHAB](https://github.com/RaulToribio/44-Instalar-OpenHAB)

[https://github.com/RaulToribio/45-Configuraci-n-OpenHAB](https://github.com/RaulToribio/45-Configuraci-n-OpenHAB)

[https://github.com/RaulToribio/46-Ejercicio-LED-OpenHAB](https://github.com/RaulToribio/46-Ejercicio-LED-OpenHAB)

# Conclusión

### ***Beneficios Obtenidos***

Automatizar el sistema de riego vertical, reducir costos de obtención de hortalizas, consumo de agua y uso de pesticidas.

### ***Población Beneficiada***

Personas mayores de edad que pueden ser estudiantes, personas asalariadas y no asalariadas.

### ***Resultados Obtenidos***

![https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Panel%20de%20Control.png](https://raw.githubusercontent.com/RaulToribio/Automatizacion-Riego-Vertical/main/Im%C3%A1genes/Panel%20de%20Control.png)

Monitoreo de temperatura y humedad actuales con un registro histórico.

### ***Comentarios Finales***

El sistema de riego vertical automático permite reducir costo de producción y consumo de agua, pesticidas y otros productos que empeoran la calidad del ambiente. Así, permite mejorar la calidad de vida promedio de las personas, reduce las emisiones de dióxido de carbono ya que no hay necesidad de transportar los productos del campo a la ciudad y este compuesto es consumido por las hortalizas, ayuda a regenerar la capa de ozono ya que no se utilizan pesticidas y ayuda al ahorro de agua debido al bajo consumo de este recurso.
