/**
 * @file Atmega2560.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-08-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once
#include <stdint.h>

constexpr uint32_t AVR_REGOFFSET = 0x20; /**< @brief The offset of the AVR registers from the base address */

typedef struct __attribute__((__packed__)){

    /**
     * @brief Address 0x00 (0x20) - Port A input pins
     *        Each bit in the register corresponds to a pin on Port A. 
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PINA0 : 1;  /** < Port A 0 input pin            */
            uint8_t PINA1 : 1;  /** < Port A 1 input pin            */
            uint8_t PINA2 : 1;  /** < Port A 2 input pin            */
            uint8_t PINA3 : 1;  /** < Port A 3 input pin            */
            uint8_t PINA4 : 1;  /** < Port A 4 input pin            */
            uint8_t PINA5 : 1;  /** < Port A 5 input pin            */
            uint8_t PINA6 : 1;  /** < Port A 6 input pin            */
            uint8_t PINA7 : 1;  /** < Port A 7 input pin            */
        }b;                
        uint8_t byte;           /** < Port A input data register    */
    }PINA;        

    /**
     * @brief Address 0x01 (0x21) - Port A data direction register
     *        Each bit in the register corresponds to a pin on Port A. 
     *        Setting a bit to 1 configures the corresponding pin as an output, 
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.  
     */
    union {
        struct {
            uint8_t DDRA0 : 1;  /** < Port A 0 data direction pin   */
            uint8_t DDRA1 : 1;  /** < Port A 1 data direction pin   */
            uint8_t DDRA2 : 1;  /** < Port A 2 data direction pin   */
            uint8_t DDRA3 : 1;  /** < Port A 3 data direction pin   */
            uint8_t DDRA4 : 1;  /** < Port A 4 data direction pin   */
            uint8_t DDRA5 : 1;  /** < Port A 5 data direction pin   */
            uint8_t DDRA6 : 1;  /** < Port A 6 data direction pin   */
            uint8_t DDRA7 : 1;  /** < Port A 7 data direction pin   */
        }b;    
        uint8_t byte;           /** < Port A data direction register */
    }DDRA;                      

    /**
     * @brief Address 0x02 (0x22) - Port A output register
     *        Each bit in the register corresponds to a pin on Port A. 
     *        Setting a bit to 1 sets the corresponding pin to high, 
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTA0 : 1; /** < Port A 0 output pin           */
            uint8_t PORTA1 : 1; /** < Port A 1 output pin           */
            uint8_t PORTA2 : 1; /** < Port A 2 output pin           */
            uint8_t PORTA3 : 1; /** < Port A 3 output pin           */
            uint8_t PORTA4 : 1; /** < Port A 4 output pin           */
            uint8_t PORTA5 : 1; /** < Port A 5 output pin           */
            uint8_t PORTA6 : 1; /** < Port A 6 output pin           */
            uint8_t PORTA7 : 1; /** < Port A 7 output pin           */
        }b;                    
        uint8_t byte;           /** < Port A output data register   */
    }PORTA;                     

    /**
     * @brief Address 0x03 (0x23) - Port B input pins
     *        Each bit in the register corresponds to a pin on Port B. 
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PINB0 : 1;  /** < Port B 0 input pin            */
            uint8_t PINB1 : 1;  /** < Port B 1 input pin            */
            uint8_t PINB2 : 1;  /** < Port B 2 input pin            */
            uint8_t PINB3 : 1;  /** < Port B 3 input pin            */
            uint8_t PINB4 : 1;  /** < Port B 4 input pin            */
            uint8_t PINB5 : 1;  /** < Port B 5 input pin            */
            uint8_t PINB6 : 1;  /** < Port B 6 input pin            */
            uint8_t PINB7 : 1;  /** < Port B 7 input pin            */
        }b;                
        uint8_t byte;           /** < Port B input data register    */
    }PINB;                 

    /**
     * @brief Address 0x04 (0x24) - Port B data direction register
     *        Each bit in the register corresponds to a pin on Port B. 
     *        Setting a bit to 1 configures the corresponding pin as an output, 
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.
     */
    union {
        struct {
            uint8_t DDRB0 : 1;  /** < Port B 0 data direction pin   */
            uint8_t DDRB1 : 1;  /** < Port B 1 data direction pin   */
            uint8_t DDRB2 : 1;  /** < Port B 2 data direction pin   */
            uint8_t DDRB3 : 1;  /** < Port B 3 data direction pin   */
            uint8_t DDRB4 : 1;  /** < Port B 4 data direction pin   */
            uint8_t DDRB5 : 1;  /** < Port B 5 data direction pin   */
            uint8_t DDRB6 : 1;  /** < Port B 6 data direction pin   */
            uint8_t DDRB7 : 1;  /** < Port B 7 data direction pin   */
        }b;                    
        uint8_t byte;           /** < Port B data direction register */
    }DDRB;                    

    /**
     * @brief Address 0x05 (0x25) - Port B output register
     *        Each bit in the register corresponds to a pin on Port B. 
     *        Setting a bit to 1 sets the corresponding pin to high, 
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTB0 : 1; /** < Port B 0 output pin           */
            uint8_t PORTB1 : 1; /** < Port B 1 output pin           */
            uint8_t PORTB2 : 1; /** < Port B 2 output pin           */
            uint8_t PORTB3 : 1; /** < Port B 3 output pin           */
            uint8_t PORTB4 : 1; /** < Port B 4 output pin           */
            uint8_t PORTB5 : 1; /** < Port B 5 output pin           */
            uint8_t PORTB6 : 1; /** < Port B 6 output pin           */
            uint8_t PORTB7 : 1; /** < Port B 7 output pin           */
        }b;                   
        uint8_t byte;           /** < Port B output data register   */  
    }PORTB;                    

    /**
     * @brief Address 0x06 (0x26) - Port C input pins
     *        Each bit in the register corresponds to a pin on Port C.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PINC0 : 1;  /** < Port C 0 input pin            */
            uint8_t PINC1 : 1;  /** < Port C 1 input pin            */
            uint8_t PINC2 : 1;  /** < Port C 2 input pin            */
            uint8_t PINC3 : 1;  /** < Port C 3 input pin            */
            uint8_t PINC4 : 1;  /** < Port C 4 input pin            */
            uint8_t PINC5 : 1;  /** < Port C 5 input pin            */
            uint8_t PINC6 : 1;  /** < Port C 6 input pin            */
            uint8_t PINC7 : 1;  /** < Port C 7 input pin            */
        }b;                    
        uint8_t byte;           /** < Port C input data register    */
    }PINC;                      

    /**
     * @brief Address 0x07 (0x27) - Port C data direction register
     *        Each bit in the register corresponds to a pin on Port C. 
     *        Setting a bit to 1 configures the corresponding pin as an output, 
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.
     */
    union {
        struct {
            uint8_t DDRC0 : 1;  /** < Port C 0 data direction pin   */
            uint8_t DDRC1 : 1;  /** < Port C 1 data direction pin   */
            uint8_t DDRC2 : 1;  /** < Port C 2 data direction pin   */
            uint8_t DDRC3 : 1;  /** < Port C 3 data direction pin   */
            uint8_t DDRC4 : 1;  /** < Port C 4 data direction pin   */
            uint8_t DDRC5 : 1;  /** < Port C 5 data direction pin   */
            uint8_t DDRC6 : 1;  /** < Port C 6 data direction pin   */
            uint8_t DDRC7 : 1;  /** < Port C 7 data direction pin   */
        }b;                     
        uint8_t byte;           /** < Port C data direction register */
    }DDRC;                     

    /**
     * @brief Address 0x08 (0x28) - Port C output register
     *        Each bit in the register corresponds to a pin on Port C. 
     *        Setting a bit to 1 sets the corresponding pin to high, 
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTC0 : 1; /** < Port C 0 output pin           */
            uint8_t PORTC1 : 1; /** < Port C 1 output pin           */
            uint8_t PORTC2 : 1; /** < Port C 2 output pin           */
            uint8_t PORTC3 : 1; /** < Port C 3 output pin           */
            uint8_t PORTC4 : 1; /** < Port C 4 output pin           */
            uint8_t PORTC5 : 1; /** < Port C 5 output pin           */
            uint8_t PORTC6 : 1; /** < Port C 6 output pin           */
            uint8_t PORTC7 : 1; /** < Port C 7 output pin           */
        }b;                     
        uint8_t byte;           /** < Port C output data register   */
    }PORTC;                   

    /**
     * @brief Address 0x09 (0x29) - Port D input pins
     *        Each bit in the register corresponds to a pin on Port D.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PIND0 : 1;  /** < Port D 0 input pin            */
            uint8_t PIND1 : 1;  /** < Port D 1 input pin            */
            uint8_t PIND2 : 1;  /** < Port D 2 input pin            */
            uint8_t PIND3 : 1;  /** < Port D 3 input pin            */
            uint8_t PIND4 : 1;  /** < Port D 4 input pin            */
            uint8_t PIND5 : 1;  /** < Port D 5 input pin            */
            uint8_t PIND6 : 1;  /** < Port D 6 input pin            */
            uint8_t PIND7 : 1;  /** < Port D 7 input pin            */
        }b;                     
        uint8_t byte;           /** < Port D input data register    */
    }PIND;                      

    /**
     * @brief Address 0x0A (0x2A) - Port D data direction register
     *        Each bit in the register corresponds to a pin on Port D. 
     *        Setting a bit to 1 configures the corresponding pin as an output, 
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.
     */
    union {
        struct {
            uint8_t DDRD0 : 1;  /** < Port D 0 data direction pin   */
            uint8_t DDRD1 : 1;  /** < Port D 1 data direction pin   */
            uint8_t DDRD2 : 1;  /** < Port D 2 data direction pin   */
            uint8_t DDRD3 : 1;  /** < Port D 3 data direction pin   */
            uint8_t DDRD4 : 1;  /** < Port D 4 data direction pin   */
            uint8_t DDRD5 : 1;  /** < Port D 5 data direction pin   */
            uint8_t DDRD6 : 1;  /** < Port D 6 data direction pin   */
            uint8_t DDRD7 : 1;  /** < Port D 7 data direction pin   */
        }b;                      
        uint8_t byte;           /** < Port D data direction register */
    }DDRD;                      

    /**
     * @brief Address: 0x0B (0x2B) - Port D output register
     *        Each bit in the register corresponds to a pin on Port D. 
     *        Setting a bit to 1 sets the corresponding pin to high, 
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTD0 : 1; /** < Port D 0 output pin           */
            uint8_t PORTD1 : 1; /** < Port D 1 output pin           */
            uint8_t PORTD2 : 1; /** < Port D 2 output pin           */
            uint8_t PORTD3 : 1; /** < Port D 3 output pin           */
            uint8_t PORTD4 : 1; /** < Port D 4 output pin           */
            uint8_t PORTD5 : 1; /** < Port D 5 output pin           */
            uint8_t PORTD6 : 1; /** < Port D 6 output pin           */
            uint8_t PORTD7 : 1; /** < Port D 7 output pin           */
        }b;                     
        uint8_t byte;           /** < Port D output data register   */
    }PORTD;                    

    /**
     * @brief Address: 0x0C (0x2C) - Port E input pins
     *        Each bit in the register corresponds to a pin on Port E.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PINE0 : 1;  /** < Port E 0 input pin            */
            uint8_t PINE1 : 1;  /** < Port E 1 input pin            */
            uint8_t PINE2 : 1;  /** < Port E 2 input pin            */
            uint8_t PINE3 : 1;  /** < Port E 3 input pin            */
            uint8_t PINE4 : 1;  /** < Port E 4 input pin            */
            uint8_t PINE5 : 1;  /** < Port E 5 input pin            */
            uint8_t PINE6 : 1;  /** < Port E 6 input pin            */
            uint8_t PINE7 : 1;  /** < Port E 7 input pin            */
        }b;                    
        uint8_t byte;           /** < Port E input data register    */
    }PINE;                     

    /**
     * @brief Address: 0x0D (0x2D) - Port E data direction register
     *        Each bit in the register corresponds to a pin on Port E. 
     *        Setting a bit to 1 configures the corresponding pin as an output, 
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.
     */
    union {
        struct {
            uint8_t DDRE0 : 1;  /** < Port E 0 data direction pin   */
            uint8_t DDRE1 : 1;  /** < Port E 1 data direction pin   */
            uint8_t DDRE2 : 1;  /** < Port E 2 data direction pin   */
            uint8_t DDRE3 : 1;  /** < Port E 3 data direction pin   */
            uint8_t DDRE4 : 1;  /** < Port E 4 data direction pin   */
            uint8_t DDRE5 : 1;  /** < Port E 5 data direction pin   */
            uint8_t DDRE6 : 1;  /** < Port E 6 data direction pin   */
            uint8_t DDRE7 : 1;  /** < Port E 7 data direction pin   */
        }b;                     
        uint8_t byte;           /** < Port E data direction register */
    }DDRE;                      

    /**
     * @brief Address: 0x0E (0x2E) - Port E output register
     *        Each bit in the register corresponds to a pin on Port E. 
     *        Setting a bit to 1 sets the corresponding pin to high, 
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTE0 : 1; /** < Port E 0 output pin           */
            uint8_t PORTE1 : 1; /** < Port E 1 output pin           */
            uint8_t PORTE2 : 1; /** < Port E 2 output pin           */
            uint8_t PORTE3 : 1; /** < Port E 3 output pin           */
            uint8_t PORTE4 : 1; /** < Port E 4 output pin           */
            uint8_t PORTE5 : 1; /** < Port E 5 output pin           */
            uint8_t PORTE6 : 1; /** < Port E 6 output pin           */
            uint8_t PORTE7 : 1; /** < Port E 7 output pin           */
        }b;                      
        uint8_t byte;           /** < Port E output data register   */
    }PORTE;                     

    /**
     * @brief Address 0x0F (0x2F) - Port F input pins
     *        Each bit in the register corresponds to a pin on Port F.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PINF0 : 1;  /** < Port F 0 input pin            */
            uint8_t PINF1 : 1;  /** < Port F 1 input pin            */
            uint8_t PINF2 : 1;  /** < Port F 2 input pin            */
            uint8_t PINF3 : 1;  /** < Port F 3 input pin            */
            uint8_t PINF4 : 1;  /** < Port F 4 input pin            */
            uint8_t PINF5 : 1;  /** < Port F 5 input pin            */
            uint8_t PINF6 : 1;  /** < Port F 6 input pin            */
            uint8_t PINF7 : 1;  /** < Port F 7 input pin            */
        }b;                       
        uint8_t byte;           /** < Port F input data register    */
    }PINF;                      

    /**
     * @brief Address 0x10 (0x30) - Port F data direction register
     *        Each bit in the register corresponds to a pin on Port F.
     *        Setting a bit to 1 configures the corresponding pin as an output,
     *        while setting it to 0 configures it as an input.
     *        Reading this register returns the current configuration of the pins.
     */
    union {
        struct {
            uint8_t DDRF0 : 1;  /** < Port F 0 data direction pin   */
            uint8_t DDRF1 : 1;  /** < Port F 1 data direction pin   */
            uint8_t DDRF2 : 1;  /** < Port F 2 data direction pin   */
            uint8_t DDRF3 : 1;  /** < Port F 3 data direction pin   */
            uint8_t DDRF4 : 1;  /** < Port F 4 data direction pin   */
            uint8_t DDRF5 : 1;  /** < Port F 5 data direction pin   */
            uint8_t DDRF6 : 1;  /** < Port F 6 data direction pin   */
            uint8_t DDRF7 : 1;  /** < Port F 7 data direction pin   */
        }b;                     
        uint8_t byte;           /** < Port F data direction register */
    }DDRF;

    /**
     * @brief Address 0x11 (0x31) - Port F output register
     *        Each bit in the register corresponds to a pin on Port F.
     *        Setting a bit to 1 sets the corresponding pin to high,
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     */
    union {
        struct {
            uint8_t PORTF0 : 1; /** < Port F 0 output pin           */
            uint8_t PORTF1 : 1; /** < Port F 1 output pin           */
            uint8_t PORTF2 : 1; /** < Port F 2 output pin           */
            uint8_t PORTF3 : 1; /** < Port F 3 output pin           */
            uint8_t PORTF4 : 1; /** < Port F 4 output pin           */
            uint8_t PORTF5 : 1; /** < Port F 5 output pin           */
            uint8_t PORTF6 : 1; /** < Port F 6 output pin           */
            uint8_t PORTF7 : 1; /** < Port F 7 output pin           */
        }b;                     
        uint8_t byte;           /** < Port F output data register   */
    }PORTF;                     

    /**
     * @brief Address 0x12 (0x32) - Port G input pins
     *        Each bit in the register corresponds to a pin on Port G.
     *        Reading this register returns the current state of the pins.
     * @note Port G has only 6 pins, so the upper 2 bits are unused.
     */
    union {
        struct {
            uint8_t PING0 : 1;  /** < Port G 0 input pin            */
            uint8_t PING1 : 1;  /** < Port G 1 input pin            */
            uint8_t PING2 : 1;  /** < Port G 2 input pin            */
            uint8_t PING3 : 1;  /** < Port G 3 input pin            */
            uint8_t PING4 : 1;  /** < Port G 4 input pin            */
            uint8_t PING5 : 1;  /** < Port G 5 input pin            */
            uint8_t align : 2; /** < Port G 6-7 unused              */
        }b;                     /** < Port G output bit register    */
        uint8_t byte;           /** < Port G output data register   */
    }PORTG;

    /**
     * @brief Address 0x13 (0x33) - Port G data direction register
     *        Each bit in the register corresponds to a pin on Port G. 
     *        Setting a bit to 1 configures the corresponding pin as an output.
     *        Reading this register returns the current configuration of the pins.
     * @note Port G has only 6 pins, so the upper 2 bits are unused.
     */
    union {
        struct {
            uint8_t DDRG0 : 1;  /** < Port G 0 data direction pin   */
            uint8_t DDRG1 : 1;  /** < Port G 1 data direction pin   */
            uint8_t DDRG2 : 1;  /** < Port G 2 data direction pin   */
            uint8_t DDRG3 : 1;  /** < Port G 3 data direction pin   */
            uint8_t DDRG4 : 1;  /** < Port G 4 data direction pin   */
            uint8_t DDRG5 : 1;  /** < Port G 5 data direction pin   */
            uint8_t align : 2; /** < Port G 6-7 unused              */
        }b;                     /** < Port G data direction bit register */
        uint8_t byte;           /** < Port G data direction register */
    }DDRG;
    
    /**
     * @brief Address 0x14 (0x34) - Port G output register
     *        Each bit in the register corresponds to a pin on Port G.
     *        Setting a bit to 1 sets the corresponding pin to high,
     *        while setting it to 0 sets it to low.
     *        Reading this register returns the current state of the pins.
     * @note Port G has only 6 pins, so the upper 2 bits are unused.
     */
    union {
        struct {
            uint8_t PORTG0 : 1; /** < Port G 0 output pin           */
            uint8_t PORTG1 : 1; /** < Port G 1 output pin           */
            uint8_t PORTG2 : 1; /** < Port G 2 output pin           */
            uint8_t PORTG3 : 1; /** < Port G 3 output pin           */
            uint8_t PORTG4 : 1; /** < Port G 4 output pin           */
            uint8_t PORTG5 : 1; /** < Port G 5 output pin           */
            uint8_t align : 2;  /** < Port G 6-7 unused              */
        }b;                     /** < Port G output bit register    */
        uint8_t byte;           /** < Port G output data register   */
    }PORTG;

    /**
     * @brief Address 0x15 (0x35) - Timer/Counter0 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter0.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t TOV0 : 1;  /** < Timer/Counter0 Overflow Flag   */
            uint8_t OCF0A : 1; /** < Timer/Counter0 Output Compare Flag A */
            uint8_t OCF0B : 1; /** < Timer/Counter0 Output Compare Flag B */
            uint8_t align : 5; /** < alignment - unused              */
        }b;
        uint8_t byte;       /** < Timer/Counter0 Interrupt Flag Register */
    }TIFR0;

    /**
     * @brief Address 0x16 (0x36) - Timer/Counter1 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter1.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t TOV1 : 1;  /** < Timer/Counter1 Overflow Flag   */
            uint8_t OCF1A : 1; /** < Timer/Counter1 Output Compare Flag A */
            uint8_t OCF1B : 1; /** < Timer/Counter1 Output Compare Flag B */
            uint8_t reserved : 2; /** < reserved/unused              */
            uint8_t ICF1 : 1;  /** < Timer/Counter Input Capture Flag 1 */
            uint8_t align : 2; /** < alignment - unused              */
        }b;
        uint8_t byte;       /** < Timer/Counter1 Interrupt Flag Register */
    }TIFR1;

    /**
     * @brief Address 0x17 (0x37) - Timer/Counter2 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter2.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t TOV2 : 1;  /** < Timer/Counter2 Overflow Flag   */
            uint8_t OCF2A : 1; /** < Timer/Counter2 Output Compare Flag A */
            uint8_t OCF2B : 1; /** < Timer/Counter2 Output Compare Flag B */
            uint8_t align : 5; /** < alignment - unused              */
        }b;
        uint8_t byte;       /** < Timer/Counter2 Interrupt Flag Register */
    }TIFR2;
    
    /**
     * @brief Address 0x18 (0x38) - Timer/Counter3 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter3.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t TOV3 : 1;   /** < Timer/Counter3 Overflow Flag   */
            uint8_t OCF3A : 1;  /** < Timer/Counter3 Output Compare Flag A */
            uint8_t OCF3B : 1;  /** < Timer/Counter3 Output Compare Flag B */
            uint8_t OCF3C : 1;  /** < Timer/Counter3 Output Compare Flag C */
            uint8_t ICF3 : 1;   /** < Timer/Counter Input Capture Flag 3 */
            uint8_t align : 3;  /** < alignment - unused              */
        }b;                     
        uint8_t byte;           /** < Timer/Counter3 Interrupt Flag Register */
    }TIFR3;

    /**
     * @brief Address 0x19 (0x39) - Timer/Counter4 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter4.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t TOV4 : 1;   /** < Timer/Counter4 Overflow Flag   */
            uint8_t OCF4A : 1;  /** < Timer/Counter4 Output Compare Flag A */
            uint8_t OCF4B : 1;  /** < Timer/Counter4 Output Compare Flag B */
            uint8_t OCF4C : 1;  /** < Timer/Counter4 Output Compare Flag C */
            uint8_t ICF4 : 1;   /** < Timer/Counter Input Capture Flag 4 */
            uint8_t align : 3;  /** < alignment - unused              */
        }b;
        uint8_t byte;           /** < Timer/Counter4 Interrupt Flag Register */
    }TIFR4;

    /**
     * @brief Address 0x1A (0x3A) - Timer/Counter5 Interrupt Flag Register
     *        This register contains the interrupt flags for Timer/Counter5.
     *        Each bit in the register corresponds to a specific interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union { 
        struct {
            uint8_t TOV5 : 1;   /** < Timer/Counter5 Overflow Flag   */
            uint8_t OCF5A : 1;  /** < Timer/Counter5 Output Compare Flag A */
            uint8_t OCF5B : 1;  /** < Timer/Counter5 Output Compare Flag B */
            uint8_t OCF5C : 1;  /** < Timer/Counter5 Output Compare Flag C */
            uint8_t ICF5 : 1;   /** < Timer/Counter Input Capture Flag 5 */
            uint8_t align : 3;  /** < alignment - unused              */
        }b;
        uint8_t byte;           /** < Timer/Counter5 Interrupt Flag Register */
    }TIFR5; 

    /**
     * @brief Address 0x1B (0x3B) - Pin Change Interrupt Flag Register
     *        This register contains the interrupt flags for pin change interrupts.
     *        Each bit in the register corresponds to a specific pin change interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t PCIF0 : 1;  /** < Pin Change Interrupt Flag 0    */
            uint8_t PCIF1 : 1;  /** < Pin Change Interrupt Flag 1    */
            uint8_t PCIF2 : 1;  /** < Pin Change Interrupt Flag 2    */
            uint8_t align : 5;  /** < alignment - unused              */
        }b;
        uint8_t byte;       /** < Pin Change Interrupt Flag Register */
    }PCIFR;

    /**
     * @brief Address 0x1C (0x3C) - External Interrupt Flag Register
     *        This register contains the interrupt flags for external interrupts.
     *        Each bit in the register corresponds to a specific external interrupt flag.
     *        Reading this register returns the current state of the interrupt flags.
     */
    union {
        struct {
            uint8_t INTF0 : 1;  /** < External Interrupt Flag 0       */
            uint8_t INTF1 : 1;  /** < External Interrupt Flag 1       */
            uint8_t INTF2 : 1;  /** < External Interrupt Flag 2       */
            uint8_t INTF3 : 1;  /** < External Interrupt Flag 3       */
            uint8_t INTF4 : 1;  /** < External Interrupt Flag 4       */
            uint8_t INTF5 : 1;  /** < External Interrupt Flag 5       */
            uint8_t INTF6 : 1;  /** < External Interrupt Flag 6       */
            uint8_t INTF7 : 1;  /** < External Interrupt Flag 7       */
        }b;
        uint8_t byte;       /** < External Interrupt Flag Register */
    }EIFR;                  

    /**
     * @brief Address 0x1D (0x3D) - External Interrupt Request Enable Register
     *        This register contains the enable bits for external interrupts.
     *        Each bit in the register corresponds to a specific external interrupt request.
     *        Setting a bit enables the corresponding external interrupt.
     */
    union {
        struct {
            uint8_t INT0 : 1;  /** < External Interrupt Request 0 Enable */
            uint8_t INT1 : 1;  /** < External Interrupt Request 1 Enable */
            uint8_t INT2 : 1;  /** < External Interrupt Request 2 Enable */
            uint8_t INT3 : 1;  /** < External Interrupt Request 3 Enable */
            uint8_t INT4 : 1;  /** < External Interrupt Request 4 Enable */
            uint8_t INT5 : 1;  /** < External Interrupt Request 5 Enable */
            uint8_t INT6 : 1;  /** < External Interrupt Request 6 Enable */
            uint8_t INT7 : 1;  /** < External Interrupt Request 7 Enable */
        }b;
        uint8_t byte;       /** < External Interrupt Request Enable Register */
    }EIMSK;

    /**
     * @brief Address 0x1E (0x3E) - General Purpose I/O Register 0
     *        This register provides general purpose I/O functionality.
     */
    uint8_t GPIOR0;

    /**
     * @brief Address 0x1F (0x3F) - EEPROM Control Register
     *        This register controls the operation of the EEPROM.
     */
    union {
        struct {
            uint8_t EERE : 1;   /** < EEPROM Read Enable                */
            uint8_t EEPE : 1;   /** < EEPROM Programming Enable         */
            uint8_t EEMPE : 1;  /** < EEPROM Master Programming Enable  */
            uint8_t EERIE : 1;  /** < EEPROM Ready Interrupt Enable     */
            uint8_t EEPM0 : 1;  /** < EEPROM Programming Mode Bit 0     */
            uint8_t EEPM1 : 1;  /** < EEPROM Programming Mode Bit 1     */
            uint8_t align : 2;  /** < alignment - unused                 */
        }b;
        uint8_t byte;       /** < EEPROM Control Register           */
    }EECR;

    /**
     * @brief Address 0x20 (0x40) - EEPROM Data Register
     *        This register is used to read from or write data to the EEPROM.
     */
    uint8_t EEDR;           /** < EEPROM Data Register */


    /**
     * @brief Address 0x21 (0x41) - EEPROM Address Register
     *        This register is used to specify the address in the EEPROM for read or write operations.
     */
    uint8_t EEARL;           /** < EEPROM Address register low byte */


    /**
     * @brief Address 0x22 (0x42) - EEPROM Address Register High Byte
     *        This register is used to specify the high byte of the address in the EEPROM for read or write operations.
     */
    union {
        struct {
            uint8_t HighByte : 4;  /** < EEPROM Address register high byte (only 4 bits used) */
            uint8_t align : 4;      /** < alignment - unused (upper 4 bits) */
        }b;
        uint8_t byte;           /** < EEPROM Address register high byte */
    }EEARH; 

    /**
     * @brief Address 0x23 (0x43) - General Timer/Counter Control Register
     *        This register is used to control the operation of the general timer/counter.
     *        Each bit in the register corresponds to a specific control function.
     *        Reading this register returns the current state of the control bits.
     */
    union {
        struct {
            uint8_t PSRSYNC : 1;  /** < Prescaler Reset for Synchronization */
            uint8_t PSRASY  : 1;  /** < Prescaler Reset Timer/Counter 2 */
            uint8_t align : 5;    /** < alignment - unused */
            uint8_t TSM : 1;      /** < Timer/Counter Synchronization Mode */
        }b;
        uint8_t byte;           /** < General Timer/Counter Control Register */
    }GTCCR;

    /**
     * @brief Address 0x24 (0x44) - Timer/Counter Control Register A
     *        This register is used to control the operation of Timer/Counter0.
     */
    union {
        struct {
            uint8_t WGM00 : 1;  /** < Waveform Generation Mode Bit 0 */
            uint8_t WGM01 : 1;  /** < Waveform Generation Mode Bit 1 */
            uint8_t unused : 2; /** < Unused bits */
            uint8_t COM0B0 : 1; /** < Compare Output Mode for Channel B Bit 0 */
            uint8_t COM0B1 : 1; /** < Compare Output Mode for Channel B Bit 1 */
            uint8_t COM0A0 : 1; /** < Compare Output Mode for Channel A Bit 0 */
            uint8_t COM0A1 : 1; /** < Compare Output Mode for Channel A Bit 1 */
        }b;
        uint8_t byte;       /** < Timer/Counter Control Register A */
    }TCCR0A;

    /**
     * @brief Address 0x25 (0x45) - Timer/Counter Control Register B
     *        This register is used to control the operation of Timer/Counter0.
     */
    union {
        struct {
            uint8_t CS00 : 1;  /** < Clock Select Bit 0 */
            uint8_t CS01 : 1;  /** < Clock Select Bit 1 */
            uint8_t CS02 : 1;  /** < Clock Select Bit 2 */
            uint8_t WGM02 : 1; /** < Waveform Generation Mode Bit 2 */
            uint8_t unused : 2; /** < Unused bits */
            uint8_t FOC0B : 1; /** < Force Output Compare for Channel B */
            uint8_t FOC0A : 1; /** < Force Output Compare for Channel A */
        }b;
        uint8_t byte;       /** < Timer/Counter Control Register B */
    }TCCR0B;

    /**
     * @brief Address 0x26 (0x46) - Timer/Counter 0 Register
     *        This register is used to read or write the value of Timer/Counter0.
     */
    uint8_t TCNT0;      /** < Timer/Counter 0 Register */

    /**
     * @brief Address 0x27 (0x47) - Output Compare Register A for Timer/Counter 0
     *        This register is used to read or write the value of the output compare register for Timer/Counter0 channel A.
     */
    uint8_t OCR0A;      /** < Output Compare Register A for Timer/Counter 0 */

    /**
     * @brief Address 0x28 (0x48) - Output Compare Register B for Timer/Counter 0
     *        This register is used to read or write the value of the output compare register for Timer/Counter0 channel B.
     */
    uint8_t OCR0B;      /** < Output Compare Register B for Timer/Counter 0 */

    /**
     * @brief Address 0x29 (0x49) - unused;
     */
    uint8_t unused_1;

    /**
     * @brief Address 0x2A (0x4A) - General Purpose I/O Register 1
     */
    uint8_t GPIOR1;

    /**
     * @brief Address 0x2B (0x4B) - General Purpose I/O Register 2
     */
    uint8_t GPIOR2;

    /**
     * @brief Address 0x2C (0x4C) - SPI Control Register
     *        This register is used to control the operation of the SPI (Serial Peripheral Interface) module.    
     */
    union {
        struct {
            uint8_t SPR0 : 1;  /** < SPI Clock Rate Select Bit 0 */
            uint8_t SPR1 : 1;  /** < SPI Clock Rate Select Bit 1 */
            uint8_t CPHA : 1;  /** < SPI Clock Phase */
            uint8_t CPOL : 1;  /** < SPI Clock Polarity */
            uint8_t MSTR : 1;  /** < SPI Master/Slave Select */
            uint8_t DORD : 1;  /** < SPI Data Order */
            uint8_t SPE : 1;   /** < SPI Enable */
            uint8_t SPIE : 1;  /** < SPI Interrupt Enable */
        }b;
        uint8_t byte;       /** < SPI Control Register */
    }SPCR;

    /**
     * @brief Address 0x2D (0x4D) - SPI Status Register
     * 
     */
    union {
        struct {
            uint8_t SPI2X : 1;  /** < Double SPI Speed Bit */
            uint8_t unused : 5; /** < alignment - unused */
            uint8_t SPIF : 1;   /** < SPI Interrupt Flag */
            uint8_t WCOL : 1;   /** < Write Collision Flag */
        }b;
        uint8_t byte;           /** < SPI Status Register */
    }SPSR;

    /**
     * @brief Address 0x2E (0x4E) - SPI Data Register
     * 
     */
    uint8_t SPDR;

    /**
     * @brief Address 0x2F (0x4F) - unused;
     */
    uint8_t unused_2;

    /**
     * @brief Address 0x30 (0x50) - Analog Comparator Control and Status Register
     *        This register is used to control the operation of the analog comparator.
     *        Each bit in the register corresponds to a specific control or status function.
     *        Reading this register returns the current state of the control and status bits.
     */
    union {
        struct {
            uint8_t ACIS0 : 1;  /** < Analog Comparator Interrupt Mode Select Bit 0 */
            uint8_t ACIS1 : 1;  /** < Analog Comparator Interrupt Mode Select Bit 1 */
            uint8_t ACIC : 1;   /** < Analog Comparator Input Capture Enable */
            uint8_t ACIE : 1;   /** < Analog Comparator Interrupt Enable */
            uint8_t ACI : 1;    /** < Analog Comparator Interrupt Flag */
            uint8_t ACO : 1;    /** < Analog Comparator Output */
            uint8_t ACBG : 1;   /** < Analog Comparator Bandgap Select */
            uint8_t ACD : 1;    /** < Analog Comparator Disable */
        }b;
        uint8_t byte;       /** < Analog Comparator Control and Status Register */
    }ACSR;

    /**
     * @brief Address 0x31 (0x51) - On-Chip Debugging Register
     *        This register is used for on-chip debugging purposes.
     *        The CPU can transfer a byte to the debugger by writing to this register.
     * @note IDRD is used to indicate that the CPU has written a byte to this register
     *       and the debugger can read it. 
     */
    union {
        struct {
            uint8_t OCDR0 : 1; /** < On-Chip Debugging Register Bit 0 */
            uint8_t OCDR1 : 1; /** < On-Chip Debugging Register Bit 1 */
            uint8_t OCDR2 : 1; /** < On-Chip Debugging Register Bit 2 */
            uint8_t OCDR3 : 1; /** < On-Chip Debugging Register Bit 3 */
            uint8_t OCDR4 : 1; /** < On-Chip Debugging Register Bit 4 */
            uint8_t OCDR5 : 1; /** < On-Chip Debugging Register Bit 5 */
            uint8_t OCDR6 : 1; /** < On-Chip Debugging Register Bit 6 */
            uint8_t OCDR7 : 1; /** < On-Chip Debugging Register Bit 7 */
        }b;
        uint8_t byte;       /** < On-Chip Debugging Register */
    }OCDR;

    /**
     * @brief Address 0x32 (0x52) - unused;
     */
    uint8_t unused_3;

    /**
     * @brief Address 0x33 (0x53) - Sleep Mode Control Register
     *        This register is used to control the sleep mode of the microcontroller.
     *        Each bit in the register corresponds to a specific sleep mode control function.
     *        Reading this register returns the current state of the sleep mode control bits.
     */
    union {
        struct {
            uint8_t SE : 1;     /** < Sleep Enable */
            uint8_t SM : 3;     /** < Sleep Mode Select */
            uint8_t unused : 4; /** < alignment - unused */
        }b;
        uint8_t byte;       /** < Sleep Mode Control Register */
    }SMCR;

    /**
     * @brief Address 0x34 (0x54) - MCU Status Register
     *        This register is used to indicate the status of the microcontroller.
     *        Each bit in the register corresponds to a specific status function.
     *        Reading this register returns the current state of the status bits.
     */
    union {
        struct {
            uint8_t PORF : 1;   /** < Power-On Reset Flag */
            uint8_t EXTRF : 1;  /** < External Reset Flag */
            uint8_t BORF : 1;   /** < Brown-Out Reset Flag */
            uint8_t WDRF : 1;   /** < Watchdog Reset Flag */
            uint8_t JTRF : 1;   /** < JTAG Reset Flag */
            uint8_t unused : 3; /** < alignment - unused */
        }b;
        uint8_t byte;       /** < MCU Status Register */
    }MCUSR;

    /**
     * @brief Address 0x35 (0x55) - MCU Control Register
     *        This register is used to control various functions of the microcontroller.
     * 
     */
    union {
        struct {
            uint8_t IVCE : 1;       /** < Interrupt Vector Change Enable */
            uint8_t IVSEL : 1;      /** < Interrupt Vector Select */
            uint8_t unused_1 : 2;   /** < alignment - unused */
            uint8_t PUD : 1;        /** < Pull-up Disable */
            uint8_t unused_2 : 2;   /** < alignment - unused */
            uint8_t JTD : 1;        /** < JTAG Disable */
        }b;
        uint8_t byte;       /** < MCU Control Register */
    }MCUCR;

    /**
     * @brief Address 0x36 (0x56) - unused;
     */
    uint8_t unused_4;

    /**
     * @brief Address 0x37 (0x57) - Store Program Memory Control and Status Register
     * 
     */
    union {
        struct {
            uint8_t SPMEN : 1;      /** < Store Program Memory Enable */
            uint8_t PGERS : 1;      /** < Page Erase */
            uint8_t PGWRT : 1;      /** < Page Write */
            uint8_t BLBSET : 1;     /** < Boot Lock Bit Set */
            uint8_t RWWSRE : 1;     /** < Read-While-Write Section Read Enable */
            uint8_t SIGRD : 1;      /** < Signature Row Read */
            uint8_t RWWSB : 1;      /** < Read-While-Write Section Busy */
            uint8_t SPMIE : 1;      /** < Store Program Memory Interrupt Enable */
        }b;
        uint8_t byte;       /** < Store Program Memory Control and Status Register */
    }SPMCSR;

    /**
     * @brief Address 0x38-0x3A (0x58-0x5A) - unused;
     */
    uint8_t unused_5[3];

    /**
     * @brief Address 0x3B (0x5B) - Extended Z-pointer Register for ELMP/SPM
     *        For ELPM/SPM instructions, the Z-pointer is a concatenation of RAMPZ
     * 
     */
    union {
        struct {
            uint8_t RAMPZ0 : 1;  /** < RAMPZ Bit 0 */
            uint8_t RAMPZ1 : 1;  /** < RAMPZ Bit 1 */
            uint8_t RAMPZ2 : 1;  /** < RAMPZ Bit 2 */
            uint8_t RAMPZ3 : 1;  /** < RAMPZ Bit 3 */
            uint8_t RAMPZ4 : 1;  /** < RAMPZ Bit 4 */
            uint8_t RAMPZ5 : 1;  /** < RAMPZ Bit 5 */
            uint8_t RAMPZ6 : 1;  /** < RAMPZ Bit 6 */
            uint8_t RAMPZ7 : 1;  /** < RAMPZ Bit 7 */
        }b;
        uint8_t byte;       /** < RAMPZ Register */
    }RAMPZ;

    /**
     * @brief Address 0x3C (0x5C) - Extended Indirect Register
     *        for EICALL/EIJMP instructions the indirect-pointer to the subroutine/routine is a concatenation of EID and RAMPZ.
     * @note ICALL and IJMP are not affected by the EIND setting
     */
    union {
        struct {
            uint8_t EIND0 : 1; /** Extended Indirect Register bit 0 */
            uint8_t EIND1 : 1; /** Extended Indirect Register bit 1 */
            uint8_t EIND2 : 1; /** Extended Indirect Register bit 2 */
            uint8_t EIND3 : 1; /** Extended Indirect Register bit 3 */
            uint8_t EIND4 : 1; /** Extended Indirect Register bit 4 */
            uint8_t EIND5 : 1; /** Extended Indirect Register bit 5 */
            uint8_t EIND6 : 1; /** Extended Indirect Register bit 6 */
            uint8_t EIND7 : 1; /** Extended Indirect Register bit 7 */
        }b;
        uint8_t byte;       /** < Extended Indirect Register */
    }EIND;

    /**
     * @brief Address 0x3D-3E (0x5D-5E) - Stack pointer
     * 
     */
    union {
        struct {
            uint8_t SPL;
            uint8_t SPH;
        }bytes;
        uint16_t raw;
    }SP;

    /**
     * @brief Address 0x3F - AVR Status register
     */
    union {
        struct {
            uint8_t C : 1; /** Carry flag */
            uint8_t Z : 1; /** Zero flag */
            uint8_t N : 1; /** Negative flag */
            uint8_t V : 1; /** Overflow flag */
            uint8_t S : 1; /** Sign bit */
            uint8_t H : 1; /** Half carry flag */
            uint8_t T : 1; /** Bit copy storage */
            uint8_t I : 1; /** Global interrupt enable */
        }b;
        uint8_t byte;
    }SREG;

    /**
     * @brief Address 0x40 (0x60) - Watchdog timer control register
     * 
     */
    union {
        struct {
            uint8_t WDP0 : 1; /** Watchdog Timer Prescale bit 0 */
            uint8_t WDP1 : 1; /** Watchdog Timer Prescale bit 1 */
            uint8_t WDP2 : 1; /** Watchdog Timer Prescale bit 2 */
            uint8_t WDE : 1; /** Watchdog System reset enable */
            uint8_t WDEC : 1; /** Watchdog Change Enable */
            uint8_t WDP3 : 1; /** Watchdog Timer Prescale bit 3 */
            uint8_t WDIE : 1; /** Watchdog Interrupt Enable */
            uint8_t WDIF : 1; /** Watchdog Interrupt Flag */
        }b;
        uint8_t byte;
    }WDTCSR;

    /**
     * @brief Address 0x41 (0x61) - Clock Prescale Register
     * 
     */
    union {
        struct {
            uint8_t CLKPS : 4; /** Clock Prescale Register */
            uint8_t unused : 3; /** align - unused */
            uint8_t CLKPCE : 1; /** Clock Prescaler Change Enable */
        }b;
        uint8_t byte;
    }CLKPR;

    /**
     * @brief Address 0x42-43 (0x62-63) - unused registers
     * 
     */
    uint8_t unused_6[2]; 

    /**
     * @brief Address 0x44 (0x64) - Power Reduction Register 0
     *        Each bit can enable a power reduction on a specific module
     * 
     */
    union {
        struct {
            uint8_t PRADC : 1;      /** Power Reduction ADC */
            uint8_t PSUSART : 1;    /** Power Reduction USART0 */
            uint8_t PRSPI : 1;      /** Power Reduction Serial Periheral Interface */
            uint8_t PRTIM1 : 1;     /** Power Reduction Timer/counter 1 */
            uint8_t unused : 1;     /** align - unused */
            uint8_t PRTIM0 : 1;     /** Power Reduction Timer/counter 0 */
            uint8_t PRTIM2 : 1;     /** Power Reduction Timer/counter 2 */
            uint8_t PRTWI : 1;      /** Power Reduction TWI */
        }b;
        uint8_t byte;
    }PRR0;

    /**
     * @brief Address 0x45 (0x65) - Power Reduction Register 1
     *        Each bit can enable a power reduction on a specific module
     * 
     */
    union {
        struct {
            uint8_t PRUSART1 : 1;   /** Power Reduction USART1 */
            uint8_t PRUSART2 : 1;   /** Power Reduction USART2 */
            uint8_t PRUSART3 : 1;   /** Power Reduction USART3 */
            uint8_t PRTIM3 : 1;     /** Power Reduction Timer/counter 3 */
            uint8_t PRTIM4 : 1;     /** Power Reduction Timer/counter 4 */
            uint8_t PRTIM5 : 1;     /** Power Reduction Timer/counter 5 */
            uint8_t unsued : 2;     /** aligned - unused */
        }b;
        uint8_t byte;
    }PRR1;

    /**
     * @brief Address 0x46 (0x66) - Oscillator Calibration Register
     * 
     */
    uint8_t OSCCAL;

    /** 
     * @brief Address 0x47 (0x67) - unused
     */
    uint8_t unused_7;

    /**
     * @brief Address 0x48 (0x68) - Pin Change Interrupt Control register
     * 
     */
    union {
        struct {
            uint8_t PCIE0 : 1; /** Pin Change Interrupt Enable 0 */
            uint8_t PCIE1 : 1; /** Pin Change Interrupt Enable 1 */
            uint8_t PCIE2 : 1; /** Pin Change Interrupt Enable 2 */
            uint8_t unused : 5; /** aligned - unused */
        }b;
        uint8_t byte;
    }PCICR;

    /**
     * @brief Address 0x49 (0x69) - External Interrupt Control Register A
     * 
     */
    union {
        struct {
            uint8_t ISC00 : 1;  /** Interrupt control bit */
            uint8_t ISC01 : 1;  /** Interrupt control bit */
            uint8_t ISC10 : 1;  /** Interrupt control bit */
            uint8_t ISC11 : 1;  /** Interrupt control bit */
            uint8_t ISC20 : 1;  /** Interrupt control bit */
            uint8_t ISC21 : 1;  /** Interrupt control bit */
            uint8_t ISC30 : 1;  /** Interrupt control bit */
            uint8_t ISC31 : 1;  /** Interrupt control bit */
        }b;
        uint8_t byte;
    }EICRA;

    /**
     * @brief Address 0x4A (0x6A) - External Interrupt Control Register B
     * 
     */
    union {
        struct {
            uint8_t ISC40 : 1;  /** Interrupt control bit */
            uint8_t ISC41 : 1;  /** Interrupt control bit */
            uint8_t ISC50 : 1;  /** Interrupt control bit */
            uint8_t ISC51 : 1;  /** Interrupt control bit */
            uint8_t ISC60 : 1;  /** Interrupt control bit */
            uint8_t ISC61 : 1;  /** Interrupt control bit */
            uint8_t ISC70 : 1;  /** Interrupt control bit */
            uint8_t ISC71 : 1;  /** Interrupt control bit */
        }b;
        uint8_t byte;
    }EICRB;

    /**
     * @brief Address 0x4B (0x6B) - Pin change interrupt enable 0 register.
     * 
     */
    union {
        struct {
            uint8_t PCINT0 : 1; /** Pin 0 change interrupt enable */
            uint8_t PCINT1 : 1; /** Pin 1 change interrupt enable */
            uint8_t PCINT2 : 1; /** Pin 2 change interrupt enable */
            uint8_t PCINT3 : 1; /** Pin 3 change interrupt enable */
            uint8_t PCINT4 : 1; /** Pin 4 change interrupt enable */
            uint8_t PCINT5 : 1; /** Pin 5 change interrupt enable */
            uint8_t PCINT6 : 1; /** Pin 6 change interrupt enable */
            uint8_t PCINT7 : 1; /** Pin 7 change interrupt enable */
        }b;
        uint8_t byte;
    }PCMSK0;

    /**
     * @brief Address 0x4C (0x6C) - Pin change interrupt enable 0 register.
     * 
     */
    union {
        struct {
            uint8_t PCINT8 : 1;     /** Pin 8 change interrupt enable */
            uint8_t PCINT9 : 1;     /** Pin 9 change interrupt enable */
            uint8_t PCINT10 : 1;    /** Pin 10 change interrupt enable */
            uint8_t PCINT11 : 1;    /** Pin 11 change interrupt enable */
            uint8_t PCINT12 : 1;    /** Pin 12 change interrupt enable */
            uint8_t PCINT13 : 1;    /** Pin 13 change interrupt enable */
            uint8_t PCINT14 : 1;    /** Pin 14 change interrupt enable */
            uint8_t PCINT15 : 1;    /** Pin 15 change interrupt enable */
        }b;
        uint8_t byte;
    }PCMSK1;
    
    /**
     * @brief Address 0x4D (0x6D) - Pin change interrupt enable 0 register.
     * 
     */
    union {
        struct {
            uint8_t PCINT16 : 1; /** Pin 16 change interrupt enable */
            uint8_t PCINT17 : 1; /** Pin 17 change interrupt enable */
            uint8_t PCINT18 : 1; /** Pin 18 change interrupt enable */
            uint8_t PCINT19 : 1; /** Pin 19 change interrupt enable */
            uint8_t PCINT20 : 1; /** Pin 20 change interrupt enable */
            uint8_t PCINT21 : 1; /** Pin 21 change interrupt enable */
            uint8_t PCINT22 : 1; /** Pin 22 change interrupt enable */
            uint8_t PCINT23 : 1; /** Pin 23 change interrupt enable */
        }b;
        uint8_t byte;
    }PCMSK2;

    /**
     * @brief address 0x4E (0x6E) - Timer/counter0 Interrupt mask register.
     * 
     */
    union {
        struct {
            uint8_t TOIE0 : 1;  /** Timer/counter0 overflow Interrupt enable */
            uint8_t OCIE0A : 1; /** Timer/counter0 Compare match A interrupt enable */
            uint8_t OCIE0B : 1; /** Timer/counter0 Compare match B interrupt enable */
            uint8_t align : 5;  /** align / unused */
        }b;
        uint8_t byte;
    }TIMSK0;

    /**
     * @brief address 0x4F (0x6F) - Timer/counter1 Interrupt mask register.
     * 
     */  
    union {
        struct {
            uint8_t TOIE1 : 1;      /** Timer/counter1 overflow interrupt enable */        
            uint8_t OCIE1A : 1;     /** Timer/counter1 Compare match A interrupt enable */ 
            uint8_t OCIE1B : 1;     /** Timer/counter1 Compare match B interrupt enable */ 
            uint8_t reserved : 1;   /** reserved */                                        
            uint8_t ICIE1 : 1;      /** Timer/counter1 Input capture interrupt enable */   
            uint8_t align : 2;      /** align / unused */                                  
        }b;
        uint8_t byte;
    }TIMSK1;

    /**
     * @brief address 0x50 (0x70) - Timer/counter2 Interrupt mask register.
     * 
     */
    union {
        struct {
            uint8_t TOIE2 : 1;  /** Timer/counter0 overflow Interrupt enable */
            uint8_t OCIE2A : 1; /** Timer/counter0 Compare match A interrupt enable */
            uint8_t OCIE2B : 1; /** Timer/counter0 Compare match B interrupt enable */
            uint8_t align : 5;  /** align / unused */
        }b;
        uint8_t byte;
    }TIMSK2;

    /**
     * @brief address 0x51 (0x71) - Timer/counter3 Interrupt mask register.
     * 
     */
    union {
        struct {
            uint8_t TOIE3 : 1;      /** Timer/counter3 overflow interrupt enable */       
            uint8_t OCIE3A : 1;     /** Timer/counter3 Compare match A interrupt enable */
            uint8_t OCIE3B : 1;     /** Timer/counter3 Compare match B interrupt enable */
            uint8_t reserved : 1;   /** reserved */                                       
            uint8_t ICIE3 : 1;      /** Timer/counter3 Input capture interrupt enable */  
            uint8_t align : 2;      /** align / unused */                                 
        }b;
        uint8_t byte;
    }TIMSK3;   

    /**
     * @brief address 0x52 (0x72) - Timer/counter4 Interrupt mask register.
     * 
     */
    union {
        struct {
            uint8_t TOIE4 : 1;      /** Timer/counter4 overflow interrupt enable */       
            uint8_t OCIE4A : 1;     /** Timer/counter4 Compare match A interrupt enable */
            uint8_t OCIE4B : 1;     /** Timer/counter4 Compare match B interrupt enable */
            uint8_t reserved : 1;   /** reserved */                                       
            uint8_t ICIE4 : 1;      /** Timer/counter4 Input capture interrupt enable */  
            uint8_t align : 2;      /** align / unused */                                 
        }b;
        uint8_t byte;
    }TIMSK4;   
    
    /**
     * @brief address 0x53 (0x73) - Timer/counter5 Interrupt mask register.
     * 
     */
    union {
        struct {
            uint8_t TOIE5 : 1;      /** Timer/counter5 overflow interrupt enable */       
            uint8_t OCIE5A : 1;     /** Timer/counter5 Compare match A interrupt enable */
            uint8_t OCIE5B : 1;     /** Timer/counter5 Compare match B interrupt enable */
            uint8_t reserved : 1;   /** reserved */                                       
            uint8_t ICIE5 : 1;      /** Timer/counter5 Input capture interrupt enable */  
            uint8_t align : 2;      /** align / unused */                                 
        }b;
        uint8_t byte;
    }TIMSK5;

    /**
     * @brief Address 0x54 (0x74) - External Memory Control register
     * 
     */
    union {
        struct {
            uint8_t SRW_L : 2;  /** Wait-State select bits for lower sector */
            uint8_t SRW_U : 2;  /** Wait-State select bits for upper sector */
            uint8_t SRL : 3;    /** Wait-State sector limit*/
            uint8_t SRE : 1;    /** External SRAM/XMEM Enable*/
        }b;
        uint8_t byte;
    }XMCRA;

    /**
     * @brief Address 0x55 (0x75) - External Memory Control Register B
     * 
     */
    union {
        struct {
            uint8_t XMM : 3;    /** External memory high mask  used to release the port C when external memory is enabled. */
            uint8_t align : 4;  /** aligned/unused */
            uint8_t XMBK : 1;   /** External memory Bus-keeper Enable */
        }b;
        uint8_t byte;
    }XMCRB;

    /**
     * @brief Address 0x56-0x57 (0x76-0x77) - unused / reserved
     * 
     */
    uint8_t unused_8[2];

    /**
     * @brief Address 0x58-0x59 (0x78-0x79) - ADC Data registers low and high side. 
     * 
     */
    union {
        struct {
            uint8_t ADCL;   /** ADC Data register low byte */
            uint8_t ADCH;   /** ADC Data register high byte */
        }byte;
        uint16_t word;
    }ADC_Data;

    /**
     * @brief Address 0x5A (0x7A) - ADC Control and Status Register A
     * 
     */
    union {
        struct {
            uint8_t ADPS : 3;   /** ADC Prescaler select bits */
            uint8_t ADIE : 1;   /** ADC Interrupt enable */
            uint8_t ADIF : 1;   /** ADC Interrupt flag */
            uint8_t ADATE : 1;  /** ADC Auto trigger Enable */
            uint8_t ADSC : 1;   /** ADC Start Conversion */
            uint8_t ADEN : 1;   /** ADC Enable bit */
        }b;
        uint8_t byte;
    }ADCSRA;

    /**
     * @brief Address 0x5B (0x7B) - ADC Control and status Register B
     * 
     */
    union {
        struct {
            uint8_t ADTS : 3;   /** ADC Trigger source  */
            uint8_t MUX5 : 1;   /** Analog channel and gain selection buts. used with MUX4:0 in ADMUX! */
            uint8_t unused : 2; /** unused */
            uint8_t ACME : 1;   /** Analog comperator multiplexer enable*/
            uint8_t align : 1;  /** aligne / unused */
        }b;
        uint8_t byte; 
    }ADCSRB;

    /**
     * @brief Address 0x5C (0x7C) - ADC Multiplex Selection Register
     * 
     */
    union {
        struct {
            uint8_t MUX0 : 1;   /** Analog channel 0 and gain selection bits */
            uint8_t MUX1 : 1;   /** Analog channel 1 and gain selection bits */
            uint8_t MUX2 : 1;   /** Analog channel 2 and gain selection bits */
            uint8_t MUX3 : 1;   /** Analog channel 3 and gain selection bits */
            uint8_t MUX4 : 1;   /** Analog channel 4 and gain selection bits */
            uint8_t ADLAR : 1;  /** Left adjust ADC result */
            uint8_t REFS : 2;   /** Reference selection bits */
        }b;
        uint8_t byte;
    }ADMUX;

    /**
     * @brief Address 0x5D (0x7D) - Digital Input Disable Register 2
     * 
     */
    union {
        struct {
            uint8_t ADC8D : 1;  /** ADC Digital input 8 Disable  */
            uint8_t ADC9D : 1;  /** ADC Digital input 9 Disable  */
            uint8_t ADC10D : 1; /** ADC Digital input 10 Disable  */
            uint8_t ADC11D : 1; /** ADC Digital input 11 Disable  */
            uint8_t ADC12D : 1; /** ADC Digital input 12 Disable  */
            uint8_t ADC13D : 1; /** ADC Digital input 13 Disable  */
            uint8_t ADC14D : 1; /** ADC Digital input 14 Disable  */
            uint8_t ADC15D : 1; /** ADC Digital input 15 Disable  */
        }b; 
        uint8_t byte;
    }DIDR2;

    /**
     * @brief Address 0x5E (0x7E) - Digital Input Disable Register 0
     * 
     */
    union {
        struct {
            uint8_t ADC0D : 1; /** ADC Digital input 0 Disable  */
            uint8_t ADC1D : 1; /** ADC Digital input 1 Disable  */
            uint8_t ADC2D : 1; /** ADC Digital input 2 Disable  */
            uint8_t ADC3D : 1; /** ADC Digital input 3 Disable  */
            uint8_t ADC4D : 1; /** ADC Digital input 4 Disable  */
            uint8_t ADC5D : 1; /** ADC Digital input 5 Disable  */
            uint8_t ADC6D : 1; /** ADC Digital input 6 Disable  */
            uint8_t ADC7D : 1; /** ADC Digital input 7 Disable  */
        }b; 
        uint8_t byte;
    }DIDR0;

    /**
     * @brief Address 0x5F (0x7F) - Digital Input Disable Register 1
     * 
     */
    union {
        struct {
            uint8_t AIN0D : 1; /** AIN digital input 0 Disable */
            uint8_t AIN1D : 1; /** AIN digital input 1 Disable */
            uint8_t align : 6; /** alginment / unused */
        }b;
        uint8_t byte;
    }DIDR1;

    /**
     * @brief Address 0x60 (0x80) - Timer/counter1 control register A 
     * 
     */
    union {
        struct {
            uint8_t WGM10 : 1;  /** Wave selection bit 0 for timer/counter 1 */
            uint8_t WGM11 : 1;  /** Wave selection bit 1 for timer/counter 1 */
            uint8_t COM1C : 2;  /** Compare Output Mode for channel C */
            uint8_t COM1B : 2;  /** Compare Output Mode for channel B */
            uint8_t COM1A : 2;  /** Compare Output Mode for channel A */
        }b;
        uint8_t byte;
    }TTCR1A;

    /**
     * @brief Address 0x61 (0x81) - Timer/counter1 control register B
     * 
     */
    union {
        struct {
            uint8_t CS : 3;     /** Clock and prescaler bit selectino  */
            uint8_t WGM12 : 1;  /** Wave selection bit 2 for timer/counter 1*/
            uint8_t WGM13 : 1;  /** Wave selection bit 3 for timer/counter 1*/
            uint8_t unused : 1; /** unused */
            uint8_t ICES1 : 1;  /** Input capture edge select */
            uint8_t ICNC1 : 1;  /** Input capture noise canceler */
        }b;
        uint8_t byte;
    }TCCR1B;

    /**
     * @brief Address 0x62 (0x82) - Timer/counter1 control register C
     * 
     */
    union {
        struct {
            uint8_t unsued : 5; /** unused */
            uint8_t FOC1C : 1;  /** Force Output compare for channel C */
            uint8_t FOC1B : 1;  /** Force Output compare for channel B */
            uint8_t FOC1A : 1;  /** Force Output compare for channel A */
        }b;
        uint8_t byte;
    }TCCR1C;

    uint8_t unused_9;   /** Address 0x63 (0x83) - unused  */

    uint16_t TCNT1;     /** Address 0x64-5 (0x84-5) Timer/counter1 counter register */
    uint16_t ICR1;      /** Address 0x66-7 (0x86-7) Timer/counter1 capture register */
    uint16_t OCR1A;     /** Address 0x68-9 (0x88-9) Timer/counter1 compare register A */
    uint16_t OCR1B;     /** Address 0x6A-B (0x8A-B) Timer/counter1 compare register B */
    uint16_t OCR1C;     /** Address 0x6C-D (0x8C-D) Timer/counter1 compare register C */

    uint16_t unused_10; /** Address 0x6E-F (0x8E-F) unused */

    /**
     * @brief Address 0x70 (0x90) - Timer/counter3 control register A 
     * 
     */
    union {
        struct {
            uint8_t WGM30 : 1;  /** Wave selection bit 0 for timer/counter 1 */
            uint8_t WGM31 : 1;  /** Wave selection bit 1 for timer/counter 1 */
            uint8_t COM3C : 2;  /** Compare Output Mode for channel C */
            uint8_t COM3B : 2;  /** Compare Output Mode for channel B */
            uint8_t COM3A : 2;  /** Compare Output Mode for channel A */
        }b;
        uint8_t byte;
    }TTCR3A;

    /**
     * @brief Address 0x71 (0x91) - Timer/counter3 control register B
     * 
     */
    union {
        struct {
            uint8_t CS : 3;     /** Clock and prescaler bit selectino  */
            uint8_t WGM32 : 1;  /** Wave selection bit 2 for timer/counter 1*/
            uint8_t WGM33 : 1;  /** Wave selection bit 3 for timer/counter 1*/
            uint8_t unused : 1; /** unused */
            uint8_t ICES3 : 1;  /** Input capture edge select */
            uint8_t ICNC3 : 1;  /** Input capture noise canceler */
        }b;
        uint8_t byte;
    }TCCR3B;

    /**
     * @brief Address 0x72 (0x92) - Timer/counter3 control register C
     * 
     */
    union {
        struct {
            uint8_t unsued : 5; /** unused */
            uint8_t FOC3C : 1;  /** Force Output compare for channel C */
            uint8_t FOC3B : 1;  /** Force Output compare for channel B */
            uint8_t FOC3A : 1;  /** Force Output compare for channel A */
        }b;
        uint8_t byte;
    }TCCR3C;

    uint8_t unused_11;   /** Address 0x73 (0x93) - unused  */

    uint16_t TCNT3;     /** Address 0x74-5 (94-5) Timer/counter3 counter register */
    uint16_t ICR3;      /** Address 0x76-7 (96-7) Timer/counter3 capture register */
    uint16_t OCR3A;     /** Address 0x78-9 (98-9) Timer/counter3 compare register A */
    uint16_t OCR3B;     /** Address 0x7A-B (9A-B) Timer/counter3 compare register B */
    uint16_t OCR3C;     /** Address 0x7C-D (9C-D) Timer/counter3 compare register C */

    uint16_t unused_12; /** Address 0x7E-F (0x9E-F) unused */

    /**
     * @brief Address 0x80 (0xA0) - Timer/counter3 control register A 
     * 
     */
    union {
        struct {
            uint8_t WGM40 : 1;  /** Wave selection bit 0 for timer/counter 1 */
            uint8_t WGM41 : 1;  /** Wave selection bit 1 for timer/counter 1 */
            uint8_t COM4C : 2;  /** Compare Output Mode for channel C */
            uint8_t COM4B : 2;  /** Compare Output Mode for channel B */
            uint8_t COM4A : 2;  /** Compare Output Mode for channel A */
        }b;
        uint8_t byte;
    }TTCR4A;

    /**
     * @brief Address 0x81 (0xA1) - Timer/counter3 control register B
     * 
     */
    union {
        struct {
            uint8_t CS : 3;     /** Clock and prescaler bit selectino  */
            uint8_t WGM42 : 1;  /** Wave selection bit 2 for timer/counter 1*/
            uint8_t WGM43 : 1;  /** Wave selection bit 3 for timer/counter 1*/
            uint8_t unused : 1; /** unused */
            uint8_t ICES4 : 1;  /** Input capture edge select */
            uint8_t ICNC4 : 1;  /** Input capture noise canceler */
        }b;
        uint8_t byte;
    }TCCR4B;

    /**
     * @brief Address 0x82 (0xA2) - Timer/counter3 control register C
     * 
     */
    union {
        struct {
            uint8_t unsued : 5; /** unused */
            uint8_t FOC4C : 1;  /** Force Output compare for channel C */
            uint8_t FOC4B : 1;  /** Force Output compare for channel B */
            uint8_t FOC4A : 1;  /** Force Output compare for channel A */
        }b;
        uint8_t byte;
    }TCCR4C;

    uint8_t unused_13;  /** Address 0x83 (0xA3) - unused  */

    uint16_t TCNT4;     /** Address 0x84-5 (A4-5) Timer/counter3 counter register */
    uint16_t ICR4;      /** Address 0x86-7 (A6-7) Timer/counter3 capture register */
    uint16_t OCR4A;     /** Address 0x88-9 (A8-9) Timer/counter3 compare register A */
    uint16_t OCR4B;     /** Address 0x8A-B (AA-B) Timer/counter3 compare register B */
    uint16_t OCR4C;     /** Address 0x8C-D (AC-D) Timer/counter3 compare register C */

    uint16_t unused_14; /** Address 0x8E-F (0xAE-F) unused */

    /**
     * @brief Address 0x90 (0xB0) - Timer/counter2 control register A
     * 
     */
    union {
        struct {
            uint8_t WGM20 : 1;  /** Wave generation selection bit 0 for Timer/counter2 */
            uint8_t WGM21 : 1;  /** Wave generation selection bit 1 for Timer/counter2 */
            uint8_t usused : 2; /** unused / alignement*/
            uint8_t COM2B : 2;  /** Compare mode Channel B */
            uint8_t COM2A : 2;  /** Compare mode Channel A */
        }b; 
        uint8_t byte;
    }TCCR2A;

    /**
     * @brief Address 0x91 (0xB1) - Timer/counter2 control register B
     * 
     */
    union {
        struct {
            uint8_t CS : 3;         /** Clock source / prescaler selection bits */
            uint8_t WGM22 : 1;      /** Wave generation selection bit 2 for Timer/counter2 */
            uint8_t unused : 2;     /** unused / alignment */
            uint8_t FOC2B : 1;      /** Force Output compare on channel B */
            uint8_t FOC2A : 1;      /** Force Output compare on channel C */
        }b;
        uint8_t byte;
    }TCCR2B;

    uint8_t TCNT2; /** Address 0x92 (0xB2) - Timer counter 2 value */
    uint8_t OCR2A; /** Address 0x93 (0xB3) - Output compare value channel A for timer/counter2 */
    uint8_t OCR2B; /** Address 0x94 (0xB4) - Output compare value channel B for timer/counter2 */

    uint8_t unused_15; /** Address 0x95 (0xB5) - unused */

    /**
     * @brief Address 0x96 (0xB6) - Asynchronous Status register.
     * 
     */
    union {
        struct {
            uint8_t TCR2BUB : 1;    /** Timer/couunter Control register 2 Update busy for channel B */
            uint8_t TCT2AUB : 1;    /** Timer/couunter Control register 2 Update busy for channel A */
            uint8_t OCR2BUB : 1;    /** Output Compare register 2 update busy for channel B */
            uint8_t OCR2AUB : 1;    /** Output Compare register 2 update busy for channel A */
            uint8_t TCN2UB : 1;     /** Timer/Counter2 update busy */
            uint8_t AS2 : 1;        /** Asynchronous Timer/Counter2 */
            uint8_t EXCLK : 1;      /** Enable External Clock input */
        }b;
        uint8_t byte;
    }ASSR;

    uint8_t unused_16; /** Address 0x97 (0xB7) - unused */

    uint8_t TWBR;       /** Address 0x98 (0xB8) - Two wire (I2C) Bit rate register */

    /**
     * @brief Address 0x99 (0xB9) - Two wire status register
     * 
     */
    union {
        struct {
            uint8_t TWPS : 2;   /** Two-Wire prescale bit*/
            uint8_t unused : 1; /** unused */
            uint8_t TWS : 5;    /** Two-Wire status  */
        }b;
        uint8_t byte;
    }TWSR;


    /**
     * @brief Address 0x9A (0xBA) - Two wire slave address register. 
     * 
     */
    union {
        struct {
            uint8_t TWGCE : 1;  /** Two-wire general call reconition enable bit */
            uint8_t TWA : 7;    /** Two-wire Address */
        }b;
        uint8_t byte;
    }TWAR; 

    uint8_t TWDR;   /** Address 0x9B (0xBB) - Two wire interface data register */

    /**
     * @brief Address 0x9C (0xBC) - Two wire control register
     * 
     */
    union {
        struct {
            uint8_t TWIE : 1;       /** Two-wire interrupt enable */
            uint8_t reserved : 1;   /** Reserved / unused */
            uint8_t TWEM : 1;       /** Two-wire enable bit */
            uint8_t TWWC : 1;       /** Two-wire write collision flag */
            uint8_t TWSTO : 1;      /** Two-wire Stop condition bit - for master only */
            uint8_t TWSTA : 1;      /** Two-wire start condition bit - for master only */
            uint8_t TWEA : 1;       /** Two-wire enable ACK bit */
            uint8_t TWINT : 1;      /** Two-wire interrupt flag  */
        }b;
        uint8_t byte;
    }TWCR;

    /**
     * @brief Address 0x9D (0xBD) - Two-wire Salve address mask reigster
     * 
     */
    union {
        struct {
            uint8_t reserved : 1;   /** unused */
            uint8_t TWAM : 7;       /** Two-wire address mask */
        }b;
        uint8_t byte;
    }TWAMR;

    uint16_t unused_17; /** Address 0x9E-F (0xBE-F) - unused */

    /**
     * @brief Address 0xA0 (0xC0) - USART/MSPIM 0 Control and status register A.
     * @note this register can either be USART or Master SPI (MSPI)!
     */
    union {
        struct {
            uint8_t MPCM : 1;       /** Multi-processor communication mode  */
            uint8_t U2X : 1;        /** Double USART Transmistion speed */
            uint8_t UPE : 1;        /** USART Parity Error  */
            uint8_t DOR : 1;        /** Data Overrun  */
            uint8_t FE : 1;         /** Frame error  */
            uint8_t reserved : 3;   /** Reserved for USART */
        }b_MSPI;

        struct {
            uint8_t reserved : 5;   /** reserved for Master SPI mode */
            uint8_t UDRE : 1;       /** USART Data register empty */
            uint8_t TXC : 1;        /** USART Trasmit complete  */
            uint8_t RXC : 1;        /** USART Recieve complete */ 
        }b_USART;
        uint8_t byte;
    }USCR0A;

    /**
     * @brief Address 0xA1 (0xC1) - USART/MSPIM 0 Control and status register B
     * @note this register can either be USART or Master SPI (MSPI)!
     */
    union {
        struct {
            uint8_t TXB8 : 1;       /** Transmit data bit 8 */
            uint8_t RXB8 : 1;       /** Receive data bit 8 */
            uint8_t reserved : 6;   /** reserved for USART */
        }b_MPSI;
        
        struct {
            uint8_t reserved : 2;   /** Reserved for MSPI */
            uint8_t UCSZ02 : 1;     /** Character size used with the onse in USCR0C*/
            uint8_t TXEN : 1;       /** Transmitter enable */
            uint8_t RXEN : 1;       /** Receiver enable */
            uint8_t UDRIE : 1;      /** USART Data register empty interrupt enable */
            uint8_t TXCIE : 1;      /** TX complete interrupt enable */
            uint8_t RXCIE : 1;      /** RX complete intrrupt enable */ 
        }b_USART;
        uint8_t byte;
    }UCSR0B;

    /**
     * @brief Address 0xA2 (0xC2) - USART/MSPIM 0 Control and status register C
     * 
     */
    union {
        struct {
            uint8_t UCPOL : 1;      /** Clock polarity (SPI CPOL in spi mode)*/
            uint8_t UCHA :  1;      /** Clock Phase (SPI CPHA in SPI mode!) */
            uint8_t UDORD : 1;      /** SPI Data order 1->LSB first 0->MSB */
            uint8_t reserved : 3;   /** Reserved for USART */
            uint8_t UMSEL : 2;      /** mode Select */
        }b_MSPI;
        
        struct {
            uint8_t synch_mode : 1; /** Only used in Synchronous mode!  */
            uint8_t UCSZ : 2;       /** USART Character size */
            uint8_t USB : 1;        /** Stop bit select */
            uint8_t UPM : 2;        /** Parity mode */
            uint8_t UMSEL : 2;      /** mode Select */
        }b_USART;
        uint8_t byte;
    }UCSR0C;

    uint8_t unused_18;  /** Address 0xA3 (0xC3) - unused */

    uint16_t USART0;    /** Address 0xA4-5 (0xC4-5) - USART0 baudrate @note only 12 bit! */
    uint8_t UDR0;       /** Address 0xA6 (0xC6) - USART/MSPI 0 Data register. */
    uint8_t unused_19;  /** Address 0xA7 (0xC7) - unused */

    /**
     * @brief Address 0xA8 (0xC8) - USART/MSPIM 1 Control and status register A.
     * @note this register can either be USART or Master SPI (MSPI)!
     */
    union {
        struct {
            uint8_t MPCM : 1;       /** Multi-processor communication mode  */
            uint8_t U2X : 1;        /** Double USART Transmistion speed */
            uint8_t UPE : 1;        /** USART Parity Error  */
            uint8_t DOR : 1;        /** Data Overrun  */
            uint8_t FE : 1;         /** Frame error  */
            uint8_t reserved : 3;   /** Reserved for USART */
        }b_MSPI;

        struct {
            uint8_t reserved : 5;   /** reserved for Master SPI mode */
            uint8_t UDRE : 1;       /** USART Data register empty */
            uint8_t TXC : 1;        /** USART Trasmit complete  */
            uint8_t RXC : 1;        /** USART Recieve complete */ 
        }b_USART;
        uint8_t byte;
    }USCR1A;
    
    /**
     * @brief Address 0xA9 (0xC9) - USART/MSPIM 1 Control and status register B
     * @note this register can either be USART or Master SPI (MSPI)!
     */
    union {
        struct {
            uint8_t TXB8 : 1;       /** Transmit data bit 8 */
            uint8_t RXB8 : 1;       /** Receive data bit 8 */
            uint8_t reserved : 6;   /** reserved for USART */
        }b_MPSI;
        
        struct {
            uint8_t reserved : 2;   /** Reserved for MSPI */
            uint8_t UCSZ02 : 1;     /** Character size used with the onse in USCR0C*/
            uint8_t TXEN : 1;       /** Transmitter enable */
            uint8_t RXEN : 1;       /** Receiver enable */
            uint8_t UDRIE : 1;      /** USART Data register empty interrupt enable */
            uint8_t TXCIE : 1;      /** TX complete interrupt enable */
            uint8_t RXCIE : 1;      /** RX complete intrrupt enable */ 
        }b_USART;
        uint8_t byte;
    }UCSR1B;

    /**
     * @brief Address 0xAA (0xCA) - USART/MSPIM 1 Control and status register C
     * 
     */
    union {
        struct {
            uint8_t UCPOL : 1;      /** Clock polarity (SPI CPOL in spi mode)*/
            uint8_t UCHA :  1;      /** Clock Phase (SPI CPHA in SPI mode!) */
            uint8_t UDORD : 1;      /** SPI Data order 1->LSB first 0->MSB */
            uint8_t reserved : 3;   /** Reserved for USART */
            uint8_t UMSEL : 2;      /** mode Select */
        }b_MSPI;
        
        struct {
            uint8_t synch_mode : 1; /** Only used in Synchronous mode!  */
            uint8_t UCSZ : 2;       /** USART Character size */
            uint8_t USB : 1;        /** Stop bit select */
            uint8_t UPM : 2;        /** Parity mode */
            uint8_t UMSEL : 2;      /** mode Select */
        }b_USART;
        uint8_t byte;
    }UCSR1C;

    uint8_t unused_20;  /** Address 0xAB (0xCB) - unused */

    uint16_t USART1;    /** Address 0xAC-D (0xCC-D) - USART1 baudrate @note only 12 bit! */
    uint8_t UDR1;       /** Address 0xAE (0xCE) - USART/MSPI 1 Data register. */
    uint8_t unused_21;  /** Address 0xAF (0xCF) - unused */ 


}Atmega2560_t, *ptr_Atmega2560_t;


