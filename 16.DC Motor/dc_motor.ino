#define sagmotor1 7
#define sagmotor2 6
#define sagmotorEn 9

void setup() {
  pinMode(sagmotor1, OUTPUT);
  pinMode(sagmotor2, OUTPUT);
  pinMode(sagmotorEn, OUTPUT); 
  
}

void loop() {
  digitalWrite(sagmotor1, LOW);
  digitalWrite(sagmotor2, HIGH); 
  analogWrite(sagmotorEn, 160); 

}
