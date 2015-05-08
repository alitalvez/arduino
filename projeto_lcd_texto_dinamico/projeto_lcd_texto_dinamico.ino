#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int bt1 = 1, bt2 = 7, bt3 = 6;
int i=0, j=0, psh1 = 0, psh2 = 0, psh3 = 0;
char letra = 97;
void limpaTela()
{
    lcd.setCursor(0, 0);
    lcd.print("                ");
    lcd.setCursor(0, 1);
    lcd.print("                ");
    psh3 = LOW;
}
void setup()
{
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("DIR = muda letra");
  lcd.setCursor(0, 1);
  lcd.print("MEI=ok|ESQ=limpa");
}
void loop()
{
  psh1 = digitalRead(bt1);
  psh2 = digitalRead(bt2);
  psh3 = digitalRead(bt3);
  if (psh3 == HIGH)
    limpaTela();
  while(psh2 == LOW)
  {
    lcd.setCursor(j, i);
    lcd.print(char(letra));
    if (psh1==HIGH)
    {
      letra++;
      psh1 = LOW;
      if (letra == 123)
        letra = 65;
      if (letra == 91)
        letra = 97;
    }
    if(psh2 == HIGH)
    {
      if (j == 16)
      {
        j = 0;
        i++;
      }
      if(j<16)
        j++;
      if (i==2)
        psh2 = HIGH;
    }
  }
  psh2 = LOW;
}
