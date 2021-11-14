cmake_minimum_required(VERSION 3.20)
project(DataStructuresEx01)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructuresEx01 main.cpp SumAlgorithms.cpp SumAlgorithms.h AppUI.cpp AppUI.h cmake-build-debug/WrongInputException.cpp cmake-build-debug/WrongInputException.h)
