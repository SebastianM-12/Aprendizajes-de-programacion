cmake_minimum_required(VERSION 3.16)

project(punteros_memoria_dinamica LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(punteros_memoria_dinamica main.cpp)

include(GNUInstallDirs)
install(TARGETS punteros_memoria_dinamica
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
