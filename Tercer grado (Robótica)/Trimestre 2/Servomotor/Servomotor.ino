#include <Servo.h>
#define PIN_SERVO 9
#define PIN_POTENCIOMETRO A0
Servo miServo;
void setup() {
  miServo.attach(PIN_SERVO);
}

void loop() {
  int iValorPot=analogRead(PIN_POTENCIOMETRO);
  int iPosicionServo=map(iValorPot,0,1023,0,179);
  miServo.write(iPosicionServo);
  delay(15);
}
