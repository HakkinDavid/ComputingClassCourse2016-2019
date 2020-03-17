// Leds en serie
// declarando parametros
int led_verde = 13;
int led_rojo = 8;
const int BOTON = 7; // pin de entrada botón
int val = 0; //val se emplea para almacenar el estado
// del botón
int state = 0; // 0 LED apagado, mientras que 1 encendido
int old_val = 0; // almacena el antiguo valor de val// setup de parámetros
void setup() {
// se indica que cada pin es de salidad OUTPUT.
pinMode(led_verde, OUTPUT);
pinMode(led_rojo, OUTPUT);
}
// lazo a ejecutar continuamente una vez cargado el código en el arduino
void loop(){
val= digitalRead(BOTON); // lee el estado del Boton
// chequear si el boton esta presionado o no
if ((val == HIGH) && (old_val == LOW)){
state=1-state;
delay(10);
}
old_val = val; // val is now old, let's store it
if (state==1){
digitalWrite(led_verde,HIGH); // encender LED verde
delay(5000); // mantener por 5 segundos
digitalWrite(led_verde,LOW); // apagar LED verde
delay(1000); // mantener por 1 segundos
digitalWrite(led_rojo,HIGH); // encender LED rojo
delay(4000);
digitalWrite(led_rojo,LOW); // encender LED rojo
}
}
