#include "power_of_troy.h"
#include <memory>
#include <string>

namespace troy {

void give_new_artifact(human &receiver, std::string new_artifact_name) {
  struct artifact new_artifact(new_artifact_name);
  receiver.possession = std::make_unique<artifact>(new_artifact);
}

void exchange_artifacts(std::unique_ptr<artifact> &possession_1,
                        std::unique_ptr<artifact> &possession_2) {
  std::swap(possession_1, possession_2);
}

void manifest_power(human &wielder, std::string manifested_power_effect) {
  struct power manifested_power(manifested_power_effect);
  wielder.own_power = std::make_shared<power>(manifested_power);
}

void use_power(human &caster, human &target) {
  target.influenced_by = caster.own_power;
}

int power_intensity(human &caster) {
  if (caster.own_power.use_count() == 0 || caster.own_power == nullptr) {
    return 0;
  } else {
    return caster.own_power.use_count();
  }
}

} // namespace troy
