/* add user code begin Header */
/**
  **************************************************************************
  * @file     at32f403a_407_int.c
  * @brief    main interrupt service routines.
  **************************************************************************
  *
  * Copyright (c) 2025, Artery Technology, All rights reserved.
  * SPDX-License-Identifier: BSD-3-Clause
  *
  **************************************************************************
  */
/* add user code end Header */

/* includes ------------------------------------------------------------------*/
#include "at32f403a_407_int.h"
#include "wk_system.h"
#include "freertos_app.h"

/* private includes ----------------------------------------------------------*/
/* add user code begin private includes */

/* add user code end private includes */

/* private typedef -----------------------------------------------------------*/
/* add user code begin private typedef */

/* add user code end private typedef */

/* private define ------------------------------------------------------------*/
/* add user code begin private define */

/* add user code end private define */

/* private macro -------------------------------------------------------------*/
/* add user code begin private macro */

/* add user code end private macro */

/* private variables ---------------------------------------------------------*/
/* add user code begin private variables */

/* add user code end private variables */

/* private function prototypes --------------------------------------------*/
/* add user code begin function prototypes */

/* add user code end function prototypes */

/* private user code ---------------------------------------------------------*/
/* add user code begin 0 */

/* add user code end 0 */

/* external variables ---------------------------------------------------------*/
/* add user code begin external variables */

/* add user code end external variables */

/**
  * @brief  this function handles nmi exception.
  * @param  none
  * @retval none
  */
void NMI_Handler(void)
{
  /* add user code begin NonMaskableInt_IRQ 0 */

  /* add user code end NonMaskableInt_IRQ 0 */

  /* add user code begin NonMaskableInt_IRQ 1 */

  /* add user code end NonMaskableInt_IRQ 1 */
}

/**
  * @brief  this function handles hard fault exception.
  * @param  none
  * @retval none
  */
void HardFault_Handler(void)
{
  /* add user code begin HardFault_IRQ 0 */

  /* add user code end HardFault_IRQ 0 */
  /* go to infinite loop when hard fault exception occurs */
  while (1)
  {
    /* add user code begin W1_HardFault_IRQ 0 */

    /* add user code end W1_HardFault_IRQ 0 */
  }
}


/**
  * @brief  this function handles memory manage exception.
  * @param  none
  * @retval none
  */
void MemManage_Handler(void)
{
  /* add user code begin MemoryManagement_IRQ 0 */

  /* add user code end MemoryManagement_IRQ 0 */
  /* go to infinite loop when memory manage exception occurs */
  while (1)
  {
    /* add user code begin W1_MemoryManagement_IRQ 0 */

    /* add user code end W1_MemoryManagement_IRQ 0 */
  }
}

/**
  * @brief  this function handles bus fault exception.
  * @param  none
  * @retval none
  */
void BusFault_Handler(void)
{
  /* add user code begin BusFault_IRQ 0 */

  /* add user code end BusFault_IRQ 0 */
  /* go to infinite loop when bus fault exception occurs */
  while (1)
  {
    /* add user code begin W1_BusFault_IRQ 0 */

    /* add user code end W1_BusFault_IRQ 0 */
  }
}

/**
  * @brief  this function handles usage fault exception.
  * @param  none
  * @retval none
  */
void UsageFault_Handler(void)
{
  /* add user code begin UsageFault_IRQ 0 */

  /* add user code end UsageFault_IRQ 0 */
  /* go to infinite loop when usage fault exception occurs */
  while (1)
  {
    /* add user code begin W1_UsageFault_IRQ 0 */

    /* add user code end W1_UsageFault_IRQ 0 */
  }
}

/**
  * @brief  this function handles debug monitor exception.
  * @param  none
  * @retval none
  */
void DebugMon_Handler(void)
{
  /* add user code begin DebugMonitor_IRQ 0 */

  /* add user code end DebugMonitor_IRQ 0 */
  /* add user code begin DebugMonitor_IRQ 1 */

  /* add user code end DebugMonitor_IRQ 1 */
}

extern void xPortSysTickHandler(void);

