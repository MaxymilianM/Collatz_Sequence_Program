# Collatz_Sequence_Program

## Problem description
Write two programs that find the starting number below a given limit that has the longest Collatz
sequence. The program should be called with a single number as the command line parameter. This
number is the upper limit below which the longest chain should be found. Note that intermediate
steps may go above this upper limit. Program one will optimise for code simplicity and low
memory usage. Program two sacrifices some simplicity and memory for significant reduction in
CPU time required.

## Collatz sequence definition
The following iterative sequence is defined for the set of positive integers:
```
n → n/2 (n is even)
n → 3n + 1 (n is odd)
```
Using the rule above and starting with 13, we generate the following sequence:
```
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has
not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

## Concerns
1. What the output of the program?
2. Should we store the entire sequence in memory?
3. Why does it have to be "the longest Collatz sequence"? Each sequence depends on the input, and it can be a Collatz sequence of any length.
4. The conclusion of the "Problem Description" task is that the program must find the smallest number for the sequence.
Probably always will be - 1. So what should the program do in another case?
5. What is the difference between Program One and Program Two? According to the description it's not necessary to store sequence in memory.
6. What is the limit of the maximum input value?


## Collatz Sequence Program

## Input data format
The first line contains an integer.
It must be the Natural number.

## Output format
Output the corresponding value for each test case. 

## Restrictions 
1 ≤ N ≤ 1*10^16


## Install CMake

First of all, you need to install `cmake`. 

On Linux:

```
sudo apt-get install cmake
```


Make sure the `cmake` is installed correctly:

```
% cmake --version
cmake version 3.10

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```


## Using CMake

You can generate the `Makefile` based on the definition above using the following command:

```
cmake .
```

Or create a `build` directory to store the generated files by CMake:

```
mkdir build
cd build/
cmake ..
```

Now we can run `make` to build the binary.

```
% make
[ 33%] Building CXX object CMakeFiles/CollatzSequenceProgram1.dir/main.cpp.obj
[ 66%] Building CXX object CMakeFiles/CollatzSequenceProgram1.dir/Program_1.cpp.obj
[100%] Linking CXX executable CollatzSequenceProgram1.exe
[100%] Built target CollatzSequenceProgram1
```


Now we can run the Program.

```
% ./CollatzSequenceProgram1
```


Also we can run `make test` to run all tests.

```
% make test
Running tests...
Test project C:/Users/User/Projects/TSN_Systems/Program_1/build
    Start 1: Test1
1/5 Test #1: Test1 ............................   Passed    0.01 sec
    Start 2: Test2
2/5 Test #2: Test2 ............................   Passed    0.01 sec
    Start 3: Test3
3/5 Test #3: Test3 ............................   Passed    0.01 sec
    Start 4: Test4
4/5 Test #4: Test4 ............................   Passed    0.01 sec
    Start 5: Test5
5/5 Test #5: Test5 ............................   Passed    0.01 sec

100% tests passed, 0 tests failed out of 5

Total Test time (real) =   0.09 sec
```
