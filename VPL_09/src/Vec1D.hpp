#ifndef VEC_1D
#define VEC_1D

#include "Vec.hpp"

/**
 * \brief A unidimensional vector.
 */
class Vec1D: public Vec {
  public:
    Vec1D(double x): _x(x) {}
    double getX() const { return _x; }
    std::string to_string() const override;

    /**
     * \brief Provides the norm of the vector, that is, the distance from this
     * vector to the origin.
     * \return a double that represents the vector norm. In the case of a
     * unidimensional vector, that's simply the x coordinate.
     */
    virtual double get_norm() const override;
  protected:
    double _x; ///< The single coordinate of the vector.
};

#endif