/**
 * @brief Enum defining the different sleep modes available for the microcontroller.
 * @note Used in the SMCR register to select the desired sleep mode. 
 */
typedef enum Sleepmode {
    SLEEP_MODE_IDLE = 0,
    SLEEP_MODE_ADC = 1,
    SLEEP_MODE_PWR_DOWN = 2,
    SLEEP_MODE_PWR_SAVE = 3,
    SLEEP_MODE_STANDBY = 6,
    SLEEP_MODE_EXT_STANDBY = 7
} Sleepmode_t;

/**
 * @brief Enum defining the different Watchdog prescaler value.
 */
typedef enum Watchdog_prescaler {
    WD_PRESCALE_2K = 0, /** 16 ms */
    WD_PRESCALE_4K = 1, /** 32 ms */
    WD_PRESCALE_8K = 2, /** 64 ms */
    WD_PRESCALE_16K = 3, /** 0,125 s */
    WD_PRESCALE_32K = 4, /** 0,25 s */
    WD_PRESCALE_64K = 5, /** 0,5 s */
    WD_PRESCALE_128K = 6, /** 1,0 s */
    WD_PRESCALE_256K = 7, /** 2,0 s */
    WD_PRESCALE_512K = 8, /** 4,0 s Note WDP3 = 1 */
    WD_PRESCALE_1024K = 9, /** 8,0 s Note WDP3 = 1 */
}Watchdog_prescaler_t;

