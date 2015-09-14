#include <Encoder.h>
#include <Servo.h>

#ifndef PIVOT_H
#define PIVOT_H

class Pivot {
  public:
     Pivot(int motorPin, Encoder encoder);
     ~Pivot();
     void set(int desired);
     void m_update(); //<--change power applied.
  private:
     void setPower(int power);
     Servo motor;
     Encoder encoder;
};

#endif
