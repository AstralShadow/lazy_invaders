#include "game/game.hpp"
#include "game/data.hpp"
#include "core/core.hpp"
#include <SDL2/SDL_render.h>


void game::render()
{
        auto& rnd = core::renderer;

        SDL_SetRenderDrawColor(rnd, 0, 0, 0, 255);
        SDL_RenderClear(rnd);

        SDL_SetRenderDrawColor(rnd, 0, 255, 0, 255);
        for(auto& player : game::players) {
               SDL_Rect area {
                        (int) player.pos.x,
                        (int) player.pos.y,
                        64,
                        64
               }; 

               SDL_RenderFillRect(rnd, &area);
        }

        SDL_SetRenderDrawColor(rnd, 127, 0, 0, 255);
        for(auto& enemy : game::enemies) {
               SDL_Rect area {
                        (int) enemy.pos.x,
                        (int) enemy.pos.y,
                        64,
                        64
               }; 

               SDL_RenderFillRect(rnd, &area);
        }


        SDL_RenderPresent(rnd);
}
