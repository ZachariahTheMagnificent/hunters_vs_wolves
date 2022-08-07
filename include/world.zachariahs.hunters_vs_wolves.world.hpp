#include <cstddef>
#include <vector>
#include <span>
#include <world/zachariahs/hunters_vs_wolves/core/entity.hpp>
#include <world/zachariahs/hunters_vs_wolves/core/entity_type.hpp>

namespace world::zachariahs::hunters_vs_wolves::core {
  struct world {
    std::vector <entity> entities;
    std::span spans_of_entity_type [entity_type::total];
  };
}
