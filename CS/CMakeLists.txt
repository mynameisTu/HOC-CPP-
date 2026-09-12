cmake_minimum_required(VERSION 3.27)

project(cp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE files "*.cpp")

foreach(file ${files})

    get_filename_component(name ${file} NAME_WE)

    add_executable(${name} ${file}
            B1.cpp
    )

endforeach()