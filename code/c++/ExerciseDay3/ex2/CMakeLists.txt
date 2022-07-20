cmake_minimum_required (VERSION 2.6)
set (CMAKE_C_STANDARD 99)

project (Shapes)

include_directories(${PROJECT_SOURCE_DIR})
add_library(ShapeLib ColoredShape.cpp Rectangle.cpp Circle.cpp Ellipse.cpp Triangle.cpp)

add_executable(ex4 main5.cpp)
target_link_libraries (ex4 ShapeLib)
