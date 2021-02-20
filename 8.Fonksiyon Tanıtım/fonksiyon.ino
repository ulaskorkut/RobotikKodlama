

void setup() {
    Serial.begin(9600);
}

int kare(int sayi)
{
  int yenisayi = sayi*2;
  return yenisayi;
}


void loop() {

  int sonsayi = kare(3);
  Serial.println(sonsayi);

}