/**
 * @brief Enum defining the different Watchdog timer configuration. 
 */
typedef enum Watchdog_Timer_cnf {
    WD_TIMER_STOPPED = 0,
    WD_TIMER_IRQ_MODE = 1,
    WD_TIMER_SYS_RESET_MODE = 2,
    WD_TIMER_IRQ_AND_SYS_RESET_MODE = 3, 
}Watchdog_Timer_cnf_t;

typedef enum Clock_Prescaler {
    CLK_PRESCALER_1 = 0,
    CLK_PRESCALER_2 = 1,
    CLK_PRESCALER_4 = 2,
    CLK_PRESCALER_8 = 3,
    CLK_PRESCALER_16 = 4,
    CLK_PRESCALER_32 = 5,
    CLK_PRESCALER_64 = 6,
    CLK_PRESCALER_128 = 7,
    CLK_PRESCALER_254 = 8,
}Clock_Prescaler_t;

/**
 * @brief enum defining the Wait-state selecter bits value for lower and upper sector
 * @ref XMCRA register
 */
typedef enum SRW {
    NO_WAIT_STATES = 0,
    WAIT_1_CYCLE_DOING_READ_WRITE_STROBE = 1,
    WAIT_2_CYCLE_DOING_READ_WRITE_STROBE = 2,
    WAIT_2_CYCLE_READ_WRITE_AND_1_BEFORE_ADDRESS = 3
}SRW_e;

