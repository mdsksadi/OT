# ##############################################################################
# ***Name: MD Shekh Sadi                     ***Email: md-shekh.sadi@alten.com #
# ##############################################################################

cmake_minimum_required(VERSION 3.22)

# This is the project name
set(This Exercise_2.3)

# Set universal project name and language
project(${This} CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Set the path of the source files
set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
                 ${CMAKE_CURRENT_SOURCE_DIR}/temperatureConversion.cpp)

set(HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/temperatureConversion.h)

# Create an executable target and specify the source and header files to compile
add_executable(${This} ${SOURCE_FILES} ${HEADER_FILES})
