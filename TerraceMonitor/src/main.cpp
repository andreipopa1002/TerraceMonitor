#include "WifiController.h"
#include "FooServer.h"

WifiController wifi;
FooServer *server;

void setup() {
  Serial.begin(9600);
  wifi.begin();
  server = new FooServer(80);
  server->begin();
}

void loop() {
  wifi.updateDDNS();
}
