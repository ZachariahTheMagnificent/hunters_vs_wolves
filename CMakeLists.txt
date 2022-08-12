cmake_minimum_required(VERSION 3.23)
project(world.zachariahs.hunters_vs_wolves VERSION 1.0.0.0 DESCRIPTION "Training AI to work together in a game of hunters vs wolves." LANGUAGES CXX HOMEPAGE_URL "https://www.zachariahs.world/")

add_library(${PROJECT_NAME}.core)
target_compile_features(${PROJECT_NAME}.core PUBLIC cxx_std_20)
target_sources(${PROJECT_NAME}.core PUBLIC FILE_SET internal_headers TYPE HEADERS BASE_DIRS include FILES
  include/${PROJECT_NAME}.character_perception.hpp
  include/${PROJECT_NAME}.character_types.hpp
  include/${PROJECT_NAME}.entity.hpp
  include/${PROJECT_NAME}.entity_type.hpp
  include/${PROJECT_NAME}.fitness_scores.hpp
  include/${PROJECT_NAME}.hunter_traits.hpp
  include/${PROJECT_NAME}.vector2d.hpp
  include/${PROJECT_NAME}.wolf_traits.hpp
  include/${PROJECT_NAME}.world.hpp
)
target_sources(${PROJECT_NAME}.core PUBLIC
  src/core.cpp
)

add_executable(${PROJECT_NAME})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}.core)
target_sources(${PROJECT_NAME} PRIVATE
  src/main.cpp
)
