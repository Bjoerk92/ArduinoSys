/**
 * @file Registers.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-12-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "avr-assert.h"
#include "avr-interrupt.h"
#include "avr-gcc.h"

/**
 * @def CHIP
 * @brief CHIP MACRO - handling the Chip selection in futher code
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @date 2025-12-30
 */
#define CHIP ATMEGA328P

#define CHIP_F_CPU 16000000U
#define AVR_REGISTERS_BASE_ADDRESS 0x20

#define MAX_B_PINS   8U
#define MAX_C_PINS   7U
#define MAX_D_PINS   8U


/**
 * @typedef PINB
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port B input pins address. Used to read the input pins
 * 
 */
typedef union {
    uint8_t byte;               // Port B data register
    struct {
        uint8_t PINB0 : 1;      // Port B data bit 0 
        uint8_t PINB1 : 1;      // Port B data bit 1 
        uint8_t PINB2 : 1;      // Port B data bit 2 
        uint8_t PINB3 : 1;      // Port B data bit 3 
        uint8_t PINB4 : 1;      // Port B data bit 4 
        uint8_t PINB5 : 1;      // Port B data bit 5 
        uint8_t PINB6 : 1;      // Port B data bit 6 
        uint8_t PINB7 : 1;      // Port B data bit 7 
    }b;                         // Port B bit register
}PINB_t;

/**
 * @typedef DDRB
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port B data direction register address. Used to set the input and output pins indivdualy
 * 
 */
typedef union {
    uint8_t byte;               // Port B Data Direction Register
    struct {
        uint8_t DDB0 : 1;       // Port B Data Direction Register bit 0
        uint8_t DDB1 : 1;       // Port B Data Direction Register bit 1
        uint8_t DDB2 : 1;       // Port B Data Direction Register bit 2
        uint8_t DDB3 : 1;       // Port B Data Direction Register bit 3
        uint8_t DDB4 : 1;       // Port B Data Direction Register bit 4
        uint8_t DDB5 : 1;       // Port B Data Direction Register bit 5
        uint8_t DDB6 : 1;       // Port B Data Direction Register bit 6
        uint8_t DDB7 : 1;       // Port B Data Direction Register bit 7
    }b;                         // Port B Data Direction Register bit register
}DDRB_t;

/**
 * @typedef PORTB
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port B data Register. Used to set the output pins
 * 
 */
typedef union {
    uint8_t byte;               // Port B Data Register
    struct {
        uint8_t PORTB0 : 1;     // Port B Data Register bit 0
        uint8_t PORTB1 : 1;     // Port B Data Register bit 1
        uint8_t PORTB2 : 1;     // Port B Data Register bit 2
        uint8_t PORTB3 : 1;     // Port B Data Register bit 3
        uint8_t PORTB4 : 1;     // Port B Data Register bit 4
        uint8_t PORTB5 : 1;     // Port B Data Register bit 5
        uint8_t PORTB6 : 1;     // Port B Data Register bit 6
        uint8_t PORTB7 : 1;     // Port B Data Register bit 7
    }b;                         // Port B Data Register bit register
}PORTB_t;

/**
 * @typedef PINC
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port C input pins address.
 * 
 */
typedef union {
    uint8_t byte;               // Port C Data Register
    struct {
        uint8_t PINC0 : 1;      // Port C Data Register bit 0
        uint8_t PINC1 : 1;      // Port C Data Register bit 1
        uint8_t PINC2 : 1;      // Port C Data Register bit 2
        uint8_t PINC3 : 1;      // Port C Data Register bit 3
        uint8_t PINC4 : 1;      // Port C Data Register bit 4
        uint8_t PINC5 : 1;      // Port C Data Register bit 5
        uint8_t PINC6 : 1;      // Port C Data Register bit 6
        uint8_t UNUSED : 1;     // Port C Data Register bit 7 - unused
    }b;                         // Port C Data Register bit register
}PINC_t;

/**
 * @typedef DDRC
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port C data direction register address.
 * 
 */
typedef union {
    uint8_t byte;               // Port C Data Direction Register
    struct {
        uint8_t DDC0 : 1;       // Port C Data Direction Register bit 0
        uint8_t DDC1 : 1;       // Port C Data Direction Register bit 1
        uint8_t DDC2 : 1;       // Port C Data Direction Register bit 2
        uint8_t DDC3 : 1;       // Port C Data Direction Register bit 3
        uint8_t DDC4 : 1;       // Port C Data Direction Register bit 4
        uint8_t DDC5 : 1;       // Port C Data Direction Register bit 5
        uint8_t DDC6 : 1;       // Port C Data Direction Register bit 6
        uint8_t UNUSED : 1;     // Port C Data Direction Register bit 7 - unused
    }b;                         // Port C Data Direction Register bit register
}DDRC_t;

/**
 * @typedef PORTC
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port C data Register.
 * 
 */
typedef union {
    uint8_t byte;               // Port C Data Register
    struct {
        uint8_t PORTC0 : 1;     // Port C Data Register bit 0
        uint8_t PORTC1 : 1;     // Port C Data Register bit 1
        uint8_t PORTC2 : 1;     // Port C Data Register bit 2
        uint8_t PORTC3 : 1;     // Port C Data Register bit 3
        uint8_t PORTC4 : 1;     // Port C Data Register bit 4
        uint8_t PORTC5 : 1;     // Port C Data Register bit 5
        uint8_t PORTC6 : 1;     // Port C Data Register bit 6
        uint8_t PORTC7 : 1;     // Port C Data Register bit 7
    }b;                         // Port C Data Register bit register
}PORTC_t;

/**
 * @typedef PIND
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port D input pins address.
 * 
 */
typedef union {
    uint8_t byte;               // Port D input pins
    struct {
        uint8_t PIND0 : 1;      // Port D input pins bit 0
        uint8_t PIND1 : 1;      // Port D input pins bit 1
        uint8_t PIND2 : 1;      // Port D input pins bit 2
        uint8_t PIND3 : 1;      // Port D input pins bit 3
        uint8_t PIND4 : 1;      // Port D input pins bit 4
        uint8_t PIND5 : 1;      // Port D input pins bit 5
        uint8_t PIND6 : 1;      // Port D input pins bit 6
        uint8_t PIND7 : 1;      // Port D input pins bit 7
    }b;                         // Port D input pins bit register
}PIND_t;

