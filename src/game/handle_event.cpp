#include "game/game.hpp"
#include "core/core.hpp"
#include "game/Player.hpp"
#include <SDL2/SDL_events.h>

#include <iostream>
using std::cout;
using std::endl;


template<>
void game::handle_event(SDL_KeyboardEvent& ev)
{
        if(ev.keysym.sym == SDLK_q)
                core::stop();
}

template<>
void game::handle_event(SDL_MouseButtonEvent&)
{
        
}


template<>
void game::handle_event(SDL_MouseMotionEvent& ev)
{
        auto& player = *get_player(local_player_id);

        player.pos.x = ev.x - 32;
        player.pos.y = ev.y - 32;
}

