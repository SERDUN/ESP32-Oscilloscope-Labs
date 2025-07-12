#include "esp_log.h"
#include "blink_task.h"
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "esp_rom_sys.h"

static const char *TAG = "BLINK";

//#define BLINK_GPIO GPIO_NUM_2
#define BLINK_GPIO GPIO_NUM_4

#define FREQ_HZ 5     
#define HALF_PERIOD_MS (1000 / (2 * FREQ_HZ))

void setup(){
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

void run(){
    while (1) {
        gpio_set_level(BLINK_GPIO, 1); 
        //esp_rom_delay_us(HALF_PERIOD_MS*1000); 
        vTaskDelay(pdMS_TO_TICKS(HALF_PERIOD_MS));
        gpio_set_level(BLINK_GPIO, 0);
        //esp_rom_delay_us(HALF_PERIOD_MS*1000);
        vTaskDelay(pdMS_TO_TICKS(HALF_PERIOD_MS));
    }
}

void blink_task_start(void) {
    ESP_LOGI(TAG, "Blink task started");
    setup();
    run();
}