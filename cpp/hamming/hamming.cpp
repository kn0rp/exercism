#include "hamming.h"

#include <stdexcept>
#include <string>

using std::string;
namespace hamming {

int compute(const string &strand1, const string &strand2) {
  if (strand1.size() != strand2.size()) {
    throw std::domain_error("Different strand sizes not allowed");
  } else {
    int distance{0};
    for (long unsigned int i{0}; i < strand1.size(); i++) {
      if (strand1.at(i) != strand2.at(i)) {
        distance++;
      }
    }
    return distance;
  }
  return 0;
}

} // namespace hamming
