/**
 * @file gpio.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Driver for AVR GPIOs.
 * @version 0.1
 * @date 2026-04-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#include "AVR_Drivers.h"
#include <stdint.h>

typedef enum GPIO_PIN_DIR_Etag
{
    GPIO_PIN_DIR_INPUT     = 0,
    GPIO_PIN_DIR_OUTPUT    = 1,
} GPIO_PIN_DIR_E;

typedef enum GPIO_PIN_STATE_Etag
{
    GPIO_PIN_STATE_LOW     = 0,
    GPIO_PIN_STATE_HIGH    = 1,
} GPIO_PIN_STATE_E;

DRV_STATUS_E DRV_GPIO_Init(void);
//DRV_STATUS_E DRV_GPIO_SetPinDir(uint8_t port, uint8_t pin, GPIO_PIN_DIR_E dir);
//DRV_STATUS_E DRV_GPIO_SetPinState(uint8_t port, uint8_t pin, GPIO_PIN_STATE_E state);
//DRV_STATUS_E DRV_GPIO_TogglePinState(uint8_t port, uint8_t pin);
//DRV_STATUS_E DRV_GPIO_GetPinState(uint8_t port, uint8_t pin, GPIO_PIN_STATE_E* state);

