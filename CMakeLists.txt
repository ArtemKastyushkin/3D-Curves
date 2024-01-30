cmake_minimum_required(VERSION 3.28.2 FATAL_ERROR)

project(3D_Curves)

add_executable(3D_Curves 3D_Curves/Circle.cpp 3D_Curves/Ellipse.cpp 3D_Curves/Helix.cpp 3D_Curves/Randomizer.cpp 3D_Curves/main.cpp)