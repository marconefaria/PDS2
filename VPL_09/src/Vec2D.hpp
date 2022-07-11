#ifndef VEC_2D
#define VEC_2D

#include "Vec1D.hpp"

/**
 * \brief a two-dimensional vector.
 */
class Vec2D: public Vec1D {
  public:
    Vec2D(double x, double y): Vec1D(x), _y(y) {}
    virtual double getY() const { return _y; }
    std::string to_string() const override;

    /**
     * \brief Provides the norm of the vector, that is, the distance from this
     * vector to the origin.
     * \return a double that represents the vector norm. In the case of a
     * 2D vector, that's the square root of the square of the coordinates,
     * that is: sqrt(x*x + y*y).
     */
    virtual double get_norm() const override;
  protected:
    double _y; ///< The second coordinate of the vector.
};

#endif