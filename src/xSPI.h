#ifndef THEFRAMEWORK_SPI_H
#define THEFRAMEWORK_SPI_H

class xSPI
{
public:
    xSPI(int sck_pin, int mosi_pin, int miso_pin);
    void read();
    void write();
};

#endif