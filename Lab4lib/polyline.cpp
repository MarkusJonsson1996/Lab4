#include "polyline.h"

Polyline::~Polyline() {
	delete[] myPoints;
}
Polyline::Polyline() {
	this->maxPoints = 0;
	this->myPoints = nullptr;
}
Polyline::Polyline(unsigned int numPoints) {
	this->maxPoints = numPoints;
	this->myPoints = new Point2d*[numPoints];
}

Point2d* Polyline::at(unsigned int index) {
	return this->myPoints[index];
}

bool Polyline::append(Point2d& newPoint) {
	bool ret = true;
	
	if (this->n_points() == maxPoints) ret = false;
	else {
		this->myPoints[lastPointIndex + 1] = &newPoint;
		this->lastPointIndex++;
	}
	return ret;
}
bool Polyline::pop() {
	bool ret = true;

	if (lastPointIndex < 0) ret = false;
	else {
		this->myPoints[lastPointIndex] = nullptr;
		this->lastPointIndex--;
	}

	return ret;
}
bool Polyline::is_empty() {
	return !(this->n_points());
}
unsigned int Polyline::n_points() {
	return lastPointIndex+1;
}
double Polyline::length() {
	double sum = 0.0;

	for (unsigned int i = 0; i < this->n_points() - 1; i++) {
		sum += myPoints[i]->len_to(*this->myPoints[i + 1]);

	}
	return sum;
}