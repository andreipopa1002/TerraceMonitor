#include "Arduino.h"
#include "FooServer.h"

FooServer::FooServer(uint16_t port) {
  _port = port;
  _server = new AsyncWebServer(_port);;
 }

void FooServer::begin() {
  _server->on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", "bingo");
  });
  
  _server->begin();
}
 
