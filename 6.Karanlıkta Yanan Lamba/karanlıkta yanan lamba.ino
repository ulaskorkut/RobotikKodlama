void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int isik = analogRead(A0);
  Serial.println(isik);
  delay(150);

  if(isik > 500){
    digitalWrite(9,LOW);
  }
  if(isik < 300){
    digitalWrite(9,HIGH);
  }
}
