#include "Grid.h"
#include "iostream"
/*
 * calculate the amount of tiles inside the grid.
 * create array of pointers to rectangles.
 * create the tiles(rectangles) inside the grid.
 */
Grid::Grid(double tileW, double tileH, int width, int height, int color) {
    double currTopLeftX = 0;
    double currTopLeftY = 0;
    _numOfRectangles = width * height;
    _rectangleArr = new Rectangle*[_numOfRectangles];
    int i = 0;
    for (int j = 0; j < width; ++j) {
        for (int k = 0; k < height; ++k) {
            _rectangleArr[i] = new Rectangle(currTopLeftX, currTopLeftY, tileW, tileH, color);
            currTopLeftY = currTopLeftY + tileH;
            i = i+1;
        }
        currTopLeftY = 0;
        currTopLeftX = currTopLeftX + tileW;
    }

}

Rectangle *Grid::getRectAtPoint(const Point &p) {
    for (int i = 0; i < _numOfRectangles; ++i) {
        if(_rectangleArr[i]->contains(p))
            return _rectangleArr[i];
    }
    return nullptr;
}

Rectangle *Grid::getRectAtIndex(int i) {
    if(i>_numOfRectangles){
        return nullptr;
    }
    return _rectangleArr[i];
}

void Grid::moveGrid(double deltaLeft, double deltaTop) {
    for (int i = 0; i < _numOfRectangles; ++i) {
        _rectangleArr[i]->moveRect(deltaLeft, deltaTop);
    }
}

void Grid::scaleGrid(double rectWidth, double rectHeight) {
    for (int i = 0; i < _numOfRectangles; ++i) {
        _rectangleArr[i]->scaleRect(rectWidth, rectHeight);
    }
}

Grid::~Grid() {
    for (int i = 0; i < _numOfRectangles; ++i) {
        delete _rectangleArr[i];
    }
    delete[]_rectangleArr;
}
