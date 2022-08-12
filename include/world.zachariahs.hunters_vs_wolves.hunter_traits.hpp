#include <array>
#include <cstddef>
#include <world.zachariahs.hunters_vs_wolves.entity_type.hpp>

namespace world::zachriahs::hunters_vs_wolves::core {
struct hunter_traits {
  static constexpr auto type = entity_type::hunter;
  static constexpr auto max_speed = 1.0f;
  static constexpr auto firing_speed = 1.0f;
  static constexpr auto projectile_speed = 1.0f;
  static constexpr auto ally_types = std::array{entity_type::hunter};
  static constexpr auto enemy_types = std::array{entity_type::wolf};
};
} // namespace world::zachriahs::hunters_vs_wolves::core
