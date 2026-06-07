/**
 * @file pin.c
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Function definitions for pin manipulation on AVR microcontrollers
 * @version 0.1
 * @date 2026-05-08
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "pin.h"
#include "Atmega328p.h"

#include <stdint.h>



DRV_PIN_STATUE_E setPinMode(Port port, uint8_t pin, PinMode mode)
{
    volatile uint8_t *ddr = NULL;
    switch (port) {
        case PORT_B:
            ddr = (volatile uint8_t *)&AVR_SYS_REG.DDRB.byte; // DDRB address
            break;
        case PORT_C:
            ddr = (volatile uint8_t *)&AVR_SYS_REG.DDRC.byte; // DDRC address
            break;
        case PORT_D:
            ddr = (volatile uint8_t *)&AVR_SYS_REG.DDRD.byte; // DDRD address
            break;
        default:
            return DRV_PIN_ERROR_PIN_NOT_SUPPORTED; // Invalid port
    }

    if (mode == OUTPUT) {
        *ddr |= (1 << pin); // Set pin as output
    } else {
        *ddr &= ~(1 << pin); // Set pin as input
    }
    return DRV_PIN_OK;
}

DRV_PIN_STATUE_E setPinState(Port port, uint8_t pin, PinState state)
{
    volatile uint8_t *port_reg = NULL;
    switch (port) {
        case PORT_B:
            port_reg = (volatile uint8_t *)&AVR_SYS_REG.PORTB.byte; // PORTB address
            break;
        case PORT_C:
            port_reg = (volatile uint8_t *)&AVR_SYS_REG.PORTC.byte; // PORTC address
            break;
        case PORT_D:
            port_reg = (volatile uint8_t *)&AVR_SYS_REG.PORTD.byte; // PORTD address
            break;
        default:
            return DRV_PIN_ERROR_PIN_NOT_SUPPORTED; // Invalid port
    }

    if (state == HIGH) {
        *port_reg |= (1 << pin); // Set pin high
    } else {
        *port_reg &= ~(1 << pin); // Set pin low
    }
    return DRV_PIN_OK;
}

DRV_PIN_STATUE_E togglePinState(Port port, uint8_t pin)
{
    switch (port) {
        case PORT_B:
            AVR_SYS_REG.PORTB.byte ^= (1 << pin); // PORTB address
            break;
        case PORT_C:
            AVR_SYS_REG.PORTC.byte ^= (1 << pin); // PORTC address
            break;
        case PORT_D:
            AVR_SYS_REG.PORTD.byte ^= (1 << pin); // PORTD address
            break;
        default:
            return DRV_PIN_ERROR_PIN_NOT_SUPPORTED; // Invalid port
    }
    return DRV_PIN_OK;
}