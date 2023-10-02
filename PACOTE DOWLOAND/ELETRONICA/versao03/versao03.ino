//Programa para ler sensor LDR

//Constantes presentes no código
#define LED 11
#define LDR A5 //Pino A5 entrada


void setup() {
  // put your setup code here, to run once:

  //define o led como saída
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Variavél que é igual a porta analógica A0
  int leitura = analogRead(A0);
  //Variavél que corresponde ao valor do PWM do 25%
  int valorPWM = (-0,25*leitura+255);
  //Coloca o led com o valor do PWM
  analogWrite(LED , valorPWM);


}
