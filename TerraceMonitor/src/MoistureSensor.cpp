#include "Arduino.h"
#include "MoistureSensor.h"

MoistureSensor::MoistureSensor(int pin) {
  _pin = pin;
  _dryReference = 857;
  _wetReference = 465;
}

MoistureSensor::MoistureSensor(int pin, int dryReference, int wetReference) {
    _pin = pin;
    _dryReference = dryReference;
    _wetReference = wetReference;
}

int MoistureSensor::percentReading() {
    int rawValue = analogRead(_pin);
    return map(rawValue, _dryReference, _wetReference, 0, 100);
}
