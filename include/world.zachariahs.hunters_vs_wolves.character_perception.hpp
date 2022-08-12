#include <cstddef>
#include <world.zachariahs.hunters_vs_wolves.world.hpp>

namespace world::zachariahs::hunters_vs_wolves::core {
template <typename character_traits> struct character_perception {
  static constexpr auto max_number_of_allies = std::size_t{10};
  static constexpr auto max_number_of_enemies = std::size_t{10};
  static constexpr auto max_number_of_arrows = std::size_t{40};
  static constexpr auto number_of_entity_features = std::size_t{4};

  constexpr auto perception_of(const world &the_world) {
    auto result =
        std::array<float, (max_number_of_allies + max_number_of_enemies +
                           max_number_of_arrows) *
                              number_of_entity_features>{};
    auto untruncated_span_of_allies = std::span{result};
    auto span_of_allies = untruncated_span_of_allies.subspan(
        0, max_number_of_allies * number_of_entity_features);
    auto untruncated_span_of_enemies =
        untruncated_span_of_allies.subspan(span_of_allies.size());
    auto span_of_enemies = untruncated_span_of_enemies.subspan(
        max_number_of_enemies * number_of_entity_features);
    auto span_of_arrows = untruncated_span_of_enemies

        const auto allies =
            character_traits::ally_types |
            utilities::index_from(the_world.spans_of_entity_type);

    for (const auto an_ally : allies) {
    }

    for (const auto an_enemy_type : character_traits::enemy_types) {
      for (const auto &an_enemy :
           the_world.spans_of_entity_type[an_enemy_type]) {
      }
    }
  };
}
