#ifndef THEFRAMEWORK_PWM_H
#define THEFRAMEWORK_PWM_H

class xPWM
{
public:
    xPWM(long frequency, int resolution);
    void write(float value);
};


#endif
