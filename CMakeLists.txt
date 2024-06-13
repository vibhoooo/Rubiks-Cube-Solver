cmake_minimum_required(VERSION 3.27)
project(Rubik_s_Cube_Solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubik_s_Cube_Solver main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        bits/stdcpp.h
        Model/RubiksCube1dArray.cpp
        Model/RubiksCube3dArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
)
