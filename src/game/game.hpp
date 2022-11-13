#ifndef INCLUDE_GAME_HPP
#define INCLUDE_GAME_HPP

#include <cstdint>


namespace game
{
        void init();

        void tick();
        void render();

        template<typename T>
        void handle_event(T&);



        typedef uint32_t id_t;

        struct Player;
        struct Enemy;
        //struct Projectile;

        extern id_t local_player_id;

        Player* get_player(id_t);
        Enemy* get_enemy(id_t);

        
}

#endif // INCLUDE_GAME_HPP
