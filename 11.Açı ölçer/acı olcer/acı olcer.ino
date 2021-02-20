#include <LiquidCrystal.h>
#include<Servo.h> 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int potpin = A0;

int potdeg;
Servo motor;
void setup()
{
  lcd.begin(16, 2);
  motor.attach(9);
  
}

void loop()
{
  potdeg = analogRead(potpin);
  potdeg= map(potdeg,0,1023,0,180);
  motor.write(potdeg);
  delay(20);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Okunan Derece = ");
  lcd.setCursor(0,1);
  lcd.print(potdeg);
  delay(30);
}
