#define "vec3.h"

#include <cstdint>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

int main() {

    // Image

    uint16_t image_width = 1024;
    uint16_t image_height = 1024;


    // Create output directory if it doesn't exist
    std::filesystem::create_directory("output");

    // Generate unique filename
    std::string filename;
    int file_index = 0;
    do {
        filename = "output/output" + std::to_string(file_index++) + ".ppm";
    } while (std::filesystem::exists(filename));

    // Open file
    std::ofstream img(filename);
    if (!img) {
        std::cerr << "Could not open the file for writing.\n";
        return 1;
    }

    // Render

    img << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (uint16_t j = 0; j < image_height; j++) {
        printf("\rScanLines remaining: %d ", image_height - j);
        for (uint16_t i = 0; i < image_width; i++) {
            auto r = uint16_t(255.999 * (double(i) / (image_width - 1)));
            auto g = uint16_t(255.999 * (double(j) / (image_height - 1)));
            auto b = uint16_t(255.999 * (double(i * j) / ((image_height * image_width) - (i + j))));
            img << r << ' ' << g << ' ' << b << '\n';
        }
    }
    printf("\rDone                        \n");
    printf("\n");
    printf(filename.c_str());
    // Close file
    img.close();
    return 0;

}