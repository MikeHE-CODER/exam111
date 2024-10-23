#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP
#include <utility>
class GridItem
{
private:
    int x;
    int y;
    int width;
    int height;
    static int Griditem_count;

public:
      GridItem(int x, int y, int width, int height) : GridItem()
    {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    };
    GridItem() : x(0), y(0), width(0), height(0) { Griditem_count++; }
    void setCoordinates(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }
    std::pair<int, int> getCoordinates() { return std::make_pair(x, y); }
    int getGridWidth() { return width; }
    int getGridHeight() { return height; }
    int getActiveGridItemCount() { return Griditem_count; }
    virtual ~GridItem() { Griditem_count--; }
    void setGridWidth(int a) { width = a; }
    void setGridHeight(int a) { height = a; }
};
int GridItem::Griditem_count = 0;

#endif
