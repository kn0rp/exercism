#pragma once

#include <map>
#include <string>
#include <unordered_set>

namespace allergies {
struct allergy_test {
  explicit allergy_test(int allergy_score) : allergy_score(allergy_score), allergies() {}
  int allergy_score;
  std::unordered_set<std::string> allergies;
  std::unordered_set<std::string> get_allergies();
  bool is_allergic_to(std::string item);
};
} // namespace allergies
