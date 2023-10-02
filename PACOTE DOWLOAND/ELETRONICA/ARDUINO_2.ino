//Programa para ligar e desligar um led suavemente PWM

//Constantes do código
#define LED 11
#define NUM_MAX_BITS 255

//Variáveis presentes no código
int i;

void setup() {
  // put your setup code here, to run once:

  //Colocamos a porta 11 como saída
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (i=0;i<NUM_MAX_BITS;i++){
    //Definimos o led como analógica
    analogWrite(LED, i);
    //Intensidade de 30% de PWM
    delay(30);
  }
  //Percorre o led 
  for (i=0;i<NUM_MAX_BITS;i++){
    //Definimos o led como analógica
    analogWrite(LED,i);
    //Intensidade de 30% de PWM 
    delay(30);
  }



}
