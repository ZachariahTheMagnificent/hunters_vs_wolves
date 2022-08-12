#include <array>
#include <cstddef>
#include <world.zachariahs.hunters_vs_wolves.entity_type.hpp>

namespace world::zachariahs::hunters_vs_wolves::core {
struct wolf_traits {
  static constexpr auto type = entity_type::wolf;
  static constexpr auto max_speed = 1.0f;
  static constexpr auto ally_types = std::array{entity_type::wolf};
  static constexpr auto enemy_types = std::array{entity_type::hunter};
};
} // namespace world::zachariahs::hunters_vs_wolves::core
