#include "Arduino.h"
#include "FooServer.h"
#include "MoistureSensor.h"

FooServer::FooServer(uint16_t port) {
  _port = port;
  _server = new AsyncWebServer(_port);;
 }

void FooServer::begin() {
  _server->on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    MoistureSensor moist(A0);
    int reading = moist.percentReading();
    request->send_P(200, "text/plain", String(reading).c_str());
  });
  
  _server->begin();
}
 
