/* add user code begin Header */
/**
  **************************************************************************
  * @file     at32f403a_407_wk_config.h
  * @brief    header file of work bench config
  **************************************************************************
  *
  * Copyright (c) 2025, Artery Technology, All rights reserved.
  * SPDX-License-Identifier: BSD-3-Clause
  *
  **************************************************************************
  */
/* add user code end Header */

/* define to prevent recursive inclusion -----------------------------------*/
#ifndef __AT32F403A_407_WK_CONFIG_H
#define __AT32F403A_407_WK_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* includes -----------------------------------------------------------------------*/
#include "stdio.h"
#include "at32f403a_407.h"
/* private includes -------------------------------------------------------------*/
/* add user code begin private includes */

/* add user code end private includes */

/* exported types -------------------------------------------------------------*/
/* add user code begin exported types */

/* add user code end exported types */

/* exported constants --------------------------------------------------------*/
/* add user code begin exported constants */

/* add user code end exported constants */

/* exported macro ------------------------------------------------------------*/
/* add user code begin exported macro */

/* add user code end exported macro */

/* add user code begin dma define */
/* user can only modify the dma define value */
#define DMA1_CHANNEL1_BUFFER_SIZE   0
#define DMA1_CHANNEL1_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL1_PERIPHERAL_BASE_ADDR  0

#define DMA1_CHANNEL2_BUFFER_SIZE   0
#define DMA1_CHANNEL2_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL2_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL3_BUFFER_SIZE   0
#define DMA1_CHANNEL3_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL3_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL4_BUFFER_SIZE   0
#define DMA1_CHANNEL4_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL4_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL5_BUFFER_SIZE   0
#define DMA1_CHANNEL5_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL5_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL6_BUFFER_SIZE   0
#define DMA1_CHANNEL6_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL6_PERIPHERAL_BASE_ADDR   0

//#define DMA1_CHANNEL7_BUFFER_SIZE   0
//#define DMA1_CHANNEL7_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL7_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL1_BUFFER_SIZE   0
#define DMA2_CHANNEL1_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL1_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL2_BUFFER_SIZE   0
#define DMA2_CHANNEL2_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL2_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL3_BUFFER_SIZE   0
#define DMA2_CHANNEL3_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL3_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL4_BUFFER_SIZE   0
//#define DMA2_CHANNEL4_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL4_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL5_BUFFER_SIZE   0
//#define DMA2_CHANNEL5_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL5_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL6_BUFFER_SIZE   0
//#define DMA2_CHANNEL6_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL6_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL7_BUFFER_SIZE   0
//#define DMA2_CHANNEL7_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL7_PERIPHERAL_BASE_ADDR   0
/* add user code end dma define */

