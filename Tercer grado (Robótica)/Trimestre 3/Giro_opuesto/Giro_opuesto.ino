int IN3 = 5;
int IN4 = 4;
void setup() {
  pinMode(IN4,OUTPUT);
  pinMode(IN3,OUTPUT);
}

void loop() {
  digitalWrite(IN4,HIGH);
  digitalWrite(IN3,LOW);
  delay(4000);
  digitalWrite(IN4,LOW);
  delay(5000);
  digitalWrite(IN3,HIGH);
  delay(4000);
  digitalWrite(IN3,LOW);
  delay(5000);
}
