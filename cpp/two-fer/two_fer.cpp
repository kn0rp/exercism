#include "two_fer.h"
#include <string>

namespace two_fer {

// TODO: add your solution here

std::string two_fer(std::string str) {
  return (str == "") ? "One for you, one for me."
                     : "One for " + str + ", one for me.";
}

} // namespace two_fer
