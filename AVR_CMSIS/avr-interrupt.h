/**
 * @file avr-interrupt.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-01-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

#ifndef _VECTOR
#define _VECTOR(N) __vector_ ## N
#endif

#ifdef __cplusplus
#  define ISR(vector, ...)            \
    extern "C" void vector (void) __attribute__ ((__signal__,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)
#else
#define ISR(vector, ...)            \
    void vector (void) __attribute__ ((__signal__,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)
#endif

/**
 * @brief Enables all interrupts by setting the global interrupt mask.
 *
 * This function actually compiles into a single line of assembly, so
 * there is no function call overhead. However, the macro also
 * implies a <i>memory barrier</i> which can cause additional loss
 * of optimization.
 */
inline static void sei(void) {
    __asm__ __volatile__ ("sei" ::: "memory");
}

/**
 * @brief Disables all interrupts by clearing the global interrupt mask.
 *
 * This function actually compiles into a single line of assembly, so
 * there is no function call overhead. However, the macro also
 * implies a <i>memory barrier</i> which can cause additional loss
 * of optimization.
 *
 * In order to implement atomic access to multi-byte objects, consider
 * using the macros from <util/atomic.h>, rather than implementing them
 * manually with cli() and sei().
 */
inline static void cli(void) {
    __asm__ __volatile__ ("cli" ::: "memory");
}

