#include "GridItem.hpp"
#include "Helper.hpp"

int main()
{
    GridItem a(3, 4, 5, 6);
    a.setCoordinates(4, 5);
    auto b = a.getCoordinates();
    a.getGridHeight();
    a.getGridWidth();
    a.getActiveGridItemCount();
}