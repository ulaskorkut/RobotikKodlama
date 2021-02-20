

#include <Servo.h>

Servo motor;  

int durum = 0;    

void setup() {
  motor.attach(9); 
}

void loop() {
  for (durum = 0; durum <= 90; durum += 1) { 
    motor.write(durum);             
    delay(20);                      
  }
  for (durum = 90; durum >= 0; durum -= 1) { 
    motor.write(durum);              
    delay(20);                       
  }
}
