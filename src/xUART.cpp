#include "xUART.h"

xUART::xUART(uart_port_t uart_num, int baudrate)
{

    _uart_num = uart_num;
    uart_config_t uart_config = {
        .baud_rate = baudrate,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
    };
    // Configure UART parameters
    uart_param_config(_uart_num, &uart_config);

    uart_driver_install(_uart_num, uart_buffer_size, uart_buffer_size, 10, &uart_queue, 0);
    //uart_driver_install(_uart_num, 0, 0, 0, NULL, 0);
    //uart_set_pin(_uart_num, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

void xUART::write(const char *src)
{
    uart_write_bytes(_uart_num, src, strlen(src));
}