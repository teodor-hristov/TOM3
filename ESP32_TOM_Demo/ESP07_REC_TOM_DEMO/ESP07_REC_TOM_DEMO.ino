/*#include "ESP8266WiFi.h"

const char* ssid = "ArtV"; //Enter SSID
const char* password = "artv_tom3"; //Enter Password

// Variable to store the HTTP request
String header;

//setting wifi server
WiFiServer wifiServer(80);

// Auxiliar variables to store the current output state
String output4State = "off";

// Assign output variables to GPIO pins
const int output4 = 4;

void setup(void)
{
  //pinMode for led
   Serial.begin(115200);
   
  // Initialize the output variables as outputs
  pinMode(output4, OUTPUT);
  
  // Set outputs to LOW
  digitalWrite(output4, LOW);
  
  //setting up configuration
  IPAddress ip(192,168,4,10);
  IPAddress gateway(192,168,4,1);
  IPAddress subnet(255,255,255,0);
  
  WiFi.softAPConfig(ip,gateway,subnet);
  
  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(500);
     Serial.print("*");
  }

  Serial.println("");
  Serial.println("WiFi connection Successful");
  Serial.print("IP: ");
  Serial.print(WiFi.localIP());// Print the IP address
  wifiServer.begin();
}

void loop(){      
  
WiFiClient client = wifiServer.available();
 
  if (client) {
 
    while (client.connected()) {
 
      while (client.available()) {
        char c = client.read();
        Serial.write(c);
      }
 
      delay(10);
    }
 
    client.stop();
    Serial.println("Client disconnected");
 
  }
}
*/
#include <ESP8266WiFi.h>

const char *ssid = "ArtV";
const char *password = "artv_tom3";

int btnValue = 0;        // value read from the btn
int outputValue = 0;        // value sent to server

void setup() {
  Serial.begin(115200);
  delay(10);

  // Explicitly set the ESP8266 to be a WiFi-client
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

}

void loop() {
  // read the analog in value:
  btnValue = analogRead(A0);
  // map to range. The pot goes from about 3 to 1023. This makes the sent value be between 0 and 999 to fit on the OLED
  outputValue = map(btnValue, 3, 1023, 0, 999);
  char intToPrint[5];
  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const char * host = "192.168.4.1";
  const int httpPort = 80;

  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }

  // We now create a URI for the request. Something like /data/?sensor_reading=123
  String url = "/data/";
  url += "?sensor_reading=";
  url += intToPrint;

  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }

  delay(500);
}
