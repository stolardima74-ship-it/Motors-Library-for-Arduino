#include "MyMotors.h"

void MyMotors::setting(int in1, int in2, int in3, int in4, int enA, int enB) {
    
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _enA = enA;
    _enB = enB;
    
    pinMode(_in1, OUTPUT);
    pinMode(_in2, OUTPUT);
    pinMode(_in3, OUTPUT);
    pinMode(_in4, OUTPUT);
    pinMode(_enA, OUTPUT);
    pinMode(_enB, OUTPUT);
    stop();
}

void MyMotors::forward(int speed) {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
    analogWrite(_enA, speed);
    analogWrite(_enB, speed);
}

void MyMotors::back(int speed) {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
    analogWrite(_enA, speed);
    analogWrite(_enB, speed);
}

void MyMotors::left(int speed) {

    digitalWrite(_in1, LOW);
    digitalWrite(_in2, HIGH);
    digitalWrite(_in3, HIGH);
    digitalWrite(_in4, LOW);
    analogWrite(_enA, speed);
    analogWrite(_enB, speed);
}

void MyMotors::right(int speed) {
    digitalWrite(_in1, HIGH);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, HIGH);
    analogWrite(_enA, speed);
    analogWrite(_enB, speed);
}

void MyMotors::stop() {
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, LOW);
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, LOW);
    analogWrite(_enA, 0);
    analogWrite(_enB, 0);
}