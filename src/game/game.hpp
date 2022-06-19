#ifndef INCLUDE_GAME_HPP
#define INCLUDE_GAME_HPP

namespace game
{
        void init();

        void tick();
        void render();

        template<typename T>
        void handle_event(T&);
}


#endif // INCLUDE_GAME_HPP
