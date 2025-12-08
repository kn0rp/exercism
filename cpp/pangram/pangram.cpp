#include "pangram.h"
#include <array>
#include <cctype>
#include <cstdint>
#include <string>

namespace pangram {

// TODO: add your solution here

bool is_pangram(std::string str) {
  if (str.empty())
    return false;

  int8_t match_counter{0};
  std::array<char, 26> alpha{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                             'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                             's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  for (char character : alpha) {
    for (unsigned int i{0}; i < str.size(); i++) {
      if (str.at(i) == character || str.at(i) == toupper(character)) {
        match_counter++;
        break;
      } else
        continue;
    }
  }

  return match_counter == 26;
}

} // namespace pangram
