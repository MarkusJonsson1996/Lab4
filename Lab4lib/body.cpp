#include "body.h"
#include <iostream>

using namespace std;

Body::Body() {
	color = "Red";
	height = 0;
	width = 0;
}
Body::Body(string newColor, float newWitdh, float newHeight) {
	color = newColor;
	height = newHeight;
	width = newWitdh;
}
void Body::print() {
	cout << "Color: " << color << endl;
	cout << "Heigth: " << height << endl;
	cout << "Width: " << width << endl;
}