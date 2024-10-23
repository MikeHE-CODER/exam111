#ifndef GOAL_HPP
#define GOAL_HPP
#include "Interactable.hpp"
#include "Scientist.hpp"
#include "Helper.hpp"
#include <utility>
class Goal : public Interactable
{
private:
    /* data */
public:
    Goal(int width, int height)
    {
        setGridWidth(width);
        setGridHeight(height);
    }
    bool interact(Scientist *player)
    {
        int a = player->getX();
        int b = player->getY();
        int c = getX();
        int d = getY();
        if (Helper::manhattanDistance(std::make_pair(a, b), std::make_pair(c, d)) == 0 && player->getExperimentCount() >= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    InteractableType getType() { return InteractableType::GOAL; }
};

#endif