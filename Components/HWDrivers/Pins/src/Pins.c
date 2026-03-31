/**
 * @file Pins.c
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-03-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "Pins.h"
#include "Atmega.h"

static pt_atmega328p ptr_avr_Reg = AVR_SYS_REG;

static void SetPinDir(Pin_id_e pin_id, Pin_dir_e pin_dir, uint8_t pin_number) {
    switch (pin_id)
    {
    case PINB:
        if (pin_dir == PIN_DIR_OUTPUT) {
            AVR_SYS_REG->DDRB.b[pin_number] = 1; // Set the corresponding bit in DDRB to configure as output
        }
        else {
            AVR_SYS_REG->DDRB.b[pin_number] = 0; // Clear the corresponding bit in DDRB to configure as input
        }
        break;
    
    case PINC:
        if (pin_dir == PIN_DIR_OUTPUT) {
            AVR_SYS_REG->DDRC.b[pin_number] = 1; // Set the corresponding bit in DDRC to configure as output
        }
        else {
            AVR_SYS_REG->DDRC.b[pin_number] = 0; // Clear the corresponding bit in DDRC to configure as input
        }
        break;

    case PIND:
        if (pin_dir == PIN_DIR_OUTPUT) {
            AVR_SYS_REG->DDRD.b[pin_number] = 1; // Set the corresponding bit in DDRD to configure as output
        }
        else {
            AVR_SYS_REG->DDRD.b[pin_number] = 0; // Clear the corresponding bit in DDRD to configure as input
        }
        break;
    
    default:
        break;
    }
}
 

DRV_STATUS_E Pins_Init(Pin_id_e pin_id, Pin_dir_e pin_dir, uint8_t pin_number)
{
    DRV_STATUS_E status = DRV_STATUS_OK;

    SetPinDir(pin_id, pin_dir, pin_number);
    

    return status;

}



DRV_STATUS_E Pins_Write(Pin_id_e pin_id, uint8_t value);
DRV_STATUS_E Pins_Read(Pin_id_e pin_id, uint8_t* value);
DRV_STATUS_E Pins_Toggle(Pin_id_e pin_id);