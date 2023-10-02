// Programa para lidar um led suavemente usando PWM

//Constantes presentes no código
#define LED 11
#define NUM_MAX_BITS 255


//Variáveis presentes no código
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //O programa passa por todos os bits de todos os valores escritos nas saídas analogícas
  for (i=0;i < NUM_MAX_BITS;i++){
    //A porta 11 é tratado como analógica
    analogWrite(LED,i);
    //Refere-se a intensidade do PWM
    delay(50);
  }

}
