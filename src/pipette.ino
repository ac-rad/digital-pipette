#include <Servo.h>
Servo myServo;

#define len0 (1820)
#define PIN_SERVO (8)

void setup()
{
  Serial.begin(9600);
  Serial.println("Start!");
  myServo.attach(PIN_SERVO);
  myServo.writeMicroseconds(len0);
  delay(5000);
}


void loop()
{
   if ( Serial.available() ) {
     String len_str = Serial.readString();
     Serial.print("Received Value: ");
     Serial.println(len_str);
     int len = len_str.toInt();
     if (len >= 1000 && len <= 2000)
     {
        Serial.println("Valid value");
        myServo.writeMicroseconds(len);
     } else {
        Serial.println("Invalid value");
     }
   }
}
