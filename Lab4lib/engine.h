#pragma once

using namespace std;

class Engine {

public:

	Engine(float displ, unsigned int cyl);
	int my_displ();

private:
	float displ;
	unsigned int cyl;

};