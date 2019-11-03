#ifndef THEFRAMEWORK_UART_H
#define THEFRAMEWORK_UART_H

#include "driver/uart.h"
#include <cstring>

class xUART
{
public:
    xUART(uart_port_t uart_num, int baudrate);
    void write(const char *src);

private:
    uart_port_t _uart_num;
    const int uart_buffer_size = 256;
    QueueHandle_t uart_queue;
};

#endif