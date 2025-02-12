cmake_minimum_required(VERSION 3.28)
project(Timber)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(Timber main.cpp)

target_link_libraries(Timber PRIVATE SFML::Graphics)

# Copy resource files to the build directory
add_custom_command(
    TARGET Timber POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/graphics $<TARGET_FILE_DIR:Timber>/graphics
)