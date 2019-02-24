cmake_minimum_required(VERSION 3.13)
project(cuda)

set(CMAKE_CXX_STANDARD 14)

add_executable(cuda
        cudacpp.cu)
