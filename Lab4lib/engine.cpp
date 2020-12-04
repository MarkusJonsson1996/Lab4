#include "engine.h"
#include <iostream>
using namespace std;

Engine::Engine() {
	displ = 0;
	cyl = 0;
};
Engine::Engine(float newDispl, unsigned int newCyl) {

	cyl = newCyl;
	displ = newDispl;

}
/*Engine Engine::operator=(const Engine& engine) {
	Engine retEngine;

	retEngine = this->displ + engine.displ;
	retEngine = this->cyl + engine.cyl;

	return retEngine;
}*/
/*float Engine::my_displ() { 
	return displ; 
};
int Engine::my_cyl() {
	return cyl;
}*/
void Engine::print() {
	cout << "Displacement: " << displ << endl;
	cout << "Num cylinders: " << cyl << endl;
}