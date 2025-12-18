#include "queen_attack.h"
#include <utility>

namespace queen_attack {

const std::pair<int, int> chess_board::white() const { return queen1; }
const std::pair<int, int> chess_board::black() const { return queen2; }
bool chess_board::can_attack() const {
  if (queen1.first == queen2.first || queen1.second == queen2.second ||
      (std::abs(queen1.second - queen2.second) ==
       std::abs(queen1.first - queen2.first))) {
    return true;
  }
  return false;
}

} // namespace queen_attack
