#ifndef INCLUDE_ENEMY_HPP
#define INCLUDE_ENEMY_HPP


#include "utils/point.hpp"
#include "game/game.hpp"
#include <cstdint>
#include <string>

using game::Enemy;

struct Enemy
{
        id_t id;
        fpoint pos;
};

#endif // INCLUDE_ENEMY_HPP
