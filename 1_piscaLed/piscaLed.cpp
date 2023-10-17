int led = 10;

void setup {
pinMod(led,OUTPUT);
}

void loop {
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
}
