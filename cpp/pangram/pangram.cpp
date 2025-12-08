#include "pangram.h"
#include <algorithm>
#include <array>
#include <cctype>
#include <string>

namespace pangram {

// TODO: add your solution here

bool is_pangram(std::string str) {
  str = str_to_lower(str);

  if (str.empty())
    return false;

  std::array<char, 26> alpha{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                             'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                             's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  for (char character : alpha) {
    if (str.find(character) > str.size() - 1) {
      return false;
    }
  }

  return true;
}

std::string str_to_lower(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  return str;
}

} // namespace pangram
