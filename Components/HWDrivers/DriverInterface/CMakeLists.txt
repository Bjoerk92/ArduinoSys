cmake_minimum_required(VERSION 3.10)

add_library(DRV OBJECT 
    src/AVR_Driver.c
)

target_include_directories(DRV PUBLIC
    inc/
)

target_link_libraries(DRV PUBLIC 
TIMERS 
)

