int switchState = 0;
 void setup() {
 pinMode(3,OUTPUT); 
 pinMode(4,OUTPUT); 
 pinMode(5,OUTPUT);
 pinMode(2,INPUT); 
}
void loop() {
  switchState = digitalRead(2);
 //Esto es un comentario
 if(switchState == LOW) {
 //el pulsador no esta presionado 
 digitalWrite(3,HIGH); // LED verde
 digitalWrite(4,LOW); // LED rojo
 digitalWrite(5,LOW); // LED rojo
 }
 else {//el pulsador esta presionado
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   delay(250); //en pausa un cuarto segundo
   //cambiar el estado de los LEDs
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   delay(250);//en pausa un cuarto de segundo
 }  
    
}//Volver al comienzo de la instruccion loop 
   
 
 
