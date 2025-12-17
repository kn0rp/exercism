#include "nth_prime.h"
#include <cmath>
#include <stdexcept>

namespace nth_prime {

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

int nth(int num) {
  if (num == 0)
    throw std::domain_error("division by 0 not allowed");
  int primeCounter{0};
  int currentPrime{0};
  for (int i{0}; i <= std::pow(num, 2) + num; i++) {
    if (isPrime(i) && primeCounter < num) {
      primeCounter++;
    }
    if (isPrime(i) && primeCounter == num) {
      currentPrime = i;
      break;
    }
  }
  return currentPrime;
}

} // namespace nth_prime
