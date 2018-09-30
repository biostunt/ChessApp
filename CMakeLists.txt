cmake_minimum_required(VERSION 3.12)
project(ChessApp)

set(CMAKE_CXX_STANDARD 11)

add_executable(ChessApp main.cpp
        ChessField.cpp ChessField.h
        Figure.cpp Figure.h
        FieldContainer.cpp FieldContainer.h
        Interface.h)