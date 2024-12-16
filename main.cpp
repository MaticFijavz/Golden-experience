#include <cstdint>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

int main() {

    // Image

    uint16_t image_width = 256;
    uint16_t image_height = 256;


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
        for (uint16_t i = 0; i < image_width; i++) {
            auto r = double(i) / 255;
            auto g = double(j) / 255;
            auto b = i * j  / 255;

            auto ir = uint16_t(255.999 * r);
            auto ig = uint16_t(255.999 * g);
            auto ib = uint16_t(b);

            img << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    // Close file
    img.close();
    return 0;

}