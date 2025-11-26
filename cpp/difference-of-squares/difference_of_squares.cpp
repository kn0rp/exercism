#include "difference_of_squares.h"

namespace difference {
int difference_of_squares(int num) {
  return difference_of_squares::square_of_sum(num) - difference_of_squares::sum_of_squares(num);
}
}  // namespace difference_of_squares
