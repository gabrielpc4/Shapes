#ifndef POINT_H_
#define POINT_H_
#include "echo.h"
#include "glut.h" 

class Point
{
protected:
	float _x;
	float _y;
public:
	Point();
	Point(float x, float y);
	Point& operator=(const Point& p2);
	Point& operator+=(const Point& p2);
	Point& operator-=(const Point& p2);
	const Point operator+(const Point& p2) const;
	const Point operator-(const Point& p2) const;
	float x() const;
	float y() const;
	void setX(float x);
	void setY(float y);

	void static PRINT(float x, float y)
	{
		cout << x << " " << y << endl;
	}
};
#endif