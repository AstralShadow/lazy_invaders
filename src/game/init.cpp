#include "game/game.hpp"
#include "game/Player.hpp"
#include "game/data.hpp"
#include "game/Enemy.hpp"
#include <vector>

namespace game
{
        id_t player_id_counter = 0;
        id_t enemy_id_counter = 0;

        id_t local_player_id = 0;

        std::vector<Player> players;
        std::vector<Enemy> enemies;
}


void game::init()
{
        id_t id = player_id_counter++;

        Player player{id, {32, 32}};
        local_player_id = id;

        players.push_back(player);

        
        for(int i = 0; i < 20; i++)
        {
                float y = (i / 5) * 70 + 50;

                Enemy enemy {
                        enemy_id_counter++,
                        {0, y}
                };

                enemies.push_back(enemy);
        }
}
