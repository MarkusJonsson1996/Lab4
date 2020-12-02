#include "engine.h"

using namespace std;

Engine::Engine(float newDispl, unsigned int newCyl) {

	cyl = newCyl;
	displ = newDispl;

}
int Engine::my_displ() { return displ; };