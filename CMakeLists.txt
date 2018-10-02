cmake_minimum_required(VERSION 3.10)
project(ChessApp)

set(CMAKE_CXX_STANDARD 11)

add_executable(ChessApp main.cpp
        ChessField.cpp ChessField.h
        Figure.cpp Figure.h
        Interface.h Interface.cpp
        CodeStatement.cpp CodeStatement.h
        )