/**
  * @brief  this function handles systick handler.
  * @param  none
  * @retval none
  */
void SysTick_Handler(void)
{
  /* add user code begin SysTick_IRQ 0 */

  /* add user code end SysTick_IRQ 0 */

  wk_timebase_handler();

#if (INCLUDE_xTaskGetSchedulerState == 1 )
  if (xTaskGetSchedulerState() != taskSCHEDULER_NOT_STARTED)
  {
#endif /* INCLUDE_xTaskGetSchedulerState */
  xPortSysTickHandler();
#if (INCLUDE_xTaskGetSchedulerState == 1 )
  }
#endif /* INCLUDE_xTaskGetSchedulerState */

  /* add user code begin SysTick_IRQ 1 */

  /* add user code end SysTick_IRQ 1 */
}

/**
  * @brief  this function handles EXINT Line 1 handler.
  * @param  none
  * @retval none
  */
void EXINT1_IRQHandler(void)
{
  /* add user code begin EXINT1_IRQ 0 */

  /* add user code end EXINT1_IRQ 0 */

  if(exint_interrupt_flag_get(EXINT_LINE_1) != RESET)
  {
    /* add user code begin EXINT_LINE_1 */
    /* clear flag */
    exint_flag_clear(EXINT_LINE_1);
    /* add user code end EXINT_LINE_1 */ 
  }

  /* add user code begin EXINT1_IRQ 1 */

  /* add user code end EXINT1_IRQ 1 */
}

/**
  * @brief  this function handles TMR1 Brake and TMR9 handler.
  * @param  none
  * @retval none
  */
void TMR1_BRK_TMR9_IRQHandler(void)
{
  /* add user code begin TMR1_BRK_TMR9_IRQ 0 */

  /* add user code end TMR1_BRK_TMR9_IRQ 0 */

  /* add user code begin TMR1_BRK_TMR9_IRQ 1 */

  /* add user code end TMR1_BRK_TMR9_IRQ 1 */
}

/**
  * @brief  this function handles TMR2 handler.
  * @param  none
  * @retval none
  */
void TMR2_GLOBAL_IRQHandler(void)
{
  /* add user code begin TMR2_GLOBAL_IRQ 0 */

  /* add user code end TMR2_GLOBAL_IRQ 0 */

  /* overflow interrupt management */
  if(tmr_interrupt_flag_get(TMR2, TMR_OVF_FLAG) != RESET)
  {
    /* add user code begin TMR2_TMR_OVF_FLAG */
    /* clear flag */
    tmr_flag_clear(TMR2, TMR_OVF_FLAG);
    /* add user code end TMR2_TMR_OVF_FLAG */
  }

  /* add user code begin TMR2_GLOBAL_IRQ 1 */

  /* add user code end TMR2_GLOBAL_IRQ 1 */
}

/**
  * @brief  this function handles USART1 handler.
  * @param  none
  * @retval none
  */
