#include "sieve.h"
#include <cmath>
#include <utility>
#include <vector>

namespace sieve {

std::vector<int> primes(int num) {
  std::vector<std::pair<int, bool>> nums{};
  std::vector<int> prime_nums{};

  for (int i{2}; i <= num; i++) {
    nums.emplace_back(i, false);
  }

  for (auto it = nums.begin(); it != nums.end(); ++it) {
    if (!it->second) {
      prime_nums.emplace_back(it->first);
      for (auto jt = it + 1; jt != nums.end(); ++jt) {
        if (!jt->second && jt->first % it->first == 0) {
          jt->second = true;
        } else
          continue;
      }
    }
  }
  return prime_nums;
}

} // namespace sieve
