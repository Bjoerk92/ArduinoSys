/**
 * @file Timers.c
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-27
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include "Timers.h"
#include "Atmega.h"

#define TIMER0_OVF_vect __vector_16


static pt_atmega328p ptr_avr_Reg = AVR_SYS_REG;


static Timer_irq_callback_t timer0_callback = NULL;
static Timer_irq_callback_t timer1_callback = NULL;
static Timer_irq_callback_t timer2_callback = NULL;

static DRV_STATUS_E setWaveGenMode(Timer_id_e timer_id, Wave_gen_mode_e wave_gen_mode) {

    DRV_STATUS_E status = DRV_STATUS_OK;

    switch (timer_id)
    {
    case TIMER_ID_0:
        if (wave_gen_mode > FAST_PWM_10_BIT) {
            status = DRV_STATUS_INVALID_PARAM;
            break;
        }
        ptr_avr_Reg->TCCR0A.b.WGM = wave_gen_mode & 0x03; // Set WGM00 and WGM01
        ptr_avr_Reg->TCCR0B.b.WGM = (wave_gen_mode >> 2) & 0x01; // Set WGM02
        break;
    
    case TIMER_ID_1:
        ptr_avr_Reg->TCCR1A.b.WGM = wave_gen_mode & 0x03; // Set WGM10 and WGM11
        ptr_avr_Reg->TCCR1B.b.WGM = (wave_gen_mode >> 2) & 0x03; // Set WGM12 and WGM13
        break;

    case TIMER_ID_2:
        if (wave_gen_mode > FAST_PWM_10_BIT) {
            status = DRV_STATUS_INVALID_PARAM;
            break;
        }
        ptr_avr_Reg->TCCR2A.b.WGM = wave_gen_mode & 0x03; // Set WGM20 and WGM21
        ptr_avr_Reg->TCCR2B.b.WGM = (wave_gen_mode >> 2) & 0x01; // Set WGM22
        break;
    
    default:
        status = DRV_STATUS_INVALID_PARAM;
        break;
    }

    return status;
}

static DRV_STATUS_E setClockSelect(Timer_id_e timer_id, Clock_select_e clock_select) {

    DRV_STATUS_E status = DRV_STATUS_OK;

    if (clock_select > CLOCK_SELECT_EXT_RISING) {
            status = DRV_STATUS_INVALID_PARAM;
    }
    else 
    {
    switch (timer_id)
    {
        case TIMER_ID_0:
            if (clock_select > CLOCK_SELECT_EXT_RISING) {
                status = DRV_STATUS_INVALID_PARAM;
                break;
            }
            ptr_avr_Reg->TCCR0B.b.CS = clock_select & 0x07; // Set CS00, CS01 and CS02
            break;
        
        case TIMER_ID_1:
            
            ptr_avr_Reg->TCCR1B.b.CS = clock_select & 0x07; // Set CS10, CS11 and CS12
            break;

        case TIMER_ID_2:
            
            ptr_avr_Reg->TCCR2B.b.CS = clock_select & 0x07; // Set CS20, CS21 and CS22
            break;
        
        default:
            status = DRV_STATUS_INVALID_PARAM;
            break;
        }
    }
    return status;
}

static void SetIRQTimerOverflow(Timer_id_e timer_id, Timer_irq_callback_t timer_irq_callback) {
    switch (timer_id)
    {
    case TIMER_ID_0:
        timer0_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK0.b.TOIE0 = 1; // Enable Timer/Counter0 Overflow Interrupt
        break;
    
    case TIMER_ID_1:
        timer1_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK1.b.TOIE1 = 1; // Enable Timer/Counter1 Overflow Interrupt
        break;

    case TIMER_ID_2:
        timer2_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK2.b.TOIE2 = 1; // Enable Timer/Counter2 Overflow Interrupt
        break;
    
    default:
        break;
    }
}

static void SetIRQTimerCompareMatchA(Timer_id_e timer_id, Timer_irq_callback_t timer_irq_callback) {
    switch (timer_id)
    {
    case TIMER_ID_0:
        timer0_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK0.b.OCIE0A = 1; // Enable Timer/Counter0 Compare Match A Interrupt
        break;
    
    case TIMER_ID_1:
        timer1_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK1.b.OCIE1A = 1; // Enable Timer/Counter1 Compare Match A Interrupt
        break;

    case TIMER_ID_2:
        timer2_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK2.b.OCIE2A = 1; // Enable Timer/Counter2 Compare Match A Interrupt
        break;
    
    default:
        break;
    }
}

static void SetIRQTimerCompareMatchB(Timer_id_e timer_id, Timer_irq_callback_t timer_irq_callback) {
    switch (timer_id)
    {
    case TIMER_ID_0:
        timer0_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK0.b.OCIE0B = 1; // Enable Timer/Counter0 Compare Match B Interrupt
        break;
    
    case TIMER_ID_1:
        timer1_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK1.b.OCIE1B = 1; // Enable Timer/Counter1 Compare Match B Interrupt
        break;

    case TIMER_ID_2:
        timer2_callback = timer_irq_callback;
        ptr_avr_Reg->TIMSK2.b.OCIE2B = 1; // Enable Timer/Counter2 Compare Match B Interrupt
        break;
    
    default:
        break;
    }
}

static DRV_STATUS_E setupTimerInterrupt(Timer_id_e timer_id, Timer_irq_mode_e timer_irq_mode, Timer_irq_callback_t timer_irq_callback) {

    DRV_STATUS_E status = DRV_STATUS_OK;

    if (timer_irq_mode != TIMER_IRQ_MODE_NONE) 
    {
        if (timer_irq_callback == NULL) {
            status = DRV_STATUS_INVALID_PARAM;
        }
        else {
            // Set the timer interrupt callback function
            switch (timer_irq_mode)
            {
            case TIMER_IRQ_MODE_OVERFLOW:
                SetIRQTimerOverflow(timer_id, timer_irq_callback);
                break;

            case TIMER_IRQ_MODE_COMPARE_MATCH_A:
                SetIRQTimerCompareMatchA(timer_id, timer_irq_callback);
                break;

            case TIMER_IRQ_MODE_COMPARE_MATCH_B:
                SetIRQTimerCompareMatchB(timer_id, timer_irq_callback);
                break;
            
            default:
                status = DRV_STATUS_INVALID_PARAM;
                break;
            }
        }
    }
    return status;
}

DRV_STATUS_E Timers_Init(Timer_config_t* config) {
    
    DRV_STATUS_E status = DRV_STATUS_OK;


    if (config == NULL) {
        status = DRV_STATUS_INVALID_PARAM;
    } 
    else if (config->timer_id > TIMER_ID_2) {
        status = DRV_STATUS_INVALID_PARAM;
    }
    else if(config->wave_gen_mode > FAST_PWM_OCR1A) {
        status = DRV_STATUS_INVALID_PARAM;
    }
    else if(config->clock_select > CLOCK_SELECT_EXT_RISING) {
        status = DRV_STATUS_INVALID_PARAM;
    }
    else
    {
        // set wave generation mode
        status = setWaveGenMode(config->timer_id, config->wave_gen_mode);
        if (status != DRV_STATUS_OK) {
            return status;
        }
        // set clock select
        status = setClockSelect(config->timer_id, config->clock_select);
        if (status != DRV_STATUS_OK) {
            return status;
        }

        status = setupTimerInterrupt(config->timer_id, config->timer_irq_mode, config->timer_irq_callback);
        if (status != DRV_STATUS_OK) {
            return status;
        }

        

    }
    return status;
}



