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
#include "adc/adc.h"
#include "adc_apollo3/adc_apollo3.h"
#include "console/console.h"
#include "am_mcu_apollo.h"
#ifdef ARCH_sim
#include "mcu/mcu_sim.h"
#endif

#define GPIO_TEST (0)
#define SPI_TEST (0)
#define I2C_TEST (0)
#define UART_TEST (1)
#define ADC_TEST (1)

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
#if ADC_TEST
    /* Pick one of the pins to use as adc pin */
    int adc_pin = MYNEWT_VAL(BUTTON_0_PIN);

    /* Call ambiq hal directly as mynewt hal gpio doesnt support pin config */
    const am_hal_gpio_pincfg_t g_AM_PIN_16_ADCSE0 =
    {
        .uFuncSel       = AM_HAL_PIN_16_ADCSE0,
    };
    am_hal_gpio_pinconfig(adc_pin, g_AM_PIN_16_ADCSE0);

    #define ADC_SAMPLE_BUF_SIZE 128
    uint32_t g_ui32ADCSampleBuffer[ADC_SAMPLE_BUF_SIZE];

    struct adc_cfg os_bsp_adc0_config = {
        .ADCConfig = {
            .eClock             = AM_HAL_ADC_CLKSEL_HFRC,
            .ePolarity          = AM_HAL_ADC_TRIGPOL_RISING,
            .eTrigger           = AM_HAL_ADC_TRIGSEL_SOFTWARE,
            .eReference         = AM_HAL_ADC_REFSEL_INT_1P5,
            .eClockMode         = AM_HAL_ADC_CLKMODE_LOW_LATENCY,
            .ePowerMode         = AM_HAL_ADC_LPMODE0,
            .eRepeat            = AM_HAL_ADC_REPEATING_SCAN,
        },
        .ADCSlotConfig = {
            .eMeasToAvg      = AM_HAL_ADC_SLOT_AVG_128,
            .ePrecisionMode  = AM_HAL_ADC_SLOT_14BIT,
            .eChannel        = AM_HAL_ADC_SLOT_CHSEL_SE0,
            .bWindowCompare  = false,
            .bEnabled        = true,
        },
        .ADCDMAConfig = {
            .bDynamicPriority = true,
            .ePriority = AM_HAL_ADC_PRIOR_SERVICE_IMMED,
            .bDMAEnable = true,
            .ui32SampleCount = ADC_SAMPLE_BUF_SIZE,
            .ui32TargetAddress = (uint32_t)g_ui32ADCSampleBuffer
        }
    };
    struct adc_dev *dev = (struct adc_dev *) os_dev_open("adc0", OS_TIMEOUT_NEVER, &os_bsp_adc0_config);
    assert(dev != NULL);
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

#if ADC_TEST && UART_TEST
        int result = 0;
        adc_read_channel(dev, 0, &result);
        console_printf("Result: %d\n", result);
#endif
        
        ++g_task1_loops;

        /* Wait one second */
        os_time_delay(OS_TICKS_PER_SEC);
    }
    assert(0);

    return rc;
}

