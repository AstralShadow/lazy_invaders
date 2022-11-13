#ifndef INCLUDE_DATA_HPP
#define INCLUDE_DATA_HPP

#include "game/game.hpp"
#include "game/Player.hpp"
#include "game/Enemy.hpp"
#include <vector>


namespace game
{
        extern id_t player_id_counter;
        extern id_t enemy_id_counter;

        extern std::vector<Player> players;
        extern std::vector<Enemy> enemies;

}

#endif // INCLUDE_DATA_HPP
