/*
 * Cable PWM 3 a resistencia
 * Cable - a LED
 * Cable + a 5v
 * Cable - a GND
 * Cable - a terminal A (Potenciómetro)
 * Cable A0 a B
 * Cable + a C
 */
 int LED = 3;
 int BRILLO;
 int POT = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  BRILLO = analogRead(POT)/4; //analogRead vale HIGH 1023, entre 4 da 255 como analogWrite
  analogWrite(LED, BRILLO); //analogWrite vale HIGH 255
}
