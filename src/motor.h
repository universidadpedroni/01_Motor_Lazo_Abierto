#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class motor{
    private:
    int pinEnable;
    int pinA;
    int pinB;

    public:
    motor(int pinEnable,int pinA,int pinB);
    void init();
    void run(int potencia);
    void check();

};


#endif
