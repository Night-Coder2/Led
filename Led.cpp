#include "Led.h"

Led::Led(uint8_t pin) {
    this->pin = pin;
    this->state = 0;
}

void Led::init() {
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_OUT);
}

void Led::on() {
    gpio_put(pin, 1);
    state = 1;
}

void Led::off() {
    gpio_put(pin, 0);
    state = 0;
}

void Led::toggle() {
    if (state == 0) {
        on();
    } else {
        off();
    }
}

bool Led::isPoweredOn() {
    return (state == 1);
}