#pragma once

#include <string>
#include <vector>
namespace lasagna_master {

int preparationTime(std::vector<std::string>, int);

void addSecretIngredient(std::vector<std::string>, std::vector<std::string>);

std::vector<double> scaleRecipe(std::vector<double>, int);

struct amount {
  amount(int noodles, double sauce);
  int noodles;
  double sauce;
};

amount quantities(int, double);

} // namespace lasagna_master
