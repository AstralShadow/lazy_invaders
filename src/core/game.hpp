#ifndef INCLUDE_GAME_EXTERNAL_HPP
#define INCLUDE_GAME_EXTERNAL_HPP

#include <iostream>
using std::cout;
using std::endl;

namespace game
{
    void tick();
    void render();

    template<typename event_t>
    extern void handle_event(event_t&) {
        cout << "random event" << endl;
    };
}

#endif // INCLUDE_GAME_EXTERNAL_HPP
