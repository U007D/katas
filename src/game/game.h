#ifndef KATA_GAME_H
#define KATA_GAME_H

#ifndef TEST_FRIENDS
#define TEST_FRIENDS
#endif

#include <cstdint>
#include <vector>

class Game
{
TEST_FRIENDS;
public:
    Game add_roll(uint8_t roll);
    uint16_t score();

private:
    std::vector<uint8_t> rolls;
};

#endif //KATA_GAME_H
