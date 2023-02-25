/*
 * led.c
 *
 * created: 2023/2/26
 *  author:
 */
#include "led.h"
#include "ls1b_gpio.h"
void led_init(void)
{
    gpio_enable(34,DIR_OUT);
    gpio_enable(35,DIR_OUT);
    gpio_enable(37,DIR_OUT);
}

void led_test(void)
{
    gpio_write(34,1);
    gpio_write(35,0);
    gpio_write(37,0);
    delay_ms(500);
    gpio_write(34,0);
    gpio_write(35,1);
    gpio_write(37,0);
    delay_ms(500);
    gpio_write(34,0);
    gpio_write(35,0);
    gpio_write(37,1);
    delay_ms(500);
}

