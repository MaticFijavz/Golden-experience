cmake_minimum_required(VERSION 3.29)
project(Golden_Experience)

set(CMAKE_CXX_STANDARD 23)

add_executable(Golden_Experience main.cc
        GEfunctions.h
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h
        interval.h
        camera.h
        material.h)
