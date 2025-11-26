#include "allergies.h"

#include <map>
#include <string>
#include <unordered_set>

std::map<int, std::string> item_map = {
    {1, "eggs"},      {2, "peanuts"},    {4, "shellfish"}, {8, "strawberries"},
    {16, "tomatoes"}, {32, "chocolate"}, {64, "pollen"},   {128, "cats"}};


namespace allergies {

std::unordered_set<std::string> allergies::allergy_test::get_allergies() {
  while (allergy_score > 255) {
    allergy_score -= 256;
  }
  for (int i{128}; i > 0; i /= 2) {
    if (allergy_score >= i && i > 0) {
      allergies.emplace(item_map.at(i));
      allergy_score -= i;
    } else if (allergy_score == 0) {
      break;
    }
  }
  return allergies;
};

bool allergies::allergy_test::is_allergic_to(std::string item) {
  for (std::string set_item : allergies) {
    if (set_item == item)
      return true;
  }
  return false;
};
} // namespace allergies
