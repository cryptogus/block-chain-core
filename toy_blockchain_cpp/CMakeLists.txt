# Linux
cmake_minimum_required(VERSION 3.20)

# Project name
project(ToyBlockChain)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(">> PROJECT: ${CMAKE_PROJECT_NAME} by C++")
message(">> CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

# Find the OpenSSL package
find_package(OpenSSL REQUIRED)

# Add the executable target
add_executable(${CMAKE_PROJECT_NAME} main.cpp block.cpp blockchain.cpp)
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# Link the OpenSSL libraries
target_link_libraries(${CMAKE_PROJECT_NAME} OpenSSL::Crypto) #OpenSSL::SSL
