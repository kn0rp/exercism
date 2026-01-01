#include "say.h"
#include <stdexcept>
#include <string>

namespace say {

std::string get_composite_str(char x) { return std::to_string(x); }

std::string in_english(long long int num) {
  std::string num_string{std::to_string(num)};
  std::string num_string_final{""};

  switch (num_string.size()) {
  case 1:
    switch (num) {
    case 0:
      num_string_final += "zero";
      break;
    case 1:
      num_string_final += "one";
      break;
    case 2:
      num_string_final += "two";
      break;
    case 3:
      num_string_final += "three";
      break;
    case 4:
      num_string_final += "four";
      break;
    case 5:
      num_string_final += "five";
      break;
    case 6:
      num_string_final += "six";
      break;
    case 7:
      num_string_final += "seven";
      break;
    case 8:
      num_string_final += "eight";
      break;
    case 9:
      num_string_final += "nine";
      break;
    }
    break;
  case 2:
    if (num > 19) {
      if (std::to_string(num).at(1) != '0') {
        num_string_final += get_two_digit(std::to_string(num));
      } else {
        switch (std::to_string(num).at(0)) {
        case 1:
          num_string_final += "ten";
          break;
        case 2:
          num_string_final += "twenty";
          break;
        case 3:
          num_string_final += "thirty";
          break;
        case 4:
          num_string_final += "fourty";
          break;
        case 5:
          num_string_final += "fifty";
          break;
        case 6:
          num_string_final += "sixty";
          break;
        case 7:
          num_string_final += "seventy";
          break;
        case 8:
          num_string_final += "eighty";
          break;
        case 9:
          num_string_final += "ninety";
          break;
        }
      }
    } else {
      switch (num) {
      case 11:
        num_string_final += "eleven";
        break;
      case 12:
        num_string_final += "twelve";
        break;
      case 13:
        num_string_final += "thirteen";
        break;
      case 14:
        num_string_final += "fourteen";
        break;
      case 15:
        num_string_final += "fifteen";
        break;
      case 16:
        num_string_final += "sixteen";
        break;
      case 17:
        num_string_final += "seventeen";
        break;
      case 18:
        num_string_final += "eighteen";
        break;
      case 19:
        num_string_final += "nineteen";
        break;
      }
    }
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  default:
    throw std::domain_error("input out of range");
  }

  for (auto x : num_string) {
    switch (x) {
    case 100:
      num_string_final += "hundred";
      break;
    case 1000:
      num_string_final += "thousand";
      break;
    case 1000000:
      num_string_final += "million";
      break;
    case 1000000000:
      num_string_final += "billion";
      break;
    default:
      num_string_final += get_composite_str(x);
      break;
    }
  }
  return num_string_final;
}

} // namespace say