/**
 * @typedef DDRD
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port D data direction register address.
 * 
 */
typedef union {
    uint8_t byte;               // Port D Data Direction Register
    struct {
        uint8_t DDD0 : 1;       // Port D Data Direction Register bit 0
        uint8_t DDD1 : 1;       // Port D Data Direction Register bit 1
        uint8_t DDD2 : 1;       // Port D Data Direction Register bit 2
        uint8_t DDD3 : 1;       // Port D Data Direction Register bit 3
        uint8_t DDD4 : 1;       // Port D Data Direction Register bit 4
        uint8_t DDD5 : 1;       // Port D Data Direction Register bit 5
        uint8_t DDD6 : 1;       // Port D Data Direction Register bit 6
        uint8_t DDD7 : 1;       // Port D Data Direction Register bit 7
    }b;                         // Port D Data Direction Register bit register
}DDRD_t;

/**
 * @typedef PORTD
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Port D data Register.
 * 
 */
typedef union {
    uint8_t byte;               // Port D data Register
    struct {
        uint8_t PORTD0 : 1;     // Port D data Register bit 0
        uint8_t PORTD1 : 1;     // Port D data Register bit 1
        uint8_t PORTD2 : 1;     // Port D data Register bit 2
        uint8_t PORTD3 : 1;     // Port D data Register bit 3
        uint8_t PORTD4 : 1;     // Port D data Register bit 4
        uint8_t PORTD5 : 1;     // Port D data Register bit 5
        uint8_t PORTD6 : 1;     // Port D data Register bit 6
        uint8_t PORTD7 : 1;     // Port D data Register bit 7
    }b;                         // Port D data Register bit register
}PORTD_t;

/**
 * @typedef TIFR0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 0 Interrupt Flag Register
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 0 Interrupt Flag Register
    struct {
        uint8_t TOV0 : 1;       // Timer/Counter 0 Overflow Flag
        uint8_t OCF0A : 1;      // Timer/Counter 0 Output Compare Flag A
        uint8_t OCF0B : 1;      // Timer/Counter 0 Output Compare Flag B3
        uint8_t align : 5;      // alignment - unused
    }b;
}TIFR0_t;

/**
 * @typedef TIFR1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Interrupt Flag Register
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 1 Interrupt Flag Register
    struct {
        uint8_t TOV1 : 1;       // Timer/Counter 1 Overflow Flag
        uint8_t OCF1A : 1;      // Timer/Counter 1 Output Compare Flag A
        uint8_t OCF1B : 1;      // Timer/Counter 1 Output Compare Flag B
        uint8_t reserved : 2;   // reserved/unused
        uint8_t ICF1 : 1;       // Timer/Counter Input Capture Flag 1
        uint8_t align : 2;      // alignment - unused
    }b;
}TIFR1_t;

/**
 * @typedef TIFR2
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 2 Interrupt Flag Register
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 2 Interrupt Flag Register
    struct {
        uint8_t TOV2 : 1;       // Timer/Counter 2 Overflow Flag
        uint8_t OCF2A : 1;      // Timer/Counter 2 Output Compare Flag A
        uint8_t OCF2B : 1;      // Timer/Counter 2 Output Compare Flag B3
        uint8_t align : 5;      // alignment - unused
    }b;
}TIFR2_t;

/**
 * @typedef PCIFR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Pin Change Interrupt Flag Register
 * 
 */
typedef union {
    uint8_t byte;               // Pin Change Interrupt Flag Register
    struct {
        uint8_t PCIF0 : 1;      // Pin Change Interrupt Flag Register bit 0
        uint8_t PCIF1 : 1;      // Pin Change Interrupt Flag Register bit 1
        uint8_t PCIF2 : 1;      // Pin Change Interrupt Flag Register bit 2
        uint8_t align : 5;      // alignment - unused
    }b;
}PCIFR_t;

/**
 * @typedef EIFR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief External Interrupt Flag Register
 * 
 */
typedef union {
    uint8_t byte;               // External Interrupt Flag Register
    struct {
        uint8_t INTF0 : 1;      // External Interrupt Flag Register bit 0
        uint8_t INTF1 : 1;      // External Interrupt Flag Register bit 1
        uint8_t align : 6;      // alignment - unused
    }b;
}EIFR_t;

/**
 * @typedef EIMSK
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief External Interrupt Mask Register
 * 
 */
typedef union {
    uint8_t byte;               // External Interrupt Mask Register
    struct {
        uint8_t INT0 : 1;       // External Interrupt Mask Register bit 0
        uint8_t INT1 : 1;       // External Interrupt Mask Register bit 1
        uint8_t align : 6;      // alignment - unused
    }b;
}EIMSK_t;

/**
 * @typedef GPIOR0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief General Purpose I/O register
 * 
 */
typedef union {
    uint8_t byte;               // General Purpose I/O register
    struct {
        uint8_t GPIOR0_0 : 1;       // I/O pin 0
        uint8_t GPIOR0_1 : 1;       // I/O pin 1
        uint8_t GPIOR0_2 : 1;       // I/O pin 2
        uint8_t GPIOR0_3 : 1;       // I/O pin 3
        uint8_t GPIOR0_4 : 1;       // I/O pin 4
        uint8_t GPIOR0_5 : 1;       // I/O pin 5
        uint8_t GPIOR0_6 : 1;       // I/O pin 6
        uint8_t GPIOR0_7 : 1;       // I/O pin 7
    }b;
}GPIOR0_t;

/**
 * @typedef EECR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief The Eeprom control register
 * 
 */
typedef union {
    uint8_t byte;               // The Eeprom control register
    struct {
        uint8_t EERE : 1;       // Eeprom Read Enable
        uint8_t EEPE : 1;       // Eeprom Program Enable
        uint8_t EEMPE : 1;      // Eeprom Memory Page Erase Enable
        uint8_t EERIE : 1;      // Eeprom Ready Interrupt Enable
        uint8_t align : 4;      // alignment - unused
    }b;
}EECR_t;

/**
 * @typedef EEAR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Thhe Eeprom Address register
 * 
 */
typedef union {
    uint16_t address;           // Eeprom Address register
    struct {
        uint8_t Low;            // Eeprom Address register Low side
        uint8_t High;           // Eeprom Address register High side
    }us;
}EEAR_t;

