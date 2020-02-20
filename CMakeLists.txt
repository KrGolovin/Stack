cmake_minimum_required(VERSION 3.15)
project(Stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Stack main.cpp exceptions.h Stack.h StackArray.h testBalanceBrackets.h List.h Elem.h StackList.h)