#include <Servo.h>

#define deger 8
#define led 4
int hareket;

Servo motor;

void setup() {
  pinMode(deger,INPUT);
  pinMode(led,OUTPUT);
  motor.attach(9);
  Serial.begin(9600);

}

void loop() {
  hareket = digitalRead(deger);
  Serial.println(hareket);
  delay(250);

  if (hareket == HIGH){
    digitalWrite(led,HIGH);
    motor.write(90);
  }
  else{
    digitalWrite(led,LOW);
    motor.write(0);
  }
}
  
