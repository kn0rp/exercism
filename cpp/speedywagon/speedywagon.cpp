#include "speedywagon.h"
#include <array>

namespace speedywagon {

// Enter your code below:

bool connection_check(pillar_men_sensor *sensor) {
  if (sensor) {
    return true;
  } else {
    return false;
  }
}

int activity_counter(int *activity, int activity_count) {
  int accumulated_activity{0};
  for (int i{0}; i < activity_count; i++) {
    accumulated_activity += *(activity + i);
  }
  return accumulated_activity;
}

bool alarm_control(pillar_men_sensor *sensor) {
  if (connection_check(sensor) && sensor->activity > 0) {
    return true;
  } else if (connection_check(sensor) != 1) {
    return false;
  }
  return false;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int> *data_array) {
  double avg{};
  for (auto element : *data_array) {
    avg += element;
  }
  avg /= data_array->size();
  int uv_index{};
  for (auto element : *data_array) {
    if (element > avg)
      ++uv_index;
  }
  return uv_index;
}

bool uv_alarm(pillar_men_sensor *sensor) {
  if (connection_check(sensor) &&
      uv_light_heuristic(&sensor->data) > sensor->activity) {
    return true;
  } else {
    return false;
  }
  return false;
}

} // namespace speedywagon
