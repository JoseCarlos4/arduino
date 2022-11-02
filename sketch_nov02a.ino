const int LED1 = 4;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = A1;
const int LED5 = A3;
const int LED6 = A2;
const int LED7 = A0;

const int PUSH = 7;

int RESULTADO = 0;

void setup()
{
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(LED7,OUTPUT);
  
pinMode(PUSH,INPUT_PULLUP);
Serial.begin(9600);
}

void loop()
{
 if(digitalRead(PUSH)==LOW)
 {
 RESULTADO=random(1,7);
 Serial.println(RESULTADO);
 delay(500);
}
if (RESULTADO==1)
{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
}
if (RESULTADO==2)
{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);  
}
if (RESULTADO==3)
{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);  
}
if (RESULTADO==4)
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,HIGH);  
}
if (RESULTADO==5)
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);  
}
if (RESULTADO==6)
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);  
} 
}
