#ifndef motorsForArduino_h
#define motorsForArduino_h

#include <Arduino.h>

class motorsForArduino {
  public:

    void setting(int in1, int in2, int in3, int in4, int enA, int enB);

    void forward();
    void back();
    void left();   
    void right();  
    void stop();
	void setSpeed(int speedL, int speedR);
    
  private:
    int _in1, _in2, _in3, _in4, _enA, _enB, _speedL, _speedR;
};

#endif