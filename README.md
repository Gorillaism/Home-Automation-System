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
Every 2 hours calculate average and deviation <br />
t = Time = 120 minutes <br />
X = Value = Temperature every minute <br />
A = Average = (X_1 + X_2 + … +X_T) / 120 minutes <br />
Deviation = sqrt(sum of((X - A)^2)/T)

![equation](https://user-images.githubusercontent.com/114096417/222475047-ad44a96c-8475-478d-8189-aa0e26bd8a62.png)
