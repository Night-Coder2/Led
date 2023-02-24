//
// Created by Sudhir on 18-02-2023.
//

#ifndef LED_LED_H
#define LED_LED_H
#include <pico/stdlib.h>
#include <stdint.h>
#include <iostream>

class Led {
    private:
        uint8_t pin;
        uint8_t state;

    public:
        Led() {}
        Led(uint8_t pin);

        void init();

        void on();
        void off();

        void toggle();

        bool isPoweredOn();
};

#endif //LED_LED_H
