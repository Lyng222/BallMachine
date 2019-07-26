
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
  myservo.write(95);//back to 0 degrees
  delay(10000);//wait for a second


  // Koden fortsættes herfra med 4. x speed

myservo.write(95);//goes to 15 degrees
  delay(1700);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(3700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1800);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

// 1. omgang 4. hastighed.

 myservo.write(95);//goes to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(3700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 2. omgang med 4. hastighed

myservo.write(95);//goes to 45 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2800);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 3. omgang med 4. hastighed

  // Start 1. omgang 5. hastighed.

myservo.write(95);//goes to 15 degrees
  delay(1600);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(3600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

// 1. omgang 5. speed.

 myservo.write(95);//goes to 15 degrees
  delay(1600);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(3600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 2. omgang 5. speed

myservo.write(95);//goes to 45 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second
  
// 3. omgang 5. speed

// Kodet hertil

  
}
/*************************************************/
void loop()
{

myservo.write(95);//goes to 15 degrees
  delay(1700);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(3700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1800);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

// 1. omgang 4. hastighed.

 myservo.write(95);//goes to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(3700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 2. omgang med 4. hastighed

myservo.write(95);//goes to 45 degrees
  delay(1700);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(700);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2800);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(700);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 3. omgang med 4. hastighed

  // Start 1. omgang 5. hastighed.

myservo.write(95);//goes to 15 degrees
  delay(1600);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(3600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

// 1. omgang 5. speed.

 myservo.write(95);//goes to 15 degrees
  delay(1600);//wait for a second
  myservo.write(65);//goes to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(1600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(3600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second

  // 2. omgang 5. speed

myservo.write(95);//goes to 45 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//goes to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//goes to 75 degrees
  delay(2700);//wait for a second.33
  myservo.write(65);//goes to 90 degrees
  delay(100);//wait for a second
  myservo.write(95);//back to 75 degrees
  delay(600);//wait for a second.33
  myservo.write(65);//back to 60 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 45 degrees
  delay(2600);//wait for a second.33
  myservo.write(65);//back to 30 degrees
  delay(100);//wait for a second.33
  myservo.write(95);//back to 15 degrees
  delay(600);//wait for a second
  myservo.write(65);//back to 0 degrees
  delay(100);//wait for a second
 
}

