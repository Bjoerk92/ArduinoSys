cmake_minimum_required(VERSION 3.10)

add_library(GPIO STATIC
    src/gpio.c
)

target_include_directories(GPIO PUBLIC
    inc/
)

target_link_libraries(GPIO 
    PRIVATE
    AVR
    DRV
)