#include "triangle.h"

#include <array>
#include <numeric>
#include <stdexcept>

namespace triangle {

// TODO: add your solution here

bool triangle::hasNegativeSides() {
  for (double side : sides()) {
    if (side <= 0) {
      return true;
    }
  }
  return false;
}

bool triangle::isInvalid() {
  std::array<double, 3> sides = triangle::sides();
  double sideSum = std::accumulate(sides.begin(), sides.end(), 0.0);
  for (double side : sides) {
    if (sideSum - side < side) {
      return true;
    }
  }
  return false;
}

bool triangle::isIsosceles() {
  if (a == b || b == c || a == c) {
    return true;
  } else
    return false;
}

flavor kind(double a, double b, double c) {
  triangle triangle(a, b, c);
  if (triangle.hasNegativeSides() || triangle.isInvalid()) {
    throw std::domain_error("illegal");
  } else if (triangle.a == triangle.b && triangle.a == triangle.c) {
    return equilateral;
  } else if (triangle.isIsosceles()) {
    return isosceles;
  } else
    return scalene;
}

} // namespace triangle
