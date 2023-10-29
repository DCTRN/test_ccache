# !/bin/bash

export CC=/usr/local/bin/gcc
export CXX=/usr/local/bin/g++

cmake -G Ninja -S . -B build && cmake --build build