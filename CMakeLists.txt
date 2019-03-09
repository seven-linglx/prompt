cmake_minimum_required(VERSION 3.4)
set(PROJECT_NAME Prompt)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} main.cpp prompt.h prompt_simple.h)
