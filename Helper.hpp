#ifndef HELPER_HPP
#define HELPER_HPP
#include <utility>
#include <cmath>
class Helper
{
private:
    /* data */
public:
    // function to calculate the euclidean distance between two coordinates.
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) { return abs(std::get<0>(item1) - std::get<0>(item2)) + abs(std::get<1>(item1) - std::get<1>(item2)); }
};

#endif