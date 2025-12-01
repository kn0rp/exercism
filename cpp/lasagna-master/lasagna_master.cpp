#include "lasagna_master.h"
#include <vector>

namespace lasagna_master {

amount::amount(int noodlesWeight, double sauceVol) {
  this->noodles = noodlesWeight;
  this->sauce = sauceVol;
};

int preparationTime(std::vector<std::string> layers, int avgPrepTime) {
  return layers.size() * avgPrepTime;
};

amount quantities(std::vector<std::string> layers) {
  int noodlesCount{0};
  double sauceCount{0};

  for (std::string layer : layers) {
    if (layer == "noodles") {
      noodlesCount++;
    } else if (layer == "sauce") {
      sauceCount++;
    }
  }
  return amount(noodlesCount * 50, sauceCount * 0.2);
};

void addSecretIngredient(std::vector<std::string> &myRecipe,
                         std::vector<std::string> friendsRecipe) {
  myRecipe.back() = friendsRecipe.back();
};

void addSecretIngredient(std::vector<std::string> &myRecipe,
                         std::string secret) {
  myRecipe.at(myRecipe.size() - 1) = secret;
}

std::vector<double> scaleRecipe(std::vector<double> amounts, int portions) {
  std::vector<double> desiredAmount{};

  for (double amount : amounts) {
    desiredAmount.emplace_back((amount / 2.0) * portions);
  }

  return desiredAmount;
}

} // namespace lasagna_master
