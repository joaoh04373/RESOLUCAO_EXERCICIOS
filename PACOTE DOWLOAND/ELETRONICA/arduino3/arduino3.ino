//Programa para ler sensor de temperatura LM35
//uso da interface de comunicação serial
//Abrir o monitor serial em ferramentas


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Variaveis presentes no código
  float temperatura;
  int sensor = analogRead(A0);
  
  //Inicialização de temperatura
  temperatura = (sensor * 500.0)/1024;
  Serial.print(temperatura);
  Serial.println("grauscentígrados");
  delay(2000);

}
