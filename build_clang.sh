# !/bin/bash

export CC=/usr/local/bin/clang
export CXX=/usr/local/bin/clang++

export CCACHE_LOGFILE=/workspace/test_ccache_2/ccache/logs.txt
export CCACHE_DIR=/workspace/test_ccache_2/ccache

cmake -G Ninja -S . -B build
time cmake --build build | tee time_measurements.txt