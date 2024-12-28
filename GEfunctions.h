#ifndef GEFUNCTIONS_H
#define GEFUNCTIONS_H

#include <cstdlib>
#include <limits>
#include <memory>
#include <random>

//C++ std usings

using std::make_shared;
using std::shared_ptr;
using std::rand;

//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//Utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

//your mother
inline double random_double() {
    //returns a random real in [0,1)
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    //returns a random real in [min,max)
    return min + (max-min)*random_double();
}
/*
inline double random_double() {
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);                                             what?
}
*/
//common headers

#include "vec3.h"
#include "ray.h"
#include "interval.h"
#include "color.h"

#endif //GEFUNCTIONS_H
