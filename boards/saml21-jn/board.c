/*
 * Copyright (C) 2015 Kaspar Schleiser <kaspar@schleiser.de>
 *               2015 FreshTemp, LLC.
 *               2014 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_saml21-jn
 * @{
 *
 * @file        board.c
 * @brief       Board specific implementations for the Atem SAM L21 JN
 *
 * @author      Thomas Eichinger <thomas.eichinger@fu-berlin.de>
 * @author      Kaspar Schleiser <kaspar@schleiser.de>
 *
 * @}
 */

#include <stdio.h>

#include "board.h"
#include "cpu.h"
#include "periph/gpio.h"

void led_init(void);

void board_init(void)
{
    /* initialize the CPU */
    cpu_init();

    /* initialize the boards LEDs */
    led_init();
}


/**
 * @brief Initialize the boards on-board LED
 */
void led_init(void)
{
    gpio_init(GPIO_PIN(PA,8), GPIO_OUT);
    gpio_init(GPIO_PIN(PA,9), GPIO_OUT);
    gpio_init(GPIO_PIN(PA,10), GPIO_OUT);
    gpio_init(GPIO_PIN(PA,11), GPIO_OUT);
//    gpio_set(GPIO_PIN(PA,10));
//    gpio_set(GPIO_PIN(PA,11));

}
