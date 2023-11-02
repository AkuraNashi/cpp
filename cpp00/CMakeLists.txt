cmake_minimum_required(VERSION 3.25)
project(cpp00)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex01)

add_executable(cpp00
        ex00/megaphone.cpp
        ex01/Contact.cpp
        ex01/Contact.hpp
        ex01/Phonebook.cpp
        ex01/Phonebook.hpp ex01/main.cpp)
