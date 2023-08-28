cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cards LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(card Card.h NominalBox.cpp NominalBox.h Rank.h Suit.h)

add_executable(main main.cpp)
target_link_libraries(main card)