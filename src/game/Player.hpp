#ifndef INCLUDE_PLAYER_HPP
#define INCLUDE_PLAYER_HPP

#include "utils/point.hpp"
#include "game/game.hpp"
#include <cstdint>
#include <string>

using game::Player;

struct Player
{
        id_t id;

        //std::string name;
        fpoint pos;
};

#endif // INCLUDE_PLAYER_HPP
