cmake_minimum_required(VERSION 3.28)
project(Projet)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projet main.cpp
        model/operations/addition/Addition.cpp
        model/operations/addition/Addition.h
        model/operations/division/Division.cpp
        model/operations/division/Division.h
        model/operations/multiplication/Multiplication.cpp
        model/operations/multiplication/Multiplication.h
        model/operations/soustraction/Division.cpp
        model/operations/soustraction/Division.h)
