cmake_minimum_required(VERSION 3.29)
project(Golden_Experience)

set(CMAKE_CXX_STANDARD 23)

add_executable(Golden_Experience main.cpp
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h)
