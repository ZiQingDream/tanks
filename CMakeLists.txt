cmake_minimum_required(VERSION 3.10)

project(city_battle)

set(SDL2_DEV_DIR "${CMAKE_SOURCE_DIR}/libs/libs-windows-vs" CACHE STRING "SDL2 Develop Package")

set(SDL2_MAIN_DIR "${SDL2_DEV_DIR}/SDL2-2.32.2" CACHE STRING "SDL2 Main Library")
include_directories(${SDL2_MAIN_DIR}/include)
link_directories(${SDL2_MAIN_DIR}/lib/x64)

set(SDL2_TTF_DIR "${SDL2_DEV_DIR}/SDL_ttf-2.24.0" CACHE STRING "SDL2 TTF Library")
include_directories(${SDL2_TTF_DIR}/include)
link_directories(${SDL2_TTF_DIR}/lib/x64)

set(SDL2_IMAGE_DIR "${SDL2_DEV_DIR}/SDL_image-2.8.8" CACHE STRING "SDL2 Image Library")
include_directories(${SDL2_MAIN_DIR}/include)
link_directories(${SDL2_IMAGE_DIR}/lib/x64)

add_subdirectory(src)
add_subdirectory(tests)