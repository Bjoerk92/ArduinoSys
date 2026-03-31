/**
 * @file AVR_Driver.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Interface for the AVR driver, which provides functions for initializing and controlling the AVR microcontroller.
 * @version 0.1
 * @date 2026-03-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

typedef enum DRV_STATUS_Etag
{
    DRV_STATUS_OK,
    DRV_STATUS_ERROR,
    DRV_STATUS_INVALID_PARAM
}DRV_STATUS_E;

void Driver_Init(void);