/**
 * @typedef GTCCR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief General Timer/Counter Control Register
 * 
 */
typedef union {
    uint8_t byte;               // General Timer/Counter Control Register
    struct {
        uint8_t PSRSYNC : 1;    // Prescaler Reset Timer/counter 0/1
        uint8_t PSRASY  : 1;    // Prescaler Timer/counter 2
        uint8_t reserved : 5;   // Reserved
        uint8_t TSM : 1;        // Timer/Counter Synchronization Mode
    }b;
}GTCCR_t;

/**
 * @typedef TCCR0A
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 0 Control Register A
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter Control Register A
    struct {
        uint8_t WGM : 2;        // Waveform Generation Mode 0/1 
        uint8_t reserved : 2;   // Reserved
        uint8_t COM0B0: 1;      // Compare Output Mode 0B
        uint8_t COM0B1: 1;      // Compare Output Mode 0B
        uint8_t COM0A0: 1;      // Compare Output Mode 0A
        uint8_t COM0A1: 1;      // Compare Output Mode 0A
    }b;
}TCCR0A_t;

/**
 * @typedef TCCR0B
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 0 Control Register B
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter Control Register B
    struct {
        uint8_t CS : 3;         // Clock Select
        uint8_t WGM : 1;        // Wave generator mode 2 - used with WGM in TCCR0A!
        uint8_t reserved : 2;   // Reserved
        uint8_t FOC0B : 1;      // Force Output Compare B
        uint8_t FOC0A : 1;      // Force Output Compare A
    }b;
}TCCR0B_t;

/**
 * @typedef GPIOR1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief General Purpose I/O register 1
 * 
 */
typedef union {
    uint8_t byte;               // General Purpose I/O register 1
    struct {
        uint8_t GPIOR1_0 : 1;   // General Purpose I/O register 1 bit 0
        uint8_t GPIOR1_1 : 1;   // General Purpose I/O register 1 bit 1
        uint8_t GPIOR1_2 : 1;   // General Purpose I/O register 1 bit 2
        uint8_t GPIOR1_3 : 1;   // General Purpose I/O register 1 bit 3
        uint8_t GPIOR1_4 : 1;   // General Purpose I/O register 1 bit 4
        uint8_t GPIOR1_5 : 1;   // General Purpose I/O register 1 bit 5
        uint8_t GPIOR1_6 : 1;   // General Purpose I/O register 1 bit 6
        uint8_t GPIOR1_7 : 1;   // General Purpose I/O register 1 bit 7
    }b;                         
}GPIOR1_t;

/**
 * @typedef GPIOR2
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief General Purpose I/O register 2
 * 
 */
typedef union {
    uint8_t byte;               // General Purpose I/O register 2
    struct {
        uint8_t GPIOR2_0 : 1;   // General Purpose I/O register 2 bit 0
        uint8_t GPIOR2_1 : 1;   // General Purpose I/O register 2 bit 1
        uint8_t GPIOR2_2 : 1;   // General Purpose I/O register 2 bit 2
        uint8_t GPIOR2_3 : 1;   // General Purpose I/O register 2 bit 3
        uint8_t GPIOR2_4 : 1;   // General Purpose I/O register 2 bit 4
        uint8_t GPIOR2_5 : 1;   // General Purpose I/O register 2 bit 5
        uint8_t GPIOR2_6 : 1;   // General Purpose I/O register 2 bit 6
        uint8_t GPIOR2_7 : 1;   // General Purpose I/O register 2 bit 7
    }b;                         
}GPIOR2_t;


/**
 * @typedef SPCR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief SPI Control register
 * 
 */
typedef union {
    uint8_t byte;               // SPI Control register
    struct {
        uint8_t SPR0 : 2;       // SPI Clock select 
        uint8_t CPHA : 1;       // Clock Phase
        uint8_t CPOL : 1;       // Clock Polarity
        uint8_t MSTR : 1;       // Master Selection
        uint8_t DORD : 1;       // Data Order
        uint8_t SPE : 1;        // SPI Enable
        uint8_t SPIE : 1;       // SPI Interrupt Enable
    }b;
}SPCR_t;

/**
 * @typedef SPSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief SPI Status register
 * 
 */
typedef union {
    uint8_t byte;               // SPI Status register
    struct {
        uint8_t SPI2X : 1;      // Double SPI Speed
        uint8_t reserved : 5;   // Reserved
        uint8_t WCOL : 1;       // Write Collision Flag
        uint8_t SPIF : 1;       // SPI Interrupt Flag
    }b;
}SPSR_t;

/**
 * @typedef ACSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Analog Comparator Control and Status Register
 * 
 */
typedef union  {
    uint8_t byte;               // Analog Comparator Control and Status Register
    struct {
        uint8_t ACIS : 2;       // Analog Comparator Interrupt Mode Select bits
        uint8_t ACIC : 1;       // Analog Comparator Input Capture Enable
        uint8_t ACIE : 1;       // Analog Comparator Interrupt Enable
        uint8_t ACI : 1;        // Analog Comparator Interrupt Flag
        uint8_t ACO : 1;        // Analog Compare Output
        uint8_t ACBG : 1;       // Analog Comparator Bandgap Select
        uint8_t ACD : 1;        // Analog Comparator Disable
    }b;
}ACSR_t;

/**
 * @typedef SMCR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Sleep mode Control register
 * 
 */
typedef union {
    uint8_t byte;               // Sleep mode Control register
    struct {
        uint8_t SE : 1;         // Sleep Enable
        uint8_t SM : 3;         // Sleep Mode
        uint8_t reserved : 4;   // Reserved
    }b; 
}SMCR_t;

/**
 * @typedef MCUSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief MCU Status Register
 * 
 */
typedef union {
    uint8_t byte;               // MCU Status Register
    struct {
        uint8_t PORF : 1;       // Power-on reset flag
        uint8_t EXTRF : 1;      // External Reset Flag
        uint8_t BORF : 1;       // Brown-out Reset Flag
        uint8_t WDRF : 1;       // Watchdog Reset Flag
        uint8_t reserved : 4;   // Reserved
    }b;
}MCUSR_t;

/**
 * @typedef MCUCR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief MCU Control Register
 * 
 */
