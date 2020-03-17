



































/*encendemos y apagamos un led conectado al pin 13
 * conexiones
 * led:
 * terminal+:pin digital 12 (utilizar resistencia 220 ohms), terminal-:GND 
 */
 /*Includes-librerias===*/
 /*END includes===*/
 /*==Defines-constantes===*/
 #define pin_led 12
 #define tiempo 3000//3000 milisegindos=3 segundos
 /*=end-defines==*/
 /*==variales globales==*/
 /*end-global variables*/
 /*funciones a usar-prototipos*/
 /*=end prototipos===*/
 /*===setup configuration===*/
void setup() {
  pinMode(pin_led, OUTPUT);//configuracion del Pin como salida
}
/*===End setup===*/
/*===loop-codigo que se repite===*/
void loop() {
  digitalWrite(pin_led, HIGH);
  delay(tiempo);
  digitalWrite(pin_led, LOW);
  delay(tiempo);
}
/*===END loop===*/
/*===Funciones===*/
/*===End functions===*/
