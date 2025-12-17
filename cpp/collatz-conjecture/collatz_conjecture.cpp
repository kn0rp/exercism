#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

int steps(int num) {
  int step_counter{0};
  if (num > 0) {
    while (num > 1) {
      switch (num % 2) {
      case 0:
        num /= 2;
        ++step_counter;
        break;
      case 1:
        num = num * 3 + 1;
        ++step_counter;
        break;
      default:
        break;
      }
    }
  } else {
    throw std::domain_error("Input needs to be greater than 0");
  }
  return step_counter;
}

} // namespace collatz_conjecture
