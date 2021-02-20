
#include <Servo.h>

Servo motor1,motor2,motor3,motor4; 

int pot1 = A0;  
int deger1; 

int pot2 = A1;  
int deger2;

int pot3 = A2;  
int deger3;

int pot4 = A3;  
int deger4;

void setup() {
  motor1.attach(12); 
  motor2.attach(11); 
  motor3.attach(10); 
  motor4.attach(9); 
}

void loop() {
  deger1 = analogRead(pot1);           
  deger1 = map(deger1, 0, 1023, 0, 180);     
  motor1.write(deger1);                  
  delay(15); 

  deger2 = analogRead(pot2);           
  deger2 = map(deger2, 0, 1023, 0, 180);     
  motor2.write(deger2);                  
  delay(15);

  deger3 = analogRead(pot3);           
  deger3 = map(deger3, 0, 1023, 0, 180);     
  motor3.write(deger3);                  
  delay(15);

  deger4 = analogRead(pot4);           
  deger4 = map(deger4, 0, 1023, 0, 180);     
  motor4.write(deger4);                  
  delay(15);
                            
}