/**
 * @brief enum defining the Sector limits with differnent settings. 
 * @ref XMCRA register
 */
typedef enum SLR {
    SECTOR_0 = 0, /** Lower sector = n/a, upper sector = 0x2000-0xFFFF */
    SECTOR_1 = 1, /** Lower sector = n/a, upper sector = 0x2000-0xFFFF */
    SECTOR_2 = 2, /** Lower sector = 0x2200-0x3FFF, upper sector = 0x4000-0xFFFF */
    SECTOR_3 = 3, /** Lower sector = 0x2200-0x5FFF, upoer sector = 0x6000-0xFFFF */
    SECTOR_4 = 4, /** Lower sector = 0x2200-0x7FFF, upper sector = 0x8000-0xFFFF */
    SECTOR_5 = 5, /** Lower sector = 0x2200-0x9FFF, upper sector = 0xA000-0xFFFF */
    SECTOR_6 = 6, /** Lower sector = 0x2200-0xBFFF, upper sector = 0xC000-0xFFFF */
    SECTOR_7 = 7, /** Lower sector = 0x2200-0xDFFF, upper sector = 0xE000-0xFFFF */
}SLR_e;

/**
 * @brief enum defining the External memory high mask setting
 * @ref XMCRB
 */
typedef enum XMM {
    XMM_8BITS = 0,  /** 8 Bits for ecternal, 0 pins released to Port (None) */
    XMM_7BITS = 1,  /** 7 Bits for ecternal, 1 pins number released to Port (PC7) */
    XMM_6BITS = 2,  /** 6 Bits for ecternal, 2 pins number released to Port (PC7-PC6) */
    XMM_5BITS = 3,  /** 5 Bits for ecternal, 3 pins number released to Port (PC7-PC5) */
    XMM_4BITS = 4,  /** 4 Bits for ecternal, 4 pins number released to Port (PC7-PC4) */
    XMM_3BITS = 5,  /** 3 Bits for ecternal, 5 pins number released to Port (PC7-PC3) */
    XMM_2BITS = 6,  /** 2 Bits for ecternal, 6 pins number released to Port (PC7-PC2) */
    XMM_0BITS = 7,  /** 0 Bits for ecternal, 9 pins number released to Port (FULL PORT C) */
}XMM_e;

