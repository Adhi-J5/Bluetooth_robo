#include <LiquidCrystal.h>
#define for1 7
#define for2 6
#define bac1 5
#define bac2 4
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  pinMode(for1, OUTPUT);
  pinMode(for2, OUTPUT);
  pinMode(bac1, OUTPUT);
  pinMode(bac2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter '1'-FORWARD");
  Serial.println("Enter '2'-BACKWARD");
  Serial.println("Enter '3'-RIGHTWARD");
  Serial.println("Enter '4'-BACKWARD");
  Serial.println("Enter '0'-STOP");
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("BLUETHOOTH ROBO");
  digitalWrite(for1, LOW);
      digitalWrite(for2, LOW);
      digitalWrite(bac1, LOW);
      digitalWrite(bac2, LOW);
      delay(1000);
     
}

void loop() {
  lcd.setCursor(0, 1);
  if (Serial.available() > 0) {
    char cmd = Serial.read(); 
    if (cmd == '1') {
      digitalWrite(for1, HIGH);
      digitalWrite(for2, HIGH);
      digitalWrite(bac1, LOW);
      digitalWrite(bac2, LOW);
      Serial.println("Entered 1");
      Serial.println("moving forward....");
       
  lcd.print("FORWARD");
    }
    else if (cmd == '2') {
      digitalWrite(for1, LOW);
      digitalWrite(for2, LOW);
      digitalWrite(bac1, HIGH);
      digitalWrite(bac2, HIGH);
      Serial.println("Entered 2");
      Serial.println("moving backward....");
      
  lcd.print("BACKWARD");
    }
    else if (cmd == '0') {
      digitalWrite(for1, LOW);
      digitalWrite(for2, LOW);
      digitalWrite(bac1, LOW);
      digitalWrite(bac2, LOW);
      Serial.println("Entered 0");
      Serial.println(" stoped moving ....");
      
  lcd.print("STOPPED");
    }
    else if (cmd == '3') {
      digitalWrite(for1, HIGH);
      digitalWrite(for2, LOW);
      digitalWrite(bac1, LOW);
      digitalWrite(bac2, HIGH);
      Serial.println("Entered 3");
      Serial.println("moving rightward....");
      
      lcd.print("RIGHTWARD");
    }
    else if (cmd == '4') {
      digitalWrite(for1, LOW);
      digitalWrite(for2, HIGH);
      digitalWrite(bac1, HIGH);
      digitalWrite(bac2, LOW);
      Serial.println("Entered 4");
      Serial.println("moving leftward....");
      
      lcd.print("LEFTWARD");
    }
    else{
    
      lcd.print("Invalid        ");
      Serial.println("invalid command print again...");
    }
    delay(500);
}
}
