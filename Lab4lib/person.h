#pragma once

#include <string>

using namespace std;

class Person {
public:
	string name, adress;
	bool allowedToDrive;


	Person();
	Person(string newName, string newAdress, bool isAllowedToDrive);
	void print();

};