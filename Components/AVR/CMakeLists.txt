cmake_minimum_required(VERSION 3.10)

add_library(AVR OBJECT
    Atmega.h
    avr-gcc.h
    avr-assert.h
    avr-interrupt.h
)

if (TARGET_CHIP STREQUAL "ATmega328P")
    target_link_libraries(AVR INTERFACE Atmega328p)
    target_compile_definitions(AVR PUBLIC __AVR_ATmega328P__=1)

    target_include_directories(AVR INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/chips/atmega328p>
    )


else()
    message(FATAL_ERROR "Unsupported AVR chip: ${TARGET_CHIP}")
endif()
