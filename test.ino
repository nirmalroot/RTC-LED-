#include <LiquidCrystal.h>
int val;
String msg="led turn on";
String msg1="led turn off";

LiquidCrystal lcd(53, 52, 50, 51, 48, 49);//pins of lcd (RS, E, D4, D5, D6, D7)
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}
void loop() {
  val=analogRead(A8);
  Serial.println (analogRead(val));
  
  if (analogRead(val)<394){
  lcd.clear();
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  lcd.print(msg1);
  delay(500);
  }  
  else{
  lcd.clear();
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  lcd.print(msg);
  delay(500);
  }
    delay(600);
}
