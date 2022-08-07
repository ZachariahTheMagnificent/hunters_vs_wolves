cmake_minimum_required(VERSION 3.23)
project(hunters_vs_wolves VERSION 1.0.0.0 DESCRIPTION "Training AI to work together in a game of hunters vs wolves." LANGUAGES CXX HOMEPAGE_URL "https://www.zachariahs.world/")

set(INTERNAL_HEADER_DIR include/world/zachariahs/hunters_vs_wolves)

add_executable(${PROJECT_NAME})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_sources(${PROJECT_NAME} PRIVATE FILE_SET internal_headers TYPE HEADERS BASE_DIRS ${INTERNAL_HEADER_DIR} FILES
  ${INTERNAL_HEADER_DIR}/wolf_traits.hpp
)
target_sources(${PROJECT_NAME} PRIVATE
  src/main.cpp
)
