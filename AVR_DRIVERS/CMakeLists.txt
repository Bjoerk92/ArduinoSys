cmake_minimum_required(VERSION 3.10)

add_library(DRIVERS INTERFACE)

target_link_libraries(DRIVERS INTERFACE AVR PIN)

add_subdirectory(PIN)