/**
 * @brief Enum defining the ADC Prescaler select bits
 * @ref ADCSRA
 */
typedef enum ADC_Prescaler_settings {
    DIV_FACTOR_2A = 0,
    DIV_FACTOR_2B = 1,
    DIV_FACTOR_4 = 2,
    DIV_FACTOR_8 = 3,
    DIV_FACTOR_16 = 4,
    DIV_FACTOR_32 = 5,
    DIV_FACTOR_64 = 6,
    DIV_FACTOR_128 = 7
}ADC_Prescaler_settings_e;

/**
 * @brief Enum defining the ADC trigger posibilietes.
 * @ref ADCSRB
 */
typedef enum ADC_Trigger {
    FREE_RUNNING = 0,           /** Free running mode - not usable for differential channels!*/
    ANALOG_COMPARATPR = 1,      /** Analog comparator */
    EXT_IRQ_REQ_0 = 2,          /** External Interrupt Request 0 */
    TIMER_CNT0_CMP_A = 3,       /** Timer/Counter0 compare match A */
    TIMER_CNT0_OVERFLOW = 4,    /** Timer/Counter0 Overflow */    
    TIMER_CNT1_CMP_A = 5,       /** Timer/Counter1 compare match A */
    TIMER_CNT1_OVERFLOW = 6,    /** Timer/Counter1 Overflow */ 
    TIMER_CNT1_CAP_EVENT = 7,   /** Timer/Counter1 Capture Event */
}ADC_Trigger_e;

