#pragma once
#include "point2d.h"

using namespace std;

class Polyline {
public:

	~Polyline();
	Polyline();
	Polyline(unsigned int numPoints);

	Point2d* at(unsigned int index);

	bool append(Point2d& newPoint);
	bool pop();
	bool is_empty();
	unsigned int n_points();
	double length();

private:

	Point2d** myPoints;
	unsigned int maxPoints;
	int lastPointIndex = -1;
	//bool isFull;
};