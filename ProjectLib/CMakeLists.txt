cmake_minimum_required(VERSION 3.0)

project(FirstProject)

set(HEADERS 
    lib1.h)

set(SOURCES
    lib1.cpp)

add_library(FirstProject ${HEADERS} ${{SOURCES}})