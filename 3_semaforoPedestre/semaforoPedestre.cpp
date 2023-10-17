int ledVerdeVeiculos = 13;
int ledAmareloVeiculos = 12;
int ledVermelhoVeiculos = 11;
int ledVerdePedestres = 7;
int ledVermelhoPedestres = 6;

void setup() {
  pinMode(ledVerdeVeiculos,OUTPUT);
  pinMode(ledAmareloVeiculos,OUTPUT);
  pinMode(ledVermelhoVeiculos,OUTPUT);
  pinMode(ledVerdePedestres,OUTPUT);
  pinMode(ledVermelhoPedestres,OUTPUT);

}

void loop() {
  digitalWrite(ledVermelhoPedestres, HIGH);
  digitalWrite(ledVerdeVeiculos, HIGH);
  
  delay(3000);
  
  digitalWrite(ledVerdeVeiculos, LOW);
  digitalWrite(ledAmareloVeiculos, HIGH);
  
  delay(1000);
  
  digitalWrite(ledAmareloVeiculos, LOW);
  digitalWrite(ledVermelhoVeiculos, HIGH);
  digitalWrite(ledVerdePedestres, HIGH);
  
  delay(3000);
  
  digitalWrite(ledVerdePedestres, LOW);
  digitalWrite(ledVermelhoVeiculos, LOW);
}
