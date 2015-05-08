#include <TrueRandom.h>
const int bt[4] = {1, 2, 3, 4}, led[4] = {5, 6, 7, 8}, bz = 9, start = A1;
int push[4] = {0}, i = 0, j, w, go = 0, per[100] = {0}, res[100] = {0}, lvl = 1, tom = 0, final = 1, win = 0;

void setup()
{
  for(i=0;i<4;i++)
  {
    pinMode(led[i], OUTPUT);
    pinMode(bt[i], INPUT);
    digitalWrite(bt[i], LOW);
    digitalWrite(led[i], LOW);
  }
  pinMode(bz, OUTPUT);
}

void loop()
{
  go = analogRead(A1);
  if(go)
  {
    while (final)
    {
      tom = 100;
      while(i<lvl) //Cria as perguntas
      {
        randomSeed(analogRead(A0));
        per[i] = random(0,4);
        i++;
      }
      for (j=0;j<lvl;j++) //Faz as perguntas
      {
        digitalWrite(led[per[j]], HIGH);
        delay(2000);
        digitalWrite(led[per[j]], LOW);
        delay(100);
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        digitalWrite(bz, LOW);
      }
      for(j=0;j<lvl;j++) //Pega as repostas
      {
          while(push[0] == LOW && push[1] == LOW && push[2] == LOW && push[3] == LOW) //Aguarda algum botao ser pressionado
          { 
            for(w=0;w<4;w++)
              push[w] = digitalRead(bt[w]);
          }
          for(w=0;w<4;w++) //Le qual botao foi pressionado
          {
            if(push[w] == HIGH)
            {
              res[j] = w; //seta a resposta como o id do botao pressionado
              digitalWrite(led[w], HIGH);
              delay(1000);
              digitalWrite(led[w], LOW);
            } 
          }
          if (per[j] != res[j]) //verifica se o botao pressionado eh diferente do pedido
            break;
          if(per[lvl] == res[lvl]) //verifica se o user foi ate o final
            win = 1;
          for(w=0;w<4;w++) //reseta a situacao dos botoes
            push[w] = LOW;
      }
      if (win) //user ganhou
      {
        lvl++;
        win = 0;
        tom = 500;
        digitalWrite(bz, HIGH);
        delay(200);
        digitalWrite(bz, LOW);
      }
      else //user perdeu
      {
        final = 0;
        i = 0;
        win = 0;
        lvl = 1;
        for(w=0;w<4;w++)
          digitalWrite(led[w], HIGH);
        delay(1000);
        for(w=0;w<4;w++)
          digitalWrite(led[w], LOW);
        break;
      }
    }
    if(win == 0)
      go = 0;
  }
  for(w=0;w<4;w++) //reseta tudo
  {
    push[w] = LOW;
    digitalWrite(bt[w], LOW);
    digitalWrite(led[w], LOW);
  }
  final = 1;
  win = 0;
  i = 0;
  lvl = 1;
}
