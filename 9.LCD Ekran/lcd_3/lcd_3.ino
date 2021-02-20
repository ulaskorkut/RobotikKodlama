
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  
  lcd.begin(16, 2);
  
  lcd.print("Merhaba Mehmet");
}

void loop() {
  
  lcd.noBlink();
  delay(1000);
  
  lcd.blink();
  delay(1000);
}
