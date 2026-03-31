cmake_minimum_required(VERSION 3.10)

add_library(PINS 
STATIC 
    src/Pins.c
)   

target_include_directories( PINS PUBLIC
    inc/
)

target_link_libraries(PINS 
PRIVATE
    AVR

PUBLIC
    DRV
)