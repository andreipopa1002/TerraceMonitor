#include "Arduino.h"
#include <WiFiManager.h>
#include <EasyDDNS.h>

#include "WifiController.h"

void  WifiController::begin() {
  Serial.println("in the class");
  WiFiManager wifiManager;
  wifiManager.autoConnect("AutoConnectAP");
  logConnectionInfo(WiFi.localIP());
  
  EasyDDNS.service("duckdns");
  EasyDDNS.client("water-me","42cfee01-5fa9-422c-9f51-cbff570cd3e6");
}

void WifiController::updateDDNS() {
  EasyDDNS.update(10000);
}

void WifiController::logConnectionInfo(IPAddress ip) {
  Serial.println("");
  Serial.print("WiFi connected. ");
  Serial.print("IP address - local: ");
  Serial.println(ip);
}
