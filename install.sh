#!/bin/bash

set -eu

mkdir build/
cd build/
conan install .. --build=missing
cmake ..
make -j"$(nproc)"