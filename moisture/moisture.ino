#include<Servo.h>

Servo myservo;
int pos = 0;
int sp = A0;
int sv = 0;
int servopin = 9;
void setup(){
  myservo.attach(servopin);
  Serial.begin(9600);
}
void loop(){
  sv = analogRead(sp);
  Serial.print(sv);
  Serial.print("\n");
  if (sv>500){
   for ( int i=0 ; i<=180 ; i+=5){
      myservo.write(i);
      delay(15);
    }
  for (pos = 180 ; pos>=0 ; pos-=5){
   myservo.write(pos);
   delay(15);
   }
 }
delay(1000);
}
