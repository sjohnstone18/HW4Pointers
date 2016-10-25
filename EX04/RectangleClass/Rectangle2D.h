#pragma once
#ifndef Rectangle2D_h
#define Rectangle2D_h
using namespace std;


class Rectangle2D {
public:
	double getX();
	void setX(double x);
	double getY();
	void setY(double x);
	double getHeight();
	void setHeight(double height);
	double getWidth();
	void setWidth(double width);

	const double getArea();
	const double getPerimeter();
	const bool contains(double x, double y);
	const bool contains(const Rectangle2D &r);
	const bool overlaps(const Rectangle2D &r);

	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	const double getleft();
	const double getright();
	const double gettop();
	const double getbottom();
	
private:
	double x, y;
	double height, width;
	
	mutable double leftside;
	mutable double rightside;
	mutable double bottom;
	mutable double top;
};
#endif // !Rectangle2D_h
