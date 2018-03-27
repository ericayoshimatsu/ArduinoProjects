const int ledPin = 13;  // led no pino 13
const int botao = 2;    // botao no pino 2
int estadoBotao = 0;    // variável para ler o status do pushbutton

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(botao,INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoBotao = digitalRead(botao);

  if (estadoBotao == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
