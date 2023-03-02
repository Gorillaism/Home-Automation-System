# Home-Automation-System

I want to develope a home automation system.

Door contact - notify when door is open - magnet
Temperature sensor - home heating system
Light sensor -  Check light level and dim
Alarm system - give user 30 sec to walk in and disable
Ir sensor - in alarm system
RGB - light up room

Door contact:
Q = A AND B

Temperature sensor collects the temperature once every minute:
Every 2 hours calculate average and deviation
T = Time = 120 minutes
X = Value = Temperature every minute
A = Average = (X_1 + X_2 + ….. +X_T) / 120 minutes <br />
Deviation = \[ \sum_{n=1}^{\T} (X-A)^2 = 1 \]

