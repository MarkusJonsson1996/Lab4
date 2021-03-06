#pragma once

#include <math.h>
#include <string>

using namespace std;

class Point2d {
public:
	float x, y;

	Point2d();
	Point2d(float newX, float newY);
	Point2d(const Point2d &cpy);

	Point2d operator+(const Point2d& otherPoint);
	Point2d& operator=(const Point2d& otherPoint);
	bool operator==(const Point2d& otherPoint);
	bool operator!=(const Point2d& otherPoint);

	double len_to(const Point2d& thisPoint);
	string to_string();



private:

};