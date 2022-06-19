#ifndef INCLUDE_GAME_EXTERNAL_HPP
#define INCLUDE_GAME_EXTERNAL_HPP

namespace game
{
        void tick();
        void render();

        template<typename event_t>
        extern void handle_event(event_t&) { }
}

#endif // INCLUDE_GAME_EXTERNAL_HPP
