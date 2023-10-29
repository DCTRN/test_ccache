# !/bin/bash

export CC=/usr/local/bin/clang
export CXX=/usr/local/bin/clang++

export CCACHE_LOGFILE=/workspace/ccache/logs.txt

cmake -G Ninja -S . -B build
time cmake --build build | tee time_measurements.txt