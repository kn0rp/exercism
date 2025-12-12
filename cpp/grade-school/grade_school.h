#pragma once

#include <map>
#include <string>
#include <vector>
namespace grade_school {

// TODO: add your solution here

class school {
private:
  std::map<int, std::vector<std::string>> roster_;

public:
  school() = default;
  const std::map<int, std::vector<std::string>> &roster() const;
  const std::vector<std::string> grade(int grade) const;
  void add(std::string name, int grade);
};
} // namespace grade_school
