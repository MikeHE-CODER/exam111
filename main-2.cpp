#include "Goal.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"
#include "Experiment.hpp"

int main()
{
    Scientist a(5, 6);
    a.getExperimentCount();
    a.runExperiment();
    a.move(2, 4);
    Experiment b(3, 4, 5, 6);
    Scientist *c = new Scientist(7, 8);
    b.interact(c);
    b.getType();
    Goal *d = new Goal(6, 7);
    d->interact(c);
    d->getType();
}