typedef union {
    uint8_t byte;               // MCU Control Register
    struct {
        uint8_t IVCE : 1;       // Interrupt Vector Change Enable
        uint8_t IVSEL : 1;      // Interrupt Vector Select
        uint8_t reserved : 2;   // Reserved
        uint8_t PUD : 1;        // Pull-up Disable  Read only
        uint8_t BODSE : 1;      // BOD Sleep Enable Read only
        uint8_t BODS : 1;       // BOD Sleep        Read only
        uint8_t align : 1;      // alignment
    }b;
}MCUCR_t;

typedef union {
    uint8_t byte;               // Store Program Memory Control and Status Register
    struct {
        uint8_t SELFPRGEN : 1;  // Self-Programming Enable
        uint8_t PGERS : 1;      // Page Erase Status
        uint8_t PGWRT : 1;      // Page Write Status
        uint8_t BLBSET : 1;     // Boot Lock Bits Set
        uint8_t RWWSRE : 1;     // Read While Write section read enable
        uint8_t reserved : 1;   // Reserved
        uint8_t RWWSB : 1;      // Read While Write Section Busy
        uint8_t SPMIE : 1;      // SPM Interrupt Enable
    }b;
}SPMCSR_t;

/**
 * @typedef SP
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Stack Pointer register (SPL, SPH)
 * 
 */
typedef union {
    uint16_t Sp;                // stack pointer 
    struct {
        uint8_t SPL : 8;        // stack pointer low byte
        uint8_t SPH : 8;        // stack pointer high byte
    }byte;
}SP_t;

/**
 * @typedef SREG
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief AVR status register
 * 
 */
typedef union {
    uint8_t byte;               // AVR status register
    struct {
        uint8_t C : 1;          // Carry flag
        uint8_t Z : 1;          // Zero Flag
        uint8_t N : 1;          // Negative Flag
        uint8_t V : 1;          // Two's Complement Overflow Flag
        uint8_t S : 1;          // Sign Flag
        uint8_t H : 1;          // Half Carry Flag
        uint8_t T : 1;          // Transfer Bit
        uint8_t I : 1;          // Interrupt Flag
    }b;
}SREG_t;

/**
 * @typedef WDTCSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Watchdog Timer Control Register
 * 
 */
typedef union {
    uint8_t byte;               // Watchdog Timer Control Register
    struct {
        uint8_t WDP : 3;        // Watchdog Timer Prescaler 0-2
        uint8_t WDE : 1;        // Watchdog System Reset Enable
        uint8_t WDCE : 1;       // Watchdog Change Enable
        uint8_t WDP3 : 1;       // Watchdog Timer Prescaler Bit 3
        uint8_t WDIE : 1;       // Watchdog Interrupt Enable
        uint8_t WDIF : 1;       // Watchdog Interrupt Flag
    }b;
}WDTCSR_t;

/**
 * @typedef CLKPR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Clock Prescaler Register
 * 
 */
typedef union {
    uint8_t byte;               // Clock Prescale Register
    struct {
        uint8_t CKSEL : 4;      // Clock Prescaler Select Bits
        uint8_t reserved : 3;   // Reserved
        uint8_t CLKPCE : 1;     // Clock Prescaler Change Enable
    }b;
}CLKPR_t;

/**
 * @typedef PRR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Power Reduction Register
 * 
 */
typedef union {
    uint8_t byte;               // Power Reduction Register
    struct {
        uint8_t PRADC : 1;      // Power Reduction ADC
        uint8_t PRUSART0 : 1;   // Power Reduction USART0
        uint8_t PRSPI : 1;      // Power Reduction Serial Peripheral Interface
        uint8_t PRTIM1 : 1;     // Power Reduction Timer/Counter1
        uint8_t reserved : 1;   // Reserved
        uint8_t PRTIM0 : 1;     // Power Reduction Timer/Counter0
        uint8_t PRTIM2 : 1;     // Power Reduction Timer/Counter2
        uint8_t PTRWI : 1;      // Power Reduction TWI
    }b;
}PRR_t;

/**
 * @typedef PCICR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Pin Change Interrupt Control Register
 * 
 */
typedef union {
    uint8_t byte;               // Pin Change Interrupt Control Register
    struct {
        uint8_t PCIE0 : 1;      // Pin Change Interrupt Enable 0
        uint8_t PCIE1 : 1;      // Pin Change Interrupt Enable 1
        uint8_t PCIE2 : 1;      // Pin Change Interrupt Enable 2
        uint8_t align : 5;      // alignment - unused
    }b;
}PCICR_t;

/**
 * @typedef EICRA
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief External Interrupt Control Register A
 * 
 */
typedef union {
    uint8_t byte;               // External Interrupt Control Register A
    struct {
        uint8_t ISC00 : 1;      // External Interrupt Sense Control 0 Bit 0
        uint8_t ISC01 : 1;      // External Interrupt Sense Control 0 Bit 1
        uint8_t ISC10 : 1;      // External Interrupt Sense Control 1 Bit 0
        uint8_t ISC11 : 1;      // External Interrupt Sense Control 1 Bit 1
        uint8_t align : 4;      // alignment - unused
    }b;
}EICRA_t;

/**
 * @typedef PCMSK0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Pin Change Mask Register 0
 * 
 */
typedef union {
    uint8_t byte;               // Pin Change Mask Register 0
    struct {
        uint8_t PCINT0 : 1;     // Pin Change Enable Mask 0
        uint8_t PCINT1 : 1;     // Pin Change Enable Mask 1
        uint8_t PCINT2 : 1;     // Pin Change Enable Mask 2
        uint8_t PCINT3 : 1;     // Pin Change Enable Mask 3
        uint8_t PCINT4 : 1;     // Pin Change Enable Mask 4
        uint8_t PCINT5 : 1;     // Pin Change Enable Mask 5
        uint8_t PCINT6 : 1;     // Pin Change Enable Mask 6
        uint8_t PCINT7 : 1;     // Pin Change Enable Mask 7
    }b;
}PCMSK0_t;

/**
 * @typedef PCMSK1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Pin Change Mask Register 1
 * 
 */
