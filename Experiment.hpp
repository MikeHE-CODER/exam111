#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP
#include "Interactable.hpp"
#include "Helper.hpp"
#include <utility>
class Experiment : public Interactable
{
public:
    Experiment(int x, int y, int width, int height)
    {
        setCoordinates(x, y);
        setGridWidth(width);
        setGridHeight(height);
    }
    bool interact(Scientist *player)
    {
        player->runExperiment();
        int a = player->getX();
        int b = player->getY();
        int c = getX();
        int d = getY();
        if (Helper::manhattanDistance(std::make_pair(a, b), std::make_pair(c, d)) == 0 && player->getExperimentCount() > 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    InteractableType getType() { return InteractableType::EXPERIMENT; }
}

;
#endif