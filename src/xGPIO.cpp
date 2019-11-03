#include "xGPIO.h"

xGPIO::xGPIO(gpio_num_t pin, gpio_mode_t mode)
{
    _pin = pin;
}

int xGPIO::read()
{
    gpio_pad_select_gpio(_pin);
    gpio_set_direction(_pin, GPIO_MODE_INPUT);
    return gpio_get_level(_pin);
}

void xGPIO::write(int state)
{
    gpio_pad_select_gpio(_pin);
    gpio_set_direction(_pin, GPIO_MODE_OUTPUT);
    gpio_set_level(_pin, state);
}
