#include<Servo.h>

Servo myservo;
char serial_data;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(82);
}
void loop() {
  if (Serial.available()>0)
  {
    serial_data=Serial.read();
    if (serial_data == 'B')
    {
      myservo.write(130);
      Serial.println('B');
    }
    else if (serial_data == 'O')
    {
      myservo.write(30);
      Serial.println('O');
    }
    else if (serial_data == 'N')
    {
      myservo.write(82);
      Serial.println('N');
    }
    
    
  }
 }


