#include "game/game.hpp"
#include "game/data.hpp"
#include <SDL2/SDL_timer.h>
#include <cmath>
#include <cstdint>
#include <iostream>


void game::tick()
{
        int32_t tick = SDL_GetTicks() % 10000;
        float offset = std::sin(3.14 * tick / 5000.0f);

        for(int i = 0; i < 20; i++)
        {
                auto& enemy = enemies[i];
                int x = (i % 5 - 2.5) * 70 + 400 + 3;
                x += offset * (400 - 2.5 * 70);
                enemy.pos.x = x;
        }
}
