#include "lasagna_master.h"
#include <string>
#include <vector>

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers,
                    int avg_prep_time_per_layer = 2) {
  return avg_prep_time_per_layer * layers.size();
}

} // namespace lasagna_master