typedef union {
    uint8_t byte;               // Pin Change Mask Register 1
    struct {
        uint8_t PCINT8 : 1;     // Pin Change Enable Mask 8
        uint8_t PCINT9 : 1;     // Pin Change Enable Mask 9
        uint8_t PCINT10 : 1;    // Pin Change Enable Mask 10
        uint8_t PCINT11 : 1;    // Pin Change Enable Mask 11
        uint8_t PCINT12 : 1;    // Pin Change Enable Mask 12
        uint8_t PCINT13 : 1;    // Pin Change Enable Mask 13
        uint8_t PCINT14 : 1;    // Pin Change Enable Mask 14
        uint8_t align : 1;      // alignement - unused
    }b;
}PCMSK1_t;


typedef union {
    uint8_t byte;               // Pin Change Mask Register 2
    struct
    {
        uint8_t PCINT16 : 1;    // Pin Change Enable Mask 16
        uint8_t PCINT17 : 1;    // Pin Change Enable Mask 17
        uint8_t PCINT18 : 1;    // Pin Change Enable Mask 18
        uint8_t PCINT19 : 1;    // Pin Change Enable Mask 19
        uint8_t PCINT20 : 1;    // Pin Change Enable Mask 20
        uint8_t PCINT21 : 1;    // Pin Change Enable Mask 21
        uint8_t PCINT22 : 1;    // Pin Change Enable Mask 22
        uint8_t PCINT23 : 1;    // Pin Change Enable Mask 23
    }b;
}PCMSK2_t;

/**
 * @typedef TIMSK0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 0 Interrupt Mask Register
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 0 Interrupt Mask Register
    struct {
        uint8_t TOIE0 : 1;      // Timer/Counter 0 Interrupt Enable
        uint8_t OCIE0A : 1;     // Timer/Counter 0 Output Compare A Interrupt Enable
        uint8_t OCIE0B : 1;     // Timer/Counter 0 Output Compare B Interrupt Enable
        uint8_t align : 5;      // alignment - unused
    }b;
}TIMSK0_t;


typedef union {
    uint8_t byte;               // Timer/Counter 1 Interrupt Mask Register 
    struct {
        uint8_t TOIE1 : 1;      // Timer/Counter 1 Interrupt Enable
        uint8_t OCIE1A : 1;     // Timer/Counter 1 Output Compare A Interrupt Enable
        uint8_t OCIE1B : 1;     // Timer/Counter 1 Output Compare B Interrupt Enable
        uint8_t reserved : 2;   // reserved/unused
        uint8_t ICIE1 : 1;      // Timer/Counter 1 Input Capture Interrupt Enable
        uint8_t align : 2;      // alignment - unused
    }b;
}TIMSK1_t;

/**
 * @typedef TIMSK2
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 2 Interrupt Mask Register
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 2 Interrupt Mask Register
    struct {
        uint8_t TOIE2 : 1;      // Timer/Counter 2 Interrupt Enable
        uint8_t OCIE2A : 1;     // Timer/Counter 2 Output Compare A Interrupt Enable
        uint8_t OCIE2B : 1;     // Timer/Counter 2 Output Compare B Interrupt Enable
        uint8_t align : 5;      // alignment - unused
    }b;
}TIMSK2_t;

/**
 * @typedef ADC
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief ADC Data register
 * 
 */
typedef union {
    uint16_t ADC;               // ADC Data Register
    struct {
        uint16_t ADCL : 8;      // ADC Data Register low byte
        uint16_t ADCH : 8;      // ADC Data Register high byte
    }b;
}ADC_t;

/**
 * @typedef ADCSRA
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief ADC Control and Status Register A
 * 
 */
typedef union {
    uint8_t byte;               // ADC Control and Status Register A
    struct {
        uint8_t ADPS : 3;       // ADC Prescaler Select bits
        uint8_t ADIE : 1;       // ADC Interrupt Enable
        uint8_t ADIF : 1;       // ADC Interrupt Flag
        uint8_t ADATE : 1;      // ADC Auto Trigger Enable
        uint8_t ADSC : 1;       // ADC Start Conversion
        uint8_t ADEN : 1;       // ADC Enable
    }b;
}ADCSRA_t;

/**
 * @typedef ADCSRB
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief ADC Control and Status Register B
 * 
 */
typedef union {
    uint8_t byte;               // ADC Control and Status Register B
    struct {
        uint8_t ADTS : 3;       // ADC Auto Trigger Source bits
        uint8_t reserved : 3;   // Reserved
        uint8_t ACME : 1;       // Analog Comparator Multiplexer Enable
    }b;
}ADCSRB_t;

/**
 * @typedef ADMUX
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief ADC Multiplexer Selection Register
 * 
 */
typedef union {
    uint8_t byte;               // ADC Multiplexer Selection Register
    struct {
        uint8_t MUX : 4;        // ADC Channel Selection bits
        uint8_t reserved : 1;   // Reserved
        uint8_t ADLAR : 1;      // ADC Left Adjust Result
        uint8_t REFS : 2;       // Reference Selection bits
    }b;
}ADMUX_t;

/**
 * @typedef DIDR0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Digital Input Disable Register 0
 * 
 */
typedef union {
    uint8_t byte;               // Digital Input Disable Register 0
    struct {
        uint8_t ADC0D : 1;      // ADC0 Digital Input Disable
        uint8_t ADC1D : 1;      // ADC1 Digital Input Disable
        uint8_t ADC2D : 1;      // ADC2 Digital Input Disable
        uint8_t ADC3D : 1;      // ADC3 Digital Input Disable
        uint8_t ADC4D : 1;      // ADC4 Digital Input Disable
        uint8_t ADC5D : 1;      // ADC5 Digital Input Disable
        uint8_t align : 2;      // alignment - unused
    }b;
}DIDR0_t;

/**
 * @typedef DIDR1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Digital Input Disable Register 1
 * 
 */
typedef union {
    uint8_t byte;               // Digital Input Disable Register 1
    struct {
        uint8_t AIN0D : 1;      // AIN0 Digital Input Disable
        uint8_t AIN1D : 1;      // AIN1 Digital Input Disable
        uint8_t align : 6;      // alignment - unused
    }b;
}DIDR1_t;

