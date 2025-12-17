#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {

int square_of_sum(int num) {
  int square{0};
  for (int i{1}; i <= num; i++) {
    square += i;
  }
  return std::pow(square, 2);
}

int sum_of_squares(int num) {
  int sum{0};
  for (int i{1}; i <= num; i++) {
    sum += std::pow(i, 2);
  }
  return sum;
}

int difference(int num) {
  return (square_of_sum(num) > sum_of_squares(num))
             ? square_of_sum(num) - sum_of_squares(num)
             : sum_of_squares(num) - square_of_sum(num);
}

} // namespace difference_of_squares
