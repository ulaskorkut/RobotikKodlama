#define buzzer 8

void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {

  tone(buzzer,440);
  delay(50);
  noTone(buzzer);
  delay(50);
  

}
