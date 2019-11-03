#ifndef THEFRAMEWORK_GPIO_H
#define THEFRAMEWORK_GPIO_H

#include "driver/gpio.h"

class xGPIO
{
public:
    xGPIO(gpio_num_t pin, gpio_mode_t mode = GPIO_MODE_INPUT_OUTPUT);
    int read();
    void write(int state);

private:
    gpio_num_t _pin;
};
#endif