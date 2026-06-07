cmake_minimum_required(VERSION 3.10)

add_library(PIN STATIC
    src/pin.c
)

target_include_directories(PIN PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
)

target_link_libraries(PIN PRIVATE AVR)
