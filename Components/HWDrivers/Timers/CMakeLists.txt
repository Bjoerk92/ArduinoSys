cmake_minimum_required(VERSION 3.10)

add_library(TIMERS 
STATIC 
    src/Timers.c
)   

target_include_directories( TIMERS PUBLIC
    inc/
)

target_link_libraries(TIMERS 
PRIVATE
    AVR
    DRV
)