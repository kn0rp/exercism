#include "lasagna_master.h"
#include <string>
#include <vector>

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers,
                    int avg_prep_time_per_layer = 2) {
  return avg_prep_time_per_layer * layers.size();
}

void addSecretIngredient(std::vector<std::string> &my_recipe_ingredients,
                         const std::vector<std::string> &friends_ingredients) {
  my_recipe_ingredients.at(my_recipe_ingredients.size() - 1) =
      friends_ingredients.at(friends_ingredients.size() - 1);
}

std::vector<double> scaleRecipe(std::vector<double> portion_amounts,
                                int portion_number = 2) {
  std::vector<double> scaled_amounts{};
  for (double ingredient_amount : portion_amounts) {
    scaled_amounts.emplace_back(ingredient_amount * (portion_number / 2));
  }
  return scaled_amounts;
}

amount::amount(int noodles, double sauce) {
  this->noodles = noodles;
  this->sauce = sauce;
}

amount quantities(std::vector<std::string> layers) {
  int noodles_counter{0};
  double sauce_counter{0};

  for (std::string layer : layers) {
    if (layer == "noodles") {
      noodles_counter++;
    } else if (layer == "sauce") {
      sauce_counter++;
    }
  }

  return amount(noodles_counter * 50, sauce_counter * 0.2);
};

} // namespace lasagna_master
