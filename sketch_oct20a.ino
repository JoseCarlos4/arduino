const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;
const int IN1 = 2;
const int IN2 = 7;
int switchState = 0;
void setup(){
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(IN1, INPUT);
pinMode(IN2, INPUT);
}
void loop(){
switchState = digitalRead(IN1) && digitalRead(IN2);
  if(switchState == HIGH){
 digitalWrite(LED1, HIGH);
    delay(180);
 digitalWrite(LED2, HIGH); 
    delay(190); 
 digitalWrite(LED3, HIGH); 
    delay(200);
 digitalWrite(LED1, LOW);
    delay(180);
 digitalWrite(LED2, LOW); 
    delay(190); 
 digitalWrite(LED3, LOW); 
    delay(200);
}
else {
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
}
 }

 
  
  
