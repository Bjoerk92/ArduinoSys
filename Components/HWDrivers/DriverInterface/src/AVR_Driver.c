/**
 * @file AVR_Driver.c
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Driver interface for the AVR microcontroller, providing functions for initializing and controlling the AVR microcontroller.
 * @version 0.1
 * @date 2026-03-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "AVR_Driver.h"
#include "Timers.h"

void Driver_Init(void)
{
    // Initialization code for the AVR driver

    // Setup timer for system tick
    Timer_Init();

}