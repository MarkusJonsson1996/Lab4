#include "motorVehicle.h"
#include <iostream>

using namespace std;

MotorVehicle::~MotorVehicle() {
	delete[] tireDiameter;
}
MotorVehicle::MotorVehicle() {
	tireDiameter = NULL;
	numTires = 0;
}
MotorVehicle::MotorVehicle(Engine newEngine, Body newBody, Person newOwner, float newTireDiam[], int newNumTires) {
	engine = newEngine;
	body = newBody;
	owner = newOwner;
	numTires = newNumTires;
	tireDiameter = new float[newNumTires];

	for (int i = 0; i < newNumTires; i++) tireDiameter[i] = newTireDiam[i];
}
void MotorVehicle::set_new_tires(float newTireDiam[], int newNumTires) {
	numTires = newNumTires;

	if (tireDiameter != NULL) delete[] tireDiameter;

	tireDiameter = new float[newNumTires];
	for (int i = 0; i < newNumTires; i++) tireDiameter[i] = newTireDiam[i];
}
void MotorVehicle::print() {
	owner.print();
	engine.print();
	body.print();
}