cmake_minimum_required(VERSION 3.25)
project(Myproject)

set(CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(myexecutable main.cpp)

target_link_libraries(myexecutable PRIVATE ${CONAN_LIBS})

