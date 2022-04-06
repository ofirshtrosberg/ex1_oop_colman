//Ofir Shtrosberg 207828641
#include "Rectangle.h"

int Rectangle::m_count = 0;
// constructor
Rectangle::Rectangle(double left, double top, double width, double height, int color)
        : _topLeft(Point(left, top)),
          _bottomRight(Point((left + width), (top + height))) {
    _color = color;
    ++m_count;
}
// return the color
int Rectangle::getColor() const {
    return _color;
}
// return the top left point
Point &Rectangle::getTopLeftPoint() {
    return _topLeft;
}
// return the bottom right point
Point &Rectangle::getBottomRightPoint() {
    return _bottomRight;
}
// set the color
void Rectangle::setColor(int color) {
    _color = color;
}
// check if the current rectangle contains the given point
bool Rectangle::contains(const Point &p) {
    return (p.getX() >= _topLeft.getX() && p.getX() <= _bottomRight.getX()
            && p.getY() >= _topLeft.getY() && p.getY() <= _bottomRight.getY());
}
// move the rectangle according to the delta
void Rectangle::moveRect(double deltaLeft, double deltaTop) {
    _topLeft.setX(_topLeft.getX() + deltaLeft);
    _topLeft.setY(_topLeft.getY() + deltaTop);
    _bottomRight.setX(_bottomRight.getX() + deltaLeft);
    _bottomRight.setY(_bottomRight.getY() + deltaTop);
}
// change the scale of the rectangle
void Rectangle::scaleRect(double rectWidth, double rectHeight) {
    double scaleX = rectWidth / (_bottomRight.getX() - _topLeft.getX()); //the proportion between the old width and the current width
    double scaleY = rectHeight / (_bottomRight.getY() - _topLeft.getY());//the proportion between the old height and the current height
    _topLeft.setScaleX(_topLeft.getScaleX() * scaleX);
    _topLeft.setScaleY(_topLeft.getScaleY() * scaleY);
    _bottomRight.setScaleX(_bottomRight.getScaleX() * scaleX);
    _bottomRight.setScaleY(_bottomRight.getScaleY() * scaleY);
}