/**
 * @brief Enum defing the ADC Multiplexer Selection Regiser Voltage reference selections
 * @ref ADMUX
 */
typedef enum ADC_Reference_Selection {
    VREF_AREF = 0,              /** ADMUX voltage reference - internal VREF turned off */
    VREF_AVCC = 1,              /** ADMUX voltage reference - internal VREF, with external capacitor at AREF pin */
    VREF_INTERNAL_1_1V = 2,     /** ADMUX voltage reference - internal 1.1V, with external capacitor at AREF pin */
    VREF_INTERNAL_2_56V = 3,    /** ADMUX voltage reference - internal 2,56V, with external capacitor at AREF pin */
}ADC_VREF_e;

/**
 * @brief Enum defing the Timer/counter Compare mode bit.
 * 
 */
typedef enum TIMER_Compare_Mode {
    NORMAL_MODE = 0,        /** Timer compare mode normal */
    TOGLE_ON_MATCH = 1,     /** Timer compare mode toggle OCnA/B/C on compare match. */ 
    CLEAR_ON_MATCH = 2,     /** Timer compare mode clear OCnA/B/C on compare match. */
    SET_ON_MACTCH = 3,      /** Timer compare mode set OCnA/B/C on compare match. */ 
}TIMER_COM_E;

/**
 * @brief Enum defing the Timer/counter Wave generation selection bits.
 * 
 */
