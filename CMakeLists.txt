cmake_minimum_required(VERSION 3.0.0)
project(profiling_test VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE "RELEASE")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

#add_compile_options(-O0)
#add_compile_options(-g)
#add_compile_options(-pg)
#add_compile_options(-gdwarf-3)
#add_compile_options(-ftime-report)
#add_compile_options(-Q)
 
#add_link_options(-pg)

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
    message("Found ccache")
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif()

if(NOT CCACHE_FOUND)
    message(FATAL_ERROR "Failed to find the ccache")
endif()

add_executable(
    profiling_test 
    main.cpp
    ConcreteHandler1.cpp
    ConcreteHandler2.cpp
    ConcreteHandler3.cpp
)