void USART1_IRQHandler(void)
{
  /* add user code begin USART1_IRQ 0 */

  /* add user code end USART1_IRQ 0 */

  if(usart_interrupt_flag_get(USART1, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin USART1_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(USART1, USART_IDLEF_FLAG);
    /* add user code end USART1_USART_IDLEF_FLAG */ 
  }

  /* add user code begin USART1_IRQ 1 */

  /* add user code end USART1_IRQ 1 */
}

/**
  * @brief  this function handles USART2 handler.
  * @param  none
  * @retval none
  */
void USART2_IRQHandler(void)
{
  /* add user code begin USART2_IRQ 0 */

  /* add user code end USART2_IRQ 0 */

  if(usart_interrupt_flag_get(USART2, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin USART2_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(USART2, USART_IDLEF_FLAG);
    /* add user code end USART2_USART_IDLEF_FLAG */ 
  }

  /* add user code begin USART2_IRQ 1 */

  /* add user code end USART2_IRQ 1 */
}

/**
  * @brief  this function handles USART3 handler.
  * @param  none
  * @retval none
  */
void USART3_IRQHandler(void)
{
  /* add user code begin USART3_IRQ 0 */

  /* add user code end USART3_IRQ 0 */

  if(usart_interrupt_flag_get(USART3, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin USART3_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(USART3, USART_IDLEF_FLAG);
    /* add user code end USART3_USART_IDLEF_FLAG */ 
  }

  /* add user code begin USART3_IRQ 1 */

  /* add user code end USART3_IRQ 1 */
}

/**
  * @brief  this function handles EXINT Line [15:10] handler.
  * @param  none
  * @retval none
  */
void EXINT15_10_IRQHandler(void)
{
  /* add user code begin EXINT15_10_IRQ 0 */

  /* add user code end EXINT15_10_IRQ 0 */

  if(exint_interrupt_flag_get(EXINT_LINE_13) != RESET)
  {
    /* add user code begin EXINT_LINE_13 */
    /* clear flag */
    exint_flag_clear(EXINT_LINE_13);
    /* add user code end EXINT_LINE_13 */ 
  }

  /* add user code begin EXINT15_10_IRQ 1 */

  /* add user code end EXINT15_10_IRQ 1 */
}

/**
  * @brief  this function handles UART4 handler.
  * @param  none
  * @retval none
  */
void UART4_IRQHandler(void)
{
  /* add user code begin UART4_IRQ 0 */

  /* add user code end UART4_IRQ 0 */

  if(usart_interrupt_flag_get(UART4, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin UART4_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(UART4, USART_IDLEF_FLAG);
    /* add user code end UART4_USART_IDLEF_FLAG */ 
  }

  /* add user code begin UART4_IRQ 1 */

  /* add user code end UART4_IRQ 1 */
}

/**
  * @brief  this function handles UART5 handler.
  * @param  none
  * @retval none
  */
void UART5_IRQHandler(void)
{
  /* add user code begin UART5_IRQ 0 */

  /* add user code end UART5_IRQ 0 */

  if(usart_interrupt_flag_get(UART5, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin UART5_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(UART5, USART_IDLEF_FLAG);
    /* add user code end UART5_USART_IDLEF_FLAG */ 
  }

  /* add user code begin UART5_IRQ 1 */

  /* add user code end UART5_IRQ 1 */
}

/**
  * @brief  this function handles USART6 handler.
  * @param  none
  * @retval none
  */
void USART6_IRQHandler(void)
{
  /* add user code begin USART6_IRQ 0 */

  /* add user code end USART6_IRQ 0 */

  if(usart_interrupt_flag_get(USART6, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin USART6_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(USART6, USART_IDLEF_FLAG);
    /* add user code end USART6_USART_IDLEF_FLAG */ 
  }

  /* add user code begin USART6_IRQ 1 */

  /* add user code end USART6_IRQ 1 */
}

/**
  * @brief  this function handles UART7 handler.
  * @param  none
  * @retval none
  */
void UART7_IRQHandler(void)
{
  /* add user code begin UART7_IRQ 0 */

  /* add user code end UART7_IRQ 0 */

  if(usart_interrupt_flag_get(UART7, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin UART7_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(UART7, USART_IDLEF_FLAG);
    /* add user code end UART7_USART_IDLEF_FLAG */ 
  }

  /* add user code begin UART7_IRQ 1 */

  /* add user code end UART7_IRQ 1 */
}

/**
  * @brief  this function handles UART8 handler.
  * @param  none
  * @retval none
  */
void UART8_IRQHandler(void)
{
  /* add user code begin UART8_IRQ 0 */

  /* add user code end UART8_IRQ 0 */

  if(usart_interrupt_flag_get(UART8, USART_IDLEF_FLAG) != RESET)
  {
    /* add user code begin UART8_USART_IDLEF_FLAG */
    /* clear flag */
    usart_flag_clear(UART8, USART_IDLEF_FLAG);
    /* add user code end UART8_USART_IDLEF_FLAG */ 
  }

  /* add user code begin UART8_IRQ 1 */

  /* add user code end UART8_IRQ 1 */
}

/* add user code begin 1 */

/* add user code end 1 */
