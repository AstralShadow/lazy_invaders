#include "core/core.hpp"
#include "core/game.hpp"
#include <SDL2/SDL_events.h>

SDL_Window* core::window = nullptr;
SDL_Renderer* core::renderer = nullptr;

static bool running = false;


void core::run()
{
    running = true;
    
    while(running)
    {
        core::poll_events();
        game::tick();
        game::render();
    }
}

void core::stop()
{
    running = false;
}


void core::poll_events()
{
    SDL_Event ev;
    while(SDL_PollEvent(&ev))
    {
        switch(ev.type)
        {
        case SDL_QUIT:
            core::stop();
            break;

        case SDL_KEYDOWN:
        case SDL_KEYUP:
            game::handle_event(ev.key);
            break;

        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP:
            game::handle_event(ev.button);
            break;
        }
    }
}
