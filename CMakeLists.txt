cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

if(COMMAND cmake_policy)
  CMAKE_POLICY(VERSION 2.8.8)
endif(COMMAND cmake_policy)

project(TestYCM)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
include_directories(${PROJECT_SOURCE_DIR})
add_executable(main main.cc)
