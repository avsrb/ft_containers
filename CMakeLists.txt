cmake_minimum_required(VERSION 3.21)
project(ft_containers)

set(CMAKE_CXX_STANDARD 98)

add_executable(ft_containers Iterator.cpp Map.cpp Node.cpp Stack.cpp test.cpp Utility.cpp Vector.cpp Iterator.hpp Map.hpp Node.hpp Stack.hpp Utility.hpp Vector.hpp)
