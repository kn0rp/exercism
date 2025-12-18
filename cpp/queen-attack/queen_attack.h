#pragma once

#include <array>
#include <numeric>
#include <stdexcept>
#include <utility>
namespace queen_attack {

struct chess_board {
  chess_board(std::pair<int, int> queen1, std::pair<int, int> queen2)
      : queen1(queen1), queen2(queen2) {
    if (queen1.first < 0 || queen1.first > 7 || queen1.second < 0 ||
        queen1.second > 7 || queen2.first < 0 || queen2.first > 7 ||
        queen2.second < 0 || queen2.second > 7 ||
        (queen1.first == queen2.first && queen1.second == queen2.second)) {
      throw std::domain_error("");
    }
  };
  bool can_attack() const;
  const std::pair<int, int> white() const;
  const std::pair<int, int> black() const;

private:
  std::pair<int, int> queen1;
  std::pair<int, int> queen2;
};

} // namespace queen_attack
