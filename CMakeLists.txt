cmake_minimum_required(VERSION 3.17)
project(ComputerShopComposite)

set(CMAKE_CXX_STANDARD 14)

add_executable(ComputerShopComposite main.cpp Component.h Composite.cpp Composite.h Leaf.cpp Leaf.h Color.cpp Color.h)