#include "motor.h"

motor::motor(int pinEnable,int pinA,int pinB)
{
    this ->pinEnable=pinEnable;
    this ->pinA=pinA;
    this ->pinB=pinB;
    init();
}
// Inicialización del motor
void motor::init()
{
    pinMode(pinEnable,OUTPUT);
    pinMode(pinA,OUTPUT);
    pinMode(pinB,OUTPUT);
    digitalWrite(pinA,LOW);
    digitalWrite(pinB,OUTPUT);
}
// Mover el motor
void motor::run(int potencia)
{
    
    if (potencia==0) // detener el motor
  {
    digitalWrite(pinA,LOW);
    digitalWrite(pinB,LOW);
  }
  else
  {
    if (potencia >0)
    {
      digitalWrite(pinA,LOW);
      digitalWrite(pinB,HIGH);
      analogWrite(pinEnable,potencia);
    }
    else
    {
      digitalWrite(pinA,HIGH);
      digitalWrite(pinB,LOW);
      analogWrite(pinEnable,abs(potencia));
    }
    
  } 
}

// Chequear el motor
void motor::check()
{
    for(int i=0;i<255;i++)
    {
        motor::run(i);
        delay(10);
    }
    for(int i=255;i>-255;i--)
    {
        motor::run(i);
        delay(10);
    }
    for(int i=-255;i<0;i++)
    {
        motor::run(i);
        delay(10);
    }
    
}