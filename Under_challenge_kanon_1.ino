/***********************************************
* name:Servo
* function:you can see the servo motor rotate 90 degrees (rotate once every 15 degrees).
* And then rotate in the opposite direction.
************************************************/
//Email: support@sunfounder.com
//Website: www.sunfounder.com

#include <Servo.h>
/************************************************/
Servo myservo;//create servo object to control a servo
/************************************************/
void setup()
{
  myservo.attach(3);//attachs the servo on pin 9 to servo object
  myservo.write(90);//back to 0 degrees
  delay(10000);//wait for a second

myservo.write(90);//goes to 15 degrees
  delay(1000);//wait for a second
  myservo.write(60);//goes to 30 degrees
  delay(100);//wait for a second.33
  
}
/*************************************************/
void loop()
{
  
  myservo.write(90);//goes to 45 degrees
  delay(4000);//wait for a second.33
  myservo.write(60);//goes to 60 degrees
  delay(100);//wait for a second.33
}
/**************************************************/
