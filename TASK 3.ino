int Red = 7;
int Green = 8;
int Orange = 9;
int Yellow = 10;
int Blue = 11;
int White = 12;
int button1 = 2;
int button2 = 3;
void setup()
{
  for(int i = 7;i <= 12 ; i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(button1,INPUT);
  pinMode(button2,OUTPUT);
  
}

void loop()
{
  if(digitalRead(button1) == HIGH)
     {
       digitalWrite(Red,HIGH);
       analogWrite(Green,128);
       delay(1000);
      }
  else
             {digitalWrite(Red,LOW);
              digitalWrite(Green,LOW);
             }
    if(digitalRead(button2) == HIGH)
       {
         digitalWrite(10,HIGH);
         analogWrite(12,128);
         delay(1000);
    }
         else
         {
           digitalWrite(10,LOW);
           digitalWrite(12,LOW);
         }
  
}