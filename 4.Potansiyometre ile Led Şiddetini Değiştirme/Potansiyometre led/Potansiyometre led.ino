#define potan A0
#define led 3

int deger = 0;
void setup()
{
  
}

void loop()
{
  deger = analogRead(potan);
  deger = map(deger,0,1023,0,255);
  analogWrite(led,deger);
}
