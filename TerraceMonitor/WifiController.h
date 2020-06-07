#ifndef WifiController_h
#define WifiController_h

#include "Arduino.h"
#include <ESP8266WiFi.h>

class WifiController {
  public: 
    void begin();
    void updateDDNS();

  private:
  void logConnectionInfo(IPAddress ip);
};

#endif
