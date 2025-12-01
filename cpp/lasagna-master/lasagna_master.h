#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
  int noodles;
  double sauce;
  amount(std::vector<std::string>);
  amount(int, double);
};

int preparationTime(std::vector<std::string>, int = 2);

amount quantities(std::vector<std::string>);

void addSecretIngredient(std::vector<std::string> &, std::vector<std::string>);
void addSecretIngredient(std::vector<std::string> &, std::string);

std::vector<double> scaleRecipe(std::vector<double>, int);

} // namespace lasagna_master
