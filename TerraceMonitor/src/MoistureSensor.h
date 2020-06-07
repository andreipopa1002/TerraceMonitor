#ifndef MoistureSensor_h
#define MoistureSensor_h

#include "Arduino.h"

class MoistureSensor {
    public: 
      MoistureSensor(int pin);  
      MoistureSensor(int pin, int dryReference, int wetReference);
      int percentReading();
    
    private:
      int _pin;
      int _dryReference;
      int _wetReference;
};

#endif
