#ifndef MyMotors_h
#define MyMotors_h

#include <Arduino.h>

class MyMotors {
  public:

    void setting(int in1, int in2, int in3, int in4, int enA, int enB);

    void forward(int speed);
    void back(int speed);
    void left(int speed);   
    void right(int speed);  
    void stop();
    
  private:
    int _in1, _in2, _in3, _in4, _enA, _enB;
};

#endif