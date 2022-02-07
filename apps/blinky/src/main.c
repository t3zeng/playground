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
#include "console/console.h"
#ifdef ARCH_sim
#include "mcu/mcu_sim.h"
#endif

#define GPIO_TEST (0)
#define SPI_TEST (0)
#define I2C_TEST (0)
#define UART_TEST (1)

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
#if SPI_TEST
uint8_t txbuf[128];
uint8_t rxbuf[128];
memset(txbuf, 0, 128);
memset(rxbuf, 0, 128);
#endif

    while (1) {
#if UART_TEST
        console_printf("Hello world!\n");
#endif
#if SPI_TEST
/* Works in conjunction with following micropython code */
// spi = pyb.SPI(2, pyb.SPI.SLAVE, polarity=0, phase=0)

// # NSS callback.
// recv_val = bytearray(2)
// def nss_callback(line):
//     global spi, data, recv_val
    
//     print("Cb hit!")
//     try:
//         spi.recv(recv_val)
//         print(recv_val)
//         spi.send(0x0085, timeout=1000)
//     except OSError as err:
//         pass # Don't care about errors - so pass.

// # Configure NSS/CS in IRQ mode to send data when requested by the master.
// pyb.ExtInt(pyb.Pin("P3"), pyb.ExtInt.IRQ_FALLING, pyb.Pin.PULL_UP, nss_callback)

// while(True):
//     time.sleep_ms(1000)
        /* SPI Write */
        txbuf[0] = 0x69;
        hal_spi_txrx(1, txbuf, rxbuf, 2);
        uint16_t read_val = rxbuf[0];
        while (read_val != 0x85) {
            hal_spi_txrx(1, txbuf, rxbuf, 2);
            read_val = rxbuf[0];
            os_time_delay(10);
        }
#endif

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

