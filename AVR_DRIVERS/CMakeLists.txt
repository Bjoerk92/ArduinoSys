cmake_minimum_required(VERSION 3.10)

add_library(DRV OBJECT
    AVR_Drivers.h
)

target_include_directories(DRV INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

# add subfolders containing the drivers here.
add_subdirectory(GPIO)