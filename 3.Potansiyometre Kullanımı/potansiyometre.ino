#define potpin A0

int deger = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  deger = analogRead(potpin);
  float volt = (5.00/1024.00)*deger;
  Serial.println(volt);
  delay(500);
}
