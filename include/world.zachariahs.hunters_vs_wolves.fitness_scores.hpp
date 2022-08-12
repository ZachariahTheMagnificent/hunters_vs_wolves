#include <cstddef>

namespace world::zachariahs::hunters_vs_wolves::core {
struct fitness_scores {
  static constexpr auto win = 3.0f;
  static constexpr auto loss = 1.0f;
  static constexpr auto members_survived =
      [](const std::size_t amount) -> float { return amount * amount; };
  static constexpr auto enemies_killed = [](const std::size_t amount) -> float {
    return amount * amount;
  };
  static constexpr auto survival_duration = [](const float amount) -> float {
    return amount;
  };
};
} // namespace world::zachariahs::hunters_vs_wolves::core
