cmake_minimum_required(VERSION 2.6)
project(new_db)

add_executable(new_db main.cpp)

install(TARGETS new_db RUNTIME DESTINATION bin)
