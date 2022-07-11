#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &c) {
  // TODO: implement this operator.
  return out << "(" << c.getX() << "," << c.getY() << ")";
}

std::istream & operator >> (std::istream &in,  Point &c) {
  // TODO: implement this operator.
  in >> c.x >> c.y;
  return in;
}

Point Point::operator + (const Point &p) {
  // TODO: implement this operator.
  Point soma;
  soma.x = this->getX() + p.getX();
  soma.y = this->getY() + p.getY();
  return soma;
}

Point& Point::operator += (const Point &p) {
  // TODO: implement this operator.
  this->x += p.getX();
  this->y += p.getY();

  Point soma;
  soma.x = this->x;
  soma.y = this->y;
  return soma;
}