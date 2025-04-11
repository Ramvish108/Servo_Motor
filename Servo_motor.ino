#include <Servo.h>
Servo myservo;


void setup() {
myservo.attach(9);
myservo.write(0);
delay(1000);

}

void loop() {
  myservo.write(0);
  delay(100);
  myservo.write(30);
  delay(100);
  myservo.write(45);
  delay(100);
  myservo.write(60);
  delay(100);
  myservo.write(75);
  delay(100);
  myservo.write(90);
  delay(100);
  myservo.write(120);
  delay(100);
  myservo.write(150);
  delay(100);
  myservo.write(180);
  delay(100);
  myservo.write(210);
  delay(100);
  myservo.write(270);
  delay(100);
  exit(0);
}
