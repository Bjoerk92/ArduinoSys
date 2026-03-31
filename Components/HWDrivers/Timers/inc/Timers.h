/***
 * @file Timers.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief File containing the interface for the timer driver.
 * @version 0.1
 * @date 2026-02-27
 */
#pragma once

#include "driver_interface.h"

typedef enum TIMER_STATUS_Etag
{
    TIMER_STATUS_OK,
    TIMER_STATUS_ERROR,
    TIMER_STATUS_INVALID_PARAM
}TIMER_STATUS_E;

typedef enum TIMER_ID_Etag
{
    TIMER_ID_0,
    TIMER_ID_1,
    TIMER_ID_2
}Timer_id_e;

typedef enum WAVE_GEN_MODE_Etag
{
    WAVE_GEN_MODE_NORMAL,
    PWM_PHASE_CORRECT_8_BIT,
    PWM_PHASE_CORRECT_9_BIT,
    PWM_PHASE_CORRECT_10_BIT,
    CTC_OCR_TOP,
    FAST_PWM_8_BIT,
    FAST_PWM_9_BIT,
    FAST_PWM_10_BIT,
    PWM_PHASE_AND_FREQ_CORRECT_8_BIT,
    PWM_PHASE_AND_FREQ_CORRECT_9_BIT,
    PWM_PHASE_AND_FREQ_CORRECT_10_BIT,
    CRC_ICR1,
    FAST_PWM_ICR1,
    FAST_PWM_OCR1A,
}Wave_gen_mode_e;

typedef enum CLOCK_SELECT_Etag
{
    CLOCK_SELECT_NO_CLK,
    CLOCK_SELECT_CLK,
    CLOCK_SELECT_CLK_8,
    CLOCK_SELECT_CLK_64,
    CLOCK_SELECT_CLK_256,
    CLOCK_SELECT_CLK_1024,
    CLOCK_SELECT_EXT_FALLING,
    CLOCK_SELECT_EXT_RISING
}Clock_select_e;

typedef enum TIMER_IRQ_MODE_Etag
{
    TIMER_IRQ_MODE_NONE,
    TIMER_IRQ_MODE_OVERFLOW,
    TIMER_IRQ_MODE_COMPARE_MATCH_A,
    TIMER_IRQ_MODE_COMPARE_MATCH_B,
    TIMER_IRQ_MODE_INPUT_CAPTURE
}Timer_irq_mode_e;

/**
 * @brief Typedef for timer interrupt callback function. 
 *        This function will be called when the timer interrupt occurs. 
 *        The user can define this function to perform any action they want when the timer interrupt occurs.
 */
typedef void (*Timer_irq_callback_t)(void); 

typedef struct TIMER_CONFIG_Ttag
{
    Timer_id_e              timer_id;               // timer ID 0, 1 or 2
    Wave_gen_mode_e         wave_gen_mode;          // wave generation mode, see Wave_gen_mode_e
    Clock_select_e          clock_select;           // clock select, see Clock_select_e
    Timer_irq_mode_e        timer_irq_mode;         // timer interrupt mode, see Timer_irq_mode_e
    Timer_irq_callback_t    timer_irq_callback;     // pointer to timer interrupt callback function, only used if timer_irq_mode is not TIMER_IRQ_MODE_NONE 
    
}Timer_config_t;






DRV_STATUS_E Timers_Init(Timer_config_t* config);


void Timer_overflow_callback(void) __attribute__((signal, used, __externally_visible__));