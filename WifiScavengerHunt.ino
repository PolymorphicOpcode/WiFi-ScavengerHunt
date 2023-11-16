#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#ifndef APSSID
#define APSSID "Find_me_for_points0"
#endif

/* Set these to your desired credentials. */
const char *ssid = APSSID;

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  WiFi.softAP(ssid);
}

void loop() {
}
