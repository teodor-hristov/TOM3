 /*********                                                                                                          -:::.   .++++++++.     `..`                                    
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





  Rui Santos
  Complete project details at http://randomnerdtutorials.com  
*********/

#include <ESP8266WiFi.h>                // Load Wi-Fi library

// Replace with your network credentials
const char* ssid     = "ArtV";
const char* password = "artv_tom3";

IPAddress ip(192, 168, 4, 12);           //Setting statuc ip address,dns,gateway
IPAddress gateway(192, 168, 4, 1);
IPAddress dns(192, 168, 4, 1);
IPAddress subnet(255, 255, 255, 0);

WiFiServer server(80);                    // Set web server port number to 80

String header;                            // Variable to store the HTTP request

String vibState = "off";                  // Auxiliar variables to store the current output state

const int vib = 4;                        // Assign output variables to GPIO pins

void setup() {
  Serial.begin(115200);
  
  pinMode(vib, OUTPUT);                     // Initialize the output variables as outputs
  
  digitalWrite(vib, LOW);                   // Set outputs to LOW
  WiFi.mode(WIFI_STA);                      //Setting wifi mode to station(not creating access point)
  
  Serial.print("Connecting to ");           // Printing to serial monitor 
  Serial.println(ssid);                     // Printing to serial monitor
  WiFi.begin(ssid, password);               // Connect to Wi-Fi network with SSID and password
  WiFi.config(ip, dns, gateway, subnet);    // Apply wifi configuration
  while (WiFi.status() != WL_CONNECTED) {   // while is not connected
    delay(500); // wait 
    Serial.print(".");                      // Print to serial monitor
  }

  Serial.println("");                       // Print local IP address and start web server
  Serial.println("WiFi connected.");        // Print to serial monitor
  Serial.println("IP address: ");           // Print to serial monitor
  Serial.println(WiFi.localIP());           // Printing local ip
  server.begin();                           // Building server
}

void loop(){
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
            
            if (header.indexOf("GET /4/on") >= 0) {
              Serial.println("GPIO 4 on");
              vibState = "on";
              digitalWrite(vib, HIGH);
              delay(1000);
              vibState = "off";
              digitalWrite(vib, LOW);
            }
            //================================That is creating HTML page (you can use it if you want)===========================
            // Display the HTML web page
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            // CSS to style the on/off buttons 
            // Feel free to change the background-color and font-size attributes to fit your preferences
            client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
            client.println(".button { background-color: #195B6A; border: none; color: white; padding: 16px 40px;");
            client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
            client.println(".button2 {background-color: #77878A;}</style></head>");
            
            
            client.println("<body><h1>ESP8266 Web Server</h1>");// Web Page Heading
               
            // Display current state, and ON/OFF buttons for GPIO 4  
            client.println("<p>GPIO 4 - State " + vibState + "</p>");
            // If the output4State is off, it displays the ON button       
            if (vibState=="off") {
              client.println("<p><a href=\"/4/on\"><button class=\"button\">ON</button></a></p>");
            } else {
              client.println("<p><a href=\"/4/off\"><button class=\"button button2\">OFF</button></a></p>");
            }
            client.println("</body></html>");
            
            // The HTTP response ends with another blank line
            client.println();
            // Break out of the while loop
            //=================================================================================================================
            break;
          } else {                           // if you got a newline, then clear currentLine
            currentLine = "";
          }
        } else if (c != '\r') {             // if you got anything else but a carriage return character,
          currentLine += c;                 // add it to the end of the currentLine
        }
      }
    }
    
    header = "";                            // Clear the header variable
    
    client.stop();                          // Close the connection
    Serial.println("Client disconnected.");// Printing to serial monitor
    Serial.println("");                     // Printing to serial monitor
  }
}
