#pragma once

#include <array>
#include <cstddef>
#include <string>
namespace triangle {

// TODO: add your solution here

struct triangle {
  triangle(double a, double b, double c) : a(a), b(b), c(c) {};
  std::array<double, 3> sides() { return {a, b, c}; };
  bool hasNegativeSides();
  bool isInvalid();
  bool isIsosceles();
  double a;
  double b;
  double c;
};

enum flavor { equilateral, isosceles, scalene };

flavor kind(double, double, double);

} // namespace triangle
