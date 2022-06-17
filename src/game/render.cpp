#include "game/game.hpp"
#include "core/core.hpp"
#include <SDL2/SDL_render.h>

void game::render()
{
    auto& rnd = core::renderer;

    SDL_SetRenderDrawColor(rnd, 0, 0, 0, 255);
    SDL_RenderClear(rnd);

    SDL_RenderPresent(rnd);
}
