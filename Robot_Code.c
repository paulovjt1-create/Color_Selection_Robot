#include <Servo.h>

Servo servoA;
Servo servoB;
Servo servoC;
Servo servoD;
const int BT1 = 7;
const int ATIVO = 1;
const int DESATIVO = 2;
const int BOMBA = 8;

void setup (){
  
  servoA.attach(6);
  servoB.attach(5);
  servoC.attach(4);
  servoD.attach(3);
  pinMode(BT1, INPUT);
  pinMode(ATIVO, OUTPUT);
  pinMode(DESATIVO, OUTPUT);
  pinMode(BOMBA, OUTPUT);
}

void loop () { 
    
  if (digitalRead(BT1) == HIGH) {
      digitalWrite(ATIVO, HIGH);
      digitalWrite(DESATIVO, LOW);
  }
  else{
      digitalWrite(ATIVO, LOW);
      digitalWrite(DESATIVO, HIGH);
      digitalWrite(BOMBA, HIGH);
  }
  while (digitalRead(ATIVO) == HIGH) {
    servoA.write(180);
    delay(2000);
    servoA.write(90);
    delay(500);
    servoB.write(90);
    delay(1000);
    servoD.write(12);
    delay(2000);
    servoB.write(35);
    delay(1500);
    servoA.write(0);
    delay(2000);
    digitalWrite(BOMBA, LOW);
    servoB.write(20);
    delay(2000);
    servoB.write(90);
    delay(2000);
    servoD.write(174);
    delay(2000);
    digitalWrite(BOMBA, HIGH);
    servoB.write(25);
    delay(2000);
    servoD.write(171);
    delay(2000);
    servoB.write(90);
    delay(2000);
//
    servoA.write(180);
    delay(2000);
    servoA.write(90);
    delay(500);
    servoB.write(90);
    delay(1000);
    servoD.write(12);
    delay(2000);
    servoB.write(35);
    delay(1500);
    servoA.write(0);
    delay(2000);
    digitalWrite(BOMBA, LOW);
    servoB.write(20);
    delay(2000);
    servoB.write(90);
    delay(2000);
    servoD.write(154);
    delay(2000);
    digitalWrite(BOMBA, HIGH);
    servoB.write(25);
    delay(2000);
    servoD.write(151);
    delay(2000);
    servoB.write(90);
    delay(2000);
//
    servoA.write(180);
    delay(2000);
    servoA.write(90);
    delay(500);
    servoB.write(90);
    delay(1000);
    servoD.write(12);
    delay(2000);
    servoB.write(35);
    delay(1500);
    servoA.write(0);
    delay(2000);
    digitalWrite(BOMBA, LOW);
    servoB.write(20);
    delay(2000);
    servoB.write(90);
    delay(2000);
    servoD.write(134);
    delay(2000);
    digitalWrite(BOMBA, HIGH);
    servoB.write(25);
    delay(2000);
    servoD.write(131);
    delay(2000);
    servoB.write(90);
    delay(2000);
 }
}
