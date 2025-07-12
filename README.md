# 📘 ESP32 Oscilloscope Labs — Навички та Практика

Цей репозиторій — практична збірка задач для роботи з **сигналами на ESP32**, які можна візуалізувати за допомогою **осцилографа**. Кожна задача — це не просто код, а реальний сценарій, який тренує критичні навички Embedded-інженера.

---

## 📚 Необхідні знання перед стартом

### ✅ Програмування на C
- Розуміння конструкцій: `while`, `for`, `if`, `switch`
- Робота зі змінними, масивами
- Базове уявлення про `#include`, `.h/.c` файли

### ✅ Робота з ESP32 (ESP-IDF)
- Як створити проєкт (`idf.py create project`)
- Як компілювати та прошивати (`idf.py build flash`)
- Як запускати монітор (`idf.py monitor`)
- Як працювати з `app_main()`

### ✅ GPIO і сигнали
- Як встановити GPIO в режим виходу
- Як подавати сигнал: `gpio_set_level`, `gpio_set_direction`
- Як задавати затримки: `vTaskDelay`, `esp_rom_delay_us`

### ✅ FreeRTOS основи
- Розуміння задач (`Task`)
- Неблокуючі затримки (`vTaskDelay`)
- Пріоритети (базово)

### ✅ PWM та DAC
- Генерація широтно-імпульсних сигналів через LEDC
- Вивід аналогового сигналу через DAC (`dac_output_voltage`)

### ✅ Основи осцилографа
- Як підключити щуп (GPIO ↔ GND)
- Як виставити масштаб по часу/напрузі
- Як зчитувати форму сигналу, частоту, амплітуду
- Як тригеритись по фронту

---

## 🧪 Таблиця задач

| №  | Назва задачі                | Суть задачі                            | Реальний сценарій                   | 🔗 Посилання на код / опис                    | 🖼️ Осцилограма / результат                    |
| -- | --------------------------- | -------------------------------------- | ----------------------------------- | --------------------------------------------- | ---------------------------------------------- |
| 1  | **Blink-Scope**             | Миготіння з точною частотою (1–10 Гц)  | Watchdog, alive-перевірка           | [`blink_task.c`](./main/blink/blink_task.c)         | ![5Hz](./img/5hz_square_wave.jpg)     |
| 2  | **PWM Visualizer**          | PWM із різною шпаруватістю             | Яскравість LED, двигуни             | [`pwm_visualizer.c`](./main/pwm_visualizer.c) | ![PWM](./oscilloscope/pwm_duty_demo.jpg)       |
| 3  | **DAC Sine Wave Generator** | Синусоїда через DAC                    | Генератор тест-сигналу              | [`dac_sine.c`](./main/dac_sine.c)             | ![Sine](./oscilloscope/dac_sine.jpg)           |
| 4  | **PWM-to-Analog RC Filter** | PWM → фільтр → аналоговий рівень       | Управління аналоговим навантаженням | [`pwm_rc_filter.c`](./main/pwm_rc_filter.c)   | ![RC](./oscilloscope/pwm_filtered.jpg)         |
| 5  | **Short Pulse Generator**   | Точні короткі імпульси                 | Строб, ультразвук, лазер            | [`short_pulse.c`](./main/short_pulse.c)       | ![Pulse](./oscilloscope/short_pulse.jpg)       |
| 6  | **Burst Pulse Packet**      | Пачка імпульсів з паузами              | RF модуляція, IR-сигнал             | [`burst_packet.c`](./main/burst_packet.c)     | ![Burst](./oscilloscope/burst_packet.jpg)      |
| 7  | **Manual UART Frame**       | UART 9600 бод вручну                   | Сумісність із low-level пристроєм   | [`uart_manual.c`](./main/uart_manual.c)       | ![UART](./oscilloscope/manual_uart.jpg)        |
| 8  | **SPI Clock Simulation**    | CLK + MOSI вручну                      | Тестовий SPI вивід                  | [`spi_sim.c`](./main/spi_sim.c)               | ![SPI](./oscilloscope/spi_sim.jpg)             |
| 9  | **Execution Time Marker**   | HIGH до/після блоку — замір тривалості | Профілювання функцій                | [`exec_time.c`](./main/exec_time.c)           | ![Marker](./oscilloscope/exec_time_marker.jpg) |
| 10 | **AM Sine Envelope**        | Синусоїда зі згасанням амплітуди       | Моделювання звукового сигналу       | [`am_sine.c`](./main/am_sine.c)               | ![AM](./oscilloscope/am_envelope.jpg)          |


---

## 🧭 Рекомендований порядок
1. Почни з задач 1–2 (GPIO, PWM)
2. Перейди до DAC та фільтрів (3–4)
3. Попрацюй з мікрозатримками (5–6)
4. Пограйся з комунікаціями (7–8)
5. Заверши профілюванням і генерацією звуку (9–10)
