#include <iostream>
#include <chrono>
#include "bits/stdcpp.h"
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerDBMaker.h"

int main() {
        RubiksCube3dArray object3DArray;
        RubiksCube1dArray object1dArray;
        RubiksCubeBitboard objectBitboard;

// DFS Solver Testing

//        RubiksCube3dArray cube;
//        cube.print();
//
//        vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(8);
//        for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//        cout << "\n";
//        cube.print();
//
//        DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 10);
//        auto start = std::chrono::high_resolution_clock::now();
//        vector<GenericRubiksCube::MOVE> solve_moves = dfsSolver.solve();
//        auto end = std::chrono::high_resolution_clock::now();
//
//        std::chrono::duration<double> duration = end - start;
//        std::cout << "Time taken to solve: " << duration.count() << " seconds\n";
//
//        for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//        cout << "\n";
//        dfsSolver.rubiksCube.print();

// BFS Solver Testing

//        RubiksCubeBitboard cube;
//        cube.print();
//
//        vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(8);
//        for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//        cout << "\n";
//        cube.print();
//
//        BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
//        auto start = std::chrono::high_resolution_clock::now();
//        vector<GenericRubiksCube::MOVE> solve_moves = bfsSolver.solve();
//        auto end = std::chrono::high_resolution_clock::now();
//
//        std::chrono::duration<double> duration = end - start;
//        std::cout << "Time taken to solve: " << duration.count() << " seconds\n";
//
//        for(auto move: solve_moves) cout << cube.getMove(move) << " ";
//        cout << "\n";
//        bfsSolver.rubiksCube.print();

// IDDFS Solver Testing

//    RubiksCubeBitboard cube;
//    cube.print();
//
//    vector<GenericRubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(8);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    IDDFSSolver<RubiksCubeBitboard, HashBitboard> iddfsSolver(cube, 10);
//    auto start = std::chrono::high_resolution_clock::now();
//    vector<GenericRubiksCube::MOVE> solve_moves = iddfsSolver.solve();
//    auto end = std::chrono::high_resolution_clock::now();
//
//    std::chrono::duration<double> duration = end - start;
//    std::cout << "Time taken to solve: " << duration.count() << " seconds\n";
//
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    iddfsSolver.rubiksCube.print();

// IDA* Solver Testing

    string fileName = "/Users/vibhoosrivastava/Desktop/Rubik's Cube Solver/Databases/cornerDepth5V1.txt";

//    Code to create Corner Database

//    CornerDBMaker dbMaker(fileName, 0x99);
//    dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto start = std::chrono::high_resolution_clock::now();
    auto moves = idaStarSolver.solve();
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken to solve: " << duration.count() << " seconds\n";

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";

    return 0;
}
