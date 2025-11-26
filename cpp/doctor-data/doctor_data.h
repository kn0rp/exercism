#pragma once

#include <string>

namespace star_map {
enum class System {
  BetaHydri,
  EpsilonEridani,
  Sol,
  AlphaCentauri,
  Omicron2Eridani,
  DeltaEridani
};
} // namespace star_map

namespace heaven {
class Vessel {
private:

public:
  Vessel(std::string name, int generation, star_map::System current_system);
  Vessel(std::string name, int generation);
  Vessel replicate(std::string);
  int generation;
  int busters;
  star_map::System current_system;
  void make_buster();
  bool shoot_buster();
  std::string name;
};

std::string get_older_bob(Vessel, Vessel);
bool in_the_same_system(Vessel, Vessel);

} // namespace heaven
