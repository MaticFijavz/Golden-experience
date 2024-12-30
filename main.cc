//my libs fuck you
#include "GEfunctions.h"
#include "camera.h"
#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"




int main() {
    hittable_list world;



    camera cam;

    cam.aspect_ratio        = 16.0/9.0;
    cam.image_width         = 400;
    cam.samples_per_pixel   = 50;
    cam.max_depth           = 6;

    cam.render(world);

    return 0;

}