# Home-Automation-System
I want to develope a home automation system.

It is going include:  
Home security functions for the door  
Tempurature sensor to check the tempurature  
Lights functions like dimming and changing colors

## Hardware
Magnet contacts     - Door security  
Tempurature sensor  - Read Tempurature  
RGB lights          - Changing light color  
Light Dimmer        - Changing light level  


## Home security
### Door contact:
There would be a magnetic connection on the door and the doorway.  
Q = A AND B

### Alarm system:
The Alarm system would work in conjuction with the door contact if turned on.  
Q = (A AND B) AND C  
If either is broken, would trigger the alarm system to go off.

The code for the Home security would look something like this:  
```cpp
// data place holder for input with hardware
bool contact1 = true, contact2 = true, alarm_status = true;

bool door_close(bool c1, bool c2)
{
    if (c1 && c2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    if (door_close(contact1, contact2) && alarm_status)
    {
        std::cout << "Alarm is armed and ready" << std::endl;
    }
    else if (!alarm_status)
    {
        std::cout << "Alarm is off" << std::endl;
    }
    else
    {
        std::cout << "Alarm has been triggered, Authorities has been contacted" << std::endl;
    }
}  
```

## Temperature sensor:
The sensor sends the tempurature data once every minute. After every 1 hour, the average and deviation is calculated.  
n = Time = 60 minutes  
x = Celsius = Temperature every minute  
u = Average = (x_1 + x_2 + ...etc + x_n) / 60 minutes  
Deviation = sqrt(sum of((x - u)^2)/n)

Population standard deviation formula:  
![equation](https://user-images.githubusercontent.com/114096417/222975354-028e4ae0-a154-4385-a29b-38cfb7de0c2e.png)
  
Default output will be Celsius with option to change to Fharenheit:  
Fharenheit = (x * 1.8) + 32

## Lights
### PWM - Pulse Width Modulation
Adjust light level, find out long long we should pulse for for different percentage of light.  

Most common frequeuncy for dimmer is 500Hz.  
Pulse width and time is in seconds.  
Duty cycle is in decimal percentage. Example 25% = 0.25  
PW = Pulse width in seconds  
D = Duty cycle in decimal percentage  
T = 1 / f = Time  
f = Frequense = Hz  

PW = D * T  

T = 1 / f = 1 / 500 = 0.002  
D = 25% = 0.25  
PW = 0.25 * 0.002 = 0.0005  

To achieve 25% light, it should pulse for 0.0005 seconds every 0.002 seconds  
```cpp
// Place holder data
float light_level = 25, hz = 500;

void pulse_width()
{
    float time = 1 / hz;
    float percent = light_level/100;
    float pulse = percent * time;

    std::cout << "Standard equipment: "<< hz <<"hz dimmer\t Percentage: " << light_level << "%" << std::endl;
    std::cout << "The light needs to pulse for " << pulse << " seconds every " << time << " seconds" << std::endl;
}
```  
### Hex to RGB
Change RGB light colors with Hex color code.  
Converting the hex color code to decimal value for RGB.  
Split the hex color code into 3 sections - #D718A1 -> D7|18|A1  
R: 0xD7 = (13 * 16) + 7 = 215  
G: 0x18 = (1 * 16) + 8 = 24  
B: 0xA1 = (10 * 16) + 1 = 161  
The Code could look something like this:  
```cpp
int hex_color = 0xD718A1;

class RGB
{
    int r;
    int g;
    int b;
public:
    RGB(int hex)
    {
        this->r = ((hex >> 16) & 0xFF);
        this->g = ((hex >> 8) & 0xFF);
        this->b = ((hex)&0xFF);
    }
    void setRGB(int hex)
    {
        this->r = ((hex >> 16) & 0xFF);
        this->g = ((hex >> 8) & 0xFF);
        this->b = ((hex)&0xFF);
    }

    void getRGB()
    {
        std::cout << "R: " << this->r << "\tG: " << this->g << "\tB:" << this->b << std::endl;
    }
};
```  

