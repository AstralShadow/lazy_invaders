cmake_minimum_required(VERSION 3.22.2)

project(lazy_invaders VERSION 1.0)


### SOURCES ###

FILE(GLOB SOURCES
    src/*.cpp
    src/core/*.cpp
    src/utils/*.cpp
    src/game/*.cpp
    )
include_directories(${PROJECT_NAME} src)
add_executable(${PROJECT_NAME} ${SOURCES})


### CONFIGURATION ###

option(USE_SDL2_NET "Initialize sdl2_net" ON)
option(USE_SDL2_IMAGE "Initialize sdl2_image" ON)
option(USE_SDL2_TTF "Initialize sdl2_ttf" OFF)

configure_file(src/core/version.hpp.in
               src/core/version.hpp)
configure_file(src/core/config.hpp.in
               src/core/config.hpp)
target_include_directories( ${PROJECT_NAME}
    PUBLIC "${PROJECT_BINARY_DIR}/src"
)


### CXX FLAGS ###

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

if (MSVC)
    # warning level 4 and all warnings as errors
    target_compile_options(${PROJECT_NAME} PRIVATE
        /W4 /WX
    )
else()
    # lots of warnings and all warnings as errors
    target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall -Wextra -pedantic -Werror
        #-fsanitize=undefined
        #-fsanitize=null
    )
endif()


### DEPENDENCIES ###
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
include(FetchContent)

find_package(SDL2)
if(NOT SDL2_FOUND)
    FetchContent_Declare(
        SDL
        GIT_REPOSITORY https://github.com/libsdl-org/SDL
        GIT_TAG origin/main
    )
    FetchContent_MakeAvailable(SDL)
endif()

find_package(SDL2_net)
if(NOT SDL2_NET_FOUND)
    FetchContent_Declare(
        SDL_net
        GIT_REPOSITORY https://github.com/libsdl-org/SDL_net
        GIT_TAG origin/main
    )
    FetchContent_MakeAvailable(SDL_net)
endif()

find_package(SDL2_image)
if(NOT SDL2_IMAGE_FOUND)
    FetchContent_Declare(
        SDL_image
        GIT_REPOSITORY https://github.com/libsdl-org/SDL_image
        GIT_TAG origin/main
    )
    FetchContent_MakeAvailable(SDL_image)
endif()

find_package(SDL2_ttf)
if(NOT SDL2_TTF_FOUND)
    FetchContent_Declare(
        SDL_ttf
        GIT_REPOSITORY https://github.com/libsdl-org/SDL_ttf
        GIT_TAG origin/main
    )
    FetchContent_MakeAvailable(SDL_ttf)
endif()

target_link_libraries( ${PROJECT_NAME} PRIVATE
    SDL2::SDL2
    SDL2::SDL2main
    SDL2_image::SDL2_image
    SDL2_net::SDL2_net
    SDL2_ttf::SDL2_ttf
)

