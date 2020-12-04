#pragma once
#include "engine.h"
#include "body.h"
#include "person.h"

class MotorVehicle {
public:
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameter;
	int numTires;


	~MotorVehicle();
	MotorVehicle();
	MotorVehicle(Engine newEngine, Body newBody, Person newOwner, float newTireDiam[], int newNumTires);
	void set_new_tires(float newTireDiam[], int newNumTires);
	void print();
};