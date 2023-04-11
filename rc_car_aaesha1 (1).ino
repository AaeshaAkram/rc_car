#include <IRremote.h>
int HLed1 = 2;
int HLed2 = 3;
int ILed1 = 11;
int ILed2 = 13;
int buzzer=9;
int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup ()  
{  
pinMode ( HLed1, OUTPUT);  
pinMode ( HLed2, OUTPUT);
pinMode ( ILed1, OUTPUT);
pinMode ( ILed2, OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
irrecv.enableIRIn(); 
}



void loop(){
if (irrecv.decode(&results)){

 Serial.println(results.value, HEX);
 irrecv.resume();
 Serial.println(results.value);

  }

  if (results.value==4294967295)

  {
    digitalWrite(HLed2, HIGH);
    digitalWrite(HLed1, HIGH);
    delay(1000);
    digitalWrite(HLed2, LOW);
    digitalWrite(HLed1, LOW);
    delay(1000);
   
  }
  else {
    digitalWrite(HLed2, LOW);
    digitalWrite(HLed1, LOW);
    
  
  }
if (results.value==4294967295) {
    
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
   
  }
  else {
    
    digitalWrite(buzzer, LOW);
  } 
    
if (results.value==4294967295) {
    
    digitalWrite(ILed1, HIGH);
    delay(500);
    digitalWrite(ILed1, LOW);
    delay(500);
    digitalWrite(ILed1, HIGH);
    delay(500);
  }
    
   
  
  
  else {
    digitalWrite(ILed1, LOW);
    
  
  }
if (results.value==4294967295) {
    
    digitalWrite(ILed2, HIGH);
    delay(500);
    digitalWrite(ILed2, LOW);
    delay(500);
    digitalWrite(ILed2, HIGH);
    delay(500);
   
  }
  else {
    digitalWrite(ILed2, LOW);
  
  }
}
