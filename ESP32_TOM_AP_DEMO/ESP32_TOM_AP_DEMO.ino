/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com
*********/

// Load Wi-Fi library
#include <WiFi.h>
#include <WebServer.h>

// Replace with your network credentials
const char* ssid     = "ArtV";
const char* password = "artv_tom3";

// Set web server port number to 80
 WiFiServer server(80);
 WebServer webServer(8080);

// Variable to store the HTTP request
String header;

// Led pins for connected device
const int recieverLed1 = 2;
const int recieverLed2 = 4;
const int recieverLed3 = 17;
const int recieverLed4 = 18;

String macTest1 = "ac:c1:ee:75:6e:e5";
String macConnected = "";

// Assign output variables to GPIO pins
const int pinForUser1 = 34;
const int pinForUser2 = 35;
const int pinForUser3 = 32;
const int pinForUser4 = 33;
const int pinForUser5 = 25;
const int pinForUser6 = 26;

void handleSentVar() {
  if (webServer.hasArg("sensor_reading")) { // this is the variable sent from the client
    int readingInt = webServer.arg("sensor_reading").toInt();
    char readingToPrint[5];
    itoa(readingInt, readingToPrint, 10); //integer to string conversion for OLED library
    webServer.send(200, "text/html", "Data received");
  }
}

void setup() {
  Serial.begin(115200);
 // the IP address for the shield:
  IPAddress ip(192, 168, 4, 1);  
  //IPAddress dns(192, 168, 4, 1);
  IPAddress gateway(192, 168, 4, 1);
  IPAddress subnet(255, 255, 255, 0);
  


  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid, password);
  WiFi.softAPConfig (ip, gateway, subnet);
  
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  server.begin();
  
  webServer.on("/data/", HTTP_GET, handleSentVar);
  webServer.begin();
  Serial.println("HTTP server started");
}

void loop() {
  WiFiClient client = server.available();   // Listen for incoming clients

  if (client) {                             // If a new client connects,
    Serial.println("New Client.");          // print a message out in the serial port
    String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      if (client.available()) {             // if there's bytes to read from the client,
        char c = client.read();             // read a byte, then
        Serial.write(c);                    // print it out the serial monitor
        header += c;
        if (c == '\n') {                    // if the byte is a newline character
          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0) {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();

            //WiFi.macAddress(client);
            //macConnected = "";
            //client[5] + client[4] + client[3] + client[2] + client[1] + client[0];

            //if (macConnected == macTest){
            //  digitalWrite(recieverLed1, HIGH);
            //}
          }
        }
      }
    }
    // Clear the header variable
    header = "";
    // Close the connection
    client.stop();
    Serial.println("Client disconnected.");
    Serial.println("");
  }
}
