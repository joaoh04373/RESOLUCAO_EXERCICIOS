//Programa para uso de mostrador alfanúmerico
//Inclui código de biblioteca
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//
//
void setup() {//Informa o número de colunas e linhas do lcd
  // put your setup code here, to run once:
  lcd.begin(16,4);//Ligamento do visor com  16 colunas e 4 linhas 
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.display();//O led é ativado
  lcd.setCursor(6,0);//Posiciona o cursor numa matriz (linha 3,coluna 0)
  lcd.print("Minicurso");//Escreve "Minicurso" no visor do lcd
  //Rolagem para a esquerda
  for (int posicao = 0;posicao<3;posicao++){
    lcd.scrollDisplayLeft();
    delay(300);
   }
  delay(2000);
  lcd.setCursor(9,1);//Posiciona o cursor numa matriz (Linha 4,coluna 1)
  lcd.print("Arduino");//Escreve "Arduino" no visor do led
  //Rolagem para a direita
  for(int posicao = 0;posicao < 6;posicao++){
    lcd.scrollDisplayRight();
    delay(300);
    
  }
  lcd.noDisplay();//Desliga o lcd
  delay(1000);

}
