# Laser-Security-System---Arduino-Project
Create a security alarm system using a laser pointer and LDR. When the laser beam is interrupted, an alarm (buzzer) goes off.

Components Needed
- Arduino UNO - 1
- LDR (Light Sensor) - 1
- 10kOhm Resistor (for voltage divider) - 1
- Laser pointer module - 1
- Buzzer - 1
- Breadboard - 1
- Jumper Wires - As needed
- Power supply - 1
- Working Principle :- 
  A laser shines directly on an LDR. The LDR and a 10kOhm resistor form a voltage divider circuit.
  When the beam is interrupted, the light falling on the LDR drops, increasing its resistance. This
  change is detected by Arduino via an analog pin and it triggers a buzzer alarm.
  Wiring Summary
  
- LDR + Resistor (Voltage Divider):
- One end of LDR -> 5V
- Other end of LDR -> Analog pin A0 and one end of 10kOhm resistor
- Other end of resistor -> GND
Buzzer:
- Positive pin -> Arduino digital pin 8
- Negative pin -> GND

- Setup Instructions
1. Align the laser to shine directly on the LDR.
2. Adjust the threshold value in code using the Serial Monitor.
3. When someone interrupts the beam, the buzzer will sound.
Tips
- Place the laser and LDR in opposite directions, pointing at each other.
- You can hide the laser and LDR inside a door frame or entrance.
- Replace the buzzer with a relay to control lights, alarms, or even send SMS using a GSM module
