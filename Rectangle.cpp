#include "Rectangle.h"

int Rectangle::m_count = 0;

Rectangle::Rectangle(double left, double top, double width, double height, int color)
        : _topLeft(Point(left, top)),
          _bottomRight(Point((left + width), (top + height))) {
    _color = color;
    ++m_count;
}

int Rectangle::getColor() const {
    return _color;
}

Point &Rectangle::getTopLeftPoint() {
    return _topLeft;
}

Point &Rectangle::getBottomRightPoint() {
    return _bottomRight;
}

void Rectangle::setColor(int color) {
    _color = color;
}

bool Rectangle::contains(const Point &p) {
    return (p.getX() >= _topLeft.getX() && p.getX() <= _bottomRight.getX()
            && p.getY() >= _topLeft.getY() && p.getY() <= _bottomRight.getY());
}

void Rectangle::moveRect(double deltaLeft, double deltaTop) {
    _topLeft.setX(_topLeft.getX()+deltaLeft);
    _topLeft.setY(_topLeft.getY()+deltaTop);
    _bottomRight.setX(_bottomRight.getX()+deltaLeft);
    _bottomRight.setY(_bottomRight.getY()+deltaTop);
}

void Rectangle::scaleRect(double rectWidth, double rectHeight) {
    double scaleX = rectWidth/(_bottomRight.getX()-_topLeft.getX());
    double scaleY = rectHeight/(_bottomRight.getY()-_topLeft.getY());
    _topLeft.setScaleX(_topLeft.getScaleX()*scaleX);
    _topLeft.setScaleY(_topLeft.getScaleY()*scaleY);
    _bottomRight.setScaleX(_bottomRight.getScaleX()*scaleX);
    _bottomRight.setScaleY(_bottomRight.getScaleY()*scaleY);
}