/**
 * @typedef TCCR1A
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Control Register A
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 1 Control Register A
    struct {
        uint8_t WGM : 2;        // Waveform Generation Mode 0/1 
        uint8_t reserved : 2;   // Reserved
        uint8_t COM1B0: 1;      // Compare Output Mode 0B
        uint8_t COM1B1: 1;      // Compare Output Mode 0B
        uint8_t COM1A0: 1;      // Compare Output Mode 0A
        uint8_t COM1A1: 1;      // Compare Output Mode 0A
    }b;
}TCCR1A_t;

/**
 * @typedef TCCR1B
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Control Register B
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 1 Control Register B
    struct {
        uint8_t CS : 3;         // Clock Select bits
        uint8_t WGM : 2;      // Wave generator mode 2 - used with WGM in TCCR1A!
        uint8_t reserved : 1;   // Reserved
        uint8_t ICES1 : 1;      // Input Capture 1 Edge Select
        uint8_t ICNC1 : 1;      // Input Capture 1 Noise Canceler
    }b;
}TCCR1B_t;

/**
 * @typedef TCCR1C
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Control Register C
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 1 Control Register C
    struct {
        uint8_t reserved : 6;   // Reserved
        uint8_t FOC1B : 1;      // Force Output Compare 1B
        uint8_t FOC1A : 1;      // Force Output Compare 1A
    }b;
}TCCR1C_t;

/**
 * @typedef TCNT1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Counter register
 * 
 */
typedef union {
    uint16_t TCNT1;             // Timer/Counter 1 Counter register
    struct {
        uint16_t TCNT1L : 8;    // Timer/Counter 1 low byte
        uint16_t TCNT1H : 8;    // Timer/Counter 1 high byte
    }b;
}TCNT1_t;

/**
 * @typedef ICR1
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Input Capture Register
 * 
 */
typedef union {
    uint16_t ICR1;              // Timer/Counter 1 Input Capture Register
    struct {
        uint16_t ICR1L : 8;     // Timer/Counter 1 Input Capture Register low byte
        uint16_t ICR1H : 8;     // Timer/Counter 1 Input Capture Register high byte
    }b;
}ICR1_t;

/**
 * @typedef OCR1A
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Output Compare Register A
 * 
 */
typedef union {
    uint16_t Word;             // Timer/Counter 1 Output Compare Register A
    struct {
        uint16_t OCR1AL : 8;    // Timer/Counter 1 Output Compare Register A low byte
        uint16_t OCR1AH : 8;    // Timer/Counter 1 Output Compare Register A high byte
    }b;
}OCR1A_t;

/**
 * @typedef OCR1B
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 1 Output Compare Register B
 * 
 */
typedef union {
    uint16_t OCR1B;             // Timer/Counter 1 Output Compare Register B
    struct {
        uint16_t OCR1BL : 8;    // Timer/Counter 1 Output Compare Register B low byte
        uint16_t OCR1BH : 8;    // Timer/Counter 1 Output Compare Register B high byte
    }b;
}OCR1B_t;

/**
 * @typedef TCCR2A
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counter 2 Control Register 2
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 2 Control Register 2
    struct {
        uint8_t WGM : 2;      // Waveform Generation Mode 2
        uint8_t reserved : 2;   // Reserved
        uint8_t COM2B0 : 1;     // Compare Output Mode 2B
        uint8_t COM2B1 : 1;     // Compare Output Mode 2B
        uint8_t COM2A0 : 1;     // Compare Output Mode 2A
        uint8_t COM2A1 : 1;     // Compare Output Mode 2A
    }b;
}TCCR2A_t;

/**
 * @typedef TCCR2B
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Timer/Counert 2 Control Register 2
 * 
 */
typedef union {
    uint8_t byte;               // Timer/Counter 2 Control Register 2
    struct {
        uint8_t CS : 3;         // Clock Select bits
        uint8_t WGM : 1;      // Waveform Generation Mode 2
        uint8_t reserved : 2;   // Reserved
        uint8_t FOC2B : 1;      // Input Capture 2 Edge Select
        uint8_t FOC2A : 1;      // Input Capture 2 Noise Canceler
    }b;
}TCCR2B_t;

/**
 * @typedef ASSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Assynchronous Status Register
 * 
 */
typedef union {
    uint8_t byte;               // Asynchronous Status Register
    struct {
        uint8_t TCR2BUB : 1;    // Timer/Counter Control Register 2 B update busy
        uint8_t TCR2AUB : 1;    // Timer/Counter Control Register 2 A update busy
        uint8_t OCR2BUB : 1;    // Output Compare Register 2 B update busy
        uint8_t OCR2AUB : 1;    // Output Compare Register 2 A update busy
        uint8_t TCN2UB : 1;     // Timer/Counter 2 update busy
        uint8_t AS2 : 1;        // Asynchronous Timer/Counter 2
        uint8_t EXCLK : 1;      // External Clock Source
        uint8_t reserved : 1;   // Reserved
    }b;
}ASSR_t;

/**
 * @typedef TWSR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief TWI Status Register
 * 
 */
typedef union {
    uint8_t byte;               // TWI Status Register
    struct {
        uint8_t TWPS : 2;       // TWI Prescaler
        uint8_t reserved : 1;   // Reserved
        uint8_t TWS : 5;        // TWI Status
    }b;
}TWSR_t;

/**
 * @typedef TWAR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief TWI Status register
 * 
 */
typedef union {
    uint8_t byte;               // TWI_Status Register
    struct {
        uint8_t TWGCE : 1;      // TWI General Call Recognition Enable
        uint8_t TWA : 7;        // TWI Address
    }b;
}TWAR_t;

/**
 * @brief TWCR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief TWI Control Register
 * 
 */
typedef union {
    uint8_t byte;               // TWI Control Register
    struct {
        uint8_t TWIE : 1;       // TWI Interrupt Enable
        uint8_t reserved : 1;   // Reserved
        uint8_t TWEN : 1;       // TWI Enable
        uint8_t TWWC : 1;       // TWI Write Collision Flag
        uint8_t TWSTO : 1;      // TWI Stop Condition Flag
        uint8_t TWSTA : 1;      // TWI Start Condition Flag
        uint8_t TWEA : 1;       // TWI Enable Acknowledge
        uint8_t TWINT : 1;      // TWI Interrupt Flag
    }b;
}TWCR_t;

/**
 * @typedef TWAMR
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief TWI Address mask register
 * 
 */
