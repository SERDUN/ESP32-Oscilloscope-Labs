#include <stdio.h>
#include "esp_log.h"
#include "blink/blink_task.h"

static const char *TAG = "APP_CONSOLE";

void app_main(void)
{
    ESP_LOGI(TAG, "Initializing app...");
    blink_task_start();
}