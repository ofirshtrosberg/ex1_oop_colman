//Ofir Shtrosberg 207828641
#ifndef _GRID
#define _GRID

#include "Rectangle.h"

using namespace std;
/**
 * this class represents a grid
 * each grid has the values: numOfRectangles and array of pointers to rectangles
 */
class Grid {
    int _numOfRectangles;
    Rectangle **_rectangleArr;
public:
    Grid(double tileW, double tileH, int width, int height, int color);

    ~Grid();

public:
    Rectangle *getRectAtPoint(const Point &p);

    Rectangle *getRectAtIndex(int i);

public:
    void moveGrid(double deltaLeft, double deltaTop);

    void scaleGrid(double rectWidth, double rectHeight);
};

#endif