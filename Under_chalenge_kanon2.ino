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
  myservo.attach(3);//attachs the servo on pin 3 to servo object
  myservo.write(95);//back to 95 degrees
  delay(10000);//wait for 10 seconds

myservo.write(95);//goes to 95 degrees
  delay(2000);//wait for 2000 ms
  myservo.write(65);//goes to 65 degrees
  delay(100);//wait for a 0.1 second
  
}
/*************************************************/
void loop()
{
  
  myservo.write(95);//goes to 95 degrees
  delay(1900);//wait for a 1900 ms
  myservo.write(65);//goes to 65 degrees
  delay(100);//wait for a 0.1 second
   myservo.write(95);//goes to 45 degrees
  delay(2000);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
}
/**************************************************/
