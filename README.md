# TerraceMonitor
Arduino project to monitor the soil humidity on my planter. I would like to see the sensor reading on a smartapp on my Samsung SmartThings app, but this will be part 2.
Hardware:
- a ESP8266-12E NodeMcu V3 LoL1n board
- 5 capacitive moisture sensors
- battery?
- other sensors?

### Software TODO list:
- connect board to wifi
- create web server to server information
- connect to sensors and read values
- organise data to be served via the web server
### Hardware TODO list:
- alter soil moisture sensor to work outdoors and use cable
- find suitable power suply
- fix limitation for single analog input pin
- find suitable waterproof connectors
- find additional sensors that can be used with the board


### Libraries:
- ESPAsyncWebServer https://github.com/me-no-dev/ESPAsyncWebServer/ . Dependency: ESPAsyncTCP https://github.com/me-no-dev/ESPAsyncTCP. Source: https://randomnerdtutorials.com/esp8266-dht11dht22-temperature-and-humidity-web-server-with-arduino-ide/
- 
