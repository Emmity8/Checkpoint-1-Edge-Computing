const unsigned int ldrPin = A0;
const unsigned int ledVerde = 8;
const unsigned int ledAmarelo = 9;
const unsigned int ledVermelho = 10;
const unsigned int buzzer = 5;

const unsigned int LIMITE_ALERTA = 700;
const unsigned int LIMITE_OK = 400;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(ldrPin);
  Serial.println(valorLuz);

  if (valorLuz < LIMITE_OK) {
    // Luz baixa (boa)
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
  } 
  else if (valorLuz < LIMITE_ALERTA) {
    // Nível de alerta
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  } 
  else {
    // Luz alta (crítica)
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(buzzer, LOW);
  }

  delay(500); // Aguarda meio segundo antes da próxima leitura
}