typedef enum TIMER_Wave_selection {
    NORMAL = 0,                            /** normal wave mode */
    PWM_CORRECT_8BIT = 1,                  /** PWM Correct 8-bit version */
    PWM_CORRECT_9BIT = 2,                  /** PWM Correct 9-bit version */
    PWM_CORRECT_10BIT = 3,                 /** PWM Correct 10-bit version */
    CTC_OCRnA = 4,                         /** CTC mode OCRnA */
    FAST_PWM_8BIT = 5,                     /** Fast PWM 8-bit version */
    FAST_PWM_9BIT = 6,                     /** Fast PWM 9-bit version */
    FAST_PWM_10BIT = 7,                    /** Fast PWM 10-bit version */
    PWM_PHASE_AND_FREQ_CORRECT_ICRn = 8,   /** PWM Phase and Frequency correct ICRn */
    PWM_PHASE_AND_FREQ_CORRECT_OCRnA = 9,  /** PWM Phase and Frequency correct OCRnA */
    PWM_PHASE_CORRECT_ICRn = 10,           /** PWM Phase correct ICRn */
    PWM_PHASE_CORRECT_OCRnA = 11,          /** PWM Phase correct OCRnA */
    CTC_ICRn = 12,                         /** CRC mode ICRn */
    // RESERVED = 13,                           /** reserved */
    FAST_PWM_ICRn = 14,                    /** Fast PWM ICRn */
    FAST_PWM_OCRnA = 15,                   /** Fast PWM OCRmA */
}TIM_WGM_E;

