/*
 * Aumentar y disminuir intensidad LED
 * Cable PWM 3 a resistencia +
 * Cable - a cátodo
 * Cable + a Pin 3
 * Cable - a GND
 * Resistencia + a ánodo
 */
 int LED = 3; //variable LED
 int BRILLO; //variable BRILLO
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(BRILLO = 0; BRILLO<256; BRILLO ++){
  analogWrite(LED, BRILLO);
  delay(15);
}
for(BRILLO = 255; BRILLO>=0; BRILLO --){
  analogWrite(LED, BRILLO);
  delay(15);
}
}
