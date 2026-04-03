/**
 * @file Atmega.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#if __AVR_ATmega328P__
    #include "Atmega328p.h"
#else
    #error "Unsupported target chip: ${TARGET_CHIP}"
#endif



