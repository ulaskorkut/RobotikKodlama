#define kirmizioto 8
#define sarioto 9
#define yesiloto 10
#define kirmiziyaya 11
#define yesilyaya 12

void setup()
{
  pinMode(kirmizioto, OUTPUT);
  pinMode(sarioto, OUTPUT);
  pinMode(yesiloto, OUTPUT);
  pinMode(kirmiziyaya, OUTPUT);
  pinMode(yesilyaya, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizioto, HIGH);
  digitalWrite(sarioto, LOW);
  digitalWrite(yesiloto, LOW);
  digitalWrite(kirmiziyaya, LOW);
  digitalWrite(yesilyaya, HIGH);
  delay(5000);
  
  digitalWrite(kirmizioto, LOW);
  digitalWrite(sarioto, HIGH);
  digitalWrite(yesiloto, LOW);
  digitalWrite(kirmiziyaya, HIGH);
  digitalWrite(yesilyaya, LOW);
  delay(2000);
  
  digitalWrite(kirmizioto, LOW);
  digitalWrite(sarioto, LOW);
  digitalWrite(yesiloto, HIGH);
  digitalWrite(kirmiziyaya, HIGH);
  digitalWrite(yesilyaya, LOW);
  delay(3000);
  
}
