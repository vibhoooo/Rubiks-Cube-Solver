## Introduction
Rubik's Cube Solver

## Tech Stack
• C++ <br />
• OOP  <br />
• Graph Algorithms

## Salient Features
• Modeled a virtual Rubik’s Cube (3x3) in 3 different classes/models using standard data-structures present
in C++. <br />
• Achieved a solving time of under 3 seconds for a Rubik’s Cube jumbled 8 times, using BFS, DFS and
IDDFS algorithms. <br />
• Implemented the Korf ’s IDA* Algorithm achieving a solving time of under 10 seconds for a Rubik’s Cube
jumbled 13 times.

## Results
### DFS Solver 
      Rubik's Cube:
      
             W W W 
             W W W 
             W W W 
      
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      L2 F U L F2 R2 B' B' 
      
      Rubik's Cube:

             Y Y R 
             R W Y 
             B B Y 

      O G W  R R O  B B Y  B O G 
      O G W  R R O  B B G  W O G 
      O Y O  B B G  R O G  W G G 
    
            W W Y 
            R Y W 
            W Y R 

      Time taken to solve: 2.7287 seconds
      
      B2 R2 F2 L' U' F' L2 
      
      Rubik's Cube:

             W W W 
             W W W 
             W W W 

      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      Process finished with exit code 0

### BFS Solver 
      Rubik's Cube:

             W W W 
             W W W 
             W W W 
      
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      D2 L' F2 F D U2 D' F' 
      Rubik's Cube:

             G B B 
             W W R 
             G Y R 

      Y B R  W O Y  B G W  R R O 
      G G W  O R Y  B B B  O O W 
      G G W  O R Y  B G G  R R W 

             B W O 
             O Y Y 
             O Y Y 

      Time taken to solve: 2.9246 seconds
      
      F U2 F L D2 

      Rubik's Cube:

             W W W 
             W W W 
             W W W 

      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      Process finished with exit code 0

### IDDFS Solver 
      Rubik's Cube:

             W W W 
             W W W 
             W W W 

      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      U U' R2 B2 U2 U' R' B' 
      Rubik's Cube:

             B B R 
             W W O 
             Y Y B 

      Y R O  B B W  R G W  G R R 
      W G G  R R Y  O B W  G O O 
      O G G  R R Y  O B O  W W W 
      
             Y Y G 
             Y Y O 
             B B G 

      Time taken to solve: 1.11703 seconds
      
      L L L L B R U U2 B2 R2 
      
      Rubik's Cube:

             W W W 
             W W W 
             W W W 

      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      Process finished with exit code 0

### Korf Solver 
      Rubik's Cube:

             W G Y 
             R W Y 
             R B R 

      B G W  G Y Y  B G G  O W R 
      Y G O  B R Y  R B B  W O O 
      O W R  Y W W  G G B  R O B 

             G R O 
             B Y O 
             Y W O 

      R F2 D' U' U F2 B' L' D B B2 F' R 
      
      Time taken to solve: 9.3639 seconds
      
      Rubik's Cube:

             W W W 
             W W W 
             W W W 

      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 
      G G G  R R R  B B B  O O O 

             Y Y Y 
             Y Y Y 
             Y Y Y 

      R' F B D' L F2 B D F2 R' 

      Process finished with exit code 0

## Setup ->
• Fork <br />
• Clone `git clone https://github.com/<username>/Rubiks-Cube-Solver.git` <br />
• cd `Rubiks-Cube-Solver` <br />
• `g++ main.cpp -o main` <br />
• `./main`

## Future Add Ons ->
• Adding 3-d modeling to the rubik's cube. <br />
• Implementing Edge Pattern Database.
