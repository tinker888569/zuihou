#include <SoftwareSerial.h>

int comdata=0,one,two,three,four;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop() {
  while(Serial.available()>0)
  {
    comdata=int(Serial.read());
  }
  one=comdata%10;
  two=comdata/10%10;
  three=comdata/100%10;
  four=comdata/1000%10;
  
 showNumber(one);
  digitalWrite(6,LOW);
  delay(2);
  digitalWrite(6,HIGH);
  
  
  showNumber(two);
  digitalWrite(7,LOW);
  delay(2);
  digitalWrite(7,HIGH);
  
  showNumber(three);
  digitalWrite(8,LOW);
  delay(2);
  digitalWrite(8,HIGH);
  
  showNumber(four);
  digitalWrite(9,LOW);
  delay(2);
  digitalWrite(9,HIGH);
} 
  
void showNumber(int t)
{
   switch(t)
  {
    case '0':show0();break;
    case '1':show1();break;
    case '2':show2();break;
    case '3':show3();break;
    case '4':show4();break;
    case '5':show5();break;
    case '6':show6();break;
    case '7':show7();break;
    case '8':show8();break;
    case '9':show9();break;
    default:break;
  }
}
void show0()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}
void show1()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
}
void show2()
{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
}
void show3()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
 
}
void show4()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  
}

void show5()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  
}

void show6()
{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  
}

void show7()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  
}
void show8()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  
}
void show9()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  
}
