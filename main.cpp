#include <cstdint>
#include <iostream>

int main(){

    //image
    uint8_t image_width = 512;
    uint8_t image_hieght = 512;

    //render
    std::cout << "P3\n" << image_width << " " << image_hieght << "\n255\n";

    for (uint8_t  i = 1; i < image_hieght; i++){
        for (uint8_t j = 1; j < image_width; j++){
            auto r = double(i) / (image_hieght - 1);
            auto g = double(j) / (image_width - 1);
            auto b = 0.0;

            auto ir = uint8_t(255.999 * r);
            auto ig = uint8_t(255.999 * g);
            auto ib = uint8_t(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << '\n';
        }
    }




}
