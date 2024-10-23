#ifndef GAME_HPP
#define GAME_HPP
#include <vector>
class Game
{
private:
    /* data */
public:
    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates) {}
    enum GameState
    {
        WIN,
        LOSE,
        PLAYING
    };
};

#endif