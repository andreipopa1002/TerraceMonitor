#ifndef FooServer_h
#define FooServer_h

#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>

class FooServer {
  public: 
    FooServer(uint16_t port);
    void begin();

  private: 
    AsyncWebServer *_server;
    uint16_t _port;
};

#endif
