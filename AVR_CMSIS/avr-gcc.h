/**
 * @file avr-gcc.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-01-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#ifndef INLINE 
    #define INLINE inline
#endif

#ifndef STATIC_INLINE
    #define STATIC_INLINE static inline
#endif

#ifndef STATICFUNC
    #define STATICFUNC static
#endif

#ifndef NOINLINE
    #define NOINLINE __attribute__((noinline))
#endif

#ifndef NORETURN
    #define NORETURN __attribute__((noreturn))
#endif

#ifndef USED
    #define USED __attribute__((used))
#endif

#ifndef NAKED
    #define NAKED __attribute__((naked))
#endif

#ifndef WEAK
    #define WEAK __attribute__((weak))
#endif

#ifndef ALWAYS_INLINE
    #define ALWAYS_INLINE __attribute__((always_inline))
#endif

#ifndef IRQ
    #define IRQ __attribute__((interrupt))
#endif

#ifndef PACKED
    #define PACKED __attribute__((packed))
#endif 

#define SHL(x, y) ((x) << (y))
#define SHR(x, y) ((x) >> (y))

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

#define BIT(x) (1 << (x))

#define BIT_SET(reg, bit) ((reg) |= (1 <<bit))
#define BIT_CLR(reg, bit) ((reg) &= ~(1 << bit))
#define BIT_TOG(reg, bit) ((reg) ^= (1 << bit))


static inline void nop(void) { asm volatile ("nop"); }