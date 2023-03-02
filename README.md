# Home-Automation-System

I want to develope a home automation system.

Door contact - notify when door is open - magnet
Temperature sensor - home heating system
Light sensor -  Check light level and dim
Alarm system - give user 30 sec to walk in and disable
Ir sensor - in alarm system
RGB - light up room

## Door contact:
There would be a magnetic connection on the door and the doorway. <br />
Q = A AND B
## Alarm system:
The Alarm system would work in conjuction with the door contact if turned on. <br />
Q = (A AND B) AND C <br />
If either is broken, would trigger the alarm system to go off.

## Temperature sensor:
The sensor sends the tempurature data every minute. After every 1 hour, the sverage and deviation is calculated. <br />
t = Time = 60 minutes <br />
x = Temperature every minute <br />
x = Average = (x_1 + x_2 + ...etc + x_t) / 60 minutes <br />
Deviation = sqrt(sum of((x - a)^2)/t-1)

![equation](https://user-images.githubusercontent.com/114096417/222480857-b17352bb-b963-4fe4-8874-51e6438808c5.png)

## 
