
set(AVRCPP   avr-g++)
set(AVRC     avr-gcc)
set(AVRSTRIP avr-strip)
set(OBJCOPY  avr-objcopy)
set(OBJDUMP  avr-objdump)
set(AVRSIZE  avr-size)
set(AVRDUDE  avrdude)

# Needs to come before the project function
set(CMAKE_SYSTEM_NAME  Generic)
set(CMAKE_CXX_COMPILER ${AVRCPP})
set(CMAKE_C_COMPILER   ${AVRC})
set(CMAKE_ASM_COMPILER ${AVRC})

if(NOT DEFINED MCU)
    if(TARGET_CHIP STREQUAL "ATmega328P")
        set(MCU "atmega328p")
    endif()
endif()

if(NOT DEFINED F_CPU)
    if(TARGET_CHIP STREQUAL "ATmega328P")
        set(F_CPU "16000000UL")
    endif()
endif()

if(NOT DEFINED BAUD)
    if(TARGET_CHIP STREQUAL "ATmega328P")
        set(BAUD "9600")
    endif()
endif()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 11)

set(CSTANDARD "-std=gnu11")
set(CPPSTANDARD "-std=gnu++11")
set(CWARN     "-Wall -Wstrict-prototypes -Wl,--gc-sections -Wl,--relax")
set(CTUNING   "-funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums -ffunction-sections -fdata-sections")
set(COPT      "-Os -lm -lprintf_flt")
set(CMCU      "-mmcu=${MCU}")
set(CDEFS     "-DF_CPU=${F_CPU} -DBAUD=${BAUD}")
set(CMAP      "-Wl,-Map=${PROJECT_NAME}.map")

set(CFLAGS   "${CMCU} ${CDEFS} ${COPT} ${CWARN} ${CSTANDARD} ${CTUNING}")
set(CXXFLAGS "${CMCU} ${CDEFS} ${COPT} ${CTUNING} ${CWARN} ${CPPSTANDARD}")

set(CMAKE_C_FLAGS   "${CFLAGS}")
set(CMAKE_CXX_FLAGS "${CXXFLAGS}")
set(CMAKE_ASM_FLAGS   "${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAP}")

if (TARGET_CHIP STREQUAL "ATmega328P")
    set(MCU "atmega328p")
    set(F_CPU "16000000UL")
    set(BAUD "9600")
endif()