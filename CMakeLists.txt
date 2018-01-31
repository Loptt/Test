
cmake_minimum_required(VERSION 3.9)
project(Test)

set(CMAKE_CXX_STANDARD 11)

add_executable(Test main.cpp Player.cpp Player.h Animation.cpp Animation.h)

configure_file(images/player_texture.png images/player_texture.png COPYONLY)
configure_file(images/tux_from_linux.png images/tux_from_linux.png COPYONLY)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Test ${SFML_LIBRARIES})
endif()