typedef union {
    uint8_t byte;               // TWI Address Mask Register
    struct {
        uint8_t reserved : 1;   // Reserved
        uint8_t TWAM : 7;       // TWI Address Mask
    }b;
}TWAMR_t;

/**
 * @typedef UCSR0A
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief USART Control and Status Register 0 A
 * 
 */
typedef union {
    uint8_t byte;               // USART COntrol and Status Register 0 A
    struct {
        uint8_t MPCM : 1;       // Multi-processor Communication Mode
        uint8_t U2X : 1;        // Double the USART transmission speed
        uint8_t UPE : 1;        // USART Parity Error
        uint8_t DOR : 1;        // Data Overrun
        uint8_t FE : 1;         // Framing Error
        uint8_t UDRE : 1;       // USART Data Register Empty
        uint8_t TXC : 1;        // USART Transmit Complete
        uint8_t RXC : 1;        // USART Receive Complete
    }b;
}UCSR0A_t;

/**
 * @typedef UCSR0B
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief USART Control and Status Register 0 B
 * 
 */
typedef union {
    uint8_t byte;               // USART Control and Status Register 0 B
    struct {
        uint8_t RXCIE : 1;      // RX Complete Interrupt Enable
        uint8_t TXCIE : 1;      // TX Complete Interrupt Enable
        uint8_t UDRIE : 1;      // USART Data Register Empty Interrupt Enable
        uint8_t RXEN : 1;       // Receiver Enable
        uint8_t TXEN : 1;       // Transmitter Enable
        uint8_t UCSZ : 2;       // Character Size
        uint8_t UMSEL : 1;      // USART Mode Select
        uint8_t UPM : 2;        // Parity Mode
    }b;
}UCSR0B_t;

/**
 * @typedef UCSR0C
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief USART Control and Status Register 0 C
 * 
 */
typedef union {
    uint8_t byte;               // USART Control and Status Register 0 C
    struct {
        uint8_t UCPOL : 1;      // Clock Polarity
        uint8_t UCSZ : 2;       // Character Size
        uint8_t USBS : 1;       // Stop Bit Select
        uint8_t UPM : 2;        // Parity Mode
        uint8_t UMSEL : 1;      // USART Mode Select
    }b;
}UCSR0C_t;

/**
 * @typedef UBRR0
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief USART Baud Rate Register 0
 * 
 */
typedef union {
    uint16_t UBRR0;             // USART Baud Rate Register 0
    struct {
        uint16_t UBRR0L : 8;    // USART Baud Rate Register 0 low byte
        uint16_t UBRR0H : 8;    // USART Baud Rate Register 0 high byte
    }b;
}UBRR0_t;


/**
 * @brief Atmega328p Chip memory map
 */
