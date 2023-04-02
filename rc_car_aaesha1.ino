const int BUTTON_PIN1 = 4;
const int BUTTON_PIN2 = 5;
const int BUTTON_PIN3 = 10;
const int BUTTON_PIN4 = 7;
const int BUZZER_PIN = 9;
void setup ()  
{  
pinMode ( 3, OUTPUT);  
pinMode ( 2, OUTPUT);
pinMode ( 11, OUTPUT);
pinMode ( 13, OUTPUT);
pinMode(BUTTON_PIN1, INPUT_PULLUP);
pinMode(BUTTON_PIN2, INPUT_PULLUP);
pinMode(BUTTON_PIN3, INPUT_PULLUP);
pinMode(BUTTON_PIN4, INPUT_PULLUP);
pinMode(BUZZER_PIN, OUTPUT);
}  


void loop()
{
  byte buttonState1 = digitalRead(BUTTON_PIN1);
  byte buttonState2 = digitalRead(BUTTON_PIN2);
  byte buttonState3 = digitalRead(BUTTON_PIN3);
  byte buttonState4 = digitalRead(BUTTON_PIN4);
  
 
  if (buttonState1 == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(1000);
   
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    
  
  }
  
  

  
  if (buttonState2 == LOW) {
    
    digitalWrite(BUZZER_PIN, HIGH);
    delay(1000);
    digitalWrite(BUZZER_PIN, HIGH);
   
  }
  else {
    
    digitalWrite(BUZZER_PIN, LOW);
  }  
    
  if (buttonState3 == LOW) {
    
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
    digitalWrite(11, HIGH);
    delay(500);
  }
    
   
  
  
  else {
    digitalWrite(11, LOW);
    
  
  } 
    if (buttonState4 == LOW) {
    
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
   
  }
  else {
    digitalWrite(13, LOW);
  
  }
}