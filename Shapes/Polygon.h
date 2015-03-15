#pragma once
#ifndef POLYGON_H_
#define POLYGON_H_

#include "Point.h"
#include "Rect.h"
#include "Color.h"
#include "constants.c"
#include <vector>
#include "glut.h" 

using namespace std;

class Polygon
	: public vector<Rect>,
	public Rect
{
private:
	

public:
	Polygon();
	Polygon(float startX, float startY);
	Polygon(Rect rect, Color color);
	Polygon(Rect rect);
	Polygon(Color color);
	Polygon& operator+=(const Point& point);
	Polygon& operator-=(const Point& point);
	void setX(GLint x);
	void setY(GLint y);
	void setPos(GLint x, GLint y);
	void update();
	void updateX();
	void push_back(Rect rect);
	void push_back(Polygon pol);
	void mirrorX();
	void mirrorX(int spriteX);
	void virtual draw() const;
};
#endif