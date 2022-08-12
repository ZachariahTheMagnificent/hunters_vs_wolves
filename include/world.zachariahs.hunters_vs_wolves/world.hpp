#include <cstddef>
#include <span>
#include <vector>
#include <world.zachariahs.hunters_vs_wolves/entity.hpp>
#include <world.zachariahs.hunters_vs_wolves/entity_type.hpp>

namespace world::zachariahs::hunters_vs_wolves::core {
struct world {
  std::vector<entity> entities;
  std::span<std::size_t>
      spans_of_entity_type[static_cast<std::size_t>(entity_type::total)];
};
} // namespace world::zachariahs::hunters_vs_wolves::core
