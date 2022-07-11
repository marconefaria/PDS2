#include "Vec2D.hpp"
#include <math.h>
#include <string>

std::string Vec2D::to_string() const{
    double norm = get_norm();
    return std::to_string(norm);
}

double Vec2D::get_norm() const{
    double x = getX();
    return sqrt(pow(x,2) + pow(_y,2));
}