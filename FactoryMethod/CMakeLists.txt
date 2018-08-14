cmake_minimum_required(VERSION 2.8.4)
project(FactoryMethod)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -std=c++11")

include_directories(${PROJECT_SOURCE_DIR}/include)
set(SOURCE_FILES src/main.cpp)
#link_directories(${PROJECT_SOURCE_DIR}/lib)
add_executable(FactoryMethod ${SOURCE_FILES})
#target_link_libraries(FactoryMethod)
