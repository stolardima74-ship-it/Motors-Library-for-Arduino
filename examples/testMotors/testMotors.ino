#include <motorsForArduino.h>
//----------------------------

// Укажи пины своего драйвера (нельзя оставлять пустым)
int IN1 = 6;
int IN2 = 7;
int IN3 = 8;
int IN4 = 9;
int PWM1 = 10;
int PWM2 = 11;

motorsForArduino MyMotors;

void setup() {
	MyMotors.setting(IN1, IN2, IN3, IN4, PWM1, PWM2);
	
}

void loop() {
  MyMotors.setSpeed(180, 180); // установка скорости (LeftSpeed, RightSpeed)

  MyMotors.forward(); // вперёд
  delay(1000);
  MyMotors.stop(); // стоп
  delay(1000);
  
  MyMotors.back();  // назад
  delay(1000);
  MyMotors.stop();
  delay(1000);
  
  MyMotors.left(); // танковый разворот налево
  delay(1000);
  MyMotors.stop();
  delay(1000);
  
  MyMotors.right(); // танковый разворот направо
  delay(1000);
  MyMotors.stop();
  delay(1000);
}
