# set up project
cmake_minimum_required(VERSION 3.8)
project(gr-dcid CXX C)
enable_testing()

# add subdirectories
add_subdirectory(include/calculador)
add_subdirectory(lib)
add_subdirectory(alt)
add_subdirectory(test)
add_subdirectory(docs)
