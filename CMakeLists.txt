cmake_minimum_required(VERSION 3.26)
project(FizzBuzzOOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(FizzBuzzOOP main.cpp
        fizzbuzz.h
        fizzbuzz.cpp)
