/*

                                                                                                                             -:::.   .++++++++.     `..`                                    
                                                                                                                          -o+:.`.:ohyh-      `/y++++/::/oo.                                 
                                                                                                                    `   `o+`    -oo- ./++///+++/-oo-     `+o`  `                            
                                                                                                               `/+++//+hyo////++:`       ```      `:++////+ohy//++++`                       
                                                                                                              :s.    -s/   ```                        ```   `+o`   .s:                      
                                                                                                             -y..-:/+/`                                       -o+.  `y-                     
                                                                                                       `:/++sd+/:-.``                                           .:++/+d/::-`                
                                                                                                      /o-```y-                                                      ``-h..-/+/`             
                                                                                                     /o   `s:                    `+++`   :+++++:` +++++++-             :s`   -y`            
                                                                                                     d``-/o-                    `sysh-   yh+::sho ::shs::`              .o/-` :s            
                                                                                                   ./d++:.                     .sy-/h+  -hh-.-sy/  `yh:                   .:++/m.           
                                                                                               `-/+:so`                       .shs+ohy  ohyoyy+-   :hy`                      `.h+++-`       
                                                                                              -s:`  h.                       .sy+::/yh-`yh: /ys`   oho                         o/ `:s-      
                                                                                              h.   +o                        -:-    ::.`::`  -:.   ::.                         .h   .h      
                                                                                             `h `:o/     `---`  .----------`                            `-----------------`     +o`  h`     
                                                                                             `m/+:`       -++/` `:+++////++:`                          `:++//////////++++-       -o/.d      
                                                                                           `:od:           -++/` `:++/.``:++:`                         :++:`````````./++-          -om-`    
                                                                                          -s: ++            -++/` `:++/` `:++:`                       :++:` `---.  `/++:            +o:o/`  
                                                                                         .h`  :o             -++/`  :++/` `:++:`                    `:++:` `:++/` `/++:             o:  :s` 
                                                                                         -s   o/              -++/`  :++/` `:++:                    :++:` `:++/` `/++:              /o   :s 
                                                                                         `d` /s                -++/`  :++/` `:++:`                 :++/` `:++/` `/++:                s/  :s 
                                                                                          :ys/                  -++/`  :++/` `/++:                :++/`  :++/` `/++:                  /s.h. 
                                                                                          /ho                    -++/`  :++/` `/++:`             :++/`  :++/` `/++:                    .my  
                                                                                        `s/ y-                    -++/`  :++/` `/++:            :++/`  :++/` `/++:                     ++/s`
                                                                                        y:  .y                     -++/`  :++/` `/++:          :++/`  :++/` `/++:                     :y  :y
                                                                                        m   .h                      -++/`  :++/`  /++:        :++/`  :++/` `/++-                      h.   m
                                                                                        y:  y:                       -++/`  :++/` `:++:      :++/`  :++/` `/++-                       y.  :y
                                                                                        `s/++                         -++/`  :++/` `:++:`   :++/`  :++/` `/++-                        -y /s`
                                                                                          sm.                          -++/`  :++/` `:++:``:++/`  :++:` `/++-                          oh/  
                                                                                         .h.s/                          -++/`  :++/` `:++::++:` `:++:` `/++-                          /sy:  
                                                                                         s:  /s                          -++/`  :++:` `:++++:` `:++:` `/++-                          s/ `d` 
                                                                                         s:   o/                          -++/` `:++:` `:++:` `:++:` `/++-                          /o   s: 
                                                                                         `s:  :o                           -++/` `:++:` `::` `:++:` `/++-                           o:  `h. 
                                                                                          `/o:o+                            -++/` `:++:` `` `:++:` `/++-                            ++ :s-  
                                                                                            `-mo-                            -++/` `:++:`  `:++:` `/++-                             :do:`   
                                                                                              d./o-                           -++/` `:++:``:++:` `/++-                           `:+/m`     
                                                                                             `h  `o+                           -++/` `:++::++:` `/++-                           /o:` h`     
                                                                                              h.   h.                           -++/` `:++++:` `/++-                           ++`  .h      
                                                                                              -s:` /o                            -++/` `:++:` `/++-                           .h  `:s-      
                                                                                               `:/++h.`                           -++/` `::` `/++-                           `os:+/:`       
                                                                                                   .m/++:.                         -++/` `` `/++-                         .:++d/.           
                                                                                                    s: `-/o-                        -++/.``./++-                        -o/-``d             
                                                                                                    `y-   .s:                        -+++//+++:                        :s.   o/             
                                                                                                     `+o/-..h-``                      .------.                        -y```-o+              
                                                                                                        .-://d++++:.                                           ``.-:/+ds++/:`               
                                                                                                             :y` `-+o-                                       `/+/:-..y:                     
                                                                                                              :s.`  `o+`  ````                        ```` `/s-   `.s:                      
                                                                                                               `++++/+yho++//+++:`     ````       `:+++//+oyh++/++++`                       
                                                                                                                   ``` `o+`     :oo-/+++//+++/.`-oo:    `+s`  ```                           
                                                                                                                         .oo/::/++++y/`      -hyho:.`.:oo-                                  
                                                                                                                            `..`     .++++++++.   .:/:-                                    


 
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
const int btnClient1 = 12;    
const int btnClient2 = 14;
const int btnClient3 = 27;
const int btnClient4 = 26;
const int btnClient5 = 25;
const int btnClient6 = 33;
const int btnClientAll = 32;

const int ledClient1 = 15;
const int ledClient2 = 0;
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
  Serial.println(); // Printing to serial
  delay(400); // Wait 
  Serial.println("Configuring access point...");//Printing to serial
  //Setting constant ip,dns,gateway,subnet mask
  IPAddress ip(192, 168, 4, 1);
  IPAddress gateway(192, 168, 4, 1);
  IPAddress subnet(255, 255, 255, 0);

  // You can remove the password parameter if you want the AP to be open.
  WiFi.softAP(ssid, password); // Starting access point(AP)
  WiFi.softAPConfig (ip, gateway, subnet);//Apply AP config
  IPAddress myIP = WiFi.softAPIP();//AP ip
  Serial.print("AP IP address: ");// Printing to serial
  Serial.println(myIP);
  server.begin();
  Serial.println("Server started");// Printing to serial
// Setting pin mode \/
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
  HTTPClient http; // Creating http data type
  // read the state of the switch into a local variable:
  int reading1 = digitalRead(btnClient1);
  int reading2 = digitalRead(btnClient2);
  int reading3 = digitalRead(btnClient3);
  int reading4 = digitalRead(btnClient4);
  int reading5 = digitalRead(btnClient5);
  int reading6 = digitalRead(btnClient6);
  int readingAll = digitalRead(btnClientAll);
  
  //==========================CLIENT1=============
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
        
        ledStateClient1 = HIGH;
      // set the LED:
        digitalWrite(ledClient1, ledStateClient1);
        http.begin("http://192.168.4.11/4/on");
        http.GET();
        http.end();
        
        ledStateClient1 = LOW;
        // set the LED:
        digitalWrite(ledClient1, ledStateClient1);

      }
    }
  }
  //==========================================================


 //==========================CLIENT2=============
  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading2 != lastButtonStateClient2) {
    // reset the debouncing timer
    lastDebounceTimeClient2 = millis();
  }

  if ((millis() - lastDebounceTimeClient2) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading2 != buttonStateClient2) {
      buttonStateClient2 = reading2;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient2 == HIGH) {
        
        ledStateClient2 = HIGH;
      // set the LED:
        digitalWrite(ledClient2, ledStateClient2);
        
        http.begin("http://192.168.4.12/4/on");
        http.GET();
        http.end();
        
        ledStateClient2 = LOW;
        // set the LED:
        digitalWrite(ledClient2, ledStateClient2);

      }
    }
  }
  //==========================================================

/*

  //==========================CLIENT3=============
    // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading3 != lastButtonStateClient3) {
    // reset the debouncing timer
    lastDebounceTimeClient3 = millis();
  }

  if ((millis() - lastDebounceTimeClient3) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading3 != buttonStateClient3) {
      buttonStateClient3 = reading3;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient3 == HIGH) {
        
        ledStateClient3 = HIGH;
      // set the LED:
        digitalWrite(ledClient3, ledStateClient3);
        
        http.begin("http://192.168.4.13/4/on");
        http.GET();
        http.end();
        
        ledStateClient3 = LOW;
        // set the LED:
        digitalWrite(ledClient3, ledStateClient3);

      }
    }
  }
  //==========================================================


  //==========================CLIENT4=============
// check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading4 != lastButtonStateClient4) {
    // reset the debouncing timer
    lastDebounceTimeClient4 = millis();
  }

  if ((millis() - lastDebounceTimeClient4) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading4 != buttonStateClient4) {
      buttonStateClient4 = reading4;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient4 == HIGH) {
        
        ledStateClient4 = HIGH;
      // set the LED:
        digitalWrite(ledClient4, ledStateClient4);
        
        http.begin("http://192.168.4.14/4/on");
        http.GET();
        http.end();
        
        ledStateClient4 = LOW;
        // set the LED:
        digitalWrite(ledClient4, ledStateClient4);

      }
    }
  }
  //==========================================================


  //==========================CLIENT5=============
// check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading5 != lastButtonStateClient5) {
    // reset the debouncing timer
    lastDebounceTimeClient5 = millis();
  }

  if ((millis() - lastDebounceTimeClient5) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading5 != buttonStateClient5) {
      buttonStateClient5 = reading5;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient5 == HIGH) {
        
        ledStateClient5 = HIGH;
      // set the LED:
        digitalWrite(ledClient5, ledStateClient5);
        
        http.begin("http://192.168.4.15/4/on");
        http.GET();
        http.end();
        
        ledStateClient5 = LOW;
        // set the LED:
        digitalWrite(ledClient5, ledStateClient5);

      }
    }
  }
  //==========================================================



  //==========================CLIENT6=============
// check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading6 != lastButtonStateClient6) {
    // reset the debouncing timer
    lastDebounceTimeClient6 = millis();
  }

  if ((millis() - lastDebounceTimeClient6) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading6 != buttonStateClient6) {
      buttonStateClient6 = reading6;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClient6 == HIGH) {
        
        ledStateClient6 = HIGH;
      // set the LED:
        digitalWrite(ledClient6, ledStateClient6);
        
        http.begin("http://192.168.4.16/4/on");
        http.GET();
        http.end();
        
        ledStateClient6 = LOW;
        // set the LED:
        digitalWrite(ledClient6, ledStateClient6);

      }
    }
  }
  //==========================================================
*/

  //==========================CLIENT7/ALL=============
