#ifndef Interactable_hpp
#define Interactable_hpp
#include "GridItem.hpp"
#include "Scientist.hpp"
class Interactable : public GridItem
{
private:
    static int Interactable_count;

public:
    enum InteractableType
    {
        GOAL,
        EXPERIMENT
    };
    Interactable() { Interactable_count++; }
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) { Interactable_count++; }
    ~Interactable()
    {
        setCoordinates(0, 0);
        setGridHeight(0);
        setGridWidth(0);
        Interactable_count--;
    };
    virtual bool interact(Scientist *p) = 0;
    virtual InteractableType getType() = 0;
    int getActiveInteractableCount() { return Interactable_count; }
};
int Interactable::Interactable_count = 0;

#endif
