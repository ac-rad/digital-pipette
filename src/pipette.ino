#include <Servo.h>

Servo myServo;

int len0 = 1820;
int len5 = 1522;
int len10 = 1286;

#define PIN_SERVO (8)

void setup() {
  Serial.begin(9600);
  Serial.println("Start!");
  myServo.attach(PIN_SERVO);
  myServo.writeMicroseconds(len0);
  delay(5000);
}

void loop() {
  char key;
   if (Serial.available()) {
     key = Serial.read();
     Serial.println(key);
     switch (key) {
      case 'a':
        myServo.writeMicroseconds(len10);
        break;
      case '5':
        myServo.writeMicroseconds(len5);
        break;
      case '0':
        myServo.writeMicroseconds(len0);
        break;
     }
     delay(1000);
   }
}