/**
 * @brief enum defining the Timer/Counter clock source and prescaler.
 * 
 */
typedef enum TIMER_Clock_Select {
    NO_SOURCE = 0,
    PRESCALING_1 = 1,
    PRESCALING_8 = 2,
    PRESCALING_64 = 3,
    PRESCALING_256 = 4,
    PRESCALING_1024 = 5,
    EXTERNAL_FALLING_EDGE = 6,
    EXTERNAL_RISING_EDGE = 7
}TIM_CS_e;

/**
 * @brief enum defing the Master SPI mode options.
 * @ref USCRnC
 * 
 */
typedef enum SPI_Clock_Phase {
    SPI_mode_0 = 0, /** CPOL = 0, CPHA = 0 */
    SPI_mode_1 = 1, /** CPOL = 0, CHPA = 1 */
    SPI_mode_2 = 2, /** CPOL = 1, CHPA = 0 */
    SPI_Mode_3 = 3, /** CPOL = 1, CHPA = 1 */
}SPI_Mode_e;

/**
 * @brief enum defining the Master SPI Data order options.
 * @ref USCRnC
 */
typedef enum SPI_Data_order {
    MSB_FIRST = 0,  /** Most significant byte first */
    LSB_FIRST = 1,  /** Least significant byte first */
}SPI_Data_order_e;

/**
 * @brief Enum defininf the character size used on the USART.
 * @ref USCRnC
 */
typedef enum USART_Char_size {
    BITSIZE_5 = 0,
    BITSIZE_6 = 1,
    BITSIZE_7 = 2,
    BITSIZE_8 = 3,
    /** Reserved = 4 */
    /** Reserved = 5 */
    /** Reserved = 6 */
    BITSIZE_9 = 7,
}USART_Char_size_e;

/**
 * @brief Enum defining the USART number of stop bit options
 * @ref USCRnC
 * 
 */
typedef enum USAST_Stopbits {
    ONE_STOP_BIT = 0,
    TWO_STOP_BITS = 2,
}USART_STOPBITS_e;

/**
 * @brief Enum defininf the USART parity mode options.
 * @ref USCRnC
 * 
 */
typedef enum USART_Parity_mode {
    PARITY_DISABLED = 0,
    /** Reserved = 1 */
    PARITY_EVEN = 2,
    PARITY_ODD = 3,
}USART_PARITY_e;

/**
 * @brief Enum defining the USART/MSPI mode selection
 * @ref USCRnC
 * 
 */
typedef enum USART_Mode_Select {
    ASYNCHRONOUS_MODE = 0,  /** USART Asynchronous mode */
    SYNCHRONOUS_MODE = 1,   /** USART Synchronous mode*/
    /** Reserved = 2, */
    MSPI_MODE = 4          /** disable USART and enable MSPIM (Master SPI Mode) */
}USART_MODE_e;