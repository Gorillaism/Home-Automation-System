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

Temperature sensor:

The sensor sends the tempurature data every minute. After every 1 hour, the sverage and deviation is calculated. <br />
t = Time = 60 minutes <br />
x = Temperature every minute <br />
x = Average = (x_1 + x_2 + ...etc + x_t) / 60 minutes <br />
Deviation = sqrt(sum of((x - a)^2)/t-1)

![equation](https://user-images.githubusercontent.com/114096417/222475047-ad44a96c-8475-478d-8189-aa0e26bd8a62.png)
