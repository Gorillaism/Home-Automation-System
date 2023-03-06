#include <iostream>

bool contact1 = true, contact2 = true, alarm_status = true;
int hex_color = 0xD718A1;
float light_level = 25, hz = 500;

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

void pulse_width()
{
    float time = 1 / hz;
    float percent = light_level / 100;
    float pulse = percent * time;

    std::cout << "Standard equipment: " << hz << "hz dimmer\t Percentage: " << light_level << std::endl;
    std::cout << "The light needs to pulse for " << pulse << " seconds every " << time << " seconds, to achieve " << light_level << "%" << std::endl;
}

int main()
{
    RGB test(hex_color);
    test.getRGB();

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

    pulse_width();

    return 0;
}