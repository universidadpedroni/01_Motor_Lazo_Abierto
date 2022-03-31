#include <Arduino.h>

#define COM_SOFTWARESERIAL false

const long BAUDRATE = 115200;

const int PIN_ENCODER_A=2;
const int PIN_ENCODER_B=3;
const int PIN_ENABLE=5;
const int PIN_IN1=6;
const int PIN_IN2=7;

struct Signals {
  float r;    // Referencia
  float y;    // Salida del sistema (Posición)
  float v;    // Salida del sistema (Velocidad)
  float e;    // Error
  float u;    // Acción de control
};

Signals signals={0,0,0,0,0};