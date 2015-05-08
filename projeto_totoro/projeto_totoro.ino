#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int botao1 = 1, botao2 = 7, led = 13, bz = 10;
int push1 = 0, push2 = 0, i, j, tom = 0;
void setup()
{
  pinMode(bz, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(led, OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Pressione algum ");
  lcd.setCursor(0, 1);
  lcd.print("    botao!      ");
}
void loop()
{
  push1 = digitalRead(botao1);
  push2 = digitalRead(botao2);
  if (push1 == HIGH)
  {
    tom = 100;
    lcd.setCursor(0,0);
    lcd.print("Eiiiiiii        ");
    lcd.setCursor(0,1);
    lcd.print("                ");
    for(j=0;j<50;j++)
    {
      for(i=0;i<50;i++)
      {
        digitalWrite(led, HIGH);
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        digitalWrite(bz, LOW);
        delayMicroseconds(tom);
      }
      delay(50);
    }
  }
  if (push2 == HIGH)
  {
    tom = 500;
    lcd.setCursor(0,0);
    lcd.print("     TOTORO     ");
    lcd.setCursor(0,1);
    lcd.print("TUTSTUTSTUTSTUTS");
    for(j=0;j<50;j++)
    {
      for(i=0;i<50;i++)
      {
        digitalWrite(led, HIGH);
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        digitalWrite(led, LOW);
        digitalWrite(bz, LOW);
        delayMicroseconds(tom);
      }
      delay(50);
    }
  }
  lcd.setCursor(0,0);
  lcd.print("Pressione algum ");
  lcd.setCursor(0, 1);
  lcd.print("    botao!      ");
  push1 = LOW;
  push2 = LOW;
  digitalWrite(led, LOW);
}