typedef struct __attribute__((packed)) {
    uint8_t     reserved[3];    // addr: 0x00 - 0x02:   Reserved space at address
    PINB_t      PINB;           // addr: 0x03:          Port B input pins
    DDRB_t      DDRB;           // addr: 0x04:          Port B data direction register
    PORTB_t     PORTB;          // addr: 0x05:          Port B data register
    PINC_t      PINC;           // addr: 0x06:          Port C input pins
    DDRC_t      DDRC;           // addr: 0x07:          Port C data direction register
    PORTC_t     PORTC;          // addr: 0x08:          Port C data register
    PIND_t      PIND;           // addr: 0x09:          Port D input pins
    DDRD_t      DDRD;           // addr: 0x0A:          Port D data direction register
    PORTD_t     PORTD;          // addr: 0x0B:          Port D data register
    uint8_t     reserved2[9];   // addr: 0x0C - 0x14:   Reserved space at address 0x0C 0x14
    TIFR0_t     TIFR0;          // addr: 0x15:          Timer/Counter 0 Interrupt Flag Register
    TIFR1_t     TIFR1;          // addr: 0x16:          Timer/Counter 1 Interrupt Flag Register
    TIFR2_t     TIFR2;          // addr: 0x17:          Timer/Counter 2 Interrupt Flag Register
    uint8_t     reserved3[3];   // addr: 0x18 - 0x1A:   Reserved space at address
    PCIFR_t     PCIFR;          // addr: 0x1B:          Pin Change Interrupt Flag Register
    EIFR_t      EIFR;           // addr: 0x1C:          External Interrupt Flag Register
    EIMSK_t     EIMSK;          // addr: 0x1D:          External Interrupt Mask Register
    GPIOR0_t    GPIOR0;         // addr: 0x1E:          General Purpose I/O Register 0
    EECR_t      EECR;           // addr: 0x1F:          Eeprom Control Register
    uint8_t     EEDR;           // addr: 0x20:          Eeprom Data Register  
    EEAR_t      EEAR;           // addr: 0x22:          Eeprom Address register
    GTCCR_t     GTCCR;          // addr: 0x23:          General Timer/Counter Control Register
    TCCR0A_t    TCCR0A;         // addr: 0x24:          Timer/Counter 0 Control Register A
    TCCR0B_t    TCCR0B;         // addr: 0x25:          Timer/Counter 0 Control Register B
    uint8_t     TCNT0;          // addr: 0x26:          Timer/Counter 0
    uint8_t     OCR0A;          // addr: 0x27:          Timer/Counter 0 Output Compare Register A
    uint8_t     OCR0B;          // addr: 0x28:          Timer/Counter 0 Output Compare Register B
    uint8_t     reserved4;      // addr: 0x29:          Reserved space at address
    GPIOR1_t    GPIO1;          // addr: 0x2A:          General Purpose I/O Register 1
    GPIOR2_t    GPIO2;          // addr: 0x2B:          General Purpose I/O Register 2
    SPCR_t      SPRC;           // addr: 0x2C:          SPI Control Register
    SPSR_t      SPSC;           // addr: 0x2D:          SPI Status Register
    uint8_t     SPDR;           // addr: 0x2E:          SPI Data Register
    uint8_t     reserved5;      // addr: 0x2F:          Reserved space at address
    ACSR_t      ACSR;           // addr: 0x30:          Analog Comparator Control and Status Register
    uint8_t     reserved6[2];   // addr: 0x31 - 0x32:   Reserved space at address
    SMCR_t      SMCR;           // addr: 0x33:          Sleep Mode Control Register
    MCUSR_t     MCUSR;          // addr: 0x34:          MCU Control Register
    MCUCR_t     MCUCR;          // addr: 0x35:          MCU Status Register
    uint8_t     reserved7;      // addr: 0x36:          Reserved space at address
    SPMCSR_t    SPMCSR;         // addr: 0x37:          Store Program Memory Control Register
    uint8_t     reserved8[5];   // addr: 0x38 - 0x3C:   Reserved space at address
    SP_t        SP;             // addr: 0x3D - 0x3E:   Stack Pointer
    SREG_t      SREG;           // addr: 0x3F:          AVR Status Register
    uint8_t     reserved9[32];  // addr: 0x40 - 0x5F:   Reserved space at address
    WDTCSR_t    WDTCSR;         // addr: 0x60:          Watchdog Timer Control Register
    CLKPR_t     CLKPR;          // addr: 0x61:          Clock Prescale Register
    uint8_t     reserved10[2];  // addr: 0x62 - 0x63:   Reserved space at address
    PRR_t       PRR;            // addr: 0x64:          Power Reduction Register
    uint8_t     reserved11;     // addr: 0x65:          Reserved space at address
    uint8_t     OSCCAL;         // addr: 0x66:          Oscillator Calibration register
    uint8_t     reserved12;     // addr: 0x67:          Reserved space at address
    PCICR_t     PCICR;          // addr: 0x68:          Pin Change Interrupt Control Register
    EICRA_t     EICRA;          // addr: 0x69:          External Interrupt Control Register A
    uint8_t     reserved13;     // addr: 0x6A:          Reserved space at address
    PCMSK0_t    PCMSK0;         // addr: 0x6B:          Pin Change Mask Register 0
    PCMSK1_t    PCMSK1;         // addr: 0x6C:          Pin Change Mask Register 1
    PCMSK2_t    PCMSK2;         // addr: 0x6D:          Pin Change Mask Register 2
    TIMSK0_t    TIMSK0;         // addr: 0x6E:          Timer/Counter 0 Interrupt Mask Register
    TIMSK1_t    TIMSK1;         // addr: 0x6F:          Timer/Counter 1 Interrupt Mask Register
    TIMSK2_t    TIMSK2;         // addr: 0x70:          Timer/Counter 2 Interrupt Mask Register
    uint8_t     reserved14[7];  // addr: 0x71 - 0x77:   Reserved space at address
    ADC_t       ADC;            // addr: 0x78 - 0x79:   ADC Data Register
    ADCSRA_t    ADCSRA;         // addr: 0x7A:          ADC Control and Status Register A
    ADCSRB_t    ADCSRB;         // addr: 0x7B:          ADC Control and Status Register B
    ADMUX_t     ADMUX;          // addr: 0x7C:          ADC Multiplexer Selection Register
    uint8_t     reserved15;     // addr: 0x7D:          Reserved space at address
    DIDR0_t     DIDR0;          // addr: 0x7E:          Digital Input Disable Register 0
    DIDR1_t     DIDR1;          // addr: 0x7F:          Digital Input Disable Register 1
    TCCR1A_t    TCCR1A;         // addr: 0x80:          Timer/Counter 1 Control Register A
    TCCR1B_t    TCCR1B;         // addr: 0x81:          Timer/Counter 1 Control Register B
    TCCR1C_t    TCCR1C;         // addr: 0x82:          Timer/Counter 1 Control Register C
    uint8_t     reserved16;     // addr: 0x83:          Reserved space at address
    TCNT1_t     TCNT1;          // addr: 0x84 - 0x85:   Timer/Counter 1 Counter register
    ICR1_t      ICR1;           // addr: 0x86 - 0x87:   Timer/Counter 1 Input Capture Register
    OCR1A_t     OCR1A;          // addr: 0x88 - 0x89:   Timer/Counter 1 Output Compare Register A
    OCR1B_t     OCR1B;          // addr: 0x8A - 0x8B:   Timer/Counter 1 Output Compare Register B
    uint8_t     reserved17[36]; // addr: 0x8C - 0xAF:   Reserved space at address
    TCCR2A_t    TCCR2A;         // addr: 0xB0:          Timer/Counter 2 Control Register A
    TCCR2B_t    TCCR2B;         // addr: 0xB1:          Timer/Counter 2 Control Register B
    uint8_t     TCNT2;          // addr: 0xB2:          Timer/Counter 2 Counter Register
    uint8_t     OCR2A;          // addr: 0xB3:          Timer/Counter 2 Output Compare Register A
    uint8_t     OCR2B;          // addr: 0xB4:          Timer/Counter 2 Output Compare Register B
    uint8_t     reserved18;     // addr: 0xB5:          Reserved space at address
    ASSR_t      ASSR;           // addr: 0xB6:          Asynchronous Status Register
    uint8_t     reserved19;     // addr: 0xB7:          Reserved space at address
    uint8_t     TWBR;           // addr: 0xB8:          TWI Bit Rate Register
    TWSR_t      TWSR;           // addr: 0xB9:          TWI Status Register
    TWAR_t      TWAR;           // addr: 0xBA:          TWI Address Register
    uint8_t     TWDR;           // addr: 0xBB:          TWI Data Register
    TWCR_t      TWCR;           // addr: 0xBC:          TWI Control Register
    TWAMR_t     TWAMR;          // addr: 0xBD:          TWI Address Mask Register
    uint8_t     reserved20[2];  // addr: 0xBE - 0xBF:   Reserved space at address
    UCSR0A_t    UCSR0A;         // addr: 0xC0:          USART Control and Status Register 0 A
    UCSR0B_t    UCSR0B;         // addr: 0xC1:          USART Control and Status Register 0 B
    UCSR0C_t    UCSR0C;         // addr: 0xC2:          USART Control and Status Register 0 C
    uint8_t     reserved21;     // addr: 0xC3:          Reserved space at address
    UBRR0_t     UBRR0;          // addr: 0xC4 - 0xC5:   USART Baud Rate Register 0
    uint8_t     UDR0;           // addr: 0xC6:          USART Data Register 0
    uint8_t     reserved22[55]; // addr: 0xC7 - 0xFF:   Reserved space at address
}Atmega328p_regs_t, *pt_atmega328p;

#define AVR_SYS_REG (Atmega328p_regs_t*)AVR_REGISTERS_BASE_ADDRESS