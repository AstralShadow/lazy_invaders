#ifndef INCLUDE_CORE_GAME_HPP
#define INCLUDE_CORE_GAME_HPP

namespace game
{
        void init();

        void tick();
        void render();

        template<typename event_t>
        extern void handle_event(event_t&) { }
}

#endif // INCLUDE_CORE_GAME_HPP