/* Private defines -------------------------------------------------------------*/
#define LCD_SCL_PIN    GPIO_PINS_2
#define LCD_SCL_GPIO_PORT    GPIOE
#define LCD_RST_PIN    GPIO_PINS_3
#define LCD_RST_GPIO_PORT    GPIOE
#define LCD_CS_PIN    GPIO_PINS_4
#define LCD_CS_GPIO_PORT    GPIOE
#define IR_TO_MCU_PIN    GPIO_PINS_5
#define IR_TO_MCU_GPIO_PORT    GPIOE
#define LCD_SDA_PIN    GPIO_PINS_6
#define LCD_SDA_GPIO_PORT    GPIOE
#define ADC_IONIC_N1_PIN    GPIO_PINS_0
#define ADC_IONIC_N1_GPIO_PORT    GPIOC
#define ADC_IONIC_P1_PIN    GPIO_PINS_1
#define ADC_IONIC_P1_GPIO_PORT    GPIOC
#define ADC_IONIC_N2_PIN    GPIO_PINS_2
#define ADC_IONIC_N2_GPIO_PORT    GPIOC
#define ADC_IONIC_P2_PIN    GPIO_PINS_3
#define ADC_IONIC_P2_GPIO_PORT    GPIOC
#define FAN_PWM1_PIN    GPIO_PINS_0
#define FAN_PWM1_GPIO_PORT    GPIOA
#define FAN_FG1_PIN    GPIO_PINS_1
#define FAN_FG1_GPIO_PORT    GPIOA
#define UART_RE_2_PIN    GPIO_PINS_4
#define UART_RE_2_GPIO_PORT    GPIOA
#define BUZZER_SW_PIN    GPIO_PINS_7
#define BUZZER_SW_GPIO_PORT    GPIOA
#define WIFI_EN_PIN    GPIO_PINS_4
#define WIFI_EN_GPIO_PORT    GPIOC
#define MCU_DI_PIN    GPIO_PINS_5
#define MCU_DI_GPIO_PORT    GPIOC
#define MCU_DO_PIN    GPIO_PINS_0
#define MCU_DO_GPIO_PORT    GPIOB
#define SW_1_PIN    GPIO_PINS_1
#define SW_1_GPIO_PORT    GPIOB
#define SW_2_PIN    GPIO_PINS_10
#define SW_2_GPIO_PORT    GPIOE
#define SW_3_PIN    GPIO_PINS_11
#define SW_3_GPIO_PORT    GPIOE
#define SW_4_PIN    GPIO_PINS_12
#define SW_4_GPIO_PORT    GPIOE
#define BRUSH_PWM_B2_PIN    GPIO_PINS_13
#define BRUSH_PWM_B2_GPIO_PORT    GPIOE
#define BRUSH_PWM_A2_PIN    GPIO_PINS_14
#define BRUSH_PWM_A2_GPIO_PORT    GPIOE
#define UART_RE_3_PIN    GPIO_PINS_15
#define UART_RE_3_GPIO_PORT    GPIOE
#define B_RGB2_PIN    GPIO_PINS_12
#define B_RGB2_GPIO_PORT    GPIOB
#define G_RGB2_PIN    GPIO_PINS_13
#define G_RGB2_GPIO_PORT    GPIOB
#define R_RGB2_PIN    GPIO_PINS_14
#define R_RGB2_GPIO_PORT    GPIOB
#define B_RGB1_PIN    GPIO_PINS_15
#define B_RGB1_GPIO_PORT    GPIOB
#define G_RGB1_PIN    GPIO_PINS_8
#define G_RGB1_GPIO_PORT    GPIOD
#define R_RGB1_PIN    GPIO_PINS_9
#define R_RGB1_GPIO_PORT    GPIOD
#define FAN_SW2_PIN    GPIO_PINS_10
#define FAN_SW2_GPIO_PORT    GPIOD
#define FAN_SW1_PIN    GPIO_PINS_11
#define FAN_SW1_GPIO_PORT    GPIOD
#define HV_RELAY_SW_PIN    GPIO_PINS_12
#define HV_RELAY_SW_GPIO_PORT    GPIOD
#define FAN_FG2_PIN    GPIO_PINS_13
#define FAN_FG2_GPIO_PORT    GPIOD
#define FAN_PWM2_PIN    GPIO_PINS_14
#define FAN_PWM2_GPIO_PORT    GPIOD
#define BRUSH_PWM_A1_PIN    GPIO_PINS_8
#define BRUSH_PWM_A1_GPIO_PORT    GPIOC
#define BRUSH_PWM_B1_PIN    GPIO_PINS_9
#define BRUSH_PWM_B1_GPIO_PORT    GPIOC
#define UART_RE_1_PIN    GPIO_PINS_11
#define UART_RE_1_GPIO_PORT    GPIOA
#define _ELE_METER_OUT_PIN    GPIO_PINS_15
#define _ELE_METER_OUT_GPIO_PORT    GPIOA
#define UART_RE_5_PIN    GPIO_PINS_0
#define UART_RE_5_GPIO_PORT    GPIOD
#define UART_RE_4_PIN    GPIO_PINS_1
#define UART_RE_4_GPIO_PORT    GPIOD
#define GND_DET_PIN    GPIO_PINS_4
#define GND_DET_GPIO_PORT    GPIOD
#define REAR_COVER_IO2_PIN    GPIO_PINS_5
#define REAR_COVER_IO2_GPIO_PORT    GPIOD
#define FRONT_COVER_IO2_PIN    GPIO_PINS_6
#define FRONT_COVER_IO2_GPIO_PORT    GPIOD
#define REAR_COVER_IO1_PIN    GPIO_PINS_3
#define REAR_COVER_IO1_GPIO_PORT    GPIOB
#define FRONT_COVER_IO1_PIN    GPIO_PINS_4
#define FRONT_COVER_IO1_GPIO_PORT    GPIOB
#define INGK_RST_PIN    GPIO_PINS_5
#define INGK_RST_GPIO_PORT    GPIOB
#define INGK_SCL_PIN    GPIO_PINS_6
#define INGK_SCL_GPIO_PORT    GPIOB
#define INGK_SDA_PIN    GPIO_PINS_7
#define INGK_SDA_GPIO_PORT    GPIOB
#define LCD_DS_PIN    GPIO_PINS_8
#define LCD_DS_GPIO_PORT    GPIOB
#define LCD_BL_PIN    GPIO_PINS_9
#define LCD_BL_GPIO_PORT    GPIOB
#define USART8_RX_WIFI_PIN    GPIO_PINS_0
#define USART8_RX_WIFI_GPIO_PORT    GPIOE
#define USART8_TX_WIFI_PIN    GPIO_PINS_1
#define USART8_TX_WIFI_GPIO_PORT    GPIOE

