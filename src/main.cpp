#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "xGPIO.h"
#include "xUART.h"

xGPIO output(GPIO_NUM_2, GPIO_MODE_OUTPUT);
xGPIO input(GPIO_NUM_36, GPIO_MODE_INPUT);
//xUART uart(UART_NUM_2, 115200);

extern "C" void app_main(void)
 {
    for (;;)
    {
        output.write(input.read());
        vTaskDelay(50 / portTICK_PERIOD_MS);
    }
}