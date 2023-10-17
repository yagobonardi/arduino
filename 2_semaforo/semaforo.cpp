int ledVerde = 10;
int ledAmarelo = 9;
int ledVermelho = 8;

void setup()
{
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVermelho,OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
  
  digitalWrite(ledAmarelo, HIGH);
  delay(3000);
  digitalWrite(ledAmarelo, LOW);
  
  digitalWrite(ledVermelho, HIGH);
  delay(5000);
  digitalWrite(ledVermelho, LOW);
}
