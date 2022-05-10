cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App!"
        LANGUAGES CXX)

# Set the C++ Standard for the project
# set(CXX_STANDARD_REQUIRED ON)  # Make C++20 a hard requirement
# set(CMAKE_CXX_STANDARD 20) # Default C++ standard for targets

# Targets
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)

add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
target_compile_features(logger PUBLIC cxx_std_20)

add_executable(HelloAppBinary main.cpp 
        src/dog.cpp )
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations logger)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
