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

void vehicle_editor(MotorVehicle& motorVehicle) {
	int numTires = 0;
	float* tires;

	cout << endl << "Please enter the vehicle's owners credentials" << endl;
	cout << "Name: ";
	cin >> motorVehicle.owner.name;
	cout << "Adress: ";
	cin >> motorVehicle.owner.adress;
	cout << "Driver's licence (1/0): ";
	cin >> motorVehicle.owner.allowedToDrive;

	cout << endl << "Please enter the vehicle's engine specefikations" << endl;
	cout << "Displacement (L): ";
	cin >> motorVehicle.engine.displ;
	cout << "Number of cylinders: ";
	cin >> motorVehicle.engine.cyl;

	cout << endl <<"Please enter the vehicle's body specefikations" << endl;
	cout << "Color: ";
	cin >> motorVehicle.body.color;
	cout << "Width (m): ";
	cin >> motorVehicle.body.width;
	cout << "Height (m): ";
	cin >> motorVehicle.body.height;

	cout << endl << "Please enter the vehicle's tire specefikations" << endl;
	cout << "Number of tires: ";
	cin >> numTires;

	tires = new float[numTires];

	for (int i = 0; i < numTires; i++) {
		cout << "Enter diameter of wheel " << i + 1 << " (dm): ";
		cin >> tires[i];
	}

	motorVehicle.set_new_tires(tires, numTires);
}