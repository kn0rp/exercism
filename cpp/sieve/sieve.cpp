#include "sieve.h"
#include <cmath>
#include <utility>
#include <vector>

namespace sieve {

std::vector<int> primes(int num) {
  std::vector<std::pair<int, bool>> nums{};
  std::vector<int> prime_nums{};

  for (int i{1}; i < num + 1; i++) {
    nums.emplace_back(i, false);
  }

  for (size_t i{0}; i < nums.size(); i++) {
    if (!nums.at(i).second) {
      if (isPrime(nums.at(i).first)) {
        nums.at(1).second = true;
        for (size_t j{i}; j < nums.size(); j++) {
          if (j % i == 0) {
            nums.at(j).second = true;
          } else
            continue;
        }
      }
    } else if (i > 1) {
      prime_nums.emplace_back(i);
    }
  }
  return prime_nums;
}

bool isPrime(int num) {
  switch (num) {
  case 0:
    return false;
  case 1:
    return false;
  case 2:
    return true;
  case 3:
    return true;
  case 5:
    return true;
  default:
    switch (num % 2) {
    case 0:
      return false;
    case 1:
      for (int i{3}; i <= std::sqrt(num); i++) {
        if (num % i == 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

} // namespace sieve
