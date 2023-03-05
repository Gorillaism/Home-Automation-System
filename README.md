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
n = Time = 60 minutes <br />
x = Celsius = Temperature every minute <br />
u = Average = (x_1 + x_2 + ...etc + x_n) / 60 minutes <br />
Deviation = sqrt(sum of((x - u)^2)/n-1)

![equation](https://user-images.githubusercontent.com/114096417/222480857-b17352bb-b963-4fe4-8874-51e6438808c5.png)
  
Default output will be Celsius with option to change to Fharenheit: <br />
Fharenheit = (x * 1.8) + 32

## Scale

## Lights
### PWM - Pulse Width Modulation <br />
Adjust light level, find out long long we should pulse for for different percentage of light. <br />

Most common frequeuncy for dimmer is 500Hz. <br />
Pulse width and time is in seconds. <br />
Duty cycle is in decimal percentage. Example 25% = 0.25 <br />
PW = Pulse width <br />
D = Duty cycle <br />
T = 1/f = Time <br />
f = Frequense = Hz <br />

PW = D * T <br />

T = 1/f = 1 / 500 = 0.002 <br/>
D = 25% = 0.25 <br />
PW = 0.25 * 0.002 = 0.0005 <br />

To achieve 25% light, it should pulse for 0.0005 seconds every 0.002 seconds <br />

### Hex to RGB
Change RGB light colors with Hex color code. <br />
Converting the hex color code to decimal value for RGB. <br />
Split the hex color code into 3 sections - #D718A1 -> D7|18|A1 <br />
R: 0xD7 = (13 * 16) + 7 = 215 <br />
G: 0x18 = (1 * 16) + 8 = 24 <br />
B: 0xA1 = (10 * 16) + 1 = 161 <br />
