cmake_minimum_required(VERSION 3.0.2)

project(millisleep LANGUAGES C)

add_executable(millisleep millisleep.c)

install(TARGETS millisleep DESTINATION bin)

