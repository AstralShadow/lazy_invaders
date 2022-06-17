#include "game.hpp"
#include <SDL2/SDL_events.h>

#include <iostream>
using std::cout;
using std::endl;


namespace game
{
    template<typename T>
    void handle_event(T&);
}


template<>
void game::handle_event(SDL_KeyboardEvent& ev)
{
    cout << "keyboard event!" << endl;
}

/*
template<>
void game::handle_event(SDL_MouseButtonEvent& ev)
{
    cout << "mouse event!" << endl;
}
*/
