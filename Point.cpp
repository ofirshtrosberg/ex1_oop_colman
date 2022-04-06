//Ofir Shtrosberg 207828641
#include "Point.h"
// constructor
Point::Point(double x, double y) {
    _x = x;
    _y = y;
    _scaleX = 1;
    _scaleY = 1;
}
// return the x value
double Point::getX() const{
    return _x*_scaleX;
}
// return the y value
double Point::getY() const{
    return _y*_scaleY;
}
// return the scale of x
double Point::getScaleX() const{
    return _scaleX;
}
// return the scale of y
double Point::getScaleY() const{
    return _scaleY;
}
// set the value of x
void Point::setX( double x ){
    _x = x;
}
// set the value of y
void Point::setY( double y ){
    _y = y;
}
// set the scale of x
void Point::setScaleX( double scaleX ){
    _scaleX = scaleX;
}
// set the scale of y
void Point::setScaleY( double scaleY ){
    _scaleY = scaleY;
}