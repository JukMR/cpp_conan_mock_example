# Readme

This is a simple project I created to test conan and ort.

# Requirements:
Conan version 1.59.0

# Build

In order to build the project:

- mkdir build/
- cd build/
- conan install ..
- cmake ..
- make -j$(nproc)

# Execute file

The generate hello world executable will be located in build/bin/ folder.