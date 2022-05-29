cmake_minimum_required(VERSION 3.0)

project(oinc LANGUAGES C)

add_executable(oinc main.c)

install(TARGETS oinc RUNTIME DESTINATION bin)
