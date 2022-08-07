#include <array>
#include <world/zachariahs/hunters_vs_wolves/core/entity_type.hpp>

namespace world::zachariahs::hunters_vs_wolves::core {
    static constexpr auto character_types = std::array {entity_type::hunter, entity_type::wolf};
}
