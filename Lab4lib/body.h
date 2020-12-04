#pragma once

#include <string>

using namespace std;

class Body {
public:
	string color;
	float width, height;

	Body();
	Body(string newColor, float newWitdh, float newHeight);
	void print();
};