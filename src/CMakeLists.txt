include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 添加游戏顶层模块
add_library(game STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/app/app.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/app/appconfig.cpp
)

# 添加游戏状态
add_library(state STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/app_state/game.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/app_state/menu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/app_state/scores.cpp
)

# 添加游戏引擎
add_library(engine STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/engine/engine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/engine/renderer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/engine/spriteconfig.cpp
)

# 添加游戏物体抽象
add_library(objects STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/bonus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/brick.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/bullet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/eagle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/enemy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/object.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/player.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/objects/tank.cpp
)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} game state objects engine)
target_link_libraries(${PROJECT_NAME} SDL2_image SDL2_ttf SDL2main SDL2)
