#pragma once

#include <cmath>
#include <math.h>

namespace difference_of_squares {
int square_of_sum(int num) {
  int runner{0};
  for (int i{1}; i <= num; i++) {
    runner += i;
  }
  return pow(runner, 2);
}

int sum_of_squares(int num) {
  int runner{0};
  for (int i{1}; i <= num; i++) {
    runner += pow(i, 2);
  }
  return runner;
}

} // namespace difference_of_squares
