#ifndef GEFUNCTIONS_H
#define GEFUNCTIONS_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

//C++ std usings

using std::make_shared;
using std::shared_ptr;

//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//Utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

//common headers

#include "vec3.h"
#include "ray.h"
#include "interval.h"
#include "color.h"

#endif //GEFUNCTIONS_H
