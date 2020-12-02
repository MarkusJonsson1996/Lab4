#pragma once
#include "engine.h"
#include "body.h"
#include "person.h"

class MotorVehicle {
public:



private:
	Engine myEngine;
	Body body;
	Person ownser;
	float* tireDiameter;
	int nTires;
};