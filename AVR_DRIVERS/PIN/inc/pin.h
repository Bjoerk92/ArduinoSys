/**
 * @file pin.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Inter face for pin manipulation on AVR microcontrollers
 * @version 0.1
 * @date 2026-05-08
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#include <stdint.h>

typedef enum DRV_PIN_STATUE_Etag {
    DRV_PIN_OK = 0,
    DRV_PIN_ERROR = 1,
    DRV_PIN_ERROR_PIN_NOT_SUPPORTED = 2
} DRV_PIN_STATUE_E;

typedef enum {
    INPUT = 0,
    OUTPUT = 1
}PinMode;

typedef enum {
    LOW = 0,
    HIGH = 1
}PinState;

typedef enum {
    PORT_B = 0,
    PORT_C = 1,
    PORT_D = 2
}Port;


/**
 * @brief Set the Pin Mode object
 * 
 * @param port  Port to which the pin belongs
 * @param pin   Pin number (0-7 for PORTB and PORTD, 0-6 for PORTC)
 * @param mode  Pin mode (INPUT or OUTPUT)
 */
DRV_PIN_STATUE_E setPinMode(Port port, uint8_t pin, PinMode mode);

/**
 * @brief Set the Pin State object
 * 
 * @param port  Port to which the pin belongs
 * @param pin   Pin number (0-7 for PORTB and PORTD, 0-6 for PORTC)
 * @param state Pin state (LOW or HIGH)
 */
DRV_PIN_STATUE_E setPinState(Port port, uint8_t pin, PinState state);

/**
 * @brief Toggle the Pin State object
 * 
 * @param port  Port to which the pin belongs
 * @param pin   Pin number (0-7 for PORTB and PORTD, 0-6 for PORTC)
 */
DRV_PIN_STATUE_E togglePinState(Port port, uint8_t pin);

/**
 * @brief Get the Pin State object
 * 
 * @param port  Port to which the pin belongs
 * @param pin   Pin number (0-7 for PORTB and PORTD, 0-6 for PORTC)
 * @param state Pointer to store the retrieved pin state
 */
DRV_PIN_STATUE_E getPinState(Port port, uint8_t pin, PinState *state);

/**
 * @brief Get the Port State object
 * 
 * @param port  Port to which the pin belongs
 * @param state Pointer to store the retrieved port state (8 bits representing the state of all pins in the port)
 */
DRV_PIN_STATUE_E getPortState(Port port, uint8_t *state);

