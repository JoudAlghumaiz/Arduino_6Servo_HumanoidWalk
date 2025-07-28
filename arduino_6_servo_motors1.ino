// C++ code
//
#include <Servo.h>

// Create 6 Servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Define the pins for each servo
const int servo1Pin = 3; 
const int servo2Pin = 5;
const int servo3Pin = 6;
const int servo4Pin = 9;
const int servo5Pin = 10;
const int servo6Pin = 11;

void setup() {
  
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
  servo5.attach(servo5Pin);
  servo6.attach(servo6Pin);

 
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  delay(500); 
}

void loop() {
  // --- Part 1: Sweep for 2 seconds ---
  unsigned long startTime = millis(); 

  while (millis() - startTime < 2000) { 
    for (int pos = 0; pos <= 180; pos += 1) { 
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(15); 
    }
    for (int pos = 180; pos >= 0; pos -= 1) { 
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(15);
    }
  }

  // --- Part 2: Hold all motors at 90 degrees ---
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);

  
  while (true) {
    
  }
}