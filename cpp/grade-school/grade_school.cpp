#include "grade_school.h"
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

namespace grade_school {
const std::map<int, std::vector<std::string>> &school::roster() const {
  return school::roster_;
}

const std::vector<std::string> school::grade(int grade) const {
  if (school::roster_.find(grade) != school::roster_.end()) {
    std::vector<std::string> grade_name_list = school::roster_.at(grade);
    return grade_name_list;
  } else {
    return {};
  }
}

void school::add(std::string name, int grade) {
  if (school::roster_.find(grade) != roster_.end()) {
    std::vector<std::string> &names{school::roster_.at(grade)};
    if (std::find(names.begin(), names.end(), name) == names.end()) {
      names.emplace_back(name);
      std::sort(names.begin(), names.end());
    }
  } else {
    school::roster_.emplace(
        std::pair<int, std::vector<std::string>>{grade, {name}});
  }
}
} // namespace grade_school
