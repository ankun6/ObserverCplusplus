cmake_minimum_required(VERSION 3.12)
project(ObserverCplusplus)

set(CMAKE_CXX_STANDARD 11)

add_executable(ObserverCplusplus main.cpp Subject.cpp Subject.h Observer.cpp Observer.h)