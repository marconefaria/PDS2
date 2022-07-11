#include "Vec3D.hpp"
#include <math.h>
#include <string>

std::string Vec3D::to_string() const{
    double norm = get_norm();
    return std::to_string(norm);
}

double Vec3D::get_norm() const{
    double x = getX();
    double y = getY();
    return sqrt(pow(x,2) + pow(y,2) + pow(_z,2));
}