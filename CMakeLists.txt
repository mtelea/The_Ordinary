cmake_minimum_required(VERSION 3.20)
project(The_Ordinary)

set(CMAKE_CXX_STANDARD 14)

add_executable(The_Ordinary
        main.cpp SPF.cpp SPF.h Comanda.cpp Comanda.h CleasingGel.cpp CleasingGel.h Client.cpp Client.h)
