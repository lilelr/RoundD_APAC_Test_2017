cmake_minimum_required(VERSION 3.6)
project(RoundD_APAC_Test_2017)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES A.cpp B.cpp B2.cpp)
add_executable(RoundD_APAC_Test_2017 ${SOURCE_FILES})