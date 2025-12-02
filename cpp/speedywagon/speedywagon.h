#pragma once

#include <array>
#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
  pillar_men_sensor(int, std::string, std::vector<int>);
  int activity{};
  std::string location{};
  std::vector<int> data{};
};

bool connection_check(pillar_men_sensor *);

int activity_counter(int *, int);

bool alarm_control(pillar_men_sensor *);

int uv_light_heuristic(std::vector<int> *data_array);

bool uv_alarm(pillar_men_sensor *);

} // namespace speedywagon