/* exported functions ------------------------------------------------------- */
  /* system clock config. */
  void wk_system_clock_config(void);

  /* config periph clock. */
  void wk_periph_clock_config(void);

  /* init debug function. */
  void wk_debug_config(void);

  /* nvic config. */
  void wk_nvic_config(void);

  /* init gpio function. */
  void wk_gpio_config(void);

  /* init exint function. */
  void wk_exint_config(void);

  /* init adc1 function. */
  void wk_adc1_init(void);

  /* init i2c1 function. */
  void wk_i2c1_init(void);

  /* init spi4 function. */
  void wk_spi4_init(void);

  /* init usart1 function. */
  void wk_usart1_init(void);

  /* init usart2 function. */
  void wk_usart2_init(void);

  /* init usart3 function. */
  void wk_usart3_init(void);

  /* init uart4 function. */
  void wk_uart4_init(void);

  /* init uart5 function. */
  void wk_uart5_init(void);

  /* init usart6 function. */
  void wk_usart6_init(void);

  /* init uart7 function. */
  void wk_uart7_init(void);

  /* init uart8 function. */
  void wk_uart8_init(void);

  /* init tmr1 function. */
  void wk_tmr1_init(void);

  /* init tmr2 function. */
  void wk_tmr2_init(void);

  /* init tmr4 function. */
  void wk_tmr4_init(void);

  /* init tmr5 function. */
  void wk_tmr5_init(void);

  /* init tmr8 function. */
  void wk_tmr8_init(void);

  /* init tmr9 function. */
  void wk_tmr9_init(void);

  /* init tmr14 function. */
  void wk_tmr14_init(void);

  /* init dma1 channel1 */
  void wk_dma1_channel1_init(void);

  /* init dma1 channel2 */
  void wk_dma1_channel2_init(void);

  /* init dma1 channel3 */
  void wk_dma1_channel3_init(void);

  /* init dma1 channel4 */
  void wk_dma1_channel4_init(void);

  /* init dma1 channel5 */
  void wk_dma1_channel5_init(void);

  /* init dma1 channel6 */
  void wk_dma1_channel6_init(void);

  /* init dma2 channel1 */
  void wk_dma2_channel1_init(void);

  /* init dma2 channel2 */
  void wk_dma2_channel2_init(void);

  /* init dma2 channel3 */
  void wk_dma2_channel3_init(void);

  /* config dma channel transfer parameter */
  /* user need to modify parameters memory_base_addr and buffer_size */
  void wk_dma_channel_config(dma_channel_type* dmax_channely, uint32_t peripheral_base_addr, uint32_t memory_base_addr, uint16_t buffer_size);

/* add user code begin exported functions */

/* add user code end exported functions */

#ifdef __cplusplus
}
#endif

#endif
