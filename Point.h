#ifndef _POINT
#define _POINT

using namespace std;

class Point
{
    double _x;
    double _y;
    double _scaleX;
    double _scaleY;
public:
	Point( double x, double y );

public:
	double getX() const;
	double getY() const;
    double getScaleX() const;
    double getScaleY() const;
	void setX( double x );
	void setY( double y );
	void setScaleX( double scaleX );
	void setScaleY( double scaleY );
};

#endif