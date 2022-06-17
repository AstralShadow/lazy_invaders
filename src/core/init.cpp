#include "init.hpp"
#include "core.hpp"
#include <SDL2/SDL.h>
#include <stdexcept>
#include <string>

using std::string;

void core::init()
{
    init_sdl();
    create_window();
    create_renderer();
}

void core::deinit()
{
    if(renderer)
        SDL_DestroyRenderer(renderer);
    if(window)
        SDL_DestroyWindow(window);

    window = nullptr;
    renderer = nullptr;

    SDL_Quit();
}


void core::init_sdl()
{
    if(SDL_Init(SDL_INIT_VIDEO))
    {
        string error = "Could not init SDL.\n";
        error += "SDL_Error: \n";
        error += SDL_GetError();
        std::runtime_error(error.c_str());
    }
}

void core::create_window()
{
    window = SDL_CreateWindow(
        PROJECT_NAME,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, 600,
        0
    );

    if(!window)
    {
        string error = "Could not create window.\n";
        error += "SDL_Error: \n";
        error += SDL_GetError();
        std::runtime_error(error.c_str());
    }
}

void core::create_renderer()
{
    renderer = SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_PRESENTVSYNC
    );

    if(!renderer)
    {
        string error = "Could not create renderer.\n";
        error += "SDL_Error: \n";
        error += SDL_GetError();
        std::runtime_error(error.c_str());
    }
}

