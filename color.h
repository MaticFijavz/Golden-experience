#ifndef COLOR_H
#define COLOR_H

//VECTORS JEAHHHH
#include "vec3.h"

//std
#include <fstream>
#include <filesystem>

using color = vec3;

void write_color(std::ofstream& img , const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    //translate color to 0-255 [0-1] to [0-255]
    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    //write the pixel colors
    img << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}
#endif