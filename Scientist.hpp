#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "GridItem.hpp"
class Scientist : public GridItem
{
private:
    int experimentCount;

public:
    Scientist(int gridWidth, int gridHeight)
    {
        setGridHeight(gridHeight);
        setGridWidth(gridWidth);
        experimentCount = 0;
    }
    Scientist(/* args */) : experimentCount(0) {};
    int getExperimentCount() { return experimentCount; } // gets the current number of experiment stations the scientist has visited
    void runExperiment() { experimentCount++; }          // increments the number of experiment stations the scientist has visited
    bool move(int xOffset, int yOffset)
    {
        if (xOffset <= 2 && yOffset <= 2)
        {
            setCoordinates(getX() + xOffset, getY() + yOffset);
            return true;
        }
        else
        {
            return false;
        }
    }
};

#endif