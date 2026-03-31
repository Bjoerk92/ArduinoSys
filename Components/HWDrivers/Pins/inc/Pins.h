/**
 * @file Pins.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief File containing the interface for the pin driver.
 * @version 0.1
 * @date 2026-03-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#include "driver_interface.h"
#include <stdint.h>

typedef enum PIN_ID_Etag
{
    PINB,
    PINC,
    PIND,
}Pin_id_e;


typedef enum PIN_DIR_Etag
{
    PIN_DIR_INPUT,
    PIN_DIR_OUTPUT
}Pin_dir_e;

DRV_STATUS_E Pins_Init(Pin_id_e pin_id, Pin_dir_e pin_dir, uint8_t pin_number);
DRV_STATUS_E Pins_Write(Pin_id_e pin_id, uint8_t value);
DRV_STATUS_E Pins_Read(Pin_id_e pin_id, uint8_t* value);
DRV_STATUS_E Pins_Toggle(Pin_id_e pin_id);