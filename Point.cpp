#include "Point.h"
Point::Point(double x, double y) {
    _x = x;
    _y = y;
    _scaleX = 1;
    _scaleY = 1;
}
double Point::getX() const{
    return _x*_scaleX;
}
double Point::getY() const{
    return _y*_scaleY;
}
double Point::getScaleX() const{
    return _scaleX;
}
double Point::getScaleY() const{
    return _scaleY;
}
void Point::setX( double x ){
    _x = x;
}
void Point::setY( double y ){
    _y = y;
}
void Point::setScaleX( double scaleX ){
    _scaleX = scaleX;
//    setX(_x*_scaleX);
}
void Point::setScaleY( double scaleY ){
    _scaleY = scaleY;
//    setY(_y*_scaleY);
}