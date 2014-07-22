#!/bin/bash - 


mkdir build
cd build
cmake ../ -DCMAKE_CXX_COMPILER=/usr/bin/clang++  -DCMAKE_C_COMPILER=/usr/bin/clang
make 
