# 6 Servo Motor Control & Humanoid Walking Algorithm Simulation

This repository contains the Arduino code and a detailed algorithm for a two-part robotics task focused on controlling servo motors and understanding humanoid locomotion. The project aims to demonstrate precise servo control and conceptualize the complexities of bipedal walking.

---

## Task Overview

This project addresses two distinct but related challenges:

### Task 1: Arduino Control of 6 Servo Motors

**Objective:** Program six servo motors to perform a specific sequence of movements:
1.  **Sweep Action:** All 6 motors will continuously sweep (move back and forth from 0 to 180 degrees) for a duration of **2 seconds**.
2.  **Hold Position:** Immediately after the 2-second sweep, all 6 motors will move to and maintain a **90-degree position** indefinitely.

**Implementation Details:**
* **Platform:** Arduino Uno (simulated in Tinkercad).
* **Components:** 6 Micro Servo Motors (e.g., SG90), Breadboard, Jumper Wires.
* **Wiring:** Servos are connected to Arduino's PWM digital pins (3, 5, 6, 9, 10, 11) via a breadboard for power distribution.
* **Code:** The `arduino_servo_control.ino` file contains the C++ code for the Arduino.

<img width="1440" height="729" alt="arduino_6_servo_motors" src="https://github.com/user-attachments/assets/814411ee-9c29-4867-9066-5ef8b4a65214" />
