#include "Vec1D.hpp"
#include <string>

std::string Vec1D::to_string() const{
    double norm = get_norm();
    return std::to_string(norm);
}
    
double Vec1D::get_norm() const{
    return _x;
}