/*
  WiFiAccessPoint.ino creates a WiFi access point and provides a web server on it.

  Steps:
  1. Connect to the access point "yourAp"
  2. Point your web browser to http://192.168.4.1/H to turn the LED on or http://192.168.4.1/L to turn it off
     OR
     Run raw TCP "GET /H" and "GET /L" on PuTTY terminal with 192.168.4.1 as IP address and 80 as port

  Created for arduino-esp32 on 04 July, 2018
  by Elochukwu Ifediora (fedy0)
*/

#include <WiFi.h>
#include <WiFiClient.h>
#include <HTTPClient.h>

// Set these to your desired credentials.
const char *ssid = "ArtV";
const char *password = "artv_tom3";

WiFiServer server(80);

// constants won't change. They're used here to set pin numbers:
const int btnClient1 = 12;    // the number of the pushbutton pin
const int btnClient2 = 14;//14
const int btnClient3 = 27;
const int btnClient4 = 25;
const int btnClient5 = 33;
const int btnClient6 = 32;
const int btnClientAll = 34;

const int ledClient1 = 15;      
const int ledClient2 = 0;//trqbva da e 0
const int ledClient3 = 16;
const int ledClient4 = 5;
const int ledClient5 = 19;
const int ledClient6 = 21;
const int ledClientAll = 22;

//CLIENT 1
int ledStateClient1 = LOW;         // the current state of the output pin
int buttonStateClient1;             // the current reading from the input pin
int lastButtonStateClient1 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient1 = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

//CLIENT 2
int ledStateClient2 = LOW;         // the current state of the output pin
int buttonStateClient2;             // the current reading from the input pin
int lastButtonStateClient2 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient2 = 0;  // the last time the output pin was toggled

//CLIENT 3
int ledStateClient3 = LOW;         // the current state of the output pin
int buttonStateClient3;             // the current reading from the input pin
int lastButtonStateClient3 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient3 = 0;  // the last time the output pin was toggled


//CLIENT 4
int ledStateClient4 = LOW;         // the current state of the output pin
int buttonStateClient4;             // the current reading from the input pin
int lastButtonStateClient4 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient4 = 0;  // the last time the output pin was toggled


//CLIENT 5
int ledStateClient5 = LOW;         // the current state of the output pin
int buttonStateClient5;             // the current reading from the input pin
int lastButtonStateClient5 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient5 = 0;  // the last time the output pin was toggled


//CLIENT 6
int ledStateClient6 = LOW;         // the current state of the output pin
int buttonStateClient6;             // the current reading from the input pin
int lastButtonStateClient6 = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClient6 = 0;  // the last time the output pin was toggled


//CLIENT 7/ALL
int ledStateClientAll = LOW;         // the current state of the output pin
int buttonStateClientAll;             // the current reading from the input pin
int lastButtonStateClientAll = LOW;   // the previous reading from the input pin
unsigned long lastDebounceTimeClientAll = 0;  // the last time the output pin was toggled



void setup() {
  Serial.begin(115200);
  Serial.println();
  delay(400);
  Serial.println("Configuring access point...");
  IPAddress ip(192, 168, 4, 1);
  //IPAddress dns(192, 168, 4, 1);
  IPAddress gateway(192, 168, 4, 1);
  IPAddress subnet(255, 255, 255, 0);

  // You can remove the password parameter if you want the AP to be open.
  WiFi.softAP(ssid, password);
  WiFi.softAPConfig (ip, gateway, subnet);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  server.begin();
  Serial.println("Server started");

  pinMode(btnClient1, INPUT);
  pinMode(ledClient1, OUTPUT);
  
  pinMode(btnClient2, INPUT);
  pinMode(ledClient2, OUTPUT);
  
  pinMode(btnClient3, INPUT);
  pinMode(ledClient3, OUTPUT);
  
  pinMode(btnClient4, INPUT);
  pinMode(ledClient4, OUTPUT);
  
  pinMode(btnClient5, INPUT);
  pinMode(ledClient5, OUTPUT);

  pinMode(btnClient6, INPUT);
  pinMode(ledClient6, OUTPUT);

  pinMode(btnClientAll, INPUT);
  pinMode(ledClientAll, OUTPUT);

  // set initial LED state
  digitalWrite(ledClient1, buttonStateClient1);
  digitalWrite(ledClient2, buttonStateClient2);
  digitalWrite(ledClient3, buttonStateClient3);
  digitalWrite(ledClient4, buttonStateClient4);
  digitalWrite(ledClient5, buttonStateClient5);
  digitalWrite(ledClient6, buttonStateClient6);
  digitalWrite(ledClientAll, buttonStateClientAll);

}

void loop() {
  HTTPClient http;
  // read the state of the switch into a local variable:
  int reading1 = digitalRead(btnClient1);
  int reading2 = digitalRead(btnClient2);
  int reading3 = digitalRead(btnClient3);
  int reading4 = digitalRead(btnClient4);
  int reading5 = digitalRead(btnClient5);
  int reading6 = digitalRead(btnClient6);
  int readingAll = digitalRead(btnClientAll);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading1 != lastButtonStateClient1) {
    // reset the debouncing timer
    lastDebounceTimeClient1 = millis();
  }

  if ((millis() - lastDebounceTimeClient1) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading1 != buttonStateClient1) {
      buttonStateClient1 = reading1;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient1 == HIGH) {
        http.begin("http://192.168.4.11/4/on");
        http.GET();
        http.end();
        ledStateClient1 = HIGH;
        // set the LED:
        digitalWrite(ledClient1, ledStateClient1);
        delay(1000);
        http.begin("http://192.168.4.11/4/off");
        http.GET();
        http.end();
        ledStateClient1 = LOW;
        // set the LED:
        digitalWrite(ledClient1, ledStateClient1);
        
      }
    }
  }

  

  // save the reading. Next time through the loop, it'll be the lastButtonState:
  lastButtonStateClient1 = reading1;
  lastButtonStateClient2 = reading2;
  lastButtonStateClient3 = reading3;
  lastButtonStateClient4 = reading4;
  lastButtonStateClient5 = reading5;
  lastButtonStateClient6 = reading6;
  lastButtonStateClientAll = readingAll;
}
