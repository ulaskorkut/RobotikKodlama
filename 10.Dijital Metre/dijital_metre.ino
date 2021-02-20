
#define echo 6
#define trig 7

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  lcd.begin(16, 2);
}

void loop()
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);
  
  float zaman = pulseIn(echo,HIGH);
  float cm = zaman/58.2;
  delay(200);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("dijital metre");
  lcd.setCursor(0,1);
  lcd.print(cm);
  lcd.setCursor(7,1);
  lcd.print("cm");
  delay(200);

}
