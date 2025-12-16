#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

const map<char, int> count(string str) {
  map<char, int> counters{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
  for (char x : str) {
    (x == 'A' || x == 'C' || x == 'G' || x == 'T')
        ? counters.at(x)++
        : throw std::invalid_argument("invalid_argument");
  }
  return counters;
}

} // namespace nucleotide_count
