#ifndef THEFRAMEWORK_I2C_H
#define THEFRAMEWORK_I2C_H

class xI2C{
    public:
    xI2C(int sck_pin, int sda_pin, int frequency, int mode); // mode is means 10bit or 7bit address 
    void write(int address, char * buff, char startingIndex);
    void read(int address, char * buff, char startingIndex, int length);
};

#endif