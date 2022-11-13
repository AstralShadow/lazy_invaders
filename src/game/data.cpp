#include "game/game.hpp"
#include "game/data.hpp"
#include <vector>
#include <algorithm>


Player* game::get_player(id_t id)
{
        using std::find_if;

        auto itr = find_if(
                players.begin(),
                players.end(),
                [id](auto player) {
                        return player.id == id;
                });

        Player* player = &*itr;

        return player;
}

Enemy* game::get_enemy(id_t id)
{
        using std::find_if;

        auto itr = find_if(
                enemies.begin(),
                enemies.end(),
                [id](auto enemy) {
                        return enemy.id == id;
                });

        Enemy* enemy= &*itr;

        return enemy;
}
