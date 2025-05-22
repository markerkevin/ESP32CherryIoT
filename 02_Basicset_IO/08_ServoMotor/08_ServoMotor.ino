#include <ESP32Servo.h> //ESP32Servo by Kevin Harrington

const int motorPin = 3; //3:ConnectorA 4:ConnectorB

Servo myservo;

void setup() {
  myservo.attach(motorPin);
}
void loop() {
  // 0-180 right
  for(int angle = 0; angle <= 90; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 15; angle <= 105; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 30; angle <= 120; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 45; angle <= 135; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 60; angle <= 150; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 75; angle <= 165; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
  for(int angle = 90; angle <= 180; angle+=10) {                        
    myservo.write(angle);
    delay(100);
  }
}

