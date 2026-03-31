/**
 * @file avr-assert.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Here you find helper mactros to handle asserts
 * @version 0.1
 * @date 2026-01-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once
#include <stdint.h>

#if __STDC_VERSION__ >= 201710L
    #define STATIC_ASSERT(expr, msg) _Static_assert(expr, msg)
#else
    #define static_assert(...)
#endif