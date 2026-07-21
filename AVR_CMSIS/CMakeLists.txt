cmake_minimum_required(VERSION 3.10)

add_library(AVR_CMSIS INTERFACE
    Atmega.h
    avr-gcc.h
    avr-assert.h
    avr-interrupt.h
)

if (TARGET_CHIP STREQUAL "ATmega328P")
    target_link_libraries(AVR_CMSIS INTERFACE Atmega328p)
    target_compile_definitions(AVR_CMSIS INTERFACE __AVR_ATmega328P__=1)

    target_include_directories(AVR_CMSIS INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/chips/Atmega328p>
    )

else()
    message(FATAL_ERROR "Unsupported AVR_CMSIS chip: ${TARGET_CHIP}")
endif()
