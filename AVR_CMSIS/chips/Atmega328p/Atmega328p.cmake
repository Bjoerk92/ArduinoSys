
set(CMAKE_SYSTEM_NAME "AVR")
set(CMAKE_SYSTEM_VERSION "328p")
set(CMAKE_C_COMPILER "avr-gcc")
set(CMAKE_CXX_COMPILER "avr-g++")
set(CMAKE_ASM_COMPILER "${CMAKE_C_COMPILER}")
set(CMAKE_C_FLAGS "-mmcu=atmega328p")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_ASM_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,-gc-sections,-ffunction-sections")
set(CMAKE_SHARED_LINKER_FLAGS "")
set(CMAKE_MODULE_LINKER_FLAGS "")
set(CMAKE_LINKER_FLAGS "-Wl,-gc-sections,-ffunction-sections")
set(CMAKE_OBJCOPY "avr-objcopy")
set(CMAKE_OBJDUMP "avr-objdump")
set(CMAKE_SIZE "avr-size")
set(CMAKE_GDB "avr-gdb")
set(CMAKE_AR "avr-ar")
set(CMAKE_RANLIB "avr-ranlib")


#set(F_CPU "8000000UL") # 8MHz
set(F_CPU "16000000UL") # 16MHz

set(BAUD 9600) # default baudrate for programming

set(E_FUSE 0x05)
set(H_FUSE 0xde)
set(L_FUSE 0xff)
set(LOCK_BIT 0xff)

add_compile_options(
    -mmcu=${MCU} # MCU
    -std=gnu99 # C99 standard
    -Os # optimize
    -Wall # enable warnings
    -Wno-main
    -Wundef
    -pedantic
    -Wstrict-prototypes
    -Werror
    -Wfatal-errors
    -Wl,--relax,--gc-sections
    -g
    -gdwarf-2
    -funsigned-char # a few optimizations
    -funsigned-bitfields
    -fpack-struct
    -fshort-enums
    -ffunction-sections
    -fdata-sections
    -fno-split-wide-types
    -fno-tree-scev-cprop
)

set(TARGET_CHIP "ATmega328P")
