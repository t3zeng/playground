/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <assert.h>
#include <string.h>

#include "sysinit/sysinit.h"
#include "os/os.h"
#include "bsp/bsp.h"
#include "hal/hal_gpio.h"
#include "hal/hal_i2c.h"
#include "hal/hal_spi.h"
#ifdef ARCH_sim
#include "mcu/mcu_sim.h"
#endif

#define GPIO_TEST (0)
#define SPI_TEST (1)
#define I2C_TEST (0)

static volatile int g_task1_loops;

#if GPIO_TEST
static void test_isr(void *arg) {
    return;
}
#endif

/**
 * main
 *
 * The main task for the project. This function initializes packages,
 * and then blinks the BSP LED in a loop.
 *
 * @return int NOTE: this function should never return!
 */
int
main(int argc, char **argv)
{
    int rc;

#ifdef ARCH_sim
    mcu_sim_parse_args(argc, argv);
#endif

    sysinit();

#if GPIO_TEST
    int g_led_pin[5] = {MYNEWT_VAL(LED_0_PIN), MYNEWT_VAL(LED_1_PIN), MYNEWT_VAL(LED_2_PIN), MYNEWT_VAL(LED_3_PIN), MYNEWT_VAL(LED_4_PIN)};
    hal_gpio_init_out(g_led_pin[0], 0);
    hal_gpio_init_out(g_led_pin[1], 0);
    hal_gpio_init_out(g_led_pin[2], 0);
    hal_gpio_init_out(g_led_pin[3], 0);
    hal_gpio_init_out(g_led_pin[4], 0);

    /* Set up a gpio irq to validate the functionality, set breakpoint to isr and touch the gpio to ground to hit the breakpoint */
    hal_gpio_irq_init(42, test_isr, NULL,
                      HAL_GPIO_TRIG_FALLING, HAL_GPIO_PULL_UP);
#endif
#if I2C_TEST
    /* Configure i2c for testing */
    uint8_t buf[4];
    struct hal_i2c_master_data test_data = {
        .address = 0x12,
        .len = 4,
        .buffer = buf
    };

#endif
    while (1) {
        /* SPI Write */
        uint16_t read_val = hal_spi_tx_val(1, 0x69);
        while (read_val != 0x85) {
            read_val = hal_spi_tx_val(1, 0x69);
        }

#if I2C_TEST
        /* I2C read */
        hal_i2c_master_read(0, &test_data, 0, 1);
#endif

#if GPIO_TEST
        /* Toggle the LED */
        hal_gpio_toggle(g_led_pin[g_task1_loops%5]);
#endif
        
        ++g_task1_loops;

        /* Wait one second */
        os_time_delay(OS_TICKS_PER_SEC);
    }
    assert(0);

    return rc;
}

