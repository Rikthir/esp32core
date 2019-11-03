#ifndef THEFRAMEWORK_ADC_H
#define THEFRAMEWORK_ADC_H

class xADC
{
public:
    xADC(int pin, int resolution);
    void read(int value);
};

#endif