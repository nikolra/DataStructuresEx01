cmake_minimum_required(VERSION 3.20)
project(DataStructuresEx01)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructuresEx01 main.cpp AppUI.cpp AppUI.h WrongInputException.cpp WrongInputException.h Stack.cpp Stack.h Node.cpp Node.h ItemType.h StackExceptions.cpp StackExceptions.h Algorithm.h LoopAlgorithm.cpp LoopAlgorithm.h RecAlgorithm.cpp RecAlgorithm.h RecViaStackAlgorithm.cpp RecViaStackAlgorithm.h)
