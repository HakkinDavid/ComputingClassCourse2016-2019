int IN3 = 5;
int IN4 = 4;
int ENB = 3;
void setup() {
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
}

void loop() {
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENB,55);
  delay(2000);
  analogWrite(ENB,105);
  delay(2000);
  analogWrite(ENB,255);
  delay(2000);
  analogWrite(ENB,0);
  delay(5000);
}
