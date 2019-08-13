
#include "ThingSpeak.h"
#include <ESP8266WiFi.h>


char ssid[] = "JioFiber-ahGu7";    //  your network SSID (name) 
char pass[] = "welcome2ibm";   // your network password
int status = WL_IDLE_STATUS;
WiFiClient  client;
unsigned long myChannelNumber = 843624;
const char * myWriteAPIKey = "01RDTR33K81UP0O2";

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  ThingSpeak.begin(client);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(15000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(15000);                       // wait for a second
  
    ThingSpeak.writeField(myChannelNumber, 1, random(10,50), myWriteAPIKey);

}
