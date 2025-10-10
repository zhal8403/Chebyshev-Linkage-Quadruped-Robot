# Chebyshev-Linkage-Quadruped-Robot
A small walking robot that uses a single 28BYJ-48 stepper motor and a Chebyshev linkage mechanism to generate four synchronized walking legs. Powered by an Arduino Uno R3 and a ULN2003 driver, it demonstrates mechanical walking using one actuator, with motion transferred through pulleys and rubber bands.

---

Project Overview
The goal of this project is to create a simple, printable quadruped robot that moves using Chebyshev linkage motion while being wireless.

- Motion Type: Chebyshev linkage (non-circular walking motion)  
- Actuation: Single 28BYJ-48 stepper motor  
- Transmission: Rubber bands on pulleys  
- Control: Arduino Uno R3 + ULN2003 driver board  
- Power: 9V battery  

---

Parts
All CAD parts were designed in Onshape and exported as STL (for printing) and STEP (for sharing) formats.

---

Design Notes
This model is **based on a design by Thang010146**, which originally was a 3d model of a chebyshev pantigrade that didnt have any electronics or way of making a real life model.  
I redesigned and adjusted the proportions to:
- Fit a 28BYJ-48 stepper motor  
- Hold Arduino Uno, ULN2003 driver, and 9V battery on the frame  
- Scaling of peices

---

Electronics

Arduino Uno R3: Main controller
ULN2003 Driver: Drives the stepper motor
28BYJ-48 Stepper Motor: Provides rotational motion
9V Battery: Power source for motor and board

---

How It Works
The stepper motor drives a pulley system through the ULN2003 driver.  
Rubber bands transfer torque to all four legs, which move in a Chebyshev linkage pattern to simulate walking.  

---

Code
The Arduino code (`/Code/motor_control.ino`) turns the stepper motor forward at 10 RPM to show a simple continuous walking motion.  

---

License
Open source under the MIT License.  
Feel free to remix, improve, or expand the design for your own robotics experiments.