// check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (readingAll != lastButtonStateClientAll) {
    // reset the debouncing timer
    lastDebounceTimeClientAll = millis();
  }

  if ((millis() - lastDebounceTimeClientAll) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (readingAll != buttonStateClientAll) {
      buttonStateClientAll = readingAll;

      // only toggle the LED if the new button state is HIGH
      if (buttonStateClientAll == HIGH) {
        
        ledStateClientAll = HIGH;
      // set the LED:
        digitalWrite(ledClientAll, ledStateClientAll);
        
                http.begin("http://192.168.4.11/4/on");
        http.GET();
        http.end();
                http.begin("http://192.168.4.12/4/on");
        http.GET();
        http.end();
               /* http.begin("http://192.168.4.13/4/on");
        http.GET();
        http.end();
                http.begin("http://192.168.4.14/4/on");
        http.GET();
        http.end();
                http.begin("http://192.168.4.15/4/on");
        http.GET();
        http.end();
                http.begin("http://192.168.4.16/4/on");
        http.GET();
        http.end();
        */
        ledStateClientAll = LOW;
        // set the LED:
        digitalWrite(ledClientAll, ledStateClientAll);

      }
    }
  }
  //==========================================================

  // save the reading. Next time through the loop, it'll be the lastButtonState:
  lastButtonStateClient1 = reading1;
  lastButtonStateClient2 = reading2;
  lastButtonStateClient3 = reading3;
  lastButtonStateClient4 = reading4;
  lastButtonStateClient5 = reading5;
  lastButtonStateClient6 = reading6;
  lastButtonStateClientAll = readingAll;
}
