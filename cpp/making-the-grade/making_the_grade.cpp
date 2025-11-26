#include <algorithm>
#include <array>
#include <iterator>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
  std::vector<int> rounded_scores{};

  for (int i{0}; i < student_scores.size(); i++) {
    rounded_scores.emplace_back(static_cast<int>(student_scores.at(i)));
  }
  return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
  int failed_counter{0};
  for (int i{0}; i < student_scores.size(); i++) {
    if (student_scores[i] < 41) {
      failed_counter++;
    }
  }
  return failed_counter;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
  int grade_step = (highest_score - 40) / 4;
  std::array<int, 4> grade_thresholds;

  for (int i{0}; i < 4; i++) {
    grade_thresholds.at(i) = (grade_step * i) + 1;
  }
  return grade_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string>
student_ranking(std::vector<int> student_scores,
                std::vector<std::string> student_names) {
  std::vector<std::string> ranking_strings;

  for (int i{0}; i < student_scores.size(); i++) {
    ranking_strings[i] = std::to_string(i + 1) + ". " + student_names[i] +
                         ": " + std::to_string(student_scores[i]);
  }
  return ranking_strings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
  for (int i{0}; i < student_scores.size(); i++) {
    if (student_scores[i] == 100)
      return student_names[i];
  }
  return "";
}
