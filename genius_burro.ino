const int btr = 2, bty = 3, btg = 9, btw = 10, ledr = 6, ledy = 7, ledg = 4, ledw = 5, bz = 8, start = A0;
int psr = 0, psy = 0, psg = 0, psw = 0, tom = 0, go = 0, final = 1, win = 0, lvl = 1;

void setup()
{
  pinMode(btr, INPUT);
  pinMode(bty, INPUT);
  pinMode(btg, INPUT);
  pinMode(btw, INPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledw, OUTPUT);
  pinMode(bz, OUTPUT);
}
void loop()
{
    digitalWrite(ledr, LOW);
    digitalWrite(ledy, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(ledw, LOW);
    digitalWrite(btr, LOW);
    digitalWrite(bty, LOW);
    digitalWrite(btg, LOW);
    digitalWrite(btw, LOW);
   go = analogRead(start);
   if (go)
   {
     while(final)
     {
       //Level 1  R G R Y - PC
       digitalWrite(ledr, HIGH);
       delay(2000);
       digitalWrite(ledr, LOW);
       digitalWrite(ledg, HIGH);
       delay(2000);
       digitalWrite(ledg, LOW);
       digitalWrite(ledr, HIGH);
       delay(2000);
       digitalWrite(ledr, LOW);
       digitalWrite(ledy, HIGH);
       delay(2000);
       digitalWrite(ledy, LOW);
       //LEVEL 1 R G R Y - USER
       tom = 100;
       digitalWrite(bz, HIGH);
       delayMicroseconds(tom);
       digitalWrite(bz, LOW);
       //Aguarda algum press button ser acionado
       while(psr==LOW && psg == LOW && psy == LOW && psw==LOW)
       {
         psr = digitalRead(btr);
         psg = digitalRead(btg);
         psy = digitalRead(bty);
         psw = digitalRead(btw);
       }
       //User passou
       if (psr == HIGH)
       { 
         psr = LOW;
         digitalWrite(ledr, HIGH);
         delay(1000);
         digitalWrite(ledr, LOW);
         //Aguarda algum press button ser acionado
         while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
         {
           psr = digitalRead(btr);
           psg = digitalRead(btg);
           psy = digitalRead(bty);
           psw = digitalRead(btw);
         
         }
         //User passou
         if (psg == HIGH)
         {
           psg = LOW;
           digitalWrite(ledg, HIGH);
           delay(1000);
           digitalWrite(ledg, LOW);
          //Aguarda algum press button ser acionado
           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
           {
             psr = digitalRead(btr);
             psg = digitalRead(btg);
             psy = digitalRead(bty);
             psw = digitalRead(btw);
         
           }
           //User passou
           if (psr == HIGH)
           {
             psr = LOW;
             digitalWrite(ledr, HIGH);
             delay(1000);
             digitalWrite(ledr, LOW);
             //Aguarda algum press button ser acionado
             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
             {
               psr = digitalRead(btr);
               psg = digitalRead(btg);
               psy = digitalRead(bty);
               psw = digitalRead(btw);
             }
             //User passou
             if (psy == HIGH)
             {
               psy = LOW;
               digitalWrite(ledy, HIGH);
               delay(1000);
               digitalWrite(ledy, LOW);
               lvl++;
             }
             //User perdeu
             else 
               final = 0;
           }
           //User perdeu
           else
             final = 0;
           
         }
         //User perdeu
         else
           final = 0;
       
       }
       //User perdeu
       else
         final = 0;
       
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       if (lvl == 2) 
       {
         //LEVEL 2  R G R Y G W - PC
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         //LEVEL 2 - R G R Y G W - USER
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         //Aguarda algum press button ser acionado
         while(psr==LOW && psg == LOW && psy == LOW && psw==LOW)
         {
           psr = digitalRead(btr);
           psg = digitalRead(btg);
           psy = digitalRead(bty);
           psw = digitalRead(btw);
         }
         //User passou
         if (psr == HIGH)
         { 
           psr = LOW;
           digitalWrite(ledr, HIGH);
           delay(1000);
           digitalWrite(ledr, LOW);
           //Aguarda algum press button ser acionado
           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
           {
             psr = digitalRead(btr);
             psg = digitalRead(btg);
             psy = digitalRead(bty);
             psw = digitalRead(btw);
         
           }
           //User passou
           if (psg == HIGH)
           {
             psg = LOW;
             digitalWrite(ledg, HIGH);
             delay(1000);
             digitalWrite(ledg, LOW);
             //Aguarda algum press button ser acionado
             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
             {
               psr = digitalRead(btr);
               psg = digitalRead(btg);
               psy = digitalRead(bty);
               psw = digitalRead(btw);
         
             }
             //User passou
             if (psr == HIGH)
             {
               psr = LOW;
               digitalWrite(ledr, HIGH);
               delay(1000);
               digitalWrite(ledr, LOW);
               //Aguarda algum press button ser acionado
               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
               {
                 psr = digitalRead(btr);
                 psg = digitalRead(btg);
                 psy = digitalRead(bty);
                 psw = digitalRead(btw);
               }
               //User passou
               if (psy == HIGH)
               {
                 psy = LOW;
                 digitalWrite(ledy, HIGH);
                 delay(1000);
                 digitalWrite(ledy, LOW);
                 //Aguarda algum press button ser acionado
                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                 {
                   psr = digitalRead(btr);
                   psg = digitalRead(btg);
                   psy = digitalRead(bty);
                   psw = digitalRead(btw);
                 }
                 //User passou
                 if(psg == HIGH)
                 {
                   psg = LOW;
                   digitalWrite(ledg, HIGH);
                   delay(1000);
                   digitalWrite(ledg, LOW);
                   //Aguarda algum press button ser acionado
                   while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                   {
                     psr = digitalRead(btr);
                     psg = digitalRead(btg);
                     psy = digitalRead(bty);
                     psw = digitalRead(btw);
                   }
                     if (psw == HIGH)
                     {
                       psw = LOW;
                       digitalWrite(ledw, HIGH);
                       delay(1000);
                       digitalWrite(ledw, LOW);
                       lvl++;
                     }
                 }
                 //User perdeu
                 else
                   final = 0;
                 
               }
               //User perdeu
               else 
                 final = 0;
             }
             //User perdeu
             else
               final = 0;
           
           }
           //User perdeu
           else
             final = 0;
       
         }
         //User perdeu
         else
           final = 0;
       
       }    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       if (lvl == 3) 
       {
         //LEVEL 3  R G R Y G W R Y Y - PC
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         delay(50);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         //LEVEL 3 - R G R Y G W R Y Y - USER
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         //Aguarda algum press button ser acionado
         while(psr==LOW && psg == LOW && psy == LOW && psw==LOW)
         {
           psr = digitalRead(btr);
           psg = digitalRead(btg);
           psy = digitalRead(bty);
           psw = digitalRead(btw);
         }
         //User passou
         if (psr == HIGH)
         { 
           psr = LOW;
           digitalWrite(ledr, HIGH);
           delay(1000);
           digitalWrite(ledr, LOW);
           //Aguarda algum press button ser acionado
           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
           {
             psr = digitalRead(btr);
             psg = digitalRead(btg);
             psy = digitalRead(bty);
             psw = digitalRead(btw);
         
           }
           //User passou
           if (psg == HIGH)
           {
             psg = LOW;
             digitalWrite(ledg, HIGH);
             delay(1000);
             digitalWrite(ledg, LOW);
             //Aguarda algum press button ser acionado
             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
             {
               psr = digitalRead(btr);
               psg = digitalRead(btg);
               psy = digitalRead(bty);
               psw = digitalRead(btw);
         
             }
             //User passou
             if (psr == HIGH)
             {
               psr = LOW;
               digitalWrite(ledr, HIGH);
               delay(1000);
               digitalWrite(ledr, LOW);
               //Aguarda algum press button ser acionado
               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
               {
                 psr = digitalRead(btr);
                 psg = digitalRead(btg);
                 psy = digitalRead(bty);
                 psw = digitalRead(btw);
               }
               //User passou
               if (psy == HIGH)
               {
                 psy = LOW;
                 digitalWrite(ledy, HIGH);
                 delay(1000);
                 digitalWrite(ledy, LOW);
                 //Aguarda algum press button ser acionado
                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                 {
                   psr = digitalRead(btr);
                   psg = digitalRead(btg);
                   psy = digitalRead(bty);
                   psw = digitalRead(btw);
                 }
                 //User passou
                 if(psg == HIGH)
                 {
                   psg = LOW;
                   digitalWrite(ledg, HIGH);
                   delay(1000);
                   digitalWrite(ledg, LOW);
                   //Aguarda algum press button ser acionado
                   while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                   {
                     psr = digitalRead(btr);
                     psg = digitalRead(btg);
                     psy = digitalRead(bty);
                     psw = digitalRead(btw);
                   }
                     //User passou
                     if (psw == HIGH)
                     {
                       psw = LOW;
                       digitalWrite(ledw, HIGH);
                       delay(1000);
                       digitalWrite(ledw, LOW);
                       //Aguarda algum press button ser acionado
                       while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                       {
                         psr = digitalRead(btr);
                         psg = digitalRead(btg);
                         psy = digitalRead(bty);
                         psw = digitalRead(btw);
                       }
                       //User passou
                       if(psr == HIGH)
                       {
                         psr = LOW;
                         digitalWrite(ledr, HIGH);
                         delay(1000);
                         digitalWrite(ledr, LOW);
                         //Aguarda algum press button ser acionado
                         while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                         {
                           psr = digitalRead(btr);
                           psg = digitalRead(btg);
                           psy = digitalRead(bty);
                           psw = digitalRead(btw);
                         }
                         //User passou
                         if (psy == HIGH)
                         {
                           psy = LOW;
                           digitalWrite(ledy, HIGH);
                           delay(1000);
                           digitalWrite(ledy, LOW);
                           //Aguarda algum press button ser acionado
                           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                           {
                             psr = digitalRead(btr);
                             psg = digitalRead(btg);
                             psy = digitalRead(bty);
                             psw = digitalRead(btw);
                           }
                           //User passou
                           if(psy == HIGH)
                           {
                             psy = LOW;
                             digitalWrite(ledy, HIGH);
                             delay(1000);
                             digitalWrite(ledy, LOW);
                             lvl++;
                           }
                           //User perdeu
                           else 
                           final = 0;
                         }
                         //User perdeu
                         else
                           final = 0;
                       }
                       //User perdeu
                       else
                         final = 0;
                     }
                     //User perdeu
                     else
                       final = 0;
                 }
                 //User perdeu
                 else
                   final = 0;
                 
               }
               //User perdeu
               else 
                 final = 0;
             }
             //User perdeu
             else
               final = 0;
           
           }
           //User perdeu
           else
             final = 0;
       
         }
         //User perdeu
         else
           final = 0;
       
       }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       if (lvl == 4) 
       {
         //LEVEL 4  R G R Y G W R Y Y G W R - PC
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         delay(50);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         //LEVEL 4 - R G R Y G W R Y Y G W R - USER
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         //Aguarda algum press button ser acionado
         while(psr==LOW && psg == LOW && psy == LOW && psw==LOW)
         {
           psr = digitalRead(btr);
           psg = digitalRead(btg);
           psy = digitalRead(bty);
           psw = digitalRead(btw);
         }
         //User passou
         if (psr == HIGH)
         { 
           psr = LOW;
           digitalWrite(ledr, HIGH);
           delay(1000);
           digitalWrite(ledr, LOW);
           //Aguarda algum press button ser acionado
           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
           {
             psr = digitalRead(btr);
             psg = digitalRead(btg);
             psy = digitalRead(bty);
             psw = digitalRead(btw);
         
           }
           //User passou
           if (psg == HIGH)
           {
             psg = LOW;
             digitalWrite(ledg, HIGH);
             delay(1000);
             digitalWrite(ledg, LOW);
             //Aguarda algum press button ser acionado
             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
             {
               psr = digitalRead(btr);
               psg = digitalRead(btg);
               psy = digitalRead(bty);
               psw = digitalRead(btw);
         
             }
             //User passou
             if (psr == HIGH)
             {
               psr = LOW;
               digitalWrite(ledr, HIGH);
               delay(1000);
               digitalWrite(ledr, LOW);
               //Aguarda algum press button ser acionado
               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
               {
                 psr = digitalRead(btr);
                 psg = digitalRead(btg);
                 psy = digitalRead(bty);
                 psw = digitalRead(btw);
               }
               //User passou
               if (psy == HIGH)
               {
                 psy = LOW;
                 digitalWrite(ledy, HIGH);
                 delay(1000);
                 digitalWrite(ledy, LOW);
                 //Aguarda algum press button ser acionado
                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                 {
                   psr = digitalRead(btr);
                   psg = digitalRead(btg);
                   psy = digitalRead(bty);
                   psw = digitalRead(btw);
                 }
                 //User passou
                 if(psg == HIGH)
                 {
                   psg = LOW;
                   digitalWrite(ledg, HIGH);
                   delay(1000);
                   digitalWrite(ledg, LOW);
                   //Aguarda algum press button ser acionado
                   while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                   {
                     psr = digitalRead(btr);
                     psg = digitalRead(btg);
                     psy = digitalRead(bty);
                     psw = digitalRead(btw);
                   }
                     //User passou
                     if (psw == HIGH)
                     {
                       psw = LOW;
                       digitalWrite(ledw, HIGH);
                       delay(1000);
                       digitalWrite(ledw, LOW);
                       //Aguarda algum press button ser acionado
                       while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                       {
                         psr = digitalRead(btr);
                         psg = digitalRead(btg);
                         psy = digitalRead(bty);
                         psw = digitalRead(btw);
                       }
                       //User passou
                       if(psr == HIGH)
                       {
                         psr = LOW;
                         digitalWrite(ledr, HIGH);
                         delay(1000);
                         digitalWrite(ledr, LOW);
                         //Aguarda algum press button ser acionado
                         while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                         {
                           psr = digitalRead(btr);
                           psg = digitalRead(btg);
                           psy = digitalRead(bty);
                           psw = digitalRead(btw);
                         }
                         //User passou
                         if (psy == HIGH)
                         {
                           psy = LOW;
                           digitalWrite(ledy, HIGH);
                           delay(1000);
                           digitalWrite(ledy, LOW);
                           //Aguarda algum press button ser acionado
                           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                           {
                             psr = digitalRead(btr);
                             psg = digitalRead(btg);
                             psy = digitalRead(bty);
                             psw = digitalRead(btw);
                           }
                           //User passou
                           if(psy == HIGH)
                           {
                             psy = LOW;
                             digitalWrite(ledy, HIGH);
                             delay(1000);
                             digitalWrite(ledy, LOW);
                             //Aguarda algum press button ser acionado
                             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                             {
                                psr = digitalRead(btr);
                                psg = digitalRead(btg);
                                psy = digitalRead(bty);
                                psw = digitalRead(btw);
                             }
                             //User passou
                             if(psg == HIGH)
                             {
                               psg = LOW;
                               digitalWrite(ledg, HIGH);
                               delay(1000);
                               digitalWrite(ledg, LOW);
                               //Aguarda algum press button ser acionado
                               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                               {
                                   psr = digitalRead(btr);
                                   psg = digitalRead(btg);
                                   psy = digitalRead(bty);
                                   psw = digitalRead(btw);
                               }
                               //User passou
                               if(psw == HIGH)
                               {
                                 psw = LOW;
                                 digitalWrite(ledw, HIGH);
                                 delay(1000);
                                 digitalWrite(ledw, LOW);
                                 //Aguarda algum press button ser acionado
                                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                                 {
                                     psr = digitalRead(btr);
                                     psg = digitalRead(btg);
                                     psy = digitalRead(bty);
                                     psw = digitalRead(btw);
                                 }
                                 //User passou
                                 if(psr == HIGH)
                                 {
                                   psr = LOW;
                                   digitalWrite(ledr, HIGH);
                                   delay(1000);
                                   digitalWrite(ledr, LOW);
                                   lvl++;
                                 }
                                 //User perdeu
                                 else
                                   final = 0;
                               }
                               //User perdeu
                               else
                                 final = 0;
                             }
                             //User perdeu
                             else
                               final = 0;
                           }
                           //User perdeu
                           else
                              final = 0;
                         }
                         //User perdeu
                         else
                           final = 0;
                       }
                       //User perdeu
                       else
                         final = 0;
                     }
                     //User perdeu
                     else
                       final = 0;
                 }
                 //User perdeu
                 else
                   final = 0;
                 
               }
               //User perdeu
               else 
                 final = 0;
             }
             //User perdeu
             else
               final = 0;
           
           }
           //User perdeu
           else
             final = 0;
       
         }
         //User perdeu
         else
           final = 0;
       
       }       
       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       if (lvl == 5) 
       {
         //LEVEL 5  R G R Y G W R Y Y G W R W Y G - PC
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         delay(50);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledr, HIGH);
         delay(2000);
         digitalWrite(ledr, LOW);
         digitalWrite(ledw, HIGH);
         delay(2000);
         digitalWrite(ledw, LOW);
         digitalWrite(ledy, HIGH);
         delay(2000);
         digitalWrite(ledy, LOW);
         digitalWrite(ledg, HIGH);
         delay(2000);
         digitalWrite(ledg, LOW);
         //LEVEL 5 - R G R Y G W R Y Y G W R W Y G - USER
         tom = 100;
         digitalWrite(bz, HIGH);
         delayMicroseconds(tom);
         digitalWrite(bz, LOW);
         //Aguarda algum press button ser acionado
         while(psr==LOW && psg == LOW && psy == LOW && psw==LOW)
         {
           psr = digitalRead(btr);
           psg = digitalRead(btg);
           psy = digitalRead(bty);
           psw = digitalRead(btw);
         }
         //User passou
         if (psr == HIGH)
         { 
           psr = LOW;
           digitalWrite(ledr, HIGH);
           delay(1000);
           digitalWrite(ledr, LOW);
           //Aguarda algum press button ser acionado
           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
           {
             psr = digitalRead(btr);
             psg = digitalRead(btg);
             psy = digitalRead(bty);
             psw = digitalRead(btw);
         
           }
           //User passou
           if (psg == HIGH)
           {
             psg = LOW;
             digitalWrite(ledg, HIGH);
             delay(1000);
             digitalWrite(ledg, LOW);
             //Aguarda algum press button ser acionado
             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
             {
               psr = digitalRead(btr);
               psg = digitalRead(btg);
               psy = digitalRead(bty);
               psw = digitalRead(btw);
         
             }
             //User passou
             if (psr == HIGH)
             {
               psr = LOW;
               digitalWrite(ledr, HIGH);
               delay(1000);
               digitalWrite(ledr, LOW);
               //Aguarda algum press button ser acionado
               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
               {
                 psr = digitalRead(btr);
                 psg = digitalRead(btg);
                 psy = digitalRead(bty);
                 psw = digitalRead(btw);
               }
               //User passou
               if (psy == HIGH)
               {
                 psy = LOW;
                 digitalWrite(ledy, HIGH);
                 delay(1000);
                 digitalWrite(ledy, LOW);
                 //Aguarda algum press button ser acionado
                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                 {
                   psr = digitalRead(btr);
                   psg = digitalRead(btg);
                   psy = digitalRead(bty);
                   psw = digitalRead(btw);
                 }
                 //User passou
                 if(psg == HIGH)
                 {
                   psg = LOW;
                   digitalWrite(ledg, HIGH);
                   delay(1000);
                   digitalWrite(ledg, LOW);
                   //Aguarda algum press button ser acionado
                   while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                   {
                     psr = digitalRead(btr);
                     psg = digitalRead(btg);
                     psy = digitalRead(bty);
                     psw = digitalRead(btw);
                   }
                     //User passou
                     if (psw == HIGH)
                     {
                       psw = LOW;
                       digitalWrite(ledw, HIGH);
                       delay(1000);
                       digitalWrite(ledw, LOW);
                       //Aguarda algum press button ser acionado
                       while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                       {
                         psr = digitalRead(btr);
                         psg = digitalRead(btg);
                         psy = digitalRead(bty);
                         psw = digitalRead(btw);
                       }
                       //User passou
                       if(psr == HIGH)
                       {
                         psr = LOW;
                         digitalWrite(ledr, HIGH);
                         delay(1000);
                         digitalWrite(ledr, LOW);
                         //Aguarda algum press button ser acionado
                         while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                         {
                           psr = digitalRead(btr);
                           psg = digitalRead(btg);
                           psy = digitalRead(bty);
                           psw = digitalRead(btw);
                         }
                         //User passou
                         if (psy == HIGH)
                         {
                           psy = LOW;
                           digitalWrite(ledy, HIGH);
                           delay(1000);
                           digitalWrite(ledy, LOW);
                           //Aguarda algum press button ser acionado
                           while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                           {
                             psr = digitalRead(btr);
                             psg = digitalRead(btg);
                             psy = digitalRead(bty);
                             psw = digitalRead(btw);
                           }
                           //User passou
                           if(psy == HIGH)
                           {
                             psy = LOW;
                             digitalWrite(ledy, HIGH);
                             delay(1000);
                             digitalWrite(ledy, LOW);
                             //Aguarda algum press button ser acionado
                             while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                             {
                                psr = digitalRead(btr);
                                psg = digitalRead(btg);
                                psy = digitalRead(bty);
                                psw = digitalRead(btw);
                             }
                             //User passou
                             if(psg == HIGH)
                             {
                               psg = LOW;
                               digitalWrite(ledg, HIGH);
                               delay(1000);
                               digitalWrite(ledg, LOW);
                               //Aguarda algum press button ser acionado
                               while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                               {
                                   psr = digitalRead(btr);
                                   psg = digitalRead(btg);
                                   psy = digitalRead(bty);
                                   psw = digitalRead(btw);
                               }
                               //User passou
                               if(psw == HIGH)
                               {
                                 psw = LOW;
                                 digitalWrite(ledw, HIGH);
                                 delay(1000);
                                 digitalWrite(ledw, LOW);
                                 //Aguarda algum press button ser acionado
                                 while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                                 {
                                     psr = digitalRead(btr);
                                     psg = digitalRead(btg);
                                     psy = digitalRead(bty);
                                     psw = digitalRead(btw);
                                 }
                                 //User passou
                                 if(psr == HIGH)
                                 {
                                   psr = LOW;
                                   digitalWrite(ledr, HIGH);
                                   delay(1000);
                                   digitalWrite(ledr, LOW);
                                   //Aguarda algum press button ser acionado
                                   while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                                   {
                                       psr = digitalRead(btr);
                                       psg = digitalRead(btg);
                                       psy = digitalRead(bty);
                                       psw = digitalRead(btw);
                                   }
                                   //User passou
                                   if(psw == HIGH)
                                   {
                                     psw = LOW;
                                     digitalWrite(ledw, HIGH);
                                     delay(1000);
                                     digitalWrite(ledw, LOW);
                                     //Aguarda algum press button ser acionado
                                     while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                                     {
                                         psr = digitalRead(btr);
                                         psg = digitalRead(btg);
                                         psy = digitalRead(bty);
                                         psw = digitalRead(btw);
                                     }
                                     //User passou
                                     if(psy == HIGH)
                                     {
                                       psy = LOW;
                                       digitalWrite(ledy, HIGH);
                                       delay(1000);
                                       digitalWrite(ledy, LOW);
                                       //Aguarda algum press button ser acionado
                                       while(psr==LOW && psg==LOW && psy==LOW && psw==LOW)
                                       {
                                           psr = digitalRead(btr);
                                           psg = digitalRead(btg);
                                           psy = digitalRead(bty);
                                           psw = digitalRead(btw);
                                       }
                                       //User passou
                                       if(psg == HIGH)
                                       {
                                         psg = LOW;
                                         digitalWrite(ledg, HIGH);
                                         delay(1000);
                                         digitalWrite(ledg, LOW);
                                         win = 1;
                                         final = 0;
                                         lvl++;
                                       }
                                       //User perdeu
                                       else
                                         final = 0;
                                     }
                                     //User perdeu
                                     else
                                       final = 0;
                                   }
                                   //User perdeu
                                   else
                                     final = 0;
                                 }
                                 //User perdeu
                                 else
                                   final = 0;
                               }
                               //User perdeu
                               else
                                 final = 0;
                             }
                             //User perdeu
                             else
                               final = 0;
                           }
                           //User perdeu
                           else 
                             final = 0;
                         }
                         //User perdeu
                         else
                           final = 0;
                       }
                       //User perdeu
                       else
                         final = 0;
                     }
                     //User perdeu
                     else
                       final = 0;
                 }
                 //User perdeu
                 else
                   final = 0;
                 
               }
               //User perdeu
               else 
                 final = 0;
             }
             //User perdeu
             else
               final = 0;
           
           }
           //User perdeu
           else
             final = 0;
       
         }
         //User perdeu
         else
           final = 0;
       
       }
       
     }//Fechamento do WHILE DE TRAVAMENTO
     
     
     //User ganhou jogo
     if (win)
     {
       tom = 500;
       digitalWrite(ledr, HIGH);
       digitalWrite(ledy, HIGH);
       digitalWrite(ledw, HIGH);
       digitalWrite(ledg, HIGH);
       digitalWrite(bz, HIGH);
       delayMicroseconds(tom);
       delay(4000);
       digitalWrite(ledr, LOW);
       digitalWrite(ledy, LOW);
       digitalWrite(ledw, LOW);
       digitalWrite(ledg, LOW);
       digitalWrite(bz, LOW);
       digitalWrite(ledr, LOW);
       digitalWrite(ledy, LOW);
       digitalWrite(ledg, LOW);
       digitalWrite(ledw, LOW);
       digitalWrite(btr, LOW);
       digitalWrite(bty, LOW);
       digitalWrite(btg, LOW);
       digitalWrite(btw, LOW);
       psr = LOW;
       psg = LOW;
       psy = LOW;
       psw = LOW;
       final = 1;
       win = 0;
       lvl = 1;
     }
     //User perdeu em qualquer nivel
     else
     {
        tom = 800;
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        delay(1000);
        digitalWrite(bz, LOW);
        delay(500);
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        delay(1000);
        digitalWrite(bz, LOW);
        delay(500);
        digitalWrite(bz, HIGH);
        delayMicroseconds(tom);
        delay(3000);
        digitalWrite(bz, LOW);
        digitalWrite(ledr, LOW);
        digitalWrite(ledy, LOW);
        digitalWrite(ledg, LOW);
        digitalWrite(ledw, LOW);
        digitalWrite(btr, LOW);
        digitalWrite(bty, LOW);
        digitalWrite(btg, LOW);
        digitalWrite(btw, LOW);
        psr = LOW;
        psg = LOW;
        psy = LOW;
        psw = LOW;
        final = 1;
        win = 0;
        lvl = 1;
     }
     
   }
   else
   {
    digitalWrite(ledr, LOW);
    digitalWrite(ledy, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(ledw, LOW);
    digitalWrite(btr, LOW);
    digitalWrite(bty, LOW);
    digitalWrite(btg, LOW);
    digitalWrite(btw, LOW);
    psr = LOW;
    psg = LOW;
    psy = LOW;
    psw = LOW;
    final = 1;
    win = 0;
    lvl = 1;
   }
}
