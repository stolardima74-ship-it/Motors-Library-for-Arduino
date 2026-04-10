//  При помощи данного кода ваши моторы смогут крутся вперёд, назад, налево, направо
// Автор: DmSt34

#include <MyMotors.h>

MyMotors motors;

void setup() {
    motors.setting(6, 7, 8, 9, 10, 11); // укажи пины управления дравйвером IN1 / IN2 / IN3 / IN4 / ENA / ENB
}

void loop() {
    motors.forward(100); // вперёд (скорость от 0 до 255)
    delay(2000);
    motors.back(100); // назад (скорость от 0 до 255)
    delay(2000);
    motors.left(100); // танковый разворот налево (скорость от 0 до 255)
    delay(1000);
    motors.right(100); // танковый разворот направо (скорость от 0 до 255)
    delay(1000);
    motors.stop(); // стоп
    delay(1000);
}
