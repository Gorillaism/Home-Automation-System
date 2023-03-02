# Home-Automation-System

I want to develope a home automation system.

Door contact - notify when door is open - magnet
Temperature sensor - home heating system
Light sensor -  Check light level and dim
Alarm system - give user 30 sec to walk in and disable
Ir sensor - in alarm system
RGB - light up room
In home scale

## Door contact:
There would be a magnetic connection on the door and the doorway. <br />
Q = A AND B
## Alarm system:
The Alarm system would work in conjuction with the door contact if turned on. <br />
Q = (A AND B) AND C <br />
If either is broken, would trigger the alarm system to go off.

## Temperature sensor:
The sensor sends the tempurature data once every minute. After every 1 hour, the average and deviation is calculated. <br />
t = Time = 60 minutes <br />
c = Celsius = Temperature every minute <br />
a = Average = 

\frac{1}{t}\sum c_i

Deviation = sqrt(sum of((c - a)^2)/t-1)

![equation](https://user-images.githubusercontent.com/114096417/222480857-b17352bb-b963-4fe4-8874-51e6438808c5.png)

Default output will be Celsius with option to change to Fharenheit: <br />
f = Fharenheit = (c * 1.8) + 32

## Scale

## Lights
Change RGB light colors with Hex color code. <br />
Converting the hex color code to decimal value for RGB. <br />
Split the hex color code into 3 sections - #D718A1 -> D7|18|A1 <br />
R: 0xD7 = (13 * 16) + 7 = 215 <br />
G: 0x18 = (1 * 16) + 8 = 24 <br />
B: 0xA1 = (10 * 16) + 1 = 161 <br />


