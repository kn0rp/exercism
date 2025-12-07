#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here

long long unsigned int square(long long unsigned int num) {
  return std::pow(2, --num);
}

long long unsigned int total() {
  long long unsigned int sum{0};
  for (int i{0}; i < 64; ++i) {
    sum += std::pow(2, i);
  }
  return sum - 1;
}

